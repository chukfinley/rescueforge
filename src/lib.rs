//! # rescueforge
//!
//! Open-source file recovery engine: signature carving plus metadata-level
//! undelete for NTFS, FAT and ext4.
//!
//! ```no_run
//! use rescueforge::{carve, io::Image, sig};
//!
//! let img = Image::open("/dev/sdb1").unwrap();
//! let stats = carve::carve(&img, &carve::CarveOptions {
//!     out: "recovered".into(),
//!     min_size: 4096,
//!     min_confidence: 0.5,
//!     only: None,
//!     dry_run: false,
//!     limit: None,
//!     skip_zero: true,
//! })
//! .unwrap();
//! println!("{} files, {} bytes", stats.written, stats.bytes);
//! ```

pub mod carve;
pub mod fsmod;
pub mod io;
pub mod report;
pub mod scan;
pub mod sig;
pub mod validators;

pub use carve::{carve as carve_image, CarveOptions, Stats};
pub use io::Image;
