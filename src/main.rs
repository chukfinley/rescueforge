use clap::{Parser, Subcommand};
use rescueforge::fsmod::{ext4, fat, ntfs};
use rescueforge::{carve, io::Image, sig};
use std::io::Write;
use std::path::PathBuf;
use std::process::ExitCode;

#[derive(Parser)]
#[command(
    name = "rescueforge",
    version,
    about = "Open-source file carving and undelete engine",
    long_about = "rescueforge recovers files two ways: by carving well-known formats out of a raw \
                  image, or by reading filesystem metadata (NTFS $MFT, FAT directory entries, \
                  ext4 inodes) so names and timestamps survive."
)]
struct Cli {
    /// Start of the volume inside the image (partition offset in bytes)
    #[arg(long, global = true, default_value_t = 0)]
    offset: u64,
    #[command(subcommand)]
    cmd: Cmd,
}

#[derive(Subcommand)]
enum Cmd {
    /// List the built-in signature database
    Sigs,
    /// Detect the filesystem inside an image
    Fsinfo { image: PathBuf },
    /// Find files without writing them (dry run)
    Scan {
        image: PathBuf,
        /// Only these signatures (name or extension), comma separated
        #[arg(long)]
        only: Option<String>,
        #[arg(long, default_value_t = 4096)]
        min_size: u64,
        #[arg(long, default_value_t = 0.5)]
        min_conf: f32,
    },
    /// Carve files out of an image
    Carve {
        image: PathBuf,
        #[arg(short, long, default_value = "recovered")]
        out: PathBuf,
        #[arg(long)]
        only: Option<String>,
        #[arg(long, default_value_t = 4096)]
        min_size: u64,
        #[arg(long, default_value_t = 0.5)]
        min_conf: f32,
        /// Skip zero pages (creates sparse output files)
        #[arg(long)]
        skip_zero: bool,
        /// Stop after N recovered files
        #[arg(long)]
        limit: Option<usize>,
    },
    /// List recoverable NTFS files
    Ntfs {
        image: PathBuf,
        #[arg(long)]
        live: bool,
        #[arg(long)]
        limit: Option<usize>,
    },
    /// List recoverable FAT files
    Fat {
        image: PathBuf,
        #[arg(long)]
        live: bool,
        #[arg(long)]
        limit: Option<usize>,
    },
    /// List recoverable ext4 files
    Ext4 {
        image: PathBuf,
        #[arg(long)]
        live: bool,
        #[arg(long)]
        limit: Option<usize>,
    },
    /// Export one filesystem item by id into a directory
    Get {
        image: PathBuf,
        /// ntfs | fat | ext4
        fs: String,
        id: u64,
        #[arg(short, long, default_value = "recovered")]
        out: PathBuf,
    },
}

fn main() -> ExitCode {
    let cli = Cli::parse();
    match run(cli) {
        Ok(()) => ExitCode::SUCCESS,
        Err(e) => {
            eprintln!("error: {e}");
            ExitCode::FAILURE
        }
    }
}

fn split_only(s: &Option<String>) -> Option<Vec<String>> {
    s.as_ref().map(|v| {
        v.split(',')
            .map(|x| x.trim().to_ascii_lowercase())
            .filter(|x| !x.is_empty())
            .collect()
    })
}

fn run(cli: Cli) -> Result<(), Box<dyn std::error::Error>> {
    let base = cli.offset;
    let open = |p: &PathBuf| Image::open_at(p, base);
    match cli.cmd {
        Cmd::Sigs => {
            println!("{:<12} {:<6} limit", "name", "ext");
            for s in sig::SIGNATURES {
                println!("{:<12} .{:<5} {} MiB", s.name, s.ext, s.max_len / (1 << 20));
            }
        }
        Cmd::Fsinfo { image } => {
            let img = open(&image)?;
            println!("image: {} ({} bytes)", image.display(), img.size());
            let boot = img.bytes_at(0, 512).unwrap_or_default();
            if boot.len() >= 11 && &boot[3..11] == b"NTFS    " {
                let v = ntfs::probe(&img)?;
                println!(
                    "NTFS: cluster {} B, record {} B, $MFT LCN {}",
                    v.cluster_size, v.record_size, v.mft_lcn
                );
            } else if let Ok(v) = ext4::probe(&img) {
                println!(
                    "ext2/3/4: block {} B, {} inodes, {} groups",
                    v.block_size, v.inodes_count, v.groups
                );
            } else if let Ok(v) = fat::probe(&img) {
                println!("FAT{}: cluster {} B, {} clusters", v.fat_type, v.cluster_size, v.total_clusters);
            } else {
                println!("no supported filesystem signature at offset 0");
            }
        }
        Cmd::Scan { image, only, min_size, min_conf } => {
            let img = open(&image)?;
            let stats = carve::carve(
                &img,
                &carve::CarveOptions {
                    out: PathBuf::new(),
                    min_size,
                    min_confidence: min_conf,
                    only: split_only(&only),
                    dry_run: true,
                    limit: None,
                    skip_zero: false,
                },
            )?;
            println!(
                "\n{} candidates, {} valid, {} too small, {} too weak",
                stats.candidates, stats.valid, stats.rejected_small, stats.rejected_weak
            );
        }
        Cmd::Carve { image, out, only, min_size, min_conf, skip_zero, limit } => {
            let img = open(&image)?;
            let stats = carve::carve(
                &img,
                &carve::CarveOptions {
                    out: out.clone(),
                    min_size,
                    min_confidence: min_conf,
                    only: split_only(&only),
                    dry_run: false,
                    limit,
                    skip_zero,
                },
            )?;
            println!(
                "\n{} candidates, {} valid, {} written ({} bytes) into {}",
                stats.candidates,
                stats.valid,
                stats.written,
                stats.bytes,
                out.display()
            );
            println!("manifest: {}", out.join("manifest.csv").display());
        }
        Cmd::Ntfs { image, live, limit } => {
            let img = open(&image)?;
            let vol = ntfs::probe(&img)?;
            let items = ntfs::items(&img, &vol, live)?;
            print_items(&items, limit);
        }
        Cmd::Fat { image, live, limit } => {
            let img = open(&image)?;
            let vol = fat::probe(&img)?;
            let items = fat::items(&img, &vol, live)?;
            print_items(&items, limit);
        }
        Cmd::Ext4 { image, live, limit } => {
            let img = open(&image)?;
            let vol = ext4::probe(&img)?;
            let items = ext4::items(&img, &vol, live)?;
            print_items(&items, limit);
        }
        Cmd::Get { image, fs, id, out } => {
            let img = open(&image)?;
            std::fs::create_dir_all(&out)?;
            let (item, data) = match fs.as_str() {
                "ntfs" => {
                    let vol = ntfs::probe(&img)?;
                    let items = ntfs::items(&img, &vol, true)?;
                    let item = items.into_iter().find(|i| i.id == id);
                    match item {
                        Some(i) => {
                            let d = ntfs::export(&img, &i)?;
                            (i, d)
                        }
                        None => return Err(format!("no NTFS record {id}").into()),
                    }
                }
                "fat" => {
                    let vol = fat::probe(&img)?;
                    let items = fat::items(&img, &vol, true)?;
                    match items.into_iter().find(|i| i.id == id) {
                        Some(i) => {
                            let d = fat::export(&img, &i)?;
                            (i, d)
                        }
                        None => return Err(format!("no FAT cluster entry {id}").into()),
                    }
                }
                "ext4" => {
                    let vol = ext4::probe(&img)?;
                    let items = ext4::items(&img, &vol, true)?;
                    match items.into_iter().find(|i| i.id == id) {
                        Some(i) => {
                            let d = ext4::export(&img, &i)?;
                            (i, d)
                        }
                        None => return Err(format!("no ext4 inode {id}").into()),
                    }
                }
                other => return Err(format!("unknown filesystem '{other}'").into()),
            };
            eprintln!("item {} '{}' size {} extents {:?}", item.id, item.name, item.size, item.extents);
            let name = format!("{}_{}", item.id, sanitize(&item.name));
            let path = out.join(&name);
            let mut f = std::fs::File::create(&path)?;
            f.write_all(&data)?;
            println!("wrote {} ({} bytes)", path.display(), data.len());
        }
    }
    Ok(())
}

fn print_items(items: &[rescueforge::fsmod::Item], limit: Option<usize>) {
    let n = limit.unwrap_or(items.len()).min(items.len());
    for it in &items[..n] {
        println!("{it}");
    }
    println!("\n{} item(s)", n);
}

fn sanitize(s: &str) -> String {
    s.chars()
        .map(|c| if c.is_alphanumeric() || c == '.' || c == '-' || c == '_' { c } else { '_' })
        .collect()
}
