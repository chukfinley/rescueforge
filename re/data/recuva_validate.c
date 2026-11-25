// program=recuva64.exe
// needle=::Validate
// string hits=25

// ===== string at 1405c1b40 : CMpegAudioFileData::Validate
// ---- function FUN_14020a7f0 @ 14020a7f0 (xref 14020a867)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014020a87b) */
/* WARNING: Removing unreachable block (ram,0x00014020a88f) */

undefined8 * FUN_14020a7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uchar uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong *puVar16;
  uchar *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  LPWSTR pWVar20;
  uchar *puVar21;
  uint uVar22;
  uchar *puVar23;
  uchar *puVar24;
  wchar_t *pwVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  uchar *puVar29;
  int iVar30;
  undefined1 auStackY_398 [32];
  undefined4 local_368;
  undefined4 local_364;
  undefined8 local_360;
  uchar *local_358;
  undefined8 *local_350;
  LPWSTR local_348;
  uchar *local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  uchar *local_318;
  longlong local_310;
  longlong local_308 [2];
  undefined1 local_2f8 [3];
  undefined1 local_2f5 [30];
  undefined1 local_2d7 [95];
  undefined1 *local_278;
  undefined1 local_270 [264];
  undefined1 *local_168;
  undefined1 local_160 [264];
  ulonglong local_58;
  
  local_308[1] = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_398;
  local_364 = 0;
  lVar13 = FUN_140009200();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar14 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13);
  pWVar20 = (LPWSTR)(puVar14 + 3);
  local_348 = pWVar20;
  iVar12 = MultiByteToWideChar(0,0,"CMpegAudioFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar12 = iVar12 + -1;
  if (iVar12 < 1) {
    uVar15 = *puVar14;
    if (*(int *)(puVar14 + 1) != 0) {
      if (*(int *)(puVar14 + 2) < 0) {
        if (*(int *)((longlong)puVar14 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar14 + 1) = 0;
        *pWVar20 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar14 + 2);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar15);
        pWVar20 = (LPWSTR)(lVar13 + 0x18);
        local_348 = pWVar20;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar14 + 0xc) - iVar12 | 1U - *(int *)(puVar14 + 2)) < 0) {
      FUN_140008ae0(&local_348,iVar12);
      pWVar20 = local_348;
    }
    MultiByteToWideChar(0,0,"CMpegAudioFileData::Validate",-1,pWVar20,iVar12);
    if (*(int *)(pWVar20 + -6) < iVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar20 + -8) = iVar12;
    pWVar20[iVar12] = L'\0';
  }
  pWVar1 = pWVar20 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar13 == 0)) {
    uVar15 = FUN_140009200();
    lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar15);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_328 = lVar13 + 0x18;
  local_364 = 4;
  iVar12 = *(int *)(pWVar20 + -8);
  lVar28 = (longlong)iVar12;
  iVar30 = iVar12 + 2;
  if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar13 + 0xc) - iVar30 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
    FUN_140008ae0(&local_328,iVar30);
  }
  lVar13 = local_328;
  FUN_140008b60(local_328,lVar28,pWVar20,iVar12);
  puVar3 = (undefined4 *)(lVar13 + lVar28 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar16 = __doserrno();
    *puVar16 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar13 + -0xc) < iVar30) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar13 + -0x10) = iVar30;
  *(undefined2 *)(lVar13 + 4 + lVar28 * 2) = 0;
  if ((*(longlong *)(lVar13 + -0x18) == 0) ||
     (lVar28 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar28 == 0)) {
    uVar15 = FUN_140009200();
    lVar28 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar15);
  }
  if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar28 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_320 = lVar28 + 0x18;
  local_364 = 0xc;
  iVar12 = *(int *)(lVar13 + -0x10);
  local_350 = (undefined8 *)CONCAT44(local_350._4_4_,iVar12);
  iVar30 = iVar12 + 0x10;
  if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar28 + 0xc) - iVar30 | 1U - *(int *)(lVar28 + 0x10)) < 0) {
    FUN_140008ae0(&local_320,iVar30);
    iVar12 = (int)local_350;
  }
  lVar28 = local_320;
  FUN_140008b60(local_320,(longlong)iVar12,lVar13,iVar12);
  uVar8 = u_Trying_MPEGAudio_1405c1b60._12_4_;
  uVar7 = u_Trying_MPEGAudio_1405c1b60._8_4_;
  uVar6 = u_Trying_MPEGAudio_1405c1b60._4_4_;
  pwVar25 = (wchar_t *)(lVar28 + (longlong)iVar12 * 2);
  if (pwVar25 == (wchar_t *)0x0) {
    puVar16 = __doserrno();
    *puVar16 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar25 = u_Trying_MPEGAudio_1405c1b60._0_4_;
    *(undefined4 *)(pwVar25 + 2) = uVar6;
    *(undefined4 *)(pwVar25 + 4) = uVar7;
    *(undefined4 *)(pwVar25 + 6) = uVar8;
    uVar15 = u_Trying_MPEGAudio_1405c1b60._24_8_;
    *(undefined8 *)(pwVar25 + 8) = u_Trying_MPEGAudio_1405c1b60._16_8_;
    *(undefined8 *)(pwVar25 + 0xc) = uVar15;
  }
  if (*(int *)(lVar28 + -0xc) < iVar30) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar28 + -0x10) = iVar30;
  *(undefined2 *)(lVar28 + 0x20 + (longlong)(int)local_350 * 2) = 0;
  uVar15 = FUN_140040170();
  FUN_140041bc0(uVar15,700,lVar28);
  local_364 = 4;
  LOCK();
  piVar2 = (int *)(lVar28 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar13 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar13 + -0x18),lVar13 + -0x18);
  }
  LOCK();
  pWVar20 = pWVar20 + -4;
  iVar12 = *(int *)pWVar20;
  *(int *)pWVar20 = *(int *)pWVar20 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar14 = (undefined8 *)0x0;
  local_350 = (undefined8 *)0x0;
  uVar22 = 0;
  local_368 = 0;
  local_358 = (uchar *)0x0;
  local_360 = param_2;
  lVar13 = FUN_140009200();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_338 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13);
  local_338 = local_338 + 0x18;
  lVar13 = FUN_140009200();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_330 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13);
  local_330 = local_330 + 0x18;
  iVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_368,4);
  local_358 = &DAT_00000004;
  if (-1 < iVar12) {
    do {
      puVar24 = local_358;
      puVar29 = (uchar *)0x0;
      if (((((char)local_368 == -1) && ((local_368 & 0xe000) == 0xe000)) &&
          ((local_368 & 0x600) != 0)) &&
         (((local_368 & 0x1800) != 0x800 && ((local_368 & 0x3000000) != 0x2000000)))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        puVar23 = local_358 + -4;
        local_358 = puVar23;
        puVar17 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (puVar17 < puVar23) goto LAB_14020b1f8;
        if (((short)local_368 == DAT_1405c1ec0) && (local_368._2_1_ == DAT_1405c1ec2)) {
          iVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,puVar23,local_2f8,0x80);
          local_358 = puVar24 + 0x7c;
          puVar23 = local_358;
          if (iVar12 < 0) break;
          lVar13 = FUN_140009200();
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80004005);
          }
          lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13,0x1e,1);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008a70();
          }
          puVar24 = (uchar *)(lVar13 + 0x18);
          local_340 = puVar24;
          if (*(int *)(lVar13 + 0xc) < 0x1e) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(lVar13 + 8) = 0x1e;
          *(undefined1 *)(lVar13 + 0x36) = 0;
          FUN_140045240(puVar24,0x1e,local_2d7);
          if (*puVar24 != '\0') {
            uVar10 = *puVar24;
            puVar23 = puVar29;
            puVar17 = puVar24;
            do {
              iVar12 = FUN_140352da8((int)(char)uVar10);
              if (iVar12 == 0) {
                puVar21 = puVar29;
              }
              else {
                puVar21 = puVar17;
                if (puVar23 != (uchar *)0x0) {
                  puVar21 = puVar23;
                }
              }
              puVar17 = _mbsinc(puVar17);
              uVar10 = *puVar17;
              puVar23 = puVar21;
            } while (uVar10 != '\0');
            if (puVar21 != (uchar *)0x0) {
              iVar12 = (int)puVar21 - (int)puVar24;
              if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              if ((int)(*(int *)(lVar13 + 0xc) - iVar12 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
                FUN_140041b40(&local_340,iVar12);
                puVar24 = local_340;
              }
              if (*(int *)(puVar24 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              *(int *)(puVar24 + -0x10) = iVar12;
              puVar24[iVar12] = '\0';
            }
          }
          lVar13 = FUN_140009200();
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80004005);
          }
          lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13,0x1e,1);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008a70();
          }
          puVar23 = (uchar *)(lVar13 + 0x18);
          local_318 = puVar23;
          if (*(int *)(lVar13 + 0xc) < 0x1e) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(lVar13 + 8) = 0x1e;
          *(undefined1 *)(lVar13 + 0x36) = 0;
          FUN_140045240(puVar23,0x1e,local_2f5);
          if (*puVar23 != '\0') {
            uVar10 = *puVar23;
            puVar17 = puVar23;
            do {
              iVar12 = FUN_140352da8((int)(char)uVar10);
              if (iVar12 == 0) {
                puVar21 = (uchar *)0x0;
              }
              else {
                puVar21 = puVar17;
                if (puVar29 != (uchar *)0x0) {
                  puVar21 = puVar29;
                }
              }
              puVar17 = _mbsinc(puVar17);
              uVar10 = *puVar17;
              puVar29 = puVar21;
            } while (uVar10 != '\0');
            if (puVar21 != (uchar *)0x0) {
              iVar12 = (int)puVar21 - (int)puVar23;
              if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              if ((int)(*(int *)(lVar13 + 0xc) - iVar12 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
                FUN_140041b40(&local_318,iVar12);
                puVar23 = local_318;
              }
              if (*(int *)(puVar23 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              *(int *)(puVar23 + -0x10) = iVar12;
              puVar23[iVar12] = '\0';
            }
          }
          local_168 = local_160;
          FUN_140040580(&local_168,puVar23,0);
          local_278 = local_270;
          FUN_140040580(&local_278,puVar24,0);
          puVar9 = local_168;
          FUN_14024d160(&local_338,local_278,L"unknown artist");
          FUN_14024d160(&local_330,puVar9,L"untitled");
          if (local_278 != local_270) {
            _free_base();
          }
          if (local_168 != local_160) {
            _free_base();
          }
          LOCK();
          piVar2 = (int *)(puVar23 + -8);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          LOCK();
          piVar2 = (int *)(local_340 + -8);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          puVar24 = local_358;
          param_2 = local_360;
          puVar14 = local_350;
        }
        else {
          if ((short)local_368 != DAT_1405c1c78) break;
          if (local_368._2_1_ != DAT_1405c1c7a) break;
          cVar11 = FUN_14020b450(&local_360,&local_338);
          puVar23 = local_358;
          if (cVar11 == '\0') break;
          puVar24 = local_358;
          param_2 = local_360;
        }
      }
      else {
        uVar27 = local_368 >> 0xb & 3;
        uVar19 = (ulonglong)(3 - uVar27);
        uVar4 = *(uint *)(&DAT_1405c1e80 + ((ulonglong)(local_368 >> 0x12 & 3) + uVar19 * 4) * 4);
        if (uVar4 == 0) {
          puVar24 = puVar29;
        }
        else {
          uVar26 = local_368 >> 9 & 3;
          if (uVar26 == 3) {
            uVar26 = *(int *)(&DAT_1405c1c80 +
                             (((ulonglong)(3 - uVar26) + (ulonglong)(local_368 >> 0xb & 1) * 4) *
                              0x10 + (ulonglong)(local_368 >> 0x14 & 0xf)) * 4) * 12000;
            uVar19 = (ulonglong)uVar26 % (ulonglong)uVar4;
            puVar24 = (uchar *)(ulonglong)(((local_368 >> 0x11 & 1) + uVar26 / uVar4) * 4);
          }
          else {
            uVar26 = *(int *)(&DAT_1405c1c80 +
                             (((ulonglong)(3 - uVar26) + (ulonglong)(local_368 >> 0xb & 1) * 4) *
                              0x10 + (ulonglong)(local_368 >> 0x14 & 0xf)) * 4) * 0x23280;
            uVar19 = (ulonglong)uVar26 % (ulonglong)uVar4;
            puVar24 = (uchar *)(ulonglong)(uVar26 / uVar4 + (local_368 >> 0x11 & 1));
          }
        }
        puVar23 = local_358;
        if ((ulonglong)(longlong)(int)puVar24 < 4) break;
        if (puVar14 != (undefined8 *)0x0) {
          if (((((((local_368 ^ uVar22) & 0xc0000) == 0) && (uVar27 == (uVar22 >> 0xb & 3))) &&
               (((local_368 ^ uVar22) & 0x600) == 0)) &&
              ((((local_368 ^ uVar22) & 0x3000000) == 0 && (((local_368 ^ uVar22) >> 0x1b & 1) == 0)
               ))) && (((local_368 ^ uVar22) >> 0x1a & 1) == 0)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (!bVar5) {
            puVar23 = local_358 + -4;
            puVar24 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar19);
            if (puVar24 < puVar23) {
              puVar23 = puVar29;
            }
            local_358 = puVar23;
            break;
          }
        }
        lVar13 = (longlong)(int)puVar24 - 4;
        puVar24 = local_358 + lVar13;
        puVar23 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (puVar23 < puVar24) {
          if (lVar13 < 1) {
LAB_14020b1f8:
            local_358 = (uchar *)0x0;
            puVar23 = puVar29;
          }
          else {
            puVar23 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
            local_358 = puVar23;
          }
          break;
        }
        puVar14 = (undefined8 *)((longlong)puVar14 + 1);
        uVar22 = local_368;
        local_350 = puVar14;
      }
      iVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,puVar24,&local_368,4);
      local_358 = puVar24 + 4;
      puVar23 = local_358;
    } while (-1 < iVar12);
    if ((undefined8 *)0x7f < puVar14) {
      puVar14 = (undefined8 *)FUN_1402e2c84(0x28);
      local_350 = puVar14;
      uVar15 = FUN_14024cf70(&local_338,local_308);
      local_364 = 1;
      uVar22 = uVar22 >> 9 & 3;
      if (uVar22 == 1) {
        pwVar25 = L".mp3";
      }
      else if (uVar22 == 2) {
        pwVar25 = L".mp2";
      }
      else if (uVar22 == 3) {
        pwVar25 = L".mp1";
      }
      else {
        pwVar25 = (wchar_t *)0x0;
      }
      puVar18 = (undefined8 *)FUN_140026080(&local_310,uVar15,pwVar25);
      local_364 = 3;
      uVar15 = *puVar18;
      *puVar14 = CRecognisedDataOneFileImpl::vftable;
      puVar14[1] = param_3;
      FUN_140008d70(puVar14 + 2,uVar15);
      puVar14[3] = puVar23;
      *(undefined1 *)(puVar14 + 4) = 1;
      local_364 = 1;
      LOCK();
      piVar2 = (int *)(local_310 + -8);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      LOCK();
      piVar2 = (int *)(local_308[0] + -8);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      goto LAB_14020b2ff;
    }
  }
  puVar14 = (undefined8 *)0x0;
LAB_14020b2ff:
  LOCK();
  piVar2 = (int *)(local_330 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(local_338 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  return puVar14;
}


// ---- function FUN_14020a7f0 @ 14020a7f0 (xref 14020a8b6)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014020a87b) */
/* WARNING: Removing unreachable block (ram,0x00014020a88f) */

undefined8 * FUN_14020a7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uchar uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong *puVar16;
  uchar *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  LPWSTR pWVar20;
  uchar *puVar21;
  uint uVar22;
  uchar *puVar23;
  uchar *puVar24;
  wchar_t *pwVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  uchar *puVar29;
  int iVar30;
  undefined1 auStackY_398 [32];
  undefined4 local_368;
  undefined4 local_364;
  undefined8 local_360;
  uchar *local_358;
  undefined8 *local_350;
  LPWSTR local_348;
  uchar *local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  uchar *local_318;
  longlong local_310;
  longlong local_308 [2];
  undefined1 local_2f8 [3];
  undefined1 local_2f5 [30];
  undefined1 local_2d7 [95];
  undefined1 *local_278;
  undefined1 local_270 [264];
  undefined1 *local_168;
  undefined1 local_160 [264];
  ulonglong local_58;
  
  local_308[1] = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_398;
  local_364 = 0;
  lVar13 = FUN_140009200();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar14 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13);
  pWVar20 = (LPWSTR)(puVar14 + 3);
  local_348 = pWVar20;
  iVar12 = MultiByteToWideChar(0,0,"CMpegAudioFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar12 = iVar12 + -1;
  if (iVar12 < 1) {
    uVar15 = *puVar14;
    if (*(int *)(puVar14 + 1) != 0) {
      if (*(int *)(puVar14 + 2) < 0) {
        if (*(int *)((longlong)puVar14 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar14 + 1) = 0;
        *pWVar20 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar14 + 2);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar15);
        pWVar20 = (LPWSTR)(lVar13 + 0x18);
        local_348 = pWVar20;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar14 + 0xc) - iVar12 | 1U - *(int *)(puVar14 + 2)) < 0) {
      FUN_140008ae0(&local_348,iVar12);
      pWVar20 = local_348;
    }
    MultiByteToWideChar(0,0,"CMpegAudioFileData::Validate",-1,pWVar20,iVar12);
    if (*(int *)(pWVar20 + -6) < iVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar20 + -8) = iVar12;
    pWVar20[iVar12] = L'\0';
  }
  pWVar1 = pWVar20 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar13 == 0)) {
    uVar15 = FUN_140009200();
    lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar15);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_328 = lVar13 + 0x18;
  local_364 = 4;
  iVar12 = *(int *)(pWVar20 + -8);
  lVar28 = (longlong)iVar12;
  iVar30 = iVar12 + 2;
  if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar13 + 0xc) - iVar30 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
    FUN_140008ae0(&local_328,iVar30);
  }
  lVar13 = local_328;
  FUN_140008b60(local_328,lVar28,pWVar20,iVar12);
  puVar3 = (undefined4 *)(lVar13 + lVar28 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar16 = __doserrno();
    *puVar16 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar13 + -0xc) < iVar30) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar13 + -0x10) = iVar30;
  *(undefined2 *)(lVar13 + 4 + lVar28 * 2) = 0;
  if ((*(longlong *)(lVar13 + -0x18) == 0) ||
     (lVar28 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar28 == 0)) {
    uVar15 = FUN_140009200();
    lVar28 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar15);
  }
  if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar28 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_320 = lVar28 + 0x18;
  local_364 = 0xc;
  iVar12 = *(int *)(lVar13 + -0x10);
  local_350 = (undefined8 *)CONCAT44(local_350._4_4_,iVar12);
  iVar30 = iVar12 + 0x10;
  if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar28 + 0xc) - iVar30 | 1U - *(int *)(lVar28 + 0x10)) < 0) {
    FUN_140008ae0(&local_320,iVar30);
    iVar12 = (int)local_350;
  }
  lVar28 = local_320;
  FUN_140008b60(local_320,(longlong)iVar12,lVar13,iVar12);
  uVar8 = u_Trying_MPEGAudio_1405c1b60._12_4_;
  uVar7 = u_Trying_MPEGAudio_1405c1b60._8_4_;
  uVar6 = u_Trying_MPEGAudio_1405c1b60._4_4_;
  pwVar25 = (wchar_t *)(lVar28 + (longlong)iVar12 * 2);
  if (pwVar25 == (wchar_t *)0x0) {
    puVar16 = __doserrno();
    *puVar16 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar25 = u_Trying_MPEGAudio_1405c1b60._0_4_;
    *(undefined4 *)(pwVar25 + 2) = uVar6;
    *(undefined4 *)(pwVar25 + 4) = uVar7;
    *(undefined4 *)(pwVar25 + 6) = uVar8;
    uVar15 = u_Trying_MPEGAudio_1405c1b60._24_8_;
    *(undefined8 *)(pwVar25 + 8) = u_Trying_MPEGAudio_1405c1b60._16_8_;
    *(undefined8 *)(pwVar25 + 0xc) = uVar15;
  }
  if (*(int *)(lVar28 + -0xc) < iVar30) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar28 + -0x10) = iVar30;
  *(undefined2 *)(lVar28 + 0x20 + (longlong)(int)local_350 * 2) = 0;
  uVar15 = FUN_140040170();
  FUN_140041bc0(uVar15,700,lVar28);
  local_364 = 4;
  LOCK();
  piVar2 = (int *)(lVar28 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar13 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar13 + -0x18),lVar13 + -0x18);
  }
  LOCK();
  pWVar20 = pWVar20 + -4;
  iVar12 = *(int *)pWVar20;
  *(int *)pWVar20 = *(int *)pWVar20 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar14 = (undefined8 *)0x0;
  local_350 = (undefined8 *)0x0;
  uVar22 = 0;
  local_368 = 0;
  local_358 = (uchar *)0x0;
  local_360 = param_2;
  lVar13 = FUN_140009200();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_338 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13);
  local_338 = local_338 + 0x18;
  lVar13 = FUN_140009200();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_330 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13);
  local_330 = local_330 + 0x18;
  iVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_368,4);
  local_358 = &DAT_00000004;
  if (-1 < iVar12) {
    do {
      puVar24 = local_358;
      puVar29 = (uchar *)0x0;
      if (((((char)local_368 == -1) && ((local_368 & 0xe000) == 0xe000)) &&
          ((local_368 & 0x600) != 0)) &&
         (((local_368 & 0x1800) != 0x800 && ((local_368 & 0x3000000) != 0x2000000)))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        puVar23 = local_358 + -4;
        local_358 = puVar23;
        puVar17 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (puVar17 < puVar23) goto LAB_14020b1f8;
        if (((short)local_368 == DAT_1405c1ec0) && (local_368._2_1_ == DAT_1405c1ec2)) {
          iVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,puVar23,local_2f8,0x80);
          local_358 = puVar24 + 0x7c;
          puVar23 = local_358;
          if (iVar12 < 0) break;
          lVar13 = FUN_140009200();
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80004005);
          }
          lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13,0x1e,1);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008a70();
          }
          puVar24 = (uchar *)(lVar13 + 0x18);
          local_340 = puVar24;
          if (*(int *)(lVar13 + 0xc) < 0x1e) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(lVar13 + 8) = 0x1e;
          *(undefined1 *)(lVar13 + 0x36) = 0;
          FUN_140045240(puVar24,0x1e,local_2d7);
          if (*puVar24 != '\0') {
            uVar10 = *puVar24;
            puVar23 = puVar29;
            puVar17 = puVar24;
            do {
              iVar12 = FUN_140352da8((int)(char)uVar10);
              if (iVar12 == 0) {
                puVar21 = puVar29;
              }
              else {
                puVar21 = puVar17;
                if (puVar23 != (uchar *)0x0) {
                  puVar21 = puVar23;
                }
              }
              puVar17 = _mbsinc(puVar17);
              uVar10 = *puVar17;
              puVar23 = puVar21;
            } while (uVar10 != '\0');
            if (puVar21 != (uchar *)0x0) {
              iVar12 = (int)puVar21 - (int)puVar24;
              if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              if ((int)(*(int *)(lVar13 + 0xc) - iVar12 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
                FUN_140041b40(&local_340,iVar12);
                puVar24 = local_340;
              }
              if (*(int *)(puVar24 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              *(int *)(puVar24 + -0x10) = iVar12;
              puVar24[iVar12] = '\0';
            }
          }
          lVar13 = FUN_140009200();
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80004005);
          }
          lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13,0x1e,1);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008a70();
          }
          puVar23 = (uchar *)(lVar13 + 0x18);
          local_318 = puVar23;
          if (*(int *)(lVar13 + 0xc) < 0x1e) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(lVar13 + 8) = 0x1e;
          *(undefined1 *)(lVar13 + 0x36) = 0;
          FUN_140045240(puVar23,0x1e,local_2f5);
          if (*puVar23 != '\0') {
            uVar10 = *puVar23;
            puVar17 = puVar23;
            do {
              iVar12 = FUN_140352da8((int)(char)uVar10);
              if (iVar12 == 0) {
                puVar21 = (uchar *)0x0;
              }
              else {
                puVar21 = puVar17;
                if (puVar29 != (uchar *)0x0) {
                  puVar21 = puVar29;
                }
              }
              puVar17 = _mbsinc(puVar17);
              uVar10 = *puVar17;
              puVar29 = puVar21;
            } while (uVar10 != '\0');
            if (puVar21 != (uchar *)0x0) {
              iVar12 = (int)puVar21 - (int)puVar23;
              if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              if ((int)(*(int *)(lVar13 + 0xc) - iVar12 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
                FUN_140041b40(&local_318,iVar12);
                puVar23 = local_318;
              }
              if (*(int *)(puVar23 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              *(int *)(puVar23 + -0x10) = iVar12;
              puVar23[iVar12] = '\0';
            }
          }
          local_168 = local_160;
          FUN_140040580(&local_168,puVar23,0);
          local_278 = local_270;
          FUN_140040580(&local_278,puVar24,0);
          puVar9 = local_168;
          FUN_14024d160(&local_338,local_278,L"unknown artist");
          FUN_14024d160(&local_330,puVar9,L"untitled");
          if (local_278 != local_270) {
            _free_base();
          }
          if (local_168 != local_160) {
            _free_base();
          }
          LOCK();
          piVar2 = (int *)(puVar23 + -8);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          LOCK();
          piVar2 = (int *)(local_340 + -8);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          puVar24 = local_358;
          param_2 = local_360;
          puVar14 = local_350;
        }
        else {
          if ((short)local_368 != DAT_1405c1c78) break;
          if (local_368._2_1_ != DAT_1405c1c7a) break;
          cVar11 = FUN_14020b450(&local_360,&local_338);
          puVar23 = local_358;
          if (cVar11 == '\0') break;
          puVar24 = local_358;
          param_2 = local_360;
        }
      }
      else {
        uVar27 = local_368 >> 0xb & 3;
        uVar19 = (ulonglong)(3 - uVar27);
        uVar4 = *(uint *)(&DAT_1405c1e80 + ((ulonglong)(local_368 >> 0x12 & 3) + uVar19 * 4) * 4);
        if (uVar4 == 0) {
          puVar24 = puVar29;
        }
        else {
          uVar26 = local_368 >> 9 & 3;
          if (uVar26 == 3) {
            uVar26 = *(int *)(&DAT_1405c1c80 +
                             (((ulonglong)(3 - uVar26) + (ulonglong)(local_368 >> 0xb & 1) * 4) *
                              0x10 + (ulonglong)(local_368 >> 0x14 & 0xf)) * 4) * 12000;
            uVar19 = (ulonglong)uVar26 % (ulonglong)uVar4;
            puVar24 = (uchar *)(ulonglong)(((local_368 >> 0x11 & 1) + uVar26 / uVar4) * 4);
          }
          else {
            uVar26 = *(int *)(&DAT_1405c1c80 +
                             (((ulonglong)(3 - uVar26) + (ulonglong)(local_368 >> 0xb & 1) * 4) *
                              0x10 + (ulonglong)(local_368 >> 0x14 & 0xf)) * 4) * 0x23280;
            uVar19 = (ulonglong)uVar26 % (ulonglong)uVar4;
            puVar24 = (uchar *)(ulonglong)(uVar26 / uVar4 + (local_368 >> 0x11 & 1));
          }
        }
        puVar23 = local_358;
        if ((ulonglong)(longlong)(int)puVar24 < 4) break;
        if (puVar14 != (undefined8 *)0x0) {
          if (((((((local_368 ^ uVar22) & 0xc0000) == 0) && (uVar27 == (uVar22 >> 0xb & 3))) &&
               (((local_368 ^ uVar22) & 0x600) == 0)) &&
              ((((local_368 ^ uVar22) & 0x3000000) == 0 && (((local_368 ^ uVar22) >> 0x1b & 1) == 0)
               ))) && (((local_368 ^ uVar22) >> 0x1a & 1) == 0)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (!bVar5) {
            puVar23 = local_358 + -4;
            puVar24 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar19);
            if (puVar24 < puVar23) {
              puVar23 = puVar29;
            }
            local_358 = puVar23;
            break;
          }
        }
        lVar13 = (longlong)(int)puVar24 - 4;
        puVar24 = local_358 + lVar13;
        puVar23 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (puVar23 < puVar24) {
          if (lVar13 < 1) {
LAB_14020b1f8:
            local_358 = (uchar *)0x0;
            puVar23 = puVar29;
          }
          else {
            puVar23 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
            local_358 = puVar23;
          }
          break;
        }
        puVar14 = (undefined8 *)((longlong)puVar14 + 1);
        uVar22 = local_368;
        local_350 = puVar14;
      }
      iVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,puVar24,&local_368,4);
      local_358 = puVar24 + 4;
      puVar23 = local_358;
    } while (-1 < iVar12);
    if ((undefined8 *)0x7f < puVar14) {
      puVar14 = (undefined8 *)FUN_1402e2c84(0x28);
      local_350 = puVar14;
      uVar15 = FUN_14024cf70(&local_338,local_308);
      local_364 = 1;
      uVar22 = uVar22 >> 9 & 3;
      if (uVar22 == 1) {
        pwVar25 = L".mp3";
      }
      else if (uVar22 == 2) {
        pwVar25 = L".mp2";
      }
      else if (uVar22 == 3) {
        pwVar25 = L".mp1";
      }
      else {
        pwVar25 = (wchar_t *)0x0;
      }
      puVar18 = (undefined8 *)FUN_140026080(&local_310,uVar15,pwVar25);
      local_364 = 3;
      uVar15 = *puVar18;
      *puVar14 = CRecognisedDataOneFileImpl::vftable;
      puVar14[1] = param_3;
      FUN_140008d70(puVar14 + 2,uVar15);
      puVar14[3] = puVar23;
      *(undefined1 *)(puVar14 + 4) = 1;
      local_364 = 1;
      LOCK();
      piVar2 = (int *)(local_310 + -8);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      LOCK();
      piVar2 = (int *)(local_308[0] + -8);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      goto LAB_14020b2ff;
    }
  }
  puVar14 = (undefined8 *)0x0;
LAB_14020b2ff:
  LOCK();
  piVar2 = (int *)(local_330 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(local_338 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  return puVar14;
}


// ---- function FUN_14020a7f0 @ 14020a7f0 (xref 14020a8f8)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014020a87b) */
/* WARNING: Removing unreachable block (ram,0x00014020a88f) */

undefined8 * FUN_14020a7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uchar uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong *puVar16;
  uchar *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  LPWSTR pWVar20;
  uchar *puVar21;
  uint uVar22;
  uchar *puVar23;
  uchar *puVar24;
  wchar_t *pwVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  uchar *puVar29;
  int iVar30;
  undefined1 auStackY_398 [32];
  undefined4 local_368;
  undefined4 local_364;
  undefined8 local_360;
  uchar *local_358;
  undefined8 *local_350;
  LPWSTR local_348;
  uchar *local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  uchar *local_318;
  longlong local_310;
  longlong local_308 [2];
  undefined1 local_2f8 [3];
  undefined1 local_2f5 [30];
  undefined1 local_2d7 [95];
  undefined1 *local_278;
  undefined1 local_270 [264];
  undefined1 *local_168;
  undefined1 local_160 [264];
  ulonglong local_58;
  
  local_308[1] = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_398;
  local_364 = 0;
  lVar13 = FUN_140009200();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar14 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13);
  pWVar20 = (LPWSTR)(puVar14 + 3);
  local_348 = pWVar20;
  iVar12 = MultiByteToWideChar(0,0,"CMpegAudioFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar12 = iVar12 + -1;
  if (iVar12 < 1) {
    uVar15 = *puVar14;
    if (*(int *)(puVar14 + 1) != 0) {
      if (*(int *)(puVar14 + 2) < 0) {
        if (*(int *)((longlong)puVar14 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar14 + 1) = 0;
        *pWVar20 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar14 + 2);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar15);
        pWVar20 = (LPWSTR)(lVar13 + 0x18);
        local_348 = pWVar20;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar14 + 0xc) - iVar12 | 1U - *(int *)(puVar14 + 2)) < 0) {
      FUN_140008ae0(&local_348,iVar12);
      pWVar20 = local_348;
    }
    MultiByteToWideChar(0,0,"CMpegAudioFileData::Validate",-1,pWVar20,iVar12);
    if (*(int *)(pWVar20 + -6) < iVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar20 + -8) = iVar12;
    pWVar20[iVar12] = L'\0';
  }
  pWVar1 = pWVar20 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar13 == 0)) {
    uVar15 = FUN_140009200();
    lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar15);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_328 = lVar13 + 0x18;
  local_364 = 4;
  iVar12 = *(int *)(pWVar20 + -8);
  lVar28 = (longlong)iVar12;
  iVar30 = iVar12 + 2;
  if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar13 + 0xc) - iVar30 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
    FUN_140008ae0(&local_328,iVar30);
  }
  lVar13 = local_328;
  FUN_140008b60(local_328,lVar28,pWVar20,iVar12);
  puVar3 = (undefined4 *)(lVar13 + lVar28 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar16 = __doserrno();
    *puVar16 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar13 + -0xc) < iVar30) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar13 + -0x10) = iVar30;
  *(undefined2 *)(lVar13 + 4 + lVar28 * 2) = 0;
  if ((*(longlong *)(lVar13 + -0x18) == 0) ||
     (lVar28 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar28 == 0)) {
    uVar15 = FUN_140009200();
    lVar28 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar15);
  }
  if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar28 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_320 = lVar28 + 0x18;
  local_364 = 0xc;
  iVar12 = *(int *)(lVar13 + -0x10);
  local_350 = (undefined8 *)CONCAT44(local_350._4_4_,iVar12);
  iVar30 = iVar12 + 0x10;
  if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar28 + 0xc) - iVar30 | 1U - *(int *)(lVar28 + 0x10)) < 0) {
    FUN_140008ae0(&local_320,iVar30);
    iVar12 = (int)local_350;
  }
  lVar28 = local_320;
  FUN_140008b60(local_320,(longlong)iVar12,lVar13,iVar12);
  uVar8 = u_Trying_MPEGAudio_1405c1b60._12_4_;
  uVar7 = u_Trying_MPEGAudio_1405c1b60._8_4_;
  uVar6 = u_Trying_MPEGAudio_1405c1b60._4_4_;
  pwVar25 = (wchar_t *)(lVar28 + (longlong)iVar12 * 2);
  if (pwVar25 == (wchar_t *)0x0) {
    puVar16 = __doserrno();
    *puVar16 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar25 = u_Trying_MPEGAudio_1405c1b60._0_4_;
    *(undefined4 *)(pwVar25 + 2) = uVar6;
    *(undefined4 *)(pwVar25 + 4) = uVar7;
    *(undefined4 *)(pwVar25 + 6) = uVar8;
    uVar15 = u_Trying_MPEGAudio_1405c1b60._24_8_;
    *(undefined8 *)(pwVar25 + 8) = u_Trying_MPEGAudio_1405c1b60._16_8_;
    *(undefined8 *)(pwVar25 + 0xc) = uVar15;
  }
  if (*(int *)(lVar28 + -0xc) < iVar30) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar28 + -0x10) = iVar30;
  *(undefined2 *)(lVar28 + 0x20 + (longlong)(int)local_350 * 2) = 0;
  uVar15 = FUN_140040170();
  FUN_140041bc0(uVar15,700,lVar28);
  local_364 = 4;
  LOCK();
  piVar2 = (int *)(lVar28 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar13 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar13 + -0x18),lVar13 + -0x18);
  }
  LOCK();
  pWVar20 = pWVar20 + -4;
  iVar12 = *(int *)pWVar20;
  *(int *)pWVar20 = *(int *)pWVar20 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar14 = (undefined8 *)0x0;
  local_350 = (undefined8 *)0x0;
  uVar22 = 0;
  local_368 = 0;
  local_358 = (uchar *)0x0;
  local_360 = param_2;
  lVar13 = FUN_140009200();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_338 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13);
  local_338 = local_338 + 0x18;
  lVar13 = FUN_140009200();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_330 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13);
  local_330 = local_330 + 0x18;
  iVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_368,4);
  local_358 = &DAT_00000004;
  if (-1 < iVar12) {
    do {
      puVar24 = local_358;
      puVar29 = (uchar *)0x0;
      if (((((char)local_368 == -1) && ((local_368 & 0xe000) == 0xe000)) &&
          ((local_368 & 0x600) != 0)) &&
         (((local_368 & 0x1800) != 0x800 && ((local_368 & 0x3000000) != 0x2000000)))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        puVar23 = local_358 + -4;
        local_358 = puVar23;
        puVar17 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (puVar17 < puVar23) goto LAB_14020b1f8;
        if (((short)local_368 == DAT_1405c1ec0) && (local_368._2_1_ == DAT_1405c1ec2)) {
          iVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,puVar23,local_2f8,0x80);
          local_358 = puVar24 + 0x7c;
          puVar23 = local_358;
          if (iVar12 < 0) break;
          lVar13 = FUN_140009200();
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80004005);
          }
          lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13,0x1e,1);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008a70();
          }
          puVar24 = (uchar *)(lVar13 + 0x18);
          local_340 = puVar24;
          if (*(int *)(lVar13 + 0xc) < 0x1e) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(lVar13 + 8) = 0x1e;
          *(undefined1 *)(lVar13 + 0x36) = 0;
          FUN_140045240(puVar24,0x1e,local_2d7);
          if (*puVar24 != '\0') {
            uVar10 = *puVar24;
            puVar23 = puVar29;
            puVar17 = puVar24;
            do {
              iVar12 = FUN_140352da8((int)(char)uVar10);
              if (iVar12 == 0) {
                puVar21 = puVar29;
              }
              else {
                puVar21 = puVar17;
                if (puVar23 != (uchar *)0x0) {
                  puVar21 = puVar23;
                }
              }
              puVar17 = _mbsinc(puVar17);
              uVar10 = *puVar17;
              puVar23 = puVar21;
            } while (uVar10 != '\0');
            if (puVar21 != (uchar *)0x0) {
              iVar12 = (int)puVar21 - (int)puVar24;
              if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              if ((int)(*(int *)(lVar13 + 0xc) - iVar12 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
                FUN_140041b40(&local_340,iVar12);
                puVar24 = local_340;
              }
              if (*(int *)(puVar24 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              *(int *)(puVar24 + -0x10) = iVar12;
              puVar24[iVar12] = '\0';
            }
          }
          lVar13 = FUN_140009200();
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80004005);
          }
          lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar13,0x1e,1);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008a70();
          }
          puVar23 = (uchar *)(lVar13 + 0x18);
          local_318 = puVar23;
          if (*(int *)(lVar13 + 0xc) < 0x1e) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(lVar13 + 8) = 0x1e;
          *(undefined1 *)(lVar13 + 0x36) = 0;
          FUN_140045240(puVar23,0x1e,local_2f5);
          if (*puVar23 != '\0') {
            uVar10 = *puVar23;
            puVar17 = puVar23;
            do {
              iVar12 = FUN_140352da8((int)(char)uVar10);
              if (iVar12 == 0) {
                puVar21 = (uchar *)0x0;
              }
              else {
                puVar21 = puVar17;
                if (puVar29 != (uchar *)0x0) {
                  puVar21 = puVar29;
                }
              }
              puVar17 = _mbsinc(puVar17);
              uVar10 = *puVar17;
              puVar29 = puVar21;
            } while (uVar10 != '\0');
            if (puVar21 != (uchar *)0x0) {
              iVar12 = (int)puVar21 - (int)puVar23;
              if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              if ((int)(*(int *)(lVar13 + 0xc) - iVar12 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
                FUN_140041b40(&local_318,iVar12);
                puVar23 = local_318;
              }
              if (*(int *)(puVar23 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_140008e90(0x80070057);
              }
              *(int *)(puVar23 + -0x10) = iVar12;
              puVar23[iVar12] = '\0';
            }
          }
          local_168 = local_160;
          FUN_140040580(&local_168,puVar23,0);
          local_278 = local_270;
          FUN_140040580(&local_278,puVar24,0);
          puVar9 = local_168;
          FUN_14024d160(&local_338,local_278,L"unknown artist");
          FUN_14024d160(&local_330,puVar9,L"untitled");
          if (local_278 != local_270) {
            _free_base();
          }
          if (local_168 != local_160) {
            _free_base();
          }
          LOCK();
          piVar2 = (int *)(puVar23 + -8);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          LOCK();
          piVar2 = (int *)(local_340 + -8);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          puVar24 = local_358;
          param_2 = local_360;
          puVar14 = local_350;
        }
        else {
          if ((short)local_368 != DAT_1405c1c78) break;
          if (local_368._2_1_ != DAT_1405c1c7a) break;
          cVar11 = FUN_14020b450(&local_360,&local_338);
          puVar23 = local_358;
          if (cVar11 == '\0') break;
          puVar24 = local_358;
          param_2 = local_360;
        }
      }
      else {
        uVar27 = local_368 >> 0xb & 3;
        uVar19 = (ulonglong)(3 - uVar27);
        uVar4 = *(uint *)(&DAT_1405c1e80 + ((ulonglong)(local_368 >> 0x12 & 3) + uVar19 * 4) * 4);
        if (uVar4 == 0) {
          puVar24 = puVar29;
        }
        else {
          uVar26 = local_368 >> 9 & 3;
          if (uVar26 == 3) {
            uVar26 = *(int *)(&DAT_1405c1c80 +
                             (((ulonglong)(3 - uVar26) + (ulonglong)(local_368 >> 0xb & 1) * 4) *
                              0x10 + (ulonglong)(local_368 >> 0x14 & 0xf)) * 4) * 12000;
            uVar19 = (ulonglong)uVar26 % (ulonglong)uVar4;
            puVar24 = (uchar *)(ulonglong)(((local_368 >> 0x11 & 1) + uVar26 / uVar4) * 4);
          }
          else {
            uVar26 = *(int *)(&DAT_1405c1c80 +
                             (((ulonglong)(3 - uVar26) + (ulonglong)(local_368 >> 0xb & 1) * 4) *
                              0x10 + (ulonglong)(local_368 >> 0x14 & 0xf)) * 4) * 0x23280;
            uVar19 = (ulonglong)uVar26 % (ulonglong)uVar4;
            puVar24 = (uchar *)(ulonglong)(uVar26 / uVar4 + (local_368 >> 0x11 & 1));
          }
        }
        puVar23 = local_358;
        if ((ulonglong)(longlong)(int)puVar24 < 4) break;
        if (puVar14 != (undefined8 *)0x0) {
          if (((((((local_368 ^ uVar22) & 0xc0000) == 0) && (uVar27 == (uVar22 >> 0xb & 3))) &&
               (((local_368 ^ uVar22) & 0x600) == 0)) &&
              ((((local_368 ^ uVar22) & 0x3000000) == 0 && (((local_368 ^ uVar22) >> 0x1b & 1) == 0)
               ))) && (((local_368 ^ uVar22) >> 0x1a & 1) == 0)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (!bVar5) {
            puVar23 = local_358 + -4;
            puVar24 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar19);
            if (puVar24 < puVar23) {
              puVar23 = puVar29;
            }
            local_358 = puVar23;
            break;
          }
        }
        lVar13 = (longlong)(int)puVar24 - 4;
        puVar24 = local_358 + lVar13;
        puVar23 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (puVar23 < puVar24) {
          if (lVar13 < 1) {
LAB_14020b1f8:
            local_358 = (uchar *)0x0;
            puVar23 = puVar29;
          }
          else {
            puVar23 = (uchar *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
            local_358 = puVar23;
          }
          break;
        }
        puVar14 = (undefined8 *)((longlong)puVar14 + 1);
        uVar22 = local_368;
        local_350 = puVar14;
      }
      iVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,puVar24,&local_368,4);
      local_358 = puVar24 + 4;
      puVar23 = local_358;
    } while (-1 < iVar12);
    if ((undefined8 *)0x7f < puVar14) {
      puVar14 = (undefined8 *)FUN_1402e2c84(0x28);
      local_350 = puVar14;
      uVar15 = FUN_14024cf70(&local_338,local_308);
      local_364 = 1;
      uVar22 = uVar22 >> 9 & 3;
      if (uVar22 == 1) {
        pwVar25 = L".mp3";
      }
      else if (uVar22 == 2) {
        pwVar25 = L".mp2";
      }
      else if (uVar22 == 3) {
        pwVar25 = L".mp1";
      }
      else {
        pwVar25 = (wchar_t *)0x0;
      }
      puVar18 = (undefined8 *)FUN_140026080(&local_310,uVar15,pwVar25);
      local_364 = 3;
      uVar15 = *puVar18;
      *puVar14 = CRecognisedDataOneFileImpl::vftable;
      puVar14[1] = param_3;
      FUN_140008d70(puVar14 + 2,uVar15);
      puVar14[3] = puVar23;
      *(undefined1 *)(puVar14 + 4) = 1;
      local_364 = 1;
      LOCK();
      piVar2 = (int *)(local_310 + -8);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      LOCK();
      piVar2 = (int *)(local_308[0] + -8);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      goto LAB_14020b2ff;
    }
  }
  puVar14 = (undefined8 *)0x0;
LAB_14020b2ff:
  LOCK();
  piVar2 = (int *)(local_330 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(local_338 + -8);
  iVar12 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  return puVar14;
}



// ===== string at 1405c6470 : CExfatUndeleterImpl::CExfatDirDataType::Validate
// ---- function FUN_140239330 @ 140239330 (xref 1402393a7)

/* WARNING: Removing unreachable block (ram,0x0001402393c2) */
/* WARNING: Removing unreachable block (ram,0x0001402393d6) */

undefined8 * FUN_140239330(longlong param_1,undefined8 param_2,ulonglong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  LPWSTR pWVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong local_res18;
  uint *local_res20;
  LPWSTR pWVar25;
  undefined4 uVar26;
  LPWSTR local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *plStack_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50;
  
  local_70 = 0xfffffffffffffffe;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_3 < 0x100000000) {
    plVar3 = (longlong *)(param_1 + 0x10);
    if ((*(longlong *)(param_1 + 0x30) + 1U != param_3) || (*(char *)(*plVar3 + 0xce) != '\0')) {
      puVar13 = (undefined8 *)FUN_1402e2c84(0x100);
      local_a8 = puVar13;
      puVar17 = (undefined8 *)
                (*(code *)PTR__guard_dispatch_icall_1405394d0)
                          (*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28),local_58);
      uVar14 = *puVar17;
      puVar17 = (undefined8 *)
                (*(code *)PTR__guard_dispatch_icall_1405394d0)
                          (*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28),local_68);
      uVar26 = 3;
      uVar18 = *puVar17;
      uVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
      uVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
      lVar16 = FUN_1402367d0(puVar13,0,0,1,uVar18,uVar14,uVar26);
      lVar12 = *plVar3;
      *plVar3 = lVar16;
      if (lVar12 != 0) {
        FUN_1401ed7c0(lVar12);
        _free_base(lVar12,0x100);
      }
      if (local_60 != 0) {
        FUN_140008510();
      }
      if (local_50 != 0) {
        FUN_140008510();
      }
    }
    *(ulonglong *)(param_1 + 0x30) = param_3;
    iVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                       (param_2,0,*(longlong *)(param_1 + 0x18),
                        *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18));
    if (-1 < iVar11) {
      lVar12 = *(longlong *)(param_1 + 0x18);
      local_a0 = (longlong *)0x0;
      plStack_98 = (longlong *)0x0;
      local_90 = 0;
      lVar16 = *plVar3;
      lVar24 = 0;
      plVar3 = plStack_98;
      for (uVar21 = (ulonglong)(*(longlong *)(param_1 + 0x20) - lVar12) >> 5; plStack_98 = plVar3,
          uVar21 != 0; uVar21 = uVar21 - 1) {
        cVar10 = FUN_140236d40(lVar16,lVar12,&local_a0);
        if (cVar10 == '\0') {
          *(undefined8 *)(lVar16 + 0xa0) = 0;
          lVar7 = *(longlong *)(lVar16 + 0xa8);
          *(undefined8 *)(lVar16 + 0xa8) = 0;
          if (lVar7 != 0) {
            FUN_140008510();
          }
          FUN_140008900(lVar16 + 0xb8);
        }
        else {
          lVar24 = lVar24 + 1;
        }
        lVar12 = lVar12 + 0x20;
        plVar3 = plStack_98;
      }
      if (lVar24 != 0) {
        if (local_a0 != plVar3) {
          local_80 = 0;
          uStack_78 = 0;
          FUN_1401ee8d0(*(undefined8 *)(param_1 + 8),&local_a0,&local_80,param_3 & 0xffffffff);
        }
        puVar13 = (undefined8 *)FUN_1402e2c84(0x10);
        plVar3 = plStack_98;
        uVar22 = *local_res20;
        *puVar13 = CRecognisedDataFileRecordsImpl::vftable;
        puVar13[1] = (ulonglong)uVar22;
        if (local_a0 != (longlong *)0x0) {
          local_a8 = puVar13;
          if (local_a0 != plStack_98) {
            plVar20 = local_a0 + 1;
            do {
              if (*plVar20 != 0) {
                FUN_140008510();
              }
              plVar4 = plVar20 + 1;
              plVar20 = plVar20 + 2;
            } while (plVar4 != plVar3);
          }
          uVar21 = local_90 - (longlong)local_a0 & 0xfffffffffffffff0;
          if (0xfff < uVar21) {
            if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - local_a0[-1]))) {
                    /* WARNING: Subroutine does not return */
              FUN_14033bbe4(local_a0[-1],uVar21 + 0x27);
            }
          }
          _free_base();
        }
        return puVar13;
      }
      if (local_a0 != (longlong *)0x0) {
        if (local_a0 != plVar3) {
          plVar20 = local_a0 + 1;
          do {
            if (*plVar20 != 0) {
              FUN_140008510();
            }
            plVar4 = plVar20 + 1;
            plVar20 = plVar20 + 2;
          } while (plVar4 != plVar3);
        }
        uVar21 = local_90 - (longlong)local_a0 & 0xfffffffffffffff0;
        if (0xfff < uVar21) {
          if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - local_a0[-1]))) {
                    /* WARNING: Subroutine does not return */
            FUN_14033bbe4(local_a0[-1],uVar21 + 0x27);
          }
        }
        _free_base();
      }
    }
  }
  else {
    lVar12 = FUN_140009200();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
    pWVar19 = (LPWSTR)(puVar13 + 3);
    uVar21 = 0;
    pWVar25 = (LPWSTR)0x0;
    local_b0 = pWVar19;
    iVar11 = MultiByteToWideChar(0,0,"CExfatUndeleterImpl::CExfatDirDataType::Validate",-1,
                                 (LPWSTR)0x0,0);
    uVar22 = iVar11 - 1;
    if ((int)uVar22 < 1) {
      uVar14 = *puVar13;
      if (*(int *)(puVar13 + 1) != 0) {
        if (*(int *)(puVar13 + 2) < 0) {
          if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(puVar13 + 1) = 0;
          *pWVar19 = L'\0';
        }
        else {
          LOCK();
          piVar2 = (int *)(puVar13 + 2);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
          pWVar19 = (LPWSTR)(lVar12 + 0x18);
          local_b0 = pWVar19;
        }
      }
    }
    else {
      if ((int)(*(int *)((longlong)puVar13 + 0xc) - uVar22 | 1U - *(int *)(puVar13 + 2)) < 0) {
        FUN_140008ae0(&local_b0,uVar22);
        pWVar19 = local_b0;
      }
      uVar21 = (ulonglong)uVar22;
      pWVar25 = pWVar19;
      MultiByteToWideChar(0,0,"CExfatUndeleterImpl::CExfatDirDataType::Validate",-1,pWVar19,uVar22);
      if (*(int *)(pWVar19 + -6) < (int)uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80070057);
      }
      *(uint *)(pWVar19 + -8) = uVar22;
      pWVar19[(int)uVar22] = L'\0';
    }
    pWVar1 = pWVar19 + -0xc;
    if ((*(longlong *)pWVar1 == 0) ||
       (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
      uVar14 = FUN_140009200();
      lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_88 = lVar12 + 0x18;
    uVar26 = 4;
    iVar11 = *(int *)(pWVar19 + -8);
    iVar23 = iVar11 + 2;
    if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar12 + 0xc) - iVar23 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
      FUN_140008ae0(&local_88,iVar23);
    }
    lVar12 = local_88;
    FUN_140008b60(local_88,(longlong)iVar11,pWVar19,iVar11,pWVar25,uVar21,uVar26);
    puVar5 = (undefined4 *)(lVar12 + (longlong)iVar11 * 2);
    if (puVar5 == (undefined4 *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *puVar5 = DAT_1405a5138;
    }
    if (*(int *)(lVar12 + -0xc) < iVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(lVar12 + -0x10) = iVar23;
    *(undefined2 *)(lVar12 + 4 + (longlong)iVar11 * 2) = 0;
    if ((*(longlong *)(lVar12 + -0x18) == 0) ||
       (lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar16 == 0)) {
      uVar14 = FUN_140009200();
      lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_a8 = (undefined8 *)(lVar16 + 0x18);
    uVar26 = 0xc;
    iVar11 = *(int *)(lVar12 + -0x10);
    iVar23 = iVar11 + 0x19;
    if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar16 + 0xc) - iVar23 | 1U - *(int *)(lVar16 + 0x10)) < 0) {
      FUN_140008ae0(&local_a8,iVar23);
    }
    puVar13 = local_a8;
    FUN_140008b60(local_a8,(longlong)iVar11,lVar12,iVar11,pWVar25,uVar21,uVar26);
    uVar14 = u_Cluster_too_large___I64u__1405c64a8._8_8_;
    pwVar6 = (wchar_t *)((longlong)puVar13 + (longlong)iVar11 * 2);
    if (pwVar6 == (wchar_t *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *(undefined8 *)pwVar6 = u_Cluster_too_large___I64u__1405c64a8._0_8_;
      *(undefined8 *)(pwVar6 + 4) = uVar14;
      uVar14 = u_Cluster_too_large___I64u__1405c64a8._24_8_;
      *(undefined8 *)(pwVar6 + 8) = u_Cluster_too_large___I64u__1405c64a8._16_8_;
      *(undefined8 *)(pwVar6 + 0xc) = uVar14;
      uVar9 = u_Cluster_too_large___I64u__1405c64a8._44_4_;
      uVar8 = u_Cluster_too_large___I64u__1405c64a8._40_4_;
      uVar26 = u_Cluster_too_large___I64u__1405c64a8._36_4_;
      *(undefined4 *)(pwVar6 + 0x10) = u_Cluster_too_large___I64u__1405c64a8._32_4_;
      *(undefined4 *)(pwVar6 + 0x12) = uVar26;
      *(undefined4 *)(pwVar6 + 0x14) = uVar8;
      *(undefined4 *)(pwVar6 + 0x16) = uVar9;
      pwVar6[0x18] = u_Cluster_too_large___I64u__1405c64a8[0x18];
    }
    if (*(int *)((longlong)puVar13 + -0xc) < iVar11 + 0x19) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(puVar13 + -2) = iVar11 + 0x19;
    *(undefined2 *)((longlong)puVar13 + (longlong)iVar11 * 2 + 0x32) = 0;
    lVar16 = FUN_140040170();
    if (*(int *)(lVar16 + 0x18) != 0) {
      FUN_140040760(lVar16,400,puVar13,&local_res18);
    }
    LOCK();
    piVar2 = (int *)(puVar13 + -1);
    iVar11 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar11 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
    LOCK();
    piVar2 = (int *)(lVar12 + -8);
    iVar11 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar11 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar12 + -0x18),lVar12 + -0x18)
      ;
    }
    LOCK();
    pWVar19 = pWVar19 + -4;
    iVar11 = *(int *)pWVar19;
    *(int *)pWVar19 = *(int *)pWVar19 + -1;
    UNLOCK();
    if (iVar11 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
    }
  }
  return (undefined8 *)0x0;
}


// ---- function FUN_140239330 @ 140239330 (xref 1402393fc)

/* WARNING: Removing unreachable block (ram,0x0001402393c2) */
/* WARNING: Removing unreachable block (ram,0x0001402393d6) */

undefined8 * FUN_140239330(longlong param_1,undefined8 param_2,ulonglong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  LPWSTR pWVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong local_res18;
  uint *local_res20;
  LPWSTR pWVar25;
  undefined4 uVar26;
  LPWSTR local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *plStack_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50;
  
  local_70 = 0xfffffffffffffffe;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_3 < 0x100000000) {
    plVar3 = (longlong *)(param_1 + 0x10);
    if ((*(longlong *)(param_1 + 0x30) + 1U != param_3) || (*(char *)(*plVar3 + 0xce) != '\0')) {
      puVar13 = (undefined8 *)FUN_1402e2c84(0x100);
      local_a8 = puVar13;
      puVar17 = (undefined8 *)
                (*(code *)PTR__guard_dispatch_icall_1405394d0)
                          (*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28),local_58);
      uVar14 = *puVar17;
      puVar17 = (undefined8 *)
                (*(code *)PTR__guard_dispatch_icall_1405394d0)
                          (*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28),local_68);
      uVar26 = 3;
      uVar18 = *puVar17;
      uVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
      uVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
      lVar16 = FUN_1402367d0(puVar13,0,0,1,uVar18,uVar14,uVar26);
      lVar12 = *plVar3;
      *plVar3 = lVar16;
      if (lVar12 != 0) {
        FUN_1401ed7c0(lVar12);
        _free_base(lVar12,0x100);
      }
      if (local_60 != 0) {
        FUN_140008510();
      }
      if (local_50 != 0) {
        FUN_140008510();
      }
    }
    *(ulonglong *)(param_1 + 0x30) = param_3;
    iVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                       (param_2,0,*(longlong *)(param_1 + 0x18),
                        *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18));
    if (-1 < iVar11) {
      lVar12 = *(longlong *)(param_1 + 0x18);
      local_a0 = (longlong *)0x0;
      plStack_98 = (longlong *)0x0;
      local_90 = 0;
      lVar16 = *plVar3;
      lVar24 = 0;
      plVar3 = plStack_98;
      for (uVar21 = (ulonglong)(*(longlong *)(param_1 + 0x20) - lVar12) >> 5; plStack_98 = plVar3,
          uVar21 != 0; uVar21 = uVar21 - 1) {
        cVar10 = FUN_140236d40(lVar16,lVar12,&local_a0);
        if (cVar10 == '\0') {
          *(undefined8 *)(lVar16 + 0xa0) = 0;
          lVar7 = *(longlong *)(lVar16 + 0xa8);
          *(undefined8 *)(lVar16 + 0xa8) = 0;
          if (lVar7 != 0) {
            FUN_140008510();
          }
          FUN_140008900(lVar16 + 0xb8);
        }
        else {
          lVar24 = lVar24 + 1;
        }
        lVar12 = lVar12 + 0x20;
        plVar3 = plStack_98;
      }
      if (lVar24 != 0) {
        if (local_a0 != plVar3) {
          local_80 = 0;
          uStack_78 = 0;
          FUN_1401ee8d0(*(undefined8 *)(param_1 + 8),&local_a0,&local_80,param_3 & 0xffffffff);
        }
        puVar13 = (undefined8 *)FUN_1402e2c84(0x10);
        plVar3 = plStack_98;
        uVar22 = *local_res20;
        *puVar13 = CRecognisedDataFileRecordsImpl::vftable;
        puVar13[1] = (ulonglong)uVar22;
        if (local_a0 != (longlong *)0x0) {
          local_a8 = puVar13;
          if (local_a0 != plStack_98) {
            plVar20 = local_a0 + 1;
            do {
              if (*plVar20 != 0) {
                FUN_140008510();
              }
              plVar4 = plVar20 + 1;
              plVar20 = plVar20 + 2;
            } while (plVar4 != plVar3);
          }
          uVar21 = local_90 - (longlong)local_a0 & 0xfffffffffffffff0;
          if (0xfff < uVar21) {
            if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - local_a0[-1]))) {
                    /* WARNING: Subroutine does not return */
              FUN_14033bbe4(local_a0[-1],uVar21 + 0x27);
            }
          }
          _free_base();
        }
        return puVar13;
      }
      if (local_a0 != (longlong *)0x0) {
        if (local_a0 != plVar3) {
          plVar20 = local_a0 + 1;
          do {
            if (*plVar20 != 0) {
              FUN_140008510();
            }
            plVar4 = plVar20 + 1;
            plVar20 = plVar20 + 2;
          } while (plVar4 != plVar3);
        }
        uVar21 = local_90 - (longlong)local_a0 & 0xfffffffffffffff0;
        if (0xfff < uVar21) {
          if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - local_a0[-1]))) {
                    /* WARNING: Subroutine does not return */
            FUN_14033bbe4(local_a0[-1],uVar21 + 0x27);
          }
        }
        _free_base();
      }
    }
  }
  else {
    lVar12 = FUN_140009200();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
    pWVar19 = (LPWSTR)(puVar13 + 3);
    uVar21 = 0;
    pWVar25 = (LPWSTR)0x0;
    local_b0 = pWVar19;
    iVar11 = MultiByteToWideChar(0,0,"CExfatUndeleterImpl::CExfatDirDataType::Validate",-1,
                                 (LPWSTR)0x0,0);
    uVar22 = iVar11 - 1;
    if ((int)uVar22 < 1) {
      uVar14 = *puVar13;
      if (*(int *)(puVar13 + 1) != 0) {
        if (*(int *)(puVar13 + 2) < 0) {
          if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(puVar13 + 1) = 0;
          *pWVar19 = L'\0';
        }
        else {
          LOCK();
          piVar2 = (int *)(puVar13 + 2);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
          pWVar19 = (LPWSTR)(lVar12 + 0x18);
          local_b0 = pWVar19;
        }
      }
    }
    else {
      if ((int)(*(int *)((longlong)puVar13 + 0xc) - uVar22 | 1U - *(int *)(puVar13 + 2)) < 0) {
        FUN_140008ae0(&local_b0,uVar22);
        pWVar19 = local_b0;
      }
      uVar21 = (ulonglong)uVar22;
      pWVar25 = pWVar19;
      MultiByteToWideChar(0,0,"CExfatUndeleterImpl::CExfatDirDataType::Validate",-1,pWVar19,uVar22);
      if (*(int *)(pWVar19 + -6) < (int)uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80070057);
      }
      *(uint *)(pWVar19 + -8) = uVar22;
      pWVar19[(int)uVar22] = L'\0';
    }
    pWVar1 = pWVar19 + -0xc;
    if ((*(longlong *)pWVar1 == 0) ||
       (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
      uVar14 = FUN_140009200();
      lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_88 = lVar12 + 0x18;
    uVar26 = 4;
    iVar11 = *(int *)(pWVar19 + -8);
    iVar23 = iVar11 + 2;
    if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar12 + 0xc) - iVar23 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
      FUN_140008ae0(&local_88,iVar23);
    }
    lVar12 = local_88;
    FUN_140008b60(local_88,(longlong)iVar11,pWVar19,iVar11,pWVar25,uVar21,uVar26);
    puVar5 = (undefined4 *)(lVar12 + (longlong)iVar11 * 2);
    if (puVar5 == (undefined4 *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *puVar5 = DAT_1405a5138;
    }
    if (*(int *)(lVar12 + -0xc) < iVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(lVar12 + -0x10) = iVar23;
    *(undefined2 *)(lVar12 + 4 + (longlong)iVar11 * 2) = 0;
    if ((*(longlong *)(lVar12 + -0x18) == 0) ||
       (lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar16 == 0)) {
      uVar14 = FUN_140009200();
      lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_a8 = (undefined8 *)(lVar16 + 0x18);
    uVar26 = 0xc;
    iVar11 = *(int *)(lVar12 + -0x10);
    iVar23 = iVar11 + 0x19;
    if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar16 + 0xc) - iVar23 | 1U - *(int *)(lVar16 + 0x10)) < 0) {
      FUN_140008ae0(&local_a8,iVar23);
    }
    puVar13 = local_a8;
    FUN_140008b60(local_a8,(longlong)iVar11,lVar12,iVar11,pWVar25,uVar21,uVar26);
    uVar14 = u_Cluster_too_large___I64u__1405c64a8._8_8_;
    pwVar6 = (wchar_t *)((longlong)puVar13 + (longlong)iVar11 * 2);
    if (pwVar6 == (wchar_t *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *(undefined8 *)pwVar6 = u_Cluster_too_large___I64u__1405c64a8._0_8_;
      *(undefined8 *)(pwVar6 + 4) = uVar14;
      uVar14 = u_Cluster_too_large___I64u__1405c64a8._24_8_;
      *(undefined8 *)(pwVar6 + 8) = u_Cluster_too_large___I64u__1405c64a8._16_8_;
      *(undefined8 *)(pwVar6 + 0xc) = uVar14;
      uVar9 = u_Cluster_too_large___I64u__1405c64a8._44_4_;
      uVar8 = u_Cluster_too_large___I64u__1405c64a8._40_4_;
      uVar26 = u_Cluster_too_large___I64u__1405c64a8._36_4_;
      *(undefined4 *)(pwVar6 + 0x10) = u_Cluster_too_large___I64u__1405c64a8._32_4_;
      *(undefined4 *)(pwVar6 + 0x12) = uVar26;
      *(undefined4 *)(pwVar6 + 0x14) = uVar8;
      *(undefined4 *)(pwVar6 + 0x16) = uVar9;
      pwVar6[0x18] = u_Cluster_too_large___I64u__1405c64a8[0x18];
    }
    if (*(int *)((longlong)puVar13 + -0xc) < iVar11 + 0x19) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(puVar13 + -2) = iVar11 + 0x19;
    *(undefined2 *)((longlong)puVar13 + (longlong)iVar11 * 2 + 0x32) = 0;
    lVar16 = FUN_140040170();
    if (*(int *)(lVar16 + 0x18) != 0) {
      FUN_140040760(lVar16,400,puVar13,&local_res18);
    }
    LOCK();
    piVar2 = (int *)(puVar13 + -1);
    iVar11 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar11 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
    LOCK();
    piVar2 = (int *)(lVar12 + -8);
    iVar11 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar11 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar12 + -0x18),lVar12 + -0x18)
      ;
    }
    LOCK();
    pWVar19 = pWVar19 + -4;
    iVar11 = *(int *)pWVar19;
    *(int *)pWVar19 = *(int *)pWVar19 + -1;
    UNLOCK();
    if (iVar11 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
    }
  }
  return (undefined8 *)0x0;
}


// ---- function FUN_140239330 @ 140239330 (xref 14023943a)

/* WARNING: Removing unreachable block (ram,0x0001402393c2) */
/* WARNING: Removing unreachable block (ram,0x0001402393d6) */

undefined8 * FUN_140239330(longlong param_1,undefined8 param_2,ulonglong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  LPWSTR pWVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong local_res18;
  uint *local_res20;
  LPWSTR pWVar25;
  undefined4 uVar26;
  LPWSTR local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *plStack_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50;
  
  local_70 = 0xfffffffffffffffe;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_3 < 0x100000000) {
    plVar3 = (longlong *)(param_1 + 0x10);
    if ((*(longlong *)(param_1 + 0x30) + 1U != param_3) || (*(char *)(*plVar3 + 0xce) != '\0')) {
      puVar13 = (undefined8 *)FUN_1402e2c84(0x100);
      local_a8 = puVar13;
      puVar17 = (undefined8 *)
                (*(code *)PTR__guard_dispatch_icall_1405394d0)
                          (*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28),local_58);
      uVar14 = *puVar17;
      puVar17 = (undefined8 *)
                (*(code *)PTR__guard_dispatch_icall_1405394d0)
                          (*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28),local_68);
      uVar26 = 3;
      uVar18 = *puVar17;
      uVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
      uVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
      lVar16 = FUN_1402367d0(puVar13,0,0,1,uVar18,uVar14,uVar26);
      lVar12 = *plVar3;
      *plVar3 = lVar16;
      if (lVar12 != 0) {
        FUN_1401ed7c0(lVar12);
        _free_base(lVar12,0x100);
      }
      if (local_60 != 0) {
        FUN_140008510();
      }
      if (local_50 != 0) {
        FUN_140008510();
      }
    }
    *(ulonglong *)(param_1 + 0x30) = param_3;
    iVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                       (param_2,0,*(longlong *)(param_1 + 0x18),
                        *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18));
    if (-1 < iVar11) {
      lVar12 = *(longlong *)(param_1 + 0x18);
      local_a0 = (longlong *)0x0;
      plStack_98 = (longlong *)0x0;
      local_90 = 0;
      lVar16 = *plVar3;
      lVar24 = 0;
      plVar3 = plStack_98;
      for (uVar21 = (ulonglong)(*(longlong *)(param_1 + 0x20) - lVar12) >> 5; plStack_98 = plVar3,
          uVar21 != 0; uVar21 = uVar21 - 1) {
        cVar10 = FUN_140236d40(lVar16,lVar12,&local_a0);
        if (cVar10 == '\0') {
          *(undefined8 *)(lVar16 + 0xa0) = 0;
          lVar7 = *(longlong *)(lVar16 + 0xa8);
          *(undefined8 *)(lVar16 + 0xa8) = 0;
          if (lVar7 != 0) {
            FUN_140008510();
          }
          FUN_140008900(lVar16 + 0xb8);
        }
        else {
          lVar24 = lVar24 + 1;
        }
        lVar12 = lVar12 + 0x20;
        plVar3 = plStack_98;
      }
      if (lVar24 != 0) {
        if (local_a0 != plVar3) {
          local_80 = 0;
          uStack_78 = 0;
          FUN_1401ee8d0(*(undefined8 *)(param_1 + 8),&local_a0,&local_80,param_3 & 0xffffffff);
        }
        puVar13 = (undefined8 *)FUN_1402e2c84(0x10);
        plVar3 = plStack_98;
        uVar22 = *local_res20;
        *puVar13 = CRecognisedDataFileRecordsImpl::vftable;
        puVar13[1] = (ulonglong)uVar22;
        if (local_a0 != (longlong *)0x0) {
          local_a8 = puVar13;
          if (local_a0 != plStack_98) {
            plVar20 = local_a0 + 1;
            do {
              if (*plVar20 != 0) {
                FUN_140008510();
              }
              plVar4 = plVar20 + 1;
              plVar20 = plVar20 + 2;
            } while (plVar4 != plVar3);
          }
          uVar21 = local_90 - (longlong)local_a0 & 0xfffffffffffffff0;
          if (0xfff < uVar21) {
            if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - local_a0[-1]))) {
                    /* WARNING: Subroutine does not return */
              FUN_14033bbe4(local_a0[-1],uVar21 + 0x27);
            }
          }
          _free_base();
        }
        return puVar13;
      }
      if (local_a0 != (longlong *)0x0) {
        if (local_a0 != plVar3) {
          plVar20 = local_a0 + 1;
          do {
            if (*plVar20 != 0) {
              FUN_140008510();
            }
            plVar4 = plVar20 + 1;
            plVar20 = plVar20 + 2;
          } while (plVar4 != plVar3);
        }
        uVar21 = local_90 - (longlong)local_a0 & 0xfffffffffffffff0;
        if (0xfff < uVar21) {
          if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - local_a0[-1]))) {
                    /* WARNING: Subroutine does not return */
            FUN_14033bbe4(local_a0[-1],uVar21 + 0x27);
          }
        }
        _free_base();
      }
    }
  }
  else {
    lVar12 = FUN_140009200();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
    pWVar19 = (LPWSTR)(puVar13 + 3);
    uVar21 = 0;
    pWVar25 = (LPWSTR)0x0;
    local_b0 = pWVar19;
    iVar11 = MultiByteToWideChar(0,0,"CExfatUndeleterImpl::CExfatDirDataType::Validate",-1,
                                 (LPWSTR)0x0,0);
    uVar22 = iVar11 - 1;
    if ((int)uVar22 < 1) {
      uVar14 = *puVar13;
      if (*(int *)(puVar13 + 1) != 0) {
        if (*(int *)(puVar13 + 2) < 0) {
          if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(puVar13 + 1) = 0;
          *pWVar19 = L'\0';
        }
        else {
          LOCK();
          piVar2 = (int *)(puVar13 + 2);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
          pWVar19 = (LPWSTR)(lVar12 + 0x18);
          local_b0 = pWVar19;
        }
      }
    }
    else {
      if ((int)(*(int *)((longlong)puVar13 + 0xc) - uVar22 | 1U - *(int *)(puVar13 + 2)) < 0) {
        FUN_140008ae0(&local_b0,uVar22);
        pWVar19 = local_b0;
      }
      uVar21 = (ulonglong)uVar22;
      pWVar25 = pWVar19;
      MultiByteToWideChar(0,0,"CExfatUndeleterImpl::CExfatDirDataType::Validate",-1,pWVar19,uVar22);
      if (*(int *)(pWVar19 + -6) < (int)uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80070057);
      }
      *(uint *)(pWVar19 + -8) = uVar22;
      pWVar19[(int)uVar22] = L'\0';
    }
    pWVar1 = pWVar19 + -0xc;
    if ((*(longlong *)pWVar1 == 0) ||
       (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
      uVar14 = FUN_140009200();
      lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_88 = lVar12 + 0x18;
    uVar26 = 4;
    iVar11 = *(int *)(pWVar19 + -8);
    iVar23 = iVar11 + 2;
    if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar12 + 0xc) - iVar23 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
      FUN_140008ae0(&local_88,iVar23);
    }
    lVar12 = local_88;
    FUN_140008b60(local_88,(longlong)iVar11,pWVar19,iVar11,pWVar25,uVar21,uVar26);
    puVar5 = (undefined4 *)(lVar12 + (longlong)iVar11 * 2);
    if (puVar5 == (undefined4 *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *puVar5 = DAT_1405a5138;
    }
    if (*(int *)(lVar12 + -0xc) < iVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(lVar12 + -0x10) = iVar23;
    *(undefined2 *)(lVar12 + 4 + (longlong)iVar11 * 2) = 0;
    if ((*(longlong *)(lVar12 + -0x18) == 0) ||
       (lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar16 == 0)) {
      uVar14 = FUN_140009200();
      lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_a8 = (undefined8 *)(lVar16 + 0x18);
    uVar26 = 0xc;
    iVar11 = *(int *)(lVar12 + -0x10);
    iVar23 = iVar11 + 0x19;
    if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar16 + 0xc) - iVar23 | 1U - *(int *)(lVar16 + 0x10)) < 0) {
      FUN_140008ae0(&local_a8,iVar23);
    }
    puVar13 = local_a8;
    FUN_140008b60(local_a8,(longlong)iVar11,lVar12,iVar11,pWVar25,uVar21,uVar26);
    uVar14 = u_Cluster_too_large___I64u__1405c64a8._8_8_;
    pwVar6 = (wchar_t *)((longlong)puVar13 + (longlong)iVar11 * 2);
    if (pwVar6 == (wchar_t *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *(undefined8 *)pwVar6 = u_Cluster_too_large___I64u__1405c64a8._0_8_;
      *(undefined8 *)(pwVar6 + 4) = uVar14;
      uVar14 = u_Cluster_too_large___I64u__1405c64a8._24_8_;
      *(undefined8 *)(pwVar6 + 8) = u_Cluster_too_large___I64u__1405c64a8._16_8_;
      *(undefined8 *)(pwVar6 + 0xc) = uVar14;
      uVar9 = u_Cluster_too_large___I64u__1405c64a8._44_4_;
      uVar8 = u_Cluster_too_large___I64u__1405c64a8._40_4_;
      uVar26 = u_Cluster_too_large___I64u__1405c64a8._36_4_;
      *(undefined4 *)(pwVar6 + 0x10) = u_Cluster_too_large___I64u__1405c64a8._32_4_;
      *(undefined4 *)(pwVar6 + 0x12) = uVar26;
      *(undefined4 *)(pwVar6 + 0x14) = uVar8;
      *(undefined4 *)(pwVar6 + 0x16) = uVar9;
      pwVar6[0x18] = u_Cluster_too_large___I64u__1405c64a8[0x18];
    }
    if (*(int *)((longlong)puVar13 + -0xc) < iVar11 + 0x19) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(puVar13 + -2) = iVar11 + 0x19;
    *(undefined2 *)((longlong)puVar13 + (longlong)iVar11 * 2 + 0x32) = 0;
    lVar16 = FUN_140040170();
    if (*(int *)(lVar16 + 0x18) != 0) {
      FUN_140040760(lVar16,400,puVar13,&local_res18);
    }
    LOCK();
    piVar2 = (int *)(puVar13 + -1);
    iVar11 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar11 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
    LOCK();
    piVar2 = (int *)(lVar12 + -8);
    iVar11 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar11 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar12 + -0x18),lVar12 + -0x18)
      ;
    }
    LOCK();
    pWVar19 = pWVar19 + -4;
    iVar11 = *(int *)pWVar19;
    *(int *)pWVar19 = *(int *)pWVar19 + -1;
    UNLOCK();
    if (iVar11 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
    }
  }
  return (undefined8 *)0x0;
}



// ===== string at 1405cae08 : CTiffDataType::Validate
// ---- function FUN_14027d910 @ 14027d910 (xref 14027d972)

/* WARNING: Removing unreachable block (ram,0x00014027d98a) */
/* WARNING: Removing unreachable block (ram,0x00014027d99e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14027d910(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  LPWSTR pWVar17;
  int iVar18;
  undefined4 extraout_XMM0_Da;
  LPWSTR pWVar19;
  undefined4 uVar20;
  int local_f4;
  longlong *local_f0;
  undefined8 *local_e8;
  uint local_e0 [2];
  LPWSTR local_d8;
  int local_d0;
  uint uStack_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8 [2];
  undefined1 local_98 [16];
  longlong local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  
  local_58 = 0xfffffffffffffffe;
  puVar16 = (undefined8 *)0x0;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar17 = (LPWSTR)(puVar10 + 3);
  iVar8 = 0;
  pWVar19 = (LPWSTR)0x0;
  local_d8 = pWVar17;
  iVar7 = MultiByteToWideChar(0,0,"CTiffDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar7 = iVar7 + -1;
  if (iVar7 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar17 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar17 = (LPWSTR)(lVar9 + 0x18);
        local_d8 = pWVar17;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar7 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_d8,iVar7);
      pWVar17 = local_d8;
    }
    pWVar19 = pWVar17;
    iVar8 = iVar7;
    MultiByteToWideChar(0,0,"CTiffDataType::Validate",-1,pWVar17,iVar7);
    if (*(int *)(pWVar17 + -6) < iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar17 + -8) = iVar7;
    pWVar17[iVar7] = L'\0';
  }
  pWVar1 = pWVar17 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_c0 = lVar9 + 0x18;
  uVar20 = 4;
  iVar7 = *(int *)(pWVar17 + -8);
  local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,iVar7);
  iVar18 = iVar7 + 2;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar18 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_c0,iVar18);
    iVar7 = (int)local_e8;
  }
  lVar9 = local_c0;
  FUN_140008b60(local_c0,(longlong)iVar7,pWVar17,iVar7,pWVar19,iVar8,uVar20);
  puVar3 = (undefined4 *)(lVar9 + (longlong)iVar7 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar18;
  *(undefined2 *)(lVar9 + 4 + (longlong)(int)local_e8 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar13 == 0)) {
    uVar11 = FUN_140009200();
    lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_b8 = lVar13 + 0x18;
  uVar20 = 0xc;
  iVar7 = *(int *)(lVar9 + -0x10);
  local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,iVar7);
  iVar18 = iVar7 + 0xb;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar13 + 0xc) - iVar18 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
    FUN_140008ae0(&local_b8,iVar18);
    iVar7 = (int)local_e8;
  }
  lVar13 = local_b8;
  FUN_140008b60(local_b8,(longlong)iVar7,lVar9,iVar7,pWVar19,iVar8,uVar20);
  uVar5 = _UNK_1405cae2c;
  uVar4 = _UNK_1405cae28;
  uVar20 = _UNK_1405cae24;
  puVar3 = (undefined4 *)(lVar13 + (longlong)iVar7 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = _DAT_1405cae20;
    puVar3[1] = uVar20;
    puVar3[2] = uVar4;
    puVar3[3] = uVar5;
    puVar3[4] = DAT_1405cae30;
    *(undefined2 *)(puVar3 + 5) = DAT_1405cae34;
  }
  if (*(int *)(lVar13 + -0xc) < (int)local_e8 + 0xb) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar13 + -0x10) = (int)local_e8 + 0xb;
  *(undefined2 *)(lVar13 + 0x16 + (longlong)(int)local_e8 * 2) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,lVar13);
  LOCK();
  piVar2 = (int *)(lVar13 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar17 = pWVar17 + -4;
  iVar8 = *(int *)pWVar17;
  *(int *)pWVar17 = *(int *)pWVar17 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140207690(local_98);
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_88 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  local_88 = local_88 + 0x18;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = param_1 + 8;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  lVar9 = lVar9 + 0x18;
  cVar6 = '\0';
  local_c8 = lVar9;
  iVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_d0,8);
  if (-1 < iVar8) {
    if (local_d0 != DAT_1405c3cd4) {
      if (local_d0 != DAT_1405c3cd8) goto LAB_14027dfff;
      cVar6 = '\x01';
      uStack_cc = (uStack_cc & 0xff0000 | uStack_cc >> 0x10) >> 8 |
                  (uStack_cc << 0x10 | uStack_cc & 0xff00) << 8;
    }
    uVar20 = extraout_XMM0_Da;
    local_e0[0] = uStack_cc;
    if (0xf < uStack_cc) {
      uVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,8,&local_f4);
      if (cVar6 == '\0') {
        local_f4 = CONCAT22(local_f4._2_2_,(ushort)local_f4 << 8 | (ushort)local_f4 >> 8);
      }
      if (local_f4 == DAT_1405c3cdc) {
        uVar20 = FUN_140008c50(&local_c8,&DAT_1405c3cc8,4);
        lVar9 = local_c8;
      }
    }
    cVar6 = FUN_14021f580(uVar20,local_e0,param_2,cVar6,local_98);
    if (cVar6 != '\0') {
      plVar14 = (longlong *)FUN_140008580(local_88 + -0x18);
      local_f0 = plVar14 + 3;
      if ((int)plVar14[1] == 0) {
        plVar15 = (longlong *)FUN_140008580(lVar9 + -0x18);
        local_50 = plVar15 + 3;
        if (plVar15 != plVar14) {
          if (((int)plVar14[2] < 0) || (*plVar15 != *plVar14)) {
            FUN_140008c50(&local_f0,local_50,(int)plVar15[1]);
          }
          else {
            lVar9 = FUN_140008580(plVar15);
            FUN_1400092d0(plVar14);
            local_f0 = (longlong *)(lVar9 + 0x18);
          }
        }
        LOCK();
        plVar14 = plVar15 + 2;
        lVar9 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar15,plVar15);
        }
      }
      if ((int)local_f0[-2] == 0) {
        FUN_140008c50(&local_f0,L".tif",4);
      }
      puVar16 = (undefined8 *)FUN_1402e2c84(0x28);
      local_e8 = puVar16;
      uVar11 = FUN_14024cf70(local_98,local_a8);
      puVar10 = (undefined8 *)FUN_14002c170(&local_b0,uVar11,&local_f0);
      uVar11 = *puVar10;
      *puVar16 = CRecognisedDataOneFileImpl::vftable;
      puVar16[1] = param_3;
      FUN_140008d70(puVar16 + 2,uVar11);
      puVar16[3] = (ulonglong)local_80;
      *(undefined1 *)(puVar16 + 4) = 0;
      LOCK();
      piVar2 = (int *)(local_b0 + -8);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      LOCK();
      piVar2 = (int *)(local_a8[0] + -8);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      LOCK();
      plVar14 = local_f0 + -1;
      lVar9 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar9 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      lVar9 = local_c8;
    }
  }
LAB_14027dfff:
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  FUN_140071d40(&local_78);
  LOCK();
  piVar2 = (int *)(local_88 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  FUN_140026670(local_98);
  return puVar16;
}


// ---- function FUN_14027d910 @ 14027d910 (xref 14027d9c3)

/* WARNING: Removing unreachable block (ram,0x00014027d98a) */
/* WARNING: Removing unreachable block (ram,0x00014027d99e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14027d910(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  LPWSTR pWVar17;
  int iVar18;
  undefined4 extraout_XMM0_Da;
  LPWSTR pWVar19;
  undefined4 uVar20;
  int local_f4;
  longlong *local_f0;
  undefined8 *local_e8;
  uint local_e0 [2];
  LPWSTR local_d8;
  int local_d0;
  uint uStack_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8 [2];
  undefined1 local_98 [16];
  longlong local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  
  local_58 = 0xfffffffffffffffe;
  puVar16 = (undefined8 *)0x0;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar17 = (LPWSTR)(puVar10 + 3);
  iVar8 = 0;
  pWVar19 = (LPWSTR)0x0;
  local_d8 = pWVar17;
  iVar7 = MultiByteToWideChar(0,0,"CTiffDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar7 = iVar7 + -1;
  if (iVar7 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar17 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar17 = (LPWSTR)(lVar9 + 0x18);
        local_d8 = pWVar17;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar7 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_d8,iVar7);
      pWVar17 = local_d8;
    }
    pWVar19 = pWVar17;
    iVar8 = iVar7;
    MultiByteToWideChar(0,0,"CTiffDataType::Validate",-1,pWVar17,iVar7);
    if (*(int *)(pWVar17 + -6) < iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar17 + -8) = iVar7;
    pWVar17[iVar7] = L'\0';
  }
  pWVar1 = pWVar17 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_c0 = lVar9 + 0x18;
  uVar20 = 4;
  iVar7 = *(int *)(pWVar17 + -8);
  local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,iVar7);
  iVar18 = iVar7 + 2;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar18 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_c0,iVar18);
    iVar7 = (int)local_e8;
  }
  lVar9 = local_c0;
  FUN_140008b60(local_c0,(longlong)iVar7,pWVar17,iVar7,pWVar19,iVar8,uVar20);
  puVar3 = (undefined4 *)(lVar9 + (longlong)iVar7 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar18;
  *(undefined2 *)(lVar9 + 4 + (longlong)(int)local_e8 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar13 == 0)) {
    uVar11 = FUN_140009200();
    lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_b8 = lVar13 + 0x18;
  uVar20 = 0xc;
  iVar7 = *(int *)(lVar9 + -0x10);
  local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,iVar7);
  iVar18 = iVar7 + 0xb;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar13 + 0xc) - iVar18 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
    FUN_140008ae0(&local_b8,iVar18);
    iVar7 = (int)local_e8;
  }
  lVar13 = local_b8;
  FUN_140008b60(local_b8,(longlong)iVar7,lVar9,iVar7,pWVar19,iVar8,uVar20);
  uVar5 = _UNK_1405cae2c;
  uVar4 = _UNK_1405cae28;
  uVar20 = _UNK_1405cae24;
  puVar3 = (undefined4 *)(lVar13 + (longlong)iVar7 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = _DAT_1405cae20;
    puVar3[1] = uVar20;
    puVar3[2] = uVar4;
    puVar3[3] = uVar5;
    puVar3[4] = DAT_1405cae30;
    *(undefined2 *)(puVar3 + 5) = DAT_1405cae34;
  }
  if (*(int *)(lVar13 + -0xc) < (int)local_e8 + 0xb) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar13 + -0x10) = (int)local_e8 + 0xb;
  *(undefined2 *)(lVar13 + 0x16 + (longlong)(int)local_e8 * 2) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,lVar13);
  LOCK();
  piVar2 = (int *)(lVar13 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar17 = pWVar17 + -4;
  iVar8 = *(int *)pWVar17;
  *(int *)pWVar17 = *(int *)pWVar17 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140207690(local_98);
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_88 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  local_88 = local_88 + 0x18;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = param_1 + 8;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  lVar9 = lVar9 + 0x18;
  cVar6 = '\0';
  local_c8 = lVar9;
  iVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_d0,8);
  if (-1 < iVar8) {
    if (local_d0 != DAT_1405c3cd4) {
      if (local_d0 != DAT_1405c3cd8) goto LAB_14027dfff;
      cVar6 = '\x01';
      uStack_cc = (uStack_cc & 0xff0000 | uStack_cc >> 0x10) >> 8 |
                  (uStack_cc << 0x10 | uStack_cc & 0xff00) << 8;
    }
    uVar20 = extraout_XMM0_Da;
    local_e0[0] = uStack_cc;
    if (0xf < uStack_cc) {
      uVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,8,&local_f4);
      if (cVar6 == '\0') {
        local_f4 = CONCAT22(local_f4._2_2_,(ushort)local_f4 << 8 | (ushort)local_f4 >> 8);
      }
      if (local_f4 == DAT_1405c3cdc) {
        uVar20 = FUN_140008c50(&local_c8,&DAT_1405c3cc8,4);
        lVar9 = local_c8;
      }
    }
    cVar6 = FUN_14021f580(uVar20,local_e0,param_2,cVar6,local_98);
    if (cVar6 != '\0') {
      plVar14 = (longlong *)FUN_140008580(local_88 + -0x18);
      local_f0 = plVar14 + 3;
      if ((int)plVar14[1] == 0) {
        plVar15 = (longlong *)FUN_140008580(lVar9 + -0x18);
        local_50 = plVar15 + 3;
        if (plVar15 != plVar14) {
          if (((int)plVar14[2] < 0) || (*plVar15 != *plVar14)) {
            FUN_140008c50(&local_f0,local_50,(int)plVar15[1]);
          }
          else {
            lVar9 = FUN_140008580(plVar15);
            FUN_1400092d0(plVar14);
            local_f0 = (longlong *)(lVar9 + 0x18);
          }
        }
        LOCK();
        plVar14 = plVar15 + 2;
        lVar9 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar15,plVar15);
        }
      }
      if ((int)local_f0[-2] == 0) {
        FUN_140008c50(&local_f0,L".tif",4);
      }
      puVar16 = (undefined8 *)FUN_1402e2c84(0x28);
      local_e8 = puVar16;
      uVar11 = FUN_14024cf70(local_98,local_a8);
      puVar10 = (undefined8 *)FUN_14002c170(&local_b0,uVar11,&local_f0);
      uVar11 = *puVar10;
      *puVar16 = CRecognisedDataOneFileImpl::vftable;
      puVar16[1] = param_3;
      FUN_140008d70(puVar16 + 2,uVar11);
      puVar16[3] = (ulonglong)local_80;
      *(undefined1 *)(puVar16 + 4) = 0;
      LOCK();
      piVar2 = (int *)(local_b0 + -8);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      LOCK();
      piVar2 = (int *)(local_a8[0] + -8);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      LOCK();
      plVar14 = local_f0 + -1;
      lVar9 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar9 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      lVar9 = local_c8;
    }
  }
LAB_14027dfff:
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  FUN_140071d40(&local_78);
  LOCK();
  piVar2 = (int *)(local_88 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  FUN_140026670(local_98);
  return puVar16;
}


// ---- function FUN_14027d910 @ 14027d910 (xref 14027da00)

/* WARNING: Removing unreachable block (ram,0x00014027d98a) */
/* WARNING: Removing unreachable block (ram,0x00014027d99e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14027d910(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  LPWSTR pWVar17;
  int iVar18;
  undefined4 extraout_XMM0_Da;
  LPWSTR pWVar19;
  undefined4 uVar20;
  int local_f4;
  longlong *local_f0;
  undefined8 *local_e8;
  uint local_e0 [2];
  LPWSTR local_d8;
  int local_d0;
  uint uStack_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8 [2];
  undefined1 local_98 [16];
  longlong local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  
  local_58 = 0xfffffffffffffffe;
  puVar16 = (undefined8 *)0x0;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar17 = (LPWSTR)(puVar10 + 3);
  iVar8 = 0;
  pWVar19 = (LPWSTR)0x0;
  local_d8 = pWVar17;
  iVar7 = MultiByteToWideChar(0,0,"CTiffDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar7 = iVar7 + -1;
  if (iVar7 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar17 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar17 = (LPWSTR)(lVar9 + 0x18);
        local_d8 = pWVar17;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar7 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_d8,iVar7);
      pWVar17 = local_d8;
    }
    pWVar19 = pWVar17;
    iVar8 = iVar7;
    MultiByteToWideChar(0,0,"CTiffDataType::Validate",-1,pWVar17,iVar7);
    if (*(int *)(pWVar17 + -6) < iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar17 + -8) = iVar7;
    pWVar17[iVar7] = L'\0';
  }
  pWVar1 = pWVar17 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_c0 = lVar9 + 0x18;
  uVar20 = 4;
  iVar7 = *(int *)(pWVar17 + -8);
  local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,iVar7);
  iVar18 = iVar7 + 2;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar18 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_c0,iVar18);
    iVar7 = (int)local_e8;
  }
  lVar9 = local_c0;
  FUN_140008b60(local_c0,(longlong)iVar7,pWVar17,iVar7,pWVar19,iVar8,uVar20);
  puVar3 = (undefined4 *)(lVar9 + (longlong)iVar7 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar18;
  *(undefined2 *)(lVar9 + 4 + (longlong)(int)local_e8 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar13 == 0)) {
    uVar11 = FUN_140009200();
    lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_b8 = lVar13 + 0x18;
  uVar20 = 0xc;
  iVar7 = *(int *)(lVar9 + -0x10);
  local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,iVar7);
  iVar18 = iVar7 + 0xb;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar13 + 0xc) - iVar18 | 1U - *(int *)(lVar13 + 0x10)) < 0) {
    FUN_140008ae0(&local_b8,iVar18);
    iVar7 = (int)local_e8;
  }
  lVar13 = local_b8;
  FUN_140008b60(local_b8,(longlong)iVar7,lVar9,iVar7,pWVar19,iVar8,uVar20);
  uVar5 = _UNK_1405cae2c;
  uVar4 = _UNK_1405cae28;
  uVar20 = _UNK_1405cae24;
  puVar3 = (undefined4 *)(lVar13 + (longlong)iVar7 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = _DAT_1405cae20;
    puVar3[1] = uVar20;
    puVar3[2] = uVar4;
    puVar3[3] = uVar5;
    puVar3[4] = DAT_1405cae30;
    *(undefined2 *)(puVar3 + 5) = DAT_1405cae34;
  }
  if (*(int *)(lVar13 + -0xc) < (int)local_e8 + 0xb) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar13 + -0x10) = (int)local_e8 + 0xb;
  *(undefined2 *)(lVar13 + 0x16 + (longlong)(int)local_e8 * 2) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,lVar13);
  LOCK();
  piVar2 = (int *)(lVar13 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar17 = pWVar17 + -4;
  iVar8 = *(int *)pWVar17;
  *(int *)pWVar17 = *(int *)pWVar17 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140207690(local_98);
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_88 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  local_88 = local_88 + 0x18;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = param_1 + 8;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  lVar9 = lVar9 + 0x18;
  cVar6 = '\0';
  local_c8 = lVar9;
  iVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_d0,8);
  if (-1 < iVar8) {
    if (local_d0 != DAT_1405c3cd4) {
      if (local_d0 != DAT_1405c3cd8) goto LAB_14027dfff;
      cVar6 = '\x01';
      uStack_cc = (uStack_cc & 0xff0000 | uStack_cc >> 0x10) >> 8 |
                  (uStack_cc << 0x10 | uStack_cc & 0xff00) << 8;
    }
    uVar20 = extraout_XMM0_Da;
    local_e0[0] = uStack_cc;
    if (0xf < uStack_cc) {
      uVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,8,&local_f4);
      if (cVar6 == '\0') {
        local_f4 = CONCAT22(local_f4._2_2_,(ushort)local_f4 << 8 | (ushort)local_f4 >> 8);
      }
      if (local_f4 == DAT_1405c3cdc) {
        uVar20 = FUN_140008c50(&local_c8,&DAT_1405c3cc8,4);
        lVar9 = local_c8;
      }
    }
    cVar6 = FUN_14021f580(uVar20,local_e0,param_2,cVar6,local_98);
    if (cVar6 != '\0') {
      plVar14 = (longlong *)FUN_140008580(local_88 + -0x18);
      local_f0 = plVar14 + 3;
      if ((int)plVar14[1] == 0) {
        plVar15 = (longlong *)FUN_140008580(lVar9 + -0x18);
        local_50 = plVar15 + 3;
        if (plVar15 != plVar14) {
          if (((int)plVar14[2] < 0) || (*plVar15 != *plVar14)) {
            FUN_140008c50(&local_f0,local_50,(int)plVar15[1]);
          }
          else {
            lVar9 = FUN_140008580(plVar15);
            FUN_1400092d0(plVar14);
            local_f0 = (longlong *)(lVar9 + 0x18);
          }
        }
        LOCK();
        plVar14 = plVar15 + 2;
        lVar9 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar15,plVar15);
        }
      }
      if ((int)local_f0[-2] == 0) {
        FUN_140008c50(&local_f0,L".tif",4);
      }
      puVar16 = (undefined8 *)FUN_1402e2c84(0x28);
      local_e8 = puVar16;
      uVar11 = FUN_14024cf70(local_98,local_a8);
      puVar10 = (undefined8 *)FUN_14002c170(&local_b0,uVar11,&local_f0);
      uVar11 = *puVar10;
      *puVar16 = CRecognisedDataOneFileImpl::vftable;
      puVar16[1] = param_3;
      FUN_140008d70(puVar16 + 2,uVar11);
      puVar16[3] = (ulonglong)local_80;
      *(undefined1 *)(puVar16 + 4) = 0;
      LOCK();
      piVar2 = (int *)(local_b0 + -8);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      LOCK();
      piVar2 = (int *)(local_a8[0] + -8);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      LOCK();
      plVar14 = local_f0 + -1;
      lVar9 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar9 < 2) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      lVar9 = local_c8;
    }
  }
LAB_14027dfff:
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  FUN_140071d40(&local_78);
  LOCK();
  piVar2 = (int *)(local_88 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  FUN_140026670(local_98);
  return puVar16;
}



// ===== string at 1405cb0b8 : CZipFileData::Validate
// ---- function FUN_14027e660 @ 14027e660 (xref 14027e6c0)

/* WARNING: Removing unreachable block (ram,0x00014027e6d4) */
/* WARNING: Removing unreachable block (ram,0x00014027e6e8) */

undefined8 * FUN_14027e660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  LPWSTR pWVar16;
  longlong *plVar17;
  int iVar18;
  undefined8 *puVar19;
  LPWSTR pWVar20;
  int iVar21;
  undefined4 uVar22;
  LPWSTR local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined *local_70;
  longlong *local_68;
  
  local_80 = 0xfffffffffffffffe;
  lVar10 = FUN_140009200();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar11 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar10);
  pWVar16 = (LPWSTR)(puVar11 + 3);
  iVar21 = 0;
  pWVar20 = (LPWSTR)0x0;
  local_d8 = pWVar16;
  iVar9 = MultiByteToWideChar(0,0,"CZipFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar12 = *puVar11;
    if (*(int *)(puVar11 + 1) != 0) {
      if (*(int *)(puVar11 + 2) < 0) {
        if (*(int *)((longlong)puVar11 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar11 + 1) = 0;
        *pWVar16 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar11 + 2);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
        pWVar16 = (LPWSTR)(lVar10 + 0x18);
        local_d8 = pWVar16;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar11 + 0xc) - iVar9 | 1U - *(int *)(puVar11 + 2)) < 0) {
      FUN_140008ae0(&local_d8,iVar9);
      pWVar16 = local_d8;
    }
    pWVar20 = pWVar16;
    iVar21 = iVar9;
    MultiByteToWideChar(0,0,"CZipFileData::Validate",-1,pWVar16,iVar9);
    if (*(int *)(pWVar16 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar16 + -8) = iVar9;
    pWVar16[iVar9] = L'\0';
  }
  pWVar1 = pWVar16 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar10 == 0)) {
    uVar12 = FUN_140009200();
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_c0 = lVar10 + 0x18;
  uVar22 = 1;
  iVar9 = *(int *)(pWVar16 + -8);
  iVar18 = iVar9 + 2;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar10 + 0xc) - iVar18 | 1U - *(int *)(lVar10 + 0x10)) < 0) {
    FUN_140008ae0(&local_c0,iVar18);
  }
  lVar10 = local_c0;
  FUN_140008b60(local_c0,(longlong)iVar9,pWVar16,iVar9,pWVar20,iVar21,uVar22);
  puVar4 = (undefined4 *)(lVar10 + (longlong)iVar9 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar10 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar10 + -0x10) = iVar18;
  *(undefined2 *)(lVar10 + 4 + (longlong)iVar9 * 2) = 0;
  if ((*(longlong *)(lVar10 + -0x18) == 0) ||
     (lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar14 == 0)) {
    uVar12 = FUN_140009200();
    lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_b8 = lVar14 + 0x18;
  uVar22 = 3;
  iVar9 = *(int *)(lVar10 + -0x10);
  if (iVar9 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar14 + 0xc) - (iVar9 + 10) | 1U - *(int *)(lVar14 + 0x10)) < 0) {
    FUN_140008ae0(&local_b8);
  }
  lVar14 = local_b8;
  FUN_140008b60(local_b8,(longlong)iVar9,lVar10,iVar9,pWVar20,iVar21,uVar22);
  uVar7 = u_Trying_Zip_1405cb0d0._12_4_;
  uVar6 = u_Trying_Zip_1405cb0d0._8_4_;
  uVar22 = u_Trying_Zip_1405cb0d0._4_4_;
  pwVar5 = (wchar_t *)(lVar14 + (longlong)iVar9 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Zip_1405cb0d0._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar22;
    *(undefined4 *)(pwVar5 + 4) = uVar6;
    *(undefined4 *)(pwVar5 + 6) = uVar7;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Zip_1405cb0d0._16_4_;
  }
  if (*(int *)(lVar14 + -0xc) < iVar9 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar14 + -0x10) = iVar9 + 10;
  *(undefined2 *)(lVar14 + 0x14 + (longlong)iVar9 * 2) = 0;
  uVar12 = FUN_140040170();
  FUN_140041bc0(uVar12,700,lVar14);
  LOCK();
  piVar2 = (int *)(lVar14 + -8);
  iVar21 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar10 + -8);
  iVar21 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar10 + -0x18),lVar10 + -0x18);
  }
  LOCK();
  pWVar16 = pWVar16 + -4;
  iVar21 = *(int *)pWVar16;
  *(int *)pWVar16 = *(int *)pWVar16 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar11 = (undefined8 *)FUN_1402e2c84(0x58);
  local_d0 = puVar11;
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
  *(undefined4 *)(puVar11 + 1) = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  *(undefined1 *)(puVar11 + 7) = 0;
  *puVar11 = ATL::CComObject<CStreamImplBase>::vftable;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  *puVar11 = CStreamImplRandom::vftable;
  puVar11[8] = param_2;
  puVar11[9] = 0;
  if (lVar10 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
  }
  puVar11[10] = uVar12;
  local_78 = puVar11;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11);
  FUN_1402937c0(&local_a0);
  local_b0 = &local_a0;
  cVar8 = FUN_14001d320(&local_b0);
  if (cVar8 == '\0') {
    local_68 = local_b0;
    local_70 = &DAT_1405a3481;
  }
  else {
    local_70 = (undefined *)0x0;
  }
  local_d0 = puVar11;
  uVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11);
  cVar8 = FUN_140294f80(uVar22,&local_d0,&local_70);
  if (cVar8 == '\0') {
    puVar19 = (undefined8 *)0x0;
  }
  else {
    local_a8 = 0;
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11,0,1,&local_a8);
    FUN_140008d70(&local_c8,local_a0);
    if (*(int *)(local_c8 + -0x10) == 0) {
      FUN_140008c50(&local_c8,L".zip",4);
    }
    puVar19 = (undefined8 *)FUN_1402e2c84(0x28);
    uVar12 = local_a8;
    *puVar19 = CRecognisedDataOneFileImpl::vftable;
    puVar19[1] = param_3;
    FUN_140008d70(puVar19 + 2,local_c8);
    puVar19[3] = uVar12;
    *(undefined1 *)(puVar19 + 4) = 1;
    LOCK();
    piVar2 = (int *)(local_c8 + -8);
    iVar21 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar21 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  if (local_98 != (longlong *)0x0) {
    if (local_98 != plStack_90) {
      plVar17 = local_98 + 1;
      do {
        if (*plVar17 != 0) {
          FUN_140008510();
        }
        plVar3 = plVar17 + 1;
        plVar17 = plVar17 + 2;
      } while (plVar3 != plStack_90);
    }
    uVar15 = local_88 - (longlong)local_98 & 0xfffffffffffffff0;
    if (0xfff < uVar15) {
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - local_98[-1]))) {
                    /* WARNING: Subroutine does not return */
        FUN_14033bbe4(local_98[-1],uVar15 + 0x27);
      }
    }
    _free_base();
    local_98 = (longlong *)0x0;
    plStack_90 = (longlong *)0x0;
    local_88 = 0;
  }
  LOCK();
  piVar2 = (int *)(local_a0 + -8);
  iVar21 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11);
  return puVar19;
}


// ---- function FUN_14027e660 @ 14027e660 (xref 14027e70c)

/* WARNING: Removing unreachable block (ram,0x00014027e6d4) */
/* WARNING: Removing unreachable block (ram,0x00014027e6e8) */

undefined8 * FUN_14027e660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  LPWSTR pWVar16;
  longlong *plVar17;
  int iVar18;
  undefined8 *puVar19;
  LPWSTR pWVar20;
  int iVar21;
  undefined4 uVar22;
  LPWSTR local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined *local_70;
  longlong *local_68;
  
  local_80 = 0xfffffffffffffffe;
  lVar10 = FUN_140009200();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar11 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar10);
  pWVar16 = (LPWSTR)(puVar11 + 3);
  iVar21 = 0;
  pWVar20 = (LPWSTR)0x0;
  local_d8 = pWVar16;
  iVar9 = MultiByteToWideChar(0,0,"CZipFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar12 = *puVar11;
    if (*(int *)(puVar11 + 1) != 0) {
      if (*(int *)(puVar11 + 2) < 0) {
        if (*(int *)((longlong)puVar11 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar11 + 1) = 0;
        *pWVar16 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar11 + 2);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
        pWVar16 = (LPWSTR)(lVar10 + 0x18);
        local_d8 = pWVar16;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar11 + 0xc) - iVar9 | 1U - *(int *)(puVar11 + 2)) < 0) {
      FUN_140008ae0(&local_d8,iVar9);
      pWVar16 = local_d8;
    }
    pWVar20 = pWVar16;
    iVar21 = iVar9;
    MultiByteToWideChar(0,0,"CZipFileData::Validate",-1,pWVar16,iVar9);
    if (*(int *)(pWVar16 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar16 + -8) = iVar9;
    pWVar16[iVar9] = L'\0';
  }
  pWVar1 = pWVar16 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar10 == 0)) {
    uVar12 = FUN_140009200();
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_c0 = lVar10 + 0x18;
  uVar22 = 1;
  iVar9 = *(int *)(pWVar16 + -8);
  iVar18 = iVar9 + 2;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar10 + 0xc) - iVar18 | 1U - *(int *)(lVar10 + 0x10)) < 0) {
    FUN_140008ae0(&local_c0,iVar18);
  }
  lVar10 = local_c0;
  FUN_140008b60(local_c0,(longlong)iVar9,pWVar16,iVar9,pWVar20,iVar21,uVar22);
  puVar4 = (undefined4 *)(lVar10 + (longlong)iVar9 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar10 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar10 + -0x10) = iVar18;
  *(undefined2 *)(lVar10 + 4 + (longlong)iVar9 * 2) = 0;
  if ((*(longlong *)(lVar10 + -0x18) == 0) ||
     (lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar14 == 0)) {
    uVar12 = FUN_140009200();
    lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_b8 = lVar14 + 0x18;
  uVar22 = 3;
  iVar9 = *(int *)(lVar10 + -0x10);
  if (iVar9 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar14 + 0xc) - (iVar9 + 10) | 1U - *(int *)(lVar14 + 0x10)) < 0) {
    FUN_140008ae0(&local_b8);
  }
  lVar14 = local_b8;
  FUN_140008b60(local_b8,(longlong)iVar9,lVar10,iVar9,pWVar20,iVar21,uVar22);
  uVar7 = u_Trying_Zip_1405cb0d0._12_4_;
  uVar6 = u_Trying_Zip_1405cb0d0._8_4_;
  uVar22 = u_Trying_Zip_1405cb0d0._4_4_;
  pwVar5 = (wchar_t *)(lVar14 + (longlong)iVar9 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Zip_1405cb0d0._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar22;
    *(undefined4 *)(pwVar5 + 4) = uVar6;
    *(undefined4 *)(pwVar5 + 6) = uVar7;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Zip_1405cb0d0._16_4_;
  }
  if (*(int *)(lVar14 + -0xc) < iVar9 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar14 + -0x10) = iVar9 + 10;
  *(undefined2 *)(lVar14 + 0x14 + (longlong)iVar9 * 2) = 0;
  uVar12 = FUN_140040170();
  FUN_140041bc0(uVar12,700,lVar14);
  LOCK();
  piVar2 = (int *)(lVar14 + -8);
  iVar21 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar10 + -8);
  iVar21 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar10 + -0x18),lVar10 + -0x18);
  }
  LOCK();
  pWVar16 = pWVar16 + -4;
  iVar21 = *(int *)pWVar16;
  *(int *)pWVar16 = *(int *)pWVar16 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar11 = (undefined8 *)FUN_1402e2c84(0x58);
  local_d0 = puVar11;
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
  *(undefined4 *)(puVar11 + 1) = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  *(undefined1 *)(puVar11 + 7) = 0;
  *puVar11 = ATL::CComObject<CStreamImplBase>::vftable;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  *puVar11 = CStreamImplRandom::vftable;
  puVar11[8] = param_2;
  puVar11[9] = 0;
  if (lVar10 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
  }
  puVar11[10] = uVar12;
  local_78 = puVar11;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11);
  FUN_1402937c0(&local_a0);
  local_b0 = &local_a0;
  cVar8 = FUN_14001d320(&local_b0);
  if (cVar8 == '\0') {
    local_68 = local_b0;
    local_70 = &DAT_1405a3481;
  }
  else {
    local_70 = (undefined *)0x0;
  }
  local_d0 = puVar11;
  uVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11);
  cVar8 = FUN_140294f80(uVar22,&local_d0,&local_70);
  if (cVar8 == '\0') {
    puVar19 = (undefined8 *)0x0;
  }
  else {
    local_a8 = 0;
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11,0,1,&local_a8);
    FUN_140008d70(&local_c8,local_a0);
    if (*(int *)(local_c8 + -0x10) == 0) {
      FUN_140008c50(&local_c8,L".zip",4);
    }
    puVar19 = (undefined8 *)FUN_1402e2c84(0x28);
    uVar12 = local_a8;
    *puVar19 = CRecognisedDataOneFileImpl::vftable;
    puVar19[1] = param_3;
    FUN_140008d70(puVar19 + 2,local_c8);
    puVar19[3] = uVar12;
    *(undefined1 *)(puVar19 + 4) = 1;
    LOCK();
    piVar2 = (int *)(local_c8 + -8);
    iVar21 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar21 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  if (local_98 != (longlong *)0x0) {
    if (local_98 != plStack_90) {
      plVar17 = local_98 + 1;
      do {
        if (*plVar17 != 0) {
          FUN_140008510();
        }
        plVar3 = plVar17 + 1;
        plVar17 = plVar17 + 2;
      } while (plVar3 != plStack_90);
    }
    uVar15 = local_88 - (longlong)local_98 & 0xfffffffffffffff0;
    if (0xfff < uVar15) {
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - local_98[-1]))) {
                    /* WARNING: Subroutine does not return */
        FUN_14033bbe4(local_98[-1],uVar15 + 0x27);
      }
    }
    _free_base();
    local_98 = (longlong *)0x0;
    plStack_90 = (longlong *)0x0;
    local_88 = 0;
  }
  LOCK();
  piVar2 = (int *)(local_a0 + -8);
  iVar21 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11);
  return puVar19;
}


// ---- function FUN_14027e660 @ 14027e660 (xref 14027e74c)

/* WARNING: Removing unreachable block (ram,0x00014027e6d4) */
/* WARNING: Removing unreachable block (ram,0x00014027e6e8) */

undefined8 * FUN_14027e660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  LPWSTR pWVar16;
  longlong *plVar17;
  int iVar18;
  undefined8 *puVar19;
  LPWSTR pWVar20;
  int iVar21;
  undefined4 uVar22;
  LPWSTR local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined *local_70;
  longlong *local_68;
  
  local_80 = 0xfffffffffffffffe;
  lVar10 = FUN_140009200();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar11 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar10);
  pWVar16 = (LPWSTR)(puVar11 + 3);
  iVar21 = 0;
  pWVar20 = (LPWSTR)0x0;
  local_d8 = pWVar16;
  iVar9 = MultiByteToWideChar(0,0,"CZipFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar12 = *puVar11;
    if (*(int *)(puVar11 + 1) != 0) {
      if (*(int *)(puVar11 + 2) < 0) {
        if (*(int *)((longlong)puVar11 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar11 + 1) = 0;
        *pWVar16 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar11 + 2);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
        pWVar16 = (LPWSTR)(lVar10 + 0x18);
        local_d8 = pWVar16;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar11 + 0xc) - iVar9 | 1U - *(int *)(puVar11 + 2)) < 0) {
      FUN_140008ae0(&local_d8,iVar9);
      pWVar16 = local_d8;
    }
    pWVar20 = pWVar16;
    iVar21 = iVar9;
    MultiByteToWideChar(0,0,"CZipFileData::Validate",-1,pWVar16,iVar9);
    if (*(int *)(pWVar16 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar16 + -8) = iVar9;
    pWVar16[iVar9] = L'\0';
  }
  pWVar1 = pWVar16 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar10 == 0)) {
    uVar12 = FUN_140009200();
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_c0 = lVar10 + 0x18;
  uVar22 = 1;
  iVar9 = *(int *)(pWVar16 + -8);
  iVar18 = iVar9 + 2;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar10 + 0xc) - iVar18 | 1U - *(int *)(lVar10 + 0x10)) < 0) {
    FUN_140008ae0(&local_c0,iVar18);
  }
  lVar10 = local_c0;
  FUN_140008b60(local_c0,(longlong)iVar9,pWVar16,iVar9,pWVar20,iVar21,uVar22);
  puVar4 = (undefined4 *)(lVar10 + (longlong)iVar9 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar10 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar10 + -0x10) = iVar18;
  *(undefined2 *)(lVar10 + 4 + (longlong)iVar9 * 2) = 0;
  if ((*(longlong *)(lVar10 + -0x18) == 0) ||
     (lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar14 == 0)) {
    uVar12 = FUN_140009200();
    lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_b8 = lVar14 + 0x18;
  uVar22 = 3;
  iVar9 = *(int *)(lVar10 + -0x10);
  if (iVar9 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar14 + 0xc) - (iVar9 + 10) | 1U - *(int *)(lVar14 + 0x10)) < 0) {
    FUN_140008ae0(&local_b8);
  }
  lVar14 = local_b8;
  FUN_140008b60(local_b8,(longlong)iVar9,lVar10,iVar9,pWVar20,iVar21,uVar22);
  uVar7 = u_Trying_Zip_1405cb0d0._12_4_;
  uVar6 = u_Trying_Zip_1405cb0d0._8_4_;
  uVar22 = u_Trying_Zip_1405cb0d0._4_4_;
  pwVar5 = (wchar_t *)(lVar14 + (longlong)iVar9 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Zip_1405cb0d0._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar22;
    *(undefined4 *)(pwVar5 + 4) = uVar6;
    *(undefined4 *)(pwVar5 + 6) = uVar7;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Zip_1405cb0d0._16_4_;
  }
  if (*(int *)(lVar14 + -0xc) < iVar9 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar14 + -0x10) = iVar9 + 10;
  *(undefined2 *)(lVar14 + 0x14 + (longlong)iVar9 * 2) = 0;
  uVar12 = FUN_140040170();
  FUN_140041bc0(uVar12,700,lVar14);
  LOCK();
  piVar2 = (int *)(lVar14 + -8);
  iVar21 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar10 + -8);
  iVar21 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar10 + -0x18),lVar10 + -0x18);
  }
  LOCK();
  pWVar16 = pWVar16 + -4;
  iVar21 = *(int *)pWVar16;
  *(int *)pWVar16 = *(int *)pWVar16 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar11 = (undefined8 *)FUN_1402e2c84(0x58);
  local_d0 = puVar11;
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
  *(undefined4 *)(puVar11 + 1) = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  *(undefined1 *)(puVar11 + 7) = 0;
  *puVar11 = ATL::CComObject<CStreamImplBase>::vftable;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  *puVar11 = CStreamImplRandom::vftable;
  puVar11[8] = param_2;
  puVar11[9] = 0;
  if (lVar10 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
  }
  puVar11[10] = uVar12;
  local_78 = puVar11;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11);
  FUN_1402937c0(&local_a0);
  local_b0 = &local_a0;
  cVar8 = FUN_14001d320(&local_b0);
  if (cVar8 == '\0') {
    local_68 = local_b0;
    local_70 = &DAT_1405a3481;
  }
  else {
    local_70 = (undefined *)0x0;
  }
  local_d0 = puVar11;
  uVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11);
  cVar8 = FUN_140294f80(uVar22,&local_d0,&local_70);
  if (cVar8 == '\0') {
    puVar19 = (undefined8 *)0x0;
  }
  else {
    local_a8 = 0;
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11,0,1,&local_a8);
    FUN_140008d70(&local_c8,local_a0);
    if (*(int *)(local_c8 + -0x10) == 0) {
      FUN_140008c50(&local_c8,L".zip",4);
    }
    puVar19 = (undefined8 *)FUN_1402e2c84(0x28);
    uVar12 = local_a8;
    *puVar19 = CRecognisedDataOneFileImpl::vftable;
    puVar19[1] = param_3;
    FUN_140008d70(puVar19 + 2,local_c8);
    puVar19[3] = uVar12;
    *(undefined1 *)(puVar19 + 4) = 1;
    LOCK();
    piVar2 = (int *)(local_c8 + -8);
    iVar21 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar21 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  if (local_98 != (longlong *)0x0) {
    if (local_98 != plStack_90) {
      plVar17 = local_98 + 1;
      do {
        if (*plVar17 != 0) {
          FUN_140008510();
        }
        plVar3 = plVar17 + 1;
        plVar17 = plVar17 + 2;
      } while (plVar3 != plStack_90);
    }
    uVar15 = local_88 - (longlong)local_98 & 0xfffffffffffffff0;
    if (0xfff < uVar15) {
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - local_98[-1]))) {
                    /* WARNING: Subroutine does not return */
        FUN_14033bbe4(local_98[-1],uVar15 + 0x27);
      }
    }
    _free_base();
    local_98 = (longlong *)0x0;
    plStack_90 = (longlong *)0x0;
    local_88 = 0;
  }
  LOCK();
  piVar2 = (int *)(local_a0 + -8);
  iVar21 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar21 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(puVar11);
  return puVar19;
}



// ===== string at 1405cb1a0 : CRiffDataType::Validate
// ---- function FUN_14027f810 @ 14027f810 (xref 14027f87f)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014027f893) */
/* WARNING: Removing unreachable block (ram,0x00014027f8a7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14027f810(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  LPWSTR pWVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar20;
  undefined1 auStackY_148 [32];
  undefined8 local_110;
  longlong local_108;
  int local_100;
  LPWSTR local_f8;
  longlong local_f0;
  char local_e8 [4];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  longlong local_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8;
  longlong local_c0;
  char local_b8 [4];
  undefined8 local_b4;
  undefined4 local_a8 [2];
  uint *local_a0;
  uint *local_98;
  undefined4 local_90 [2];
  longlong local_88;
  undefined8 *local_80;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_60;
  int local_5c;
  uint local_58;
  ulonglong local_50;
  
  local_78 = 0xfffffffffffffffe;
  local_50 = DAT_1406f60c0 ^ (ulonglong)auStackY_148;
  lVar7 = FUN_140009200();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar8 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar7);
  pWVar13 = (LPWSTR)(puVar8 + 3);
  local_f8 = pWVar13;
  iVar17 = MultiByteToWideChar(0,0,"CRiffDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar17 = iVar17 + -1;
  if (iVar17 < 1) {
    uVar9 = *puVar8;
    if (*(int *)(puVar8 + 1) != 0) {
      if (*(int *)(puVar8 + 2) < 0) {
        if (*(int *)((longlong)puVar8 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar8 + 1) = 0;
        *pWVar13 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar8 + 2);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar17 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar9);
        pWVar13 = (LPWSTR)(lVar7 + 0x18);
        local_f8 = pWVar13;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar8 + 0xc) - iVar17 | 1U - *(int *)(puVar8 + 2)) < 0) {
      FUN_140008ae0(&local_f8,iVar17);
      pWVar13 = local_f8;
    }
    MultiByteToWideChar(0,0,"CRiffDataType::Validate",-1,pWVar13,iVar17);
    if (*(int *)(pWVar13 + -6) < iVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar13 + -8) = iVar17;
    pWVar13[iVar17] = L'\0';
  }
  pWVar1 = pWVar13 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar7 == 0)) {
    uVar9 = FUN_140009200();
    lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar9);
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_c0 = lVar7 + 0x18;
  iVar17 = *(int *)(pWVar13 + -8);
  lVar18 = (longlong)iVar17;
  iVar19 = iVar17 + 2;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar7 + 0xc) - iVar19 | 1U - *(int *)(lVar7 + 0x10)) < 0) {
    FUN_140008ae0(&local_c0,iVar19);
  }
  lVar7 = local_c0;
  FUN_140008b60(local_c0,lVar18,pWVar13,iVar17);
  puVar3 = (undefined4 *)(lVar7 + lVar18 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar10 = __doserrno();
    *puVar10 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar7 + -0xc) < iVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar7 + -0x10) = iVar19;
  *(undefined2 *)(lVar7 + 4 + lVar18 * 2) = 0;
  if ((*(longlong *)(lVar7 + -0x18) == 0) ||
     (lVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar18 == 0)) {
    uVar9 = FUN_140009200();
    lVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar9);
  }
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_f0 = lVar18 + 0x18;
  local_100 = *(int *)(lVar7 + -0x10);
  iVar17 = local_100 + 0xb;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar18 + 0xc) - iVar17 | 1U - *(int *)(lVar18 + 0x10)) < 0) {
    FUN_140008ae0(&local_f0,iVar17);
  }
  lVar18 = local_f0;
  lVar16 = (longlong)local_100;
  FUN_140008b60(local_f0,lVar16,lVar7,local_100);
  uVar5 = _UNK_1405cb1c4;
  uVar4 = _UNK_1405cb1c0;
  uVar20 = _UNK_1405cb1bc;
  puVar3 = (undefined4 *)(lVar18 + lVar16 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar10 = __doserrno();
    *puVar10 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = _DAT_1405cb1b8;
    puVar3[1] = uVar20;
    puVar3[2] = uVar4;
    puVar3[3] = uVar5;
    puVar3[4] = DAT_1405cb1c8;
    *(undefined2 *)(puVar3 + 5) = DAT_1405cb1cc;
  }
  if (*(int *)(lVar18 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar18 + -0x10) = iVar17;
  *(undefined2 *)(lVar18 + 0x16 + (longlong)local_100 * 2) = 0;
  uVar9 = FUN_140040170();
  FUN_140041bc0(uVar9,700,lVar18);
  LOCK();
  piVar2 = (int *)(lVar18 + -8);
  iVar17 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar7 + -8);
  iVar17 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar7 + -0x18),lVar7 + -0x18);
  }
  LOCK();
  pWVar13 = pWVar13 + -4;
  iVar17 = *(int *)pWVar13;
  *(int *)pWVar13 = *(int *)pWVar13 + -1;
  UNLOCK();
  if (iVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_108 = 0;
  local_110 = param_2;
  iVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_60,0xc);
  local_108 = local_108 + 0xc;
  if ((-1 < iVar17) && (local_60 == s_RIFFLISTAVIX_1405eff60._0_4_)) {
    puVar8 = *(undefined8 **)(param_1 + 8);
    cVar6 = *(char *)((longlong)puVar8[1] + 0x19);
    puVar15 = puVar8;
    puVar14 = (undefined8 *)puVar8[1];
    while (cVar6 == '\0') {
      if (*(uint *)(puVar14 + 4) < local_58) {
        puVar11 = (undefined8 *)puVar14[2];
        puVar14 = puVar15;
      }
      else {
        puVar11 = (undefined8 *)*puVar14;
      }
      puVar15 = puVar14;
      puVar14 = puVar11;
      cVar6 = *(char *)((longlong)puVar11 + 0x19);
    }
    if ((puVar15 == puVar8) || (local_58 < *(uint *)(puVar15 + 4))) {
      puVar15 = puVar8;
    }
    if (puVar8 != puVar15) {
      local_98 = (uint *)puVar15[7];
      local_a0 = (uint *)puVar15[6];
      local_a8[0] = 0;
      if ((((local_a0 != local_98) && (*local_a0 == local_58)) && (local_a0[1] == 1)) &&
         (local_a0[2] == 0)) {
        local_a0 = local_a0 + 3;
      }
      cVar6 = FUN_14027ff20(local_5c + -4,&local_110,local_a8);
      if ((cVar6 != '\0') && (local_98 == local_a0)) {
        if (local_58 == s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8._0_4_) {
          local_d8 = 0;
          puStack_d0 = (undefined8 *)0x0;
          local_c8 = (undefined8 *)0x0;
          local_b8[0] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[4];
          local_b8[1] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[5];
          local_b8[2] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[6];
          local_b8[3] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[7];
          local_b4 = 2;
          FUN_140280530(&local_d8,0,local_b8);
          local_e8[0] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[8];
          local_e8[1] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[9];
          local_e8[2] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[10];
          local_e8[3] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[0xb];
          uStack_e4 = 2;
          uStack_e0 = 0;
          if (local_c8 == puStack_d0) {
            FUN_140280530(&local_d8,puStack_d0,local_e8);
          }
          else {
            *puStack_d0 = CONCAT44(2,s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8._8_4_);
            *(undefined4 *)(puStack_d0 + 1) = 0;
            puStack_d0 = (undefined8 *)((longlong)puStack_d0 + 0xc);
          }
          puVar14 = local_c8;
          puVar8 = puStack_d0;
          iVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_110,local_108,&local_70,0xc)
          ;
          lVar7 = local_d8;
          uVar20 = extraout_XMM0_Da;
          while (((local_108 = local_108 + 0xc, -1 < iVar17 &&
                  (local_70 == s_RIFFLISTAVIX_1405eff60._0_4_)) &&
                 (local_68 == s_RIFFLISTAVIX_1405eff60._8_4_))) {
            local_90[0] = 0;
            local_88 = lVar7;
            local_80 = puVar8;
            cVar6 = FUN_14027ff20(local_6c + -4,&local_110,local_90);
            uVar20 = extraout_XMM0_Da_00;
            if (cVar6 == '\0') break;
            iVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                               (local_110,local_108,&local_70,0xc);
            uVar20 = extraout_XMM0_Da_01;
          }
          if (lVar7 != 0) {
            uVar12 = (((longlong)puVar14 - lVar7) / 0xc) * 0xc;
            lVar18 = lVar7;
            if (0xfff < uVar12) {
              lVar18 = *(longlong *)(lVar7 + -8);
              if (0x1f < (lVar7 - lVar18) - 8U) {
                    /* WARNING: Subroutine does not return */
                FUN_14033bbe4(uVar20,uVar12 + 0x27);
              }
            }
            _free_base(lVar18);
          }
        }
        local_f0 = FUN_1402e2c84(0x28);
        uVar9 = FUN_14024db10(local_f0,param_3,puVar15[5],0);
        return uVar9;
      }
    }
  }
  return 0;
}


// ---- function FUN_14027f810 @ 14027f810 (xref 14027f8cd)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014027f893) */
/* WARNING: Removing unreachable block (ram,0x00014027f8a7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14027f810(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  LPWSTR pWVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar20;
  undefined1 auStackY_148 [32];
  undefined8 local_110;
  longlong local_108;
  int local_100;
  LPWSTR local_f8;
  longlong local_f0;
  char local_e8 [4];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  longlong local_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8;
  longlong local_c0;
  char local_b8 [4];
  undefined8 local_b4;
  undefined4 local_a8 [2];
  uint *local_a0;
  uint *local_98;
  undefined4 local_90 [2];
  longlong local_88;
  undefined8 *local_80;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_60;
  int local_5c;
  uint local_58;
  ulonglong local_50;
  
  local_78 = 0xfffffffffffffffe;
  local_50 = DAT_1406f60c0 ^ (ulonglong)auStackY_148;
  lVar7 = FUN_140009200();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar8 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar7);
  pWVar13 = (LPWSTR)(puVar8 + 3);
  local_f8 = pWVar13;
  iVar17 = MultiByteToWideChar(0,0,"CRiffDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar17 = iVar17 + -1;
  if (iVar17 < 1) {
    uVar9 = *puVar8;
    if (*(int *)(puVar8 + 1) != 0) {
      if (*(int *)(puVar8 + 2) < 0) {
        if (*(int *)((longlong)puVar8 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar8 + 1) = 0;
        *pWVar13 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar8 + 2);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar17 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar9);
        pWVar13 = (LPWSTR)(lVar7 + 0x18);
        local_f8 = pWVar13;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar8 + 0xc) - iVar17 | 1U - *(int *)(puVar8 + 2)) < 0) {
      FUN_140008ae0(&local_f8,iVar17);
      pWVar13 = local_f8;
    }
    MultiByteToWideChar(0,0,"CRiffDataType::Validate",-1,pWVar13,iVar17);
    if (*(int *)(pWVar13 + -6) < iVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar13 + -8) = iVar17;
    pWVar13[iVar17] = L'\0';
  }
  pWVar1 = pWVar13 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar7 == 0)) {
    uVar9 = FUN_140009200();
    lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar9);
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_c0 = lVar7 + 0x18;
  iVar17 = *(int *)(pWVar13 + -8);
  lVar18 = (longlong)iVar17;
  iVar19 = iVar17 + 2;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar7 + 0xc) - iVar19 | 1U - *(int *)(lVar7 + 0x10)) < 0) {
    FUN_140008ae0(&local_c0,iVar19);
  }
  lVar7 = local_c0;
  FUN_140008b60(local_c0,lVar18,pWVar13,iVar17);
  puVar3 = (undefined4 *)(lVar7 + lVar18 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar10 = __doserrno();
    *puVar10 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar7 + -0xc) < iVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar7 + -0x10) = iVar19;
  *(undefined2 *)(lVar7 + 4 + lVar18 * 2) = 0;
  if ((*(longlong *)(lVar7 + -0x18) == 0) ||
     (lVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar18 == 0)) {
    uVar9 = FUN_140009200();
    lVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar9);
  }
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_f0 = lVar18 + 0x18;
  local_100 = *(int *)(lVar7 + -0x10);
  iVar17 = local_100 + 0xb;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar18 + 0xc) - iVar17 | 1U - *(int *)(lVar18 + 0x10)) < 0) {
    FUN_140008ae0(&local_f0,iVar17);
  }
  lVar18 = local_f0;
  lVar16 = (longlong)local_100;
  FUN_140008b60(local_f0,lVar16,lVar7,local_100);
  uVar5 = _UNK_1405cb1c4;
  uVar4 = _UNK_1405cb1c0;
  uVar20 = _UNK_1405cb1bc;
  puVar3 = (undefined4 *)(lVar18 + lVar16 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar10 = __doserrno();
    *puVar10 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = _DAT_1405cb1b8;
    puVar3[1] = uVar20;
    puVar3[2] = uVar4;
    puVar3[3] = uVar5;
    puVar3[4] = DAT_1405cb1c8;
    *(undefined2 *)(puVar3 + 5) = DAT_1405cb1cc;
  }
  if (*(int *)(lVar18 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar18 + -0x10) = iVar17;
  *(undefined2 *)(lVar18 + 0x16 + (longlong)local_100 * 2) = 0;
  uVar9 = FUN_140040170();
  FUN_140041bc0(uVar9,700,lVar18);
  LOCK();
  piVar2 = (int *)(lVar18 + -8);
  iVar17 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar7 + -8);
  iVar17 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar7 + -0x18),lVar7 + -0x18);
  }
  LOCK();
  pWVar13 = pWVar13 + -4;
  iVar17 = *(int *)pWVar13;
  *(int *)pWVar13 = *(int *)pWVar13 + -1;
  UNLOCK();
  if (iVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_108 = 0;
  local_110 = param_2;
  iVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_60,0xc);
  local_108 = local_108 + 0xc;
  if ((-1 < iVar17) && (local_60 == s_RIFFLISTAVIX_1405eff60._0_4_)) {
    puVar8 = *(undefined8 **)(param_1 + 8);
    cVar6 = *(char *)((longlong)puVar8[1] + 0x19);
    puVar15 = puVar8;
    puVar14 = (undefined8 *)puVar8[1];
    while (cVar6 == '\0') {
      if (*(uint *)(puVar14 + 4) < local_58) {
        puVar11 = (undefined8 *)puVar14[2];
        puVar14 = puVar15;
      }
      else {
        puVar11 = (undefined8 *)*puVar14;
      }
      puVar15 = puVar14;
      puVar14 = puVar11;
      cVar6 = *(char *)((longlong)puVar11 + 0x19);
    }
    if ((puVar15 == puVar8) || (local_58 < *(uint *)(puVar15 + 4))) {
      puVar15 = puVar8;
    }
    if (puVar8 != puVar15) {
      local_98 = (uint *)puVar15[7];
      local_a0 = (uint *)puVar15[6];
      local_a8[0] = 0;
      if ((((local_a0 != local_98) && (*local_a0 == local_58)) && (local_a0[1] == 1)) &&
         (local_a0[2] == 0)) {
        local_a0 = local_a0 + 3;
      }
      cVar6 = FUN_14027ff20(local_5c + -4,&local_110,local_a8);
      if ((cVar6 != '\0') && (local_98 == local_a0)) {
        if (local_58 == s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8._0_4_) {
          local_d8 = 0;
          puStack_d0 = (undefined8 *)0x0;
          local_c8 = (undefined8 *)0x0;
          local_b8[0] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[4];
          local_b8[1] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[5];
          local_b8[2] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[6];
          local_b8[3] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[7];
          local_b4 = 2;
          FUN_140280530(&local_d8,0,local_b8);
          local_e8[0] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[8];
          local_e8[1] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[9];
          local_e8[2] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[10];
          local_e8[3] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[0xb];
          uStack_e4 = 2;
          uStack_e0 = 0;
          if (local_c8 == puStack_d0) {
            FUN_140280530(&local_d8,puStack_d0,local_e8);
          }
          else {
            *puStack_d0 = CONCAT44(2,s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8._8_4_);
            *(undefined4 *)(puStack_d0 + 1) = 0;
            puStack_d0 = (undefined8 *)((longlong)puStack_d0 + 0xc);
          }
          puVar14 = local_c8;
          puVar8 = puStack_d0;
          iVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_110,local_108,&local_70,0xc)
          ;
          lVar7 = local_d8;
          uVar20 = extraout_XMM0_Da;
          while (((local_108 = local_108 + 0xc, -1 < iVar17 &&
                  (local_70 == s_RIFFLISTAVIX_1405eff60._0_4_)) &&
                 (local_68 == s_RIFFLISTAVIX_1405eff60._8_4_))) {
            local_90[0] = 0;
            local_88 = lVar7;
            local_80 = puVar8;
            cVar6 = FUN_14027ff20(local_6c + -4,&local_110,local_90);
            uVar20 = extraout_XMM0_Da_00;
            if (cVar6 == '\0') break;
            iVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                               (local_110,local_108,&local_70,0xc);
            uVar20 = extraout_XMM0_Da_01;
          }
          if (lVar7 != 0) {
            uVar12 = (((longlong)puVar14 - lVar7) / 0xc) * 0xc;
            lVar18 = lVar7;
            if (0xfff < uVar12) {
              lVar18 = *(longlong *)(lVar7 + -8);
              if (0x1f < (lVar7 - lVar18) - 8U) {
                    /* WARNING: Subroutine does not return */
                FUN_14033bbe4(uVar20,uVar12 + 0x27);
              }
            }
            _free_base(lVar18);
          }
        }
        local_f0 = FUN_1402e2c84(0x28);
        uVar9 = FUN_14024db10(local_f0,param_3,puVar15[5],0);
        return uVar9;
      }
    }
  }
  return 0;
}


// ---- function FUN_14027f810 @ 14027f810 (xref 14027f90f)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014027f893) */
/* WARNING: Removing unreachable block (ram,0x00014027f8a7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14027f810(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  LPWSTR pWVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar20;
  undefined1 auStackY_148 [32];
  undefined8 local_110;
  longlong local_108;
  int local_100;
  LPWSTR local_f8;
  longlong local_f0;
  char local_e8 [4];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  longlong local_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8;
  longlong local_c0;
  char local_b8 [4];
  undefined8 local_b4;
  undefined4 local_a8 [2];
  uint *local_a0;
  uint *local_98;
  undefined4 local_90 [2];
  longlong local_88;
  undefined8 *local_80;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_60;
  int local_5c;
  uint local_58;
  ulonglong local_50;
  
  local_78 = 0xfffffffffffffffe;
  local_50 = DAT_1406f60c0 ^ (ulonglong)auStackY_148;
  lVar7 = FUN_140009200();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar8 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar7);
  pWVar13 = (LPWSTR)(puVar8 + 3);
  local_f8 = pWVar13;
  iVar17 = MultiByteToWideChar(0,0,"CRiffDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar17 = iVar17 + -1;
  if (iVar17 < 1) {
    uVar9 = *puVar8;
    if (*(int *)(puVar8 + 1) != 0) {
      if (*(int *)(puVar8 + 2) < 0) {
        if (*(int *)((longlong)puVar8 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar8 + 1) = 0;
        *pWVar13 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar8 + 2);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar17 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar9);
        pWVar13 = (LPWSTR)(lVar7 + 0x18);
        local_f8 = pWVar13;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar8 + 0xc) - iVar17 | 1U - *(int *)(puVar8 + 2)) < 0) {
      FUN_140008ae0(&local_f8,iVar17);
      pWVar13 = local_f8;
    }
    MultiByteToWideChar(0,0,"CRiffDataType::Validate",-1,pWVar13,iVar17);
    if (*(int *)(pWVar13 + -6) < iVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar13 + -8) = iVar17;
    pWVar13[iVar17] = L'\0';
  }
  pWVar1 = pWVar13 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar7 == 0)) {
    uVar9 = FUN_140009200();
    lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar9);
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar7 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_c0 = lVar7 + 0x18;
  iVar17 = *(int *)(pWVar13 + -8);
  lVar18 = (longlong)iVar17;
  iVar19 = iVar17 + 2;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar7 + 0xc) - iVar19 | 1U - *(int *)(lVar7 + 0x10)) < 0) {
    FUN_140008ae0(&local_c0,iVar19);
  }
  lVar7 = local_c0;
  FUN_140008b60(local_c0,lVar18,pWVar13,iVar17);
  puVar3 = (undefined4 *)(lVar7 + lVar18 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar10 = __doserrno();
    *puVar10 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar7 + -0xc) < iVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar7 + -0x10) = iVar19;
  *(undefined2 *)(lVar7 + 4 + lVar18 * 2) = 0;
  if ((*(longlong *)(lVar7 + -0x18) == 0) ||
     (lVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar18 == 0)) {
    uVar9 = FUN_140009200();
    lVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar9);
  }
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_f0 = lVar18 + 0x18;
  local_100 = *(int *)(lVar7 + -0x10);
  iVar17 = local_100 + 0xb;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar18 + 0xc) - iVar17 | 1U - *(int *)(lVar18 + 0x10)) < 0) {
    FUN_140008ae0(&local_f0,iVar17);
  }
  lVar18 = local_f0;
  lVar16 = (longlong)local_100;
  FUN_140008b60(local_f0,lVar16,lVar7,local_100);
  uVar5 = _UNK_1405cb1c4;
  uVar4 = _UNK_1405cb1c0;
  uVar20 = _UNK_1405cb1bc;
  puVar3 = (undefined4 *)(lVar18 + lVar16 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar10 = __doserrno();
    *puVar10 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = _DAT_1405cb1b8;
    puVar3[1] = uVar20;
    puVar3[2] = uVar4;
    puVar3[3] = uVar5;
    puVar3[4] = DAT_1405cb1c8;
    *(undefined2 *)(puVar3 + 5) = DAT_1405cb1cc;
  }
  if (*(int *)(lVar18 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar18 + -0x10) = iVar17;
  *(undefined2 *)(lVar18 + 0x16 + (longlong)local_100 * 2) = 0;
  uVar9 = FUN_140040170();
  FUN_140041bc0(uVar9,700,lVar18);
  LOCK();
  piVar2 = (int *)(lVar18 + -8);
  iVar17 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar7 + -8);
  iVar17 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar7 + -0x18),lVar7 + -0x18);
  }
  LOCK();
  pWVar13 = pWVar13 + -4;
  iVar17 = *(int *)pWVar13;
  *(int *)pWVar13 = *(int *)pWVar13 + -1;
  UNLOCK();
  if (iVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_108 = 0;
  local_110 = param_2;
  iVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_60,0xc);
  local_108 = local_108 + 0xc;
  if ((-1 < iVar17) && (local_60 == s_RIFFLISTAVIX_1405eff60._0_4_)) {
    puVar8 = *(undefined8 **)(param_1 + 8);
    cVar6 = *(char *)((longlong)puVar8[1] + 0x19);
    puVar15 = puVar8;
    puVar14 = (undefined8 *)puVar8[1];
    while (cVar6 == '\0') {
      if (*(uint *)(puVar14 + 4) < local_58) {
        puVar11 = (undefined8 *)puVar14[2];
        puVar14 = puVar15;
      }
      else {
        puVar11 = (undefined8 *)*puVar14;
      }
      puVar15 = puVar14;
      puVar14 = puVar11;
      cVar6 = *(char *)((longlong)puVar11 + 0x19);
    }
    if ((puVar15 == puVar8) || (local_58 < *(uint *)(puVar15 + 4))) {
      puVar15 = puVar8;
    }
    if (puVar8 != puVar15) {
      local_98 = (uint *)puVar15[7];
      local_a0 = (uint *)puVar15[6];
      local_a8[0] = 0;
      if ((((local_a0 != local_98) && (*local_a0 == local_58)) && (local_a0[1] == 1)) &&
         (local_a0[2] == 0)) {
        local_a0 = local_a0 + 3;
      }
      cVar6 = FUN_14027ff20(local_5c + -4,&local_110,local_a8);
      if ((cVar6 != '\0') && (local_98 == local_a0)) {
        if (local_58 == s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8._0_4_) {
          local_d8 = 0;
          puStack_d0 = (undefined8 *)0x0;
          local_c8 = (undefined8 *)0x0;
          local_b8[0] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[4];
          local_b8[1] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[5];
          local_b8[2] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[6];
          local_b8[3] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[7];
          local_b4 = 2;
          FUN_140280530(&local_d8,0,local_b8);
          local_e8[0] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[8];
          local_e8[1] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[9];
          local_e8[2] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[10];
          local_e8[3] = s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8[0xb];
          uStack_e4 = 2;
          uStack_e0 = 0;
          if (local_c8 == puStack_d0) {
            FUN_140280530(&local_d8,puStack_d0,local_e8);
          }
          else {
            *puStack_d0 = CONCAT44(2,s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8._8_4_);
            *(undefined4 *)(puStack_d0 + 1) = 0;
            puStack_d0 = (undefined8 *)((longlong)puStack_d0 + 0xc);
          }
          puVar14 = local_c8;
          puVar8 = puStack_d0;
          iVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_110,local_108,&local_70,0xc)
          ;
          lVar7 = local_d8;
          uVar20 = extraout_XMM0_Da;
          while (((local_108 = local_108 + 0xc, -1 < iVar17 &&
                  (local_70 == s_RIFFLISTAVIX_1405eff60._0_4_)) &&
                 (local_68 == s_RIFFLISTAVIX_1405eff60._8_4_))) {
            local_90[0] = 0;
            local_88 = lVar7;
            local_80 = puVar8;
            cVar6 = FUN_14027ff20(local_6c + -4,&local_110,local_90);
            uVar20 = extraout_XMM0_Da_00;
            if (cVar6 == '\0') break;
            iVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                               (local_110,local_108,&local_70,0xc);
            uVar20 = extraout_XMM0_Da_01;
          }
          if (lVar7 != 0) {
            uVar12 = (((longlong)puVar14 - lVar7) / 0xc) * 0xc;
            lVar18 = lVar7;
            if (0xfff < uVar12) {
              lVar18 = *(longlong *)(lVar7 + -8);
              if (0x1f < (lVar7 - lVar18) - 8U) {
                    /* WARNING: Subroutine does not return */
                FUN_14033bbe4(uVar20,uVar12 + 0x27);
              }
            }
            _free_base(lVar18);
          }
        }
        local_f0 = FUN_1402e2c84(0x28);
        uVar9 = FUN_14024db10(local_f0,param_3,puVar15[5],0);
        return uVar9;
      }
    }
  }
  return 0;
}



// ===== string at 1405cb220 : CBmpFileData::Validate
// ---- function FUN_140280ed0 @ 140280ed0 (xref 140280f2a)

/* WARNING: Removing unreachable block (ram,0x000140280f3e) */
/* WARNING: Removing unreachable block (ram,0x000140280f51) */

void FUN_140280ed0(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CBmpFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CBmpFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Bmp"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Bmp");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}


// ---- function FUN_140280ed0 @ 140280ed0 (xref 140280f77)

/* WARNING: Removing unreachable block (ram,0x000140280f3e) */
/* WARNING: Removing unreachable block (ram,0x000140280f51) */

void FUN_140280ed0(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CBmpFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CBmpFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Bmp"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Bmp");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}


// ---- function FUN_140280ed0 @ 140280ed0 (xref 140280fb9)

/* WARNING: Removing unreachable block (ram,0x000140280f3e) */
/* WARNING: Removing unreachable block (ram,0x000140280f51) */

void FUN_140280ed0(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CBmpFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CBmpFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Bmp"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Bmp");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}



// ===== string at 1405cb288 : CJpgFileData::Validate
// ---- function FUN_1402814a0 @ 1402814a0 (xref 1402814fa)

/* WARNING: Removing unreachable block (ram,0x00014028150e) */
/* WARNING: Removing unreachable block (ram,0x000140281521) */

void FUN_1402814a0(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CJpgFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CJpgFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Jpg"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Jpg");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}


// ---- function FUN_1402814a0 @ 1402814a0 (xref 140281547)

/* WARNING: Removing unreachable block (ram,0x00014028150e) */
/* WARNING: Removing unreachable block (ram,0x000140281521) */

void FUN_1402814a0(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CJpgFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CJpgFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Jpg"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Jpg");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}


// ---- function FUN_1402814a0 @ 1402814a0 (xref 140281589)

/* WARNING: Removing unreachable block (ram,0x00014028150e) */
/* WARNING: Removing unreachable block (ram,0x000140281521) */

void FUN_1402814a0(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CJpgFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CJpgFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Jpg"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Jpg");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}



// ===== string at 1405cb2e0 : CPngFileData::Validate
// ---- function FUN_140281ad0 @ 140281ad0 (xref 140281b2a)

/* WARNING: Removing unreachable block (ram,0x000140281b3e) */
/* WARNING: Removing unreachable block (ram,0x000140281b51) */

void FUN_140281ad0(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CPngFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CPngFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Png"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Png");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}


// ---- function FUN_140281ad0 @ 140281ad0 (xref 140281b77)

/* WARNING: Removing unreachable block (ram,0x000140281b3e) */
/* WARNING: Removing unreachable block (ram,0x000140281b51) */

void FUN_140281ad0(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CPngFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CPngFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Png"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Png");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}


// ---- function FUN_140281ad0 @ 140281ad0 (xref 140281bb9)

/* WARNING: Removing unreachable block (ram,0x000140281b3e) */
/* WARNING: Removing unreachable block (ram,0x000140281b51) */

void FUN_140281ad0(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CPngFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CPngFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Png"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Png");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}



// ===== string at 1405cb358 : CGifFileData::Validate
// ---- function FUN_140282080 @ 140282080 (xref 1402820da)

/* WARNING: Removing unreachable block (ram,0x0001402820ee) */
/* WARNING: Removing unreachable block (ram,0x000140282101) */

void FUN_140282080(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CGifFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CGifFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Gif"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Gif");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}


// ---- function FUN_140282080 @ 140282080 (xref 140282127)

/* WARNING: Removing unreachable block (ram,0x0001402820ee) */
/* WARNING: Removing unreachable block (ram,0x000140282101) */

void FUN_140282080(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CGifFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CGifFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Gif"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Gif");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}


// ---- function FUN_140282080 @ 140282080 (xref 140282169)

/* WARNING: Removing unreachable block (ram,0x0001402820ee) */
/* WARNING: Removing unreachable block (ram,0x000140282101) */

void FUN_140282080(void)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  int iVar12;
  LPWSTR pWVar13;
  int iVar14;
  undefined4 uVar15;
  LPWSTR local_70;
  longlong local_68;
  longlong local_60 [4];
  
  local_60[1] = 0xfffffffffffffffe;
  lVar6 = FUN_140009200();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar7 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar6);
  pWVar10 = (LPWSTR)(puVar7 + 3);
  iVar14 = 0;
  pWVar13 = (LPWSTR)0x0;
  local_70 = pWVar10;
  iVar5 = MultiByteToWideChar(0,0,"CGifFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar5 = iVar5 + -1;
  if (iVar5 < 1) {
    uVar8 = *puVar7;
    if (*(int *)(puVar7 + 1) != 0) {
      if (*(int *)(puVar7 + 2) < 0) {
        if (*(int *)((longlong)puVar7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar7 + 1) = 0;
        *pWVar10 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar7 + 2);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
        pWVar10 = (LPWSTR)(lVar6 + 0x18);
        local_70 = pWVar10;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar7 + 0xc) - iVar5 | 1U - *(int *)(puVar7 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar5);
      pWVar10 = local_70;
    }
    pWVar13 = pWVar10;
    iVar14 = iVar5;
    MultiByteToWideChar(0,0,"CGifFileData::Validate",-1,pWVar10,iVar5);
    if (*(int *)(pWVar10 + -6) < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar10 + -8) = iVar5;
    pWVar10[iVar5] = L'\0';
  }
  pWVar1 = pWVar10 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar6 + 0x18;
  uVar15 = 1;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(short *)((longlong)&DAT_1405a5138 + lVar11 * 2) != 0);
  iVar5 = *(int *)(pWVar10 + -8);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar12);
  }
  lVar3 = local_68;
  FUN_140008b60(local_68,(longlong)iVar5,pWVar10,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar3 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,&DAT_1405a5138);
    }
  }
  if (*(int *)(lVar3 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar3 + -0x10) = iVar12;
  *(undefined2 *)(lVar3 + (longlong)iVar12 * 2) = 0;
  if ((*(longlong *)(lVar3 + -0x18) == 0) ||
     (lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar6 == 0)) {
    uVar8 = FUN_140009200();
    lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar6 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = lVar6 + 0x18;
  uVar15 = 3;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (L"Trying Gif"[lVar11] != L'\0');
  iVar5 = *(int *)(lVar3 + -0x10);
  iVar12 = iVar5 + (int)lVar11;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar6 + 0xc) - iVar12 | 1U - *(int *)(lVar6 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar12);
  }
  lVar4 = local_60[0];
  FUN_140008b60(local_60[0],(longlong)iVar5,lVar3,iVar5,pWVar13,iVar14,uVar15);
  lVar6 = lVar4 + (longlong)iVar5 * 2;
  if (((longlong)(int)lVar11 & 0x7fffffffffffffffU) != 0) {
    if (lVar6 == 0) {
      puVar9 = __doserrno();
      *puVar9 = 0x16;
      FUN_14033bbc4();
    }
    else {
      FUN_140332530(lVar6,L"Trying Gif");
    }
  }
  if (*(int *)(lVar4 + -0xc) < iVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar4 + -0x10) = iVar12;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 2) = 0;
  uVar8 = FUN_140040170();
  FUN_140041bc0(uVar8,700,lVar4);
  LOCK();
  piVar2 = (int *)(lVar4 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar3 + -8);
  iVar14 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar3 + -0x18),lVar3 + -0x18);
  }
  LOCK();
  pWVar10 = pWVar10 + -4;
  iVar14 = *(int *)pWVar10;
  *(int *)pWVar10 = *(int *)pWVar10 + -1;
  UNLOCK();
  if (iVar14 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  FUN_140280c30();
  return;
}



// ===== string at 1405cb3c8 : CBinaryDocTypes::Validate
// ---- function FUN_140282690 @ 140282690 (xref 140282704)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140282718) */
/* WARNING: Removing unreachable block (ram,0x00014028272c) */

undefined8 FUN_140282690(undefined8 param_1,_func_5439 *param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  ILockBytes *pIVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  HRESULT HVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong *puVar19;
  longlong lVar20;
  ILockBytes *plkbyt;
  ulonglong uVar21;
  HMODULE hModule;
  FARPROC pFVar22;
  uint uVar23;
  ushort *puVar24;
  LPWSTR pWVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int iVar28;
  wchar_t **ppwVar29;
  bool bVar30;
  undefined1 auStackY_328 [32];
  undefined1 local_2e8 [8];
  undefined8 *local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  IStorage *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  LPWSTR local_2a8;
  ILockBytes *local_2a0;
  undefined1 local_298 [8];
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  ushort *local_250;
  ILockBytesVtbl local_248;
  wchar_t *local_1f8 [10];
  undefined1 *local_1a8;
  undefined1 local_1a0 [264];
  wchar_t *local_98 [8];
  ulonglong local_58;
  
  local_248.Flush = (_func_5442 *)0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_328;
  local_2d0 = 0;
  lVar16 = FUN_140009200();
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar17 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar16);
  pWVar25 = (LPWSTR)(puVar17 + 3);
  local_2a8 = pWVar25;
  iVar15 = MultiByteToWideChar(0,0,"CBinaryDocTypes::Validate",-1,(LPWSTR)0x0,0);
  iVar15 = iVar15 + -1;
  if (iVar15 < 1) {
    uVar18 = *puVar17;
    if (*(int *)(puVar17 + 1) != 0) {
      if (*(int *)(puVar17 + 2) < 0) {
        if (*(int *)((longlong)puVar17 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar17 + 1) = 0;
        *pWVar25 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar17 + 2);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
        pWVar25 = (LPWSTR)(lVar16 + 0x18);
        local_2a8 = pWVar25;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar17 + 0xc) - iVar15 | 1U - *(int *)(puVar17 + 2)) < 0) {
      FUN_140008ae0(&local_2a8,iVar15);
      pWVar25 = local_2a8;
    }
    MultiByteToWideChar(0,0,"CBinaryDocTypes::Validate",-1,pWVar25,iVar15);
    if (*(int *)(pWVar25 + -6) < iVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar25 + -8) = iVar15;
    pWVar25[iVar15] = L'\0';
  }
  pWVar1 = pWVar25 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar16 == 0)) {
    uVar18 = FUN_140009200();
    lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
  }
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_288 = lVar16 + 0x18;
  local_2d0 = 1;
  iVar15 = *(int *)(pWVar25 + -8);
  local_2c0 = CONCAT44(local_2c0._4_4_,iVar15);
  iVar28 = iVar15 + 2;
  if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar16 + 0xc) - iVar28 | 1U - *(int *)(lVar16 + 0x10)) < 0) {
    FUN_140008ae0(&local_288,iVar28);
    iVar15 = (int)local_2c0;
  }
  lVar16 = local_288;
  FUN_140008b60(local_288,(longlong)iVar15,pWVar25,iVar15);
  puVar4 = (undefined4 *)(lVar16 + (longlong)iVar15 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar19 = __doserrno();
    *puVar19 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar16 + -0xc) < iVar28) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar16 + -0x10) = iVar28;
  *(undefined2 *)(lVar16 + 4 + (longlong)(int)local_2c0 * 2) = 0;
  if ((*(longlong *)(lVar16 + -0x18) == 0) ||
     (lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar20 == 0)) {
    uVar18 = FUN_140009200();
    lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
  }
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_280 = lVar20 + 0x18;
  local_2d0 = 3;
  iVar15 = *(int *)(lVar16 + -0x10);
  local_2c0 = CONCAT44(local_2c0._4_4_,iVar15);
  if (iVar15 + 0x11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar20 + 0xc) - (iVar15 + 0x11) | 1U - *(int *)(lVar20 + 0x10)) < 0) {
    FUN_140008ae0(&local_280);
    iVar15 = (int)local_2c0;
  }
  lVar20 = local_280;
  FUN_140008b60(local_280,(longlong)iVar15,lVar16,iVar15);
  uVar13 = u_Trying_Binary_doc_1405cb3e8._12_4_;
  uVar12 = u_Trying_Binary_doc_1405cb3e8._8_4_;
  uVar11 = u_Trying_Binary_doc_1405cb3e8._4_4_;
  pwVar5 = (wchar_t *)(lVar20 + (longlong)iVar15 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar19 = __doserrno();
    *puVar19 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Binary_doc_1405cb3e8._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar11;
    *(undefined4 *)(pwVar5 + 4) = uVar12;
    *(undefined4 *)(pwVar5 + 6) = uVar13;
    uVar18 = u_Trying_Binary_doc_1405cb3e8._24_8_;
    *(undefined8 *)(pwVar5 + 8) = u_Trying_Binary_doc_1405cb3e8._16_8_;
    *(undefined8 *)(pwVar5 + 0xc) = uVar18;
    pwVar5[0x10] = u_Trying_Binary_doc_1405cb3e8[0x10];
  }
  if (*(int *)(lVar20 + -0xc) < (int)local_2c0 + 0x11) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar20 + -0x10) = (int)local_2c0 + 0x11;
  *(undefined2 *)(lVar20 + 0x22 + (longlong)(int)local_2c0 * 2) = 0;
  uVar18 = FUN_140040170();
  FUN_140041bc0(uVar18,700,lVar20);
  local_2d0 = 1;
  LOCK();
  piVar2 = (int *)(lVar20 + -8);
  iVar15 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar16 + -8);
  iVar15 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar16 + -0x18),lVar16 + -0x18);
  }
  LOCK();
  pWVar25 = pWVar25 + -4;
  iVar15 = *(int *)pWVar25;
  *(int *)pWVar25 = *(int *)pWVar25 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  if (**(longlong **)(param_4 + 8) != DAT_1405cb508) {
    return 0;
  }
  local_248.QueryInterface = (_func_5437 *)CRandomReaderMaxSizeTracking::vftable;
  local_248.AddRef = (_func_5438 *)0x0;
  local_248.Release = param_2;
  plkbyt = (ILockBytes *)FUN_1402e2c84(0x48);
  *(undefined4 *)&plkbyt[1].lpVtbl = 0;
  plkbyt[2].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[3].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[4].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[5].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[6].lpVtbl = (ILockBytesVtbl *)0x0;
  *(undefined1 *)&plkbyt[7].lpVtbl = 0;
  plkbyt->lpVtbl = (ILockBytesVtbl *)ATL::CComObject<CLockBytesImplBase>::vftable;
  local_2a0 = plkbyt;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  plkbyt->lpVtbl = (ILockBytesVtbl *)CLockBytesRandomReader::vftable;
  plkbyt[8].lpVtbl = &local_248;
  local_248.SetSize = (_func_5443 *)plkbyt;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(plkbyt);
  local_2c8 = (IStorage *)0x0;
  lVar16 = FUN_140009200();
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar16);
  local_2a0 = (ILockBytes *)(lVar16 + 0x18);
  HVar14 = StgOpenStorageOnILockBytes(plkbyt,(IStorage *)0x0,0x10,(SNB)0x0,0,&local_2c8);
  if (-1 < HVar14) {
    local_2b0 = 0;
    iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2c8,0,0,0);
    if (-1 < iVar15) {
      local_2e0 = (undefined8 *)0x0;
      local_2d8 = 0;
      local_2e0 = (undefined8 *)FUN_140154f40();
      iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b0,1,local_1f8,local_298);
      while (iVar15 == 0) {
        local_2b8 = 0;
        if (local_1f8[0] != (wchar_t *)0x0) {
          FUN_140008d70(&local_278);
          FUN_1401c4db0(&local_2e0,&local_248.LockRegion);
          LOCK();
          piVar2 = (int *)(local_278 + -8);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2c8,local_1f8[0],0,0x10);
          if (-1 < iVar15) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b8,0xffffffffffffffff,2);
            (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b8,local_2e8,1);
            uVar21 = 0xffffffffffffffff;
            do {
              uVar21 = uVar21 + 1;
            } while (local_1f8[0][uVar21] != L'\0');
            if ((1 < uVar21) &&
               (iVar15 = _wcsicmp(local_1f8[0],L"\x05SummaryInformation"), iVar15 == 0)) {
              hModule = GetModuleHandleW(L"Ole32.dll");
              pFVar22 = GetProcAddress(hModule,"StgOpenPropStg");
              if (pFVar22 != (FARPROC)0x0) {
                (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b8,0,0,0);
                local_290 = 0;
                iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                                   (local_2b8,&DAT_140593758,0,0);
                if (-1 < iVar15) {
                  local_248.ReadAt._0_4_ = 1;
                  local_248.WriteAt._0_4_ = 2;
                  local_268 = 0;
                  local_260 = 0;
                  local_258 = 0;
                  iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                                     (local_290,1,&local_248.ReadAt,&local_268);
                  if (-1 < iVar15) {
                    if ((short)local_268 == 0x1e) {
                      local_1a8 = local_1a0;
                      FUN_140040580(&local_1a8,local_260,0);
                      if (local_1a8 == (undefined1 *)0x0) {
                        uVar21 = 0;
                      }
                      else {
                        uVar21 = 0xffffffffffffffff;
                        do {
                          uVar21 = uVar21 + 1;
                        } while (*(short *)(local_1a8 + uVar21 * 2) != 0);
                      }
                      FUN_140008c50(&local_2a0,local_1a8,uVar21 & 0xffffffff);
                      if (local_1a8 != local_1a0) {
                        _free_base();
                      }
                    }
                    FreePropVariantArray(1,(PROPVARIANT *)&local_268);
                  }
                }
                if (local_290 != 0) {
                  (*(code *)PTR__guard_dispatch_icall_1405394d0)();
                }
              }
            }
          }
          if (local_2b8 != 0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
        }
        iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b0,1,local_1f8,local_298);
      }
      local_98[0] = L"Workbook";
      local_98[1] = L".xls";
      local_98[2] = L"WordDocument";
      local_98[3] = L".doc";
      local_98[4] = L"PowerPoint Document";
      local_98[5] = L".ppt";
      local_98[6] = L"VisioDocument";
      local_98[7] = L".vds";
      lVar16 = 0;
      ppwVar29 = local_98;
      do {
        FUN_140008d70(&local_250,*ppwVar29);
        if (*(char *)((longlong)local_2e0[1] + 0x19) == '\0') {
          puVar17 = (undefined8 *)local_2e0[1];
          puVar27 = local_2e0;
          do {
            if (local_250 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_140008e90(0x80004005);
            }
            puVar24 = (ushort *)puVar17[4];
            lVar20 = (longlong)local_250 - (longlong)puVar24;
            do {
              uVar7 = *puVar24;
              uVar8 = *(ushort *)((longlong)puVar24 + lVar20);
              if (uVar7 != uVar8) {
                uVar23 = -(uint)(uVar7 < uVar8) | 1;
                goto LAB_140282fcc;
              }
              puVar24 = puVar24 + 1;
            } while (uVar7 != 0);
            uVar23 = 0;
LAB_140282fcc:
            if ((int)uVar23 < 0) {
              puVar26 = (undefined8 *)puVar17[2];
            }
            else {
              puVar26 = (undefined8 *)*puVar17;
              puVar27 = puVar17;
            }
            puVar17 = puVar26;
          } while (*(char *)((longlong)puVar26 + 0x19) == '\0');
          if (puVar27 == local_2e0) goto LAB_140283023;
          if (puVar27[4] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80004005);
          }
          puVar24 = local_250;
          do {
            uVar7 = *puVar24;
            uVar8 = *(ushort *)((longlong)puVar24 + (puVar27[4] - (longlong)local_250));
            if (uVar7 != uVar8) {
              uVar23 = -(uint)(uVar7 < uVar8) | 1;
              goto LAB_14028301c;
            }
            puVar24 = puVar24 + 1;
          } while (uVar7 != 0);
          uVar23 = 0;
LAB_14028301c:
          if ((int)uVar23 < 0) goto LAB_140283023;
        }
        else {
LAB_140283023:
          puVar27 = local_2e0;
        }
        bVar30 = puVar27 != local_2e0;
        LOCK();
        puVar24 = local_250 + -4;
        iVar15 = *(int *)puVar24;
        *(int *)puVar24 = *(int *)puVar24 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        puVar17 = local_2e0;
        if (bVar30) {
          FUN_140026080(&local_270,&local_2a0,local_98[lVar16 * 2 + 1]);
          local_2c0 = FUN_1402e2c84(0x28);
          uVar18 = FUN_14024db10(local_2c0,param_3,local_270,0);
          LOCK();
          piVar2 = (int *)(local_270 + -8);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          puVar17 = local_2e0;
          cVar6 = *(char *)((longlong)local_2e0[1] + 0x19);
          plVar10 = (longlong *)local_2e0[1];
          while (cVar6 == '\0') {
            FUN_140075740(&local_2e0,plVar10[2]);
            plVar9 = (longlong *)*plVar10;
            LOCK();
            piVar2 = (int *)(plVar10[4] + -8);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 < 2) {
              (*(code *)PTR__guard_dispatch_icall_1405394d0)();
            }
            _free_base(plVar10,0x28);
            plVar10 = plVar9;
            cVar6 = *(char *)((longlong)plVar9 + 0x19);
          }
          local_2e0[1] = puVar17;
          *local_2e0 = puVar17;
          local_2e0[2] = puVar17;
          local_2d8 = 0;
          _free_base(local_2e0,0x28);
          if (local_2b0 != 0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          LOCK();
          pIVar3 = local_2a0 + -1;
          iVar15 = *(int *)&pIVar3->lpVtbl;
          *(int *)&pIVar3->lpVtbl = *(int *)&pIVar3->lpVtbl + -1;
          UNLOCK();
          if (iVar15 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          if (local_2c8 != (IStorage *)0x0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          (*(code *)PTR__guard_dispatch_icall_1405394d0)(plkbyt);
          return uVar18;
        }
        lVar16 = lVar16 + 1;
        ppwVar29 = ppwVar29 + 2;
      } while (lVar16 != 4);
      cVar6 = *(char *)((longlong)local_2e0[1] + 0x19);
      plVar10 = (longlong *)local_2e0[1];
      while (cVar6 == '\0') {
        FUN_140075740(&local_2e0,plVar10[2]);
        plVar9 = (longlong *)*plVar10;
        LOCK();
        piVar2 = (int *)(plVar10[4] + -8);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        _free_base(plVar10,0x28);
        plVar10 = plVar9;
        cVar6 = *(char *)((longlong)plVar9 + 0x19);
      }
      local_2e0[1] = puVar17;
      *local_2e0 = puVar17;
      local_2e0[2] = puVar17;
      local_2d8 = 0;
      FUN_140018fc0(local_2e0,0x28);
      if (local_2b0 != 0) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      FUN_1400092d0(local_2a0 + -3);
      goto LAB_140282bdf;
    }
    if (local_2b0 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  LOCK();
  piVar2 = (int *)(lVar16 + 0x10);
  iVar15 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
LAB_140282bdf:
  if (local_2c8 != (IStorage *)0x0) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(plkbyt);
  return 0;
}


// ---- function FUN_140282690 @ 140282690 (xref 140282750)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140282718) */
/* WARNING: Removing unreachable block (ram,0x00014028272c) */

undefined8 FUN_140282690(undefined8 param_1,_func_5439 *param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  ILockBytes *pIVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  HRESULT HVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong *puVar19;
  longlong lVar20;
  ILockBytes *plkbyt;
  ulonglong uVar21;
  HMODULE hModule;
  FARPROC pFVar22;
  uint uVar23;
  ushort *puVar24;
  LPWSTR pWVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int iVar28;
  wchar_t **ppwVar29;
  bool bVar30;
  undefined1 auStackY_328 [32];
  undefined1 local_2e8 [8];
  undefined8 *local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  IStorage *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  LPWSTR local_2a8;
  ILockBytes *local_2a0;
  undefined1 local_298 [8];
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  ushort *local_250;
  ILockBytesVtbl local_248;
  wchar_t *local_1f8 [10];
  undefined1 *local_1a8;
  undefined1 local_1a0 [264];
  wchar_t *local_98 [8];
  ulonglong local_58;
  
  local_248.Flush = (_func_5442 *)0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_328;
  local_2d0 = 0;
  lVar16 = FUN_140009200();
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar17 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar16);
  pWVar25 = (LPWSTR)(puVar17 + 3);
  local_2a8 = pWVar25;
  iVar15 = MultiByteToWideChar(0,0,"CBinaryDocTypes::Validate",-1,(LPWSTR)0x0,0);
  iVar15 = iVar15 + -1;
  if (iVar15 < 1) {
    uVar18 = *puVar17;
    if (*(int *)(puVar17 + 1) != 0) {
      if (*(int *)(puVar17 + 2) < 0) {
        if (*(int *)((longlong)puVar17 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar17 + 1) = 0;
        *pWVar25 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar17 + 2);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
        pWVar25 = (LPWSTR)(lVar16 + 0x18);
        local_2a8 = pWVar25;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar17 + 0xc) - iVar15 | 1U - *(int *)(puVar17 + 2)) < 0) {
      FUN_140008ae0(&local_2a8,iVar15);
      pWVar25 = local_2a8;
    }
    MultiByteToWideChar(0,0,"CBinaryDocTypes::Validate",-1,pWVar25,iVar15);
    if (*(int *)(pWVar25 + -6) < iVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar25 + -8) = iVar15;
    pWVar25[iVar15] = L'\0';
  }
  pWVar1 = pWVar25 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar16 == 0)) {
    uVar18 = FUN_140009200();
    lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
  }
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_288 = lVar16 + 0x18;
  local_2d0 = 1;
  iVar15 = *(int *)(pWVar25 + -8);
  local_2c0 = CONCAT44(local_2c0._4_4_,iVar15);
  iVar28 = iVar15 + 2;
  if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar16 + 0xc) - iVar28 | 1U - *(int *)(lVar16 + 0x10)) < 0) {
    FUN_140008ae0(&local_288,iVar28);
    iVar15 = (int)local_2c0;
  }
  lVar16 = local_288;
  FUN_140008b60(local_288,(longlong)iVar15,pWVar25,iVar15);
  puVar4 = (undefined4 *)(lVar16 + (longlong)iVar15 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar19 = __doserrno();
    *puVar19 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar16 + -0xc) < iVar28) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar16 + -0x10) = iVar28;
  *(undefined2 *)(lVar16 + 4 + (longlong)(int)local_2c0 * 2) = 0;
  if ((*(longlong *)(lVar16 + -0x18) == 0) ||
     (lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar20 == 0)) {
    uVar18 = FUN_140009200();
    lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
  }
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_280 = lVar20 + 0x18;
  local_2d0 = 3;
  iVar15 = *(int *)(lVar16 + -0x10);
  local_2c0 = CONCAT44(local_2c0._4_4_,iVar15);
  if (iVar15 + 0x11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar20 + 0xc) - (iVar15 + 0x11) | 1U - *(int *)(lVar20 + 0x10)) < 0) {
    FUN_140008ae0(&local_280);
    iVar15 = (int)local_2c0;
  }
  lVar20 = local_280;
  FUN_140008b60(local_280,(longlong)iVar15,lVar16,iVar15);
  uVar13 = u_Trying_Binary_doc_1405cb3e8._12_4_;
  uVar12 = u_Trying_Binary_doc_1405cb3e8._8_4_;
  uVar11 = u_Trying_Binary_doc_1405cb3e8._4_4_;
  pwVar5 = (wchar_t *)(lVar20 + (longlong)iVar15 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar19 = __doserrno();
    *puVar19 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Binary_doc_1405cb3e8._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar11;
    *(undefined4 *)(pwVar5 + 4) = uVar12;
    *(undefined4 *)(pwVar5 + 6) = uVar13;
    uVar18 = u_Trying_Binary_doc_1405cb3e8._24_8_;
    *(undefined8 *)(pwVar5 + 8) = u_Trying_Binary_doc_1405cb3e8._16_8_;
    *(undefined8 *)(pwVar5 + 0xc) = uVar18;
    pwVar5[0x10] = u_Trying_Binary_doc_1405cb3e8[0x10];
  }
  if (*(int *)(lVar20 + -0xc) < (int)local_2c0 + 0x11) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar20 + -0x10) = (int)local_2c0 + 0x11;
  *(undefined2 *)(lVar20 + 0x22 + (longlong)(int)local_2c0 * 2) = 0;
  uVar18 = FUN_140040170();
  FUN_140041bc0(uVar18,700,lVar20);
  local_2d0 = 1;
  LOCK();
  piVar2 = (int *)(lVar20 + -8);
  iVar15 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar16 + -8);
  iVar15 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar16 + -0x18),lVar16 + -0x18);
  }
  LOCK();
  pWVar25 = pWVar25 + -4;
  iVar15 = *(int *)pWVar25;
  *(int *)pWVar25 = *(int *)pWVar25 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  if (**(longlong **)(param_4 + 8) != DAT_1405cb508) {
    return 0;
  }
  local_248.QueryInterface = (_func_5437 *)CRandomReaderMaxSizeTracking::vftable;
  local_248.AddRef = (_func_5438 *)0x0;
  local_248.Release = param_2;
  plkbyt = (ILockBytes *)FUN_1402e2c84(0x48);
  *(undefined4 *)&plkbyt[1].lpVtbl = 0;
  plkbyt[2].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[3].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[4].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[5].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[6].lpVtbl = (ILockBytesVtbl *)0x0;
  *(undefined1 *)&plkbyt[7].lpVtbl = 0;
  plkbyt->lpVtbl = (ILockBytesVtbl *)ATL::CComObject<CLockBytesImplBase>::vftable;
  local_2a0 = plkbyt;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  plkbyt->lpVtbl = (ILockBytesVtbl *)CLockBytesRandomReader::vftable;
  plkbyt[8].lpVtbl = &local_248;
  local_248.SetSize = (_func_5443 *)plkbyt;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(plkbyt);
  local_2c8 = (IStorage *)0x0;
  lVar16 = FUN_140009200();
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar16);
  local_2a0 = (ILockBytes *)(lVar16 + 0x18);
  HVar14 = StgOpenStorageOnILockBytes(plkbyt,(IStorage *)0x0,0x10,(SNB)0x0,0,&local_2c8);
  if (-1 < HVar14) {
    local_2b0 = 0;
    iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2c8,0,0,0);
    if (-1 < iVar15) {
      local_2e0 = (undefined8 *)0x0;
      local_2d8 = 0;
      local_2e0 = (undefined8 *)FUN_140154f40();
      iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b0,1,local_1f8,local_298);
      while (iVar15 == 0) {
        local_2b8 = 0;
        if (local_1f8[0] != (wchar_t *)0x0) {
          FUN_140008d70(&local_278);
          FUN_1401c4db0(&local_2e0,&local_248.LockRegion);
          LOCK();
          piVar2 = (int *)(local_278 + -8);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2c8,local_1f8[0],0,0x10);
          if (-1 < iVar15) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b8,0xffffffffffffffff,2);
            (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b8,local_2e8,1);
            uVar21 = 0xffffffffffffffff;
            do {
              uVar21 = uVar21 + 1;
            } while (local_1f8[0][uVar21] != L'\0');
            if ((1 < uVar21) &&
               (iVar15 = _wcsicmp(local_1f8[0],L"\x05SummaryInformation"), iVar15 == 0)) {
              hModule = GetModuleHandleW(L"Ole32.dll");
              pFVar22 = GetProcAddress(hModule,"StgOpenPropStg");
              if (pFVar22 != (FARPROC)0x0) {
                (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b8,0,0,0);
                local_290 = 0;
                iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                                   (local_2b8,&DAT_140593758,0,0);
                if (-1 < iVar15) {
                  local_248.ReadAt._0_4_ = 1;
                  local_248.WriteAt._0_4_ = 2;
                  local_268 = 0;
                  local_260 = 0;
                  local_258 = 0;
                  iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                                     (local_290,1,&local_248.ReadAt,&local_268);
                  if (-1 < iVar15) {
                    if ((short)local_268 == 0x1e) {
                      local_1a8 = local_1a0;
                      FUN_140040580(&local_1a8,local_260,0);
                      if (local_1a8 == (undefined1 *)0x0) {
                        uVar21 = 0;
                      }
                      else {
                        uVar21 = 0xffffffffffffffff;
                        do {
                          uVar21 = uVar21 + 1;
                        } while (*(short *)(local_1a8 + uVar21 * 2) != 0);
                      }
                      FUN_140008c50(&local_2a0,local_1a8,uVar21 & 0xffffffff);
                      if (local_1a8 != local_1a0) {
                        _free_base();
                      }
                    }
                    FreePropVariantArray(1,(PROPVARIANT *)&local_268);
                  }
                }
                if (local_290 != 0) {
                  (*(code *)PTR__guard_dispatch_icall_1405394d0)();
                }
              }
            }
          }
          if (local_2b8 != 0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
        }
        iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b0,1,local_1f8,local_298);
      }
      local_98[0] = L"Workbook";
      local_98[1] = L".xls";
      local_98[2] = L"WordDocument";
      local_98[3] = L".doc";
      local_98[4] = L"PowerPoint Document";
      local_98[5] = L".ppt";
      local_98[6] = L"VisioDocument";
      local_98[7] = L".vds";
      lVar16 = 0;
      ppwVar29 = local_98;
      do {
        FUN_140008d70(&local_250,*ppwVar29);
        if (*(char *)((longlong)local_2e0[1] + 0x19) == '\0') {
          puVar17 = (undefined8 *)local_2e0[1];
          puVar27 = local_2e0;
          do {
            if (local_250 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_140008e90(0x80004005);
            }
            puVar24 = (ushort *)puVar17[4];
            lVar20 = (longlong)local_250 - (longlong)puVar24;
            do {
              uVar7 = *puVar24;
              uVar8 = *(ushort *)((longlong)puVar24 + lVar20);
              if (uVar7 != uVar8) {
                uVar23 = -(uint)(uVar7 < uVar8) | 1;
                goto LAB_140282fcc;
              }
              puVar24 = puVar24 + 1;
            } while (uVar7 != 0);
            uVar23 = 0;
LAB_140282fcc:
            if ((int)uVar23 < 0) {
              puVar26 = (undefined8 *)puVar17[2];
            }
            else {
              puVar26 = (undefined8 *)*puVar17;
              puVar27 = puVar17;
            }
            puVar17 = puVar26;
          } while (*(char *)((longlong)puVar26 + 0x19) == '\0');
          if (puVar27 == local_2e0) goto LAB_140283023;
          if (puVar27[4] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80004005);
          }
          puVar24 = local_250;
          do {
            uVar7 = *puVar24;
            uVar8 = *(ushort *)((longlong)puVar24 + (puVar27[4] - (longlong)local_250));
            if (uVar7 != uVar8) {
              uVar23 = -(uint)(uVar7 < uVar8) | 1;
              goto LAB_14028301c;
            }
            puVar24 = puVar24 + 1;
          } while (uVar7 != 0);
          uVar23 = 0;
LAB_14028301c:
          if ((int)uVar23 < 0) goto LAB_140283023;
        }
        else {
LAB_140283023:
          puVar27 = local_2e0;
        }
        bVar30 = puVar27 != local_2e0;
        LOCK();
        puVar24 = local_250 + -4;
        iVar15 = *(int *)puVar24;
        *(int *)puVar24 = *(int *)puVar24 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        puVar17 = local_2e0;
        if (bVar30) {
          FUN_140026080(&local_270,&local_2a0,local_98[lVar16 * 2 + 1]);
          local_2c0 = FUN_1402e2c84(0x28);
          uVar18 = FUN_14024db10(local_2c0,param_3,local_270,0);
          LOCK();
          piVar2 = (int *)(local_270 + -8);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          puVar17 = local_2e0;
          cVar6 = *(char *)((longlong)local_2e0[1] + 0x19);
          plVar10 = (longlong *)local_2e0[1];
          while (cVar6 == '\0') {
            FUN_140075740(&local_2e0,plVar10[2]);
            plVar9 = (longlong *)*plVar10;
            LOCK();
            piVar2 = (int *)(plVar10[4] + -8);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 < 2) {
              (*(code *)PTR__guard_dispatch_icall_1405394d0)();
            }
            _free_base(plVar10,0x28);
            plVar10 = plVar9;
            cVar6 = *(char *)((longlong)plVar9 + 0x19);
          }
          local_2e0[1] = puVar17;
          *local_2e0 = puVar17;
          local_2e0[2] = puVar17;
          local_2d8 = 0;
          _free_base(local_2e0,0x28);
          if (local_2b0 != 0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          LOCK();
          pIVar3 = local_2a0 + -1;
          iVar15 = *(int *)&pIVar3->lpVtbl;
          *(int *)&pIVar3->lpVtbl = *(int *)&pIVar3->lpVtbl + -1;
          UNLOCK();
          if (iVar15 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          if (local_2c8 != (IStorage *)0x0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          (*(code *)PTR__guard_dispatch_icall_1405394d0)(plkbyt);
          return uVar18;
        }
        lVar16 = lVar16 + 1;
        ppwVar29 = ppwVar29 + 2;
      } while (lVar16 != 4);
      cVar6 = *(char *)((longlong)local_2e0[1] + 0x19);
      plVar10 = (longlong *)local_2e0[1];
      while (cVar6 == '\0') {
        FUN_140075740(&local_2e0,plVar10[2]);
        plVar9 = (longlong *)*plVar10;
        LOCK();
        piVar2 = (int *)(plVar10[4] + -8);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        _free_base(plVar10,0x28);
        plVar10 = plVar9;
        cVar6 = *(char *)((longlong)plVar9 + 0x19);
      }
      local_2e0[1] = puVar17;
      *local_2e0 = puVar17;
      local_2e0[2] = puVar17;
      local_2d8 = 0;
      FUN_140018fc0(local_2e0,0x28);
      if (local_2b0 != 0) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      FUN_1400092d0(local_2a0 + -3);
      goto LAB_140282bdf;
    }
    if (local_2b0 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  LOCK();
  piVar2 = (int *)(lVar16 + 0x10);
  iVar15 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
LAB_140282bdf:
  if (local_2c8 != (IStorage *)0x0) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(plkbyt);
  return 0;
}


// ---- function FUN_140282690 @ 140282690 (xref 140282790)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140282718) */
/* WARNING: Removing unreachable block (ram,0x00014028272c) */

undefined8 FUN_140282690(undefined8 param_1,_func_5439 *param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  ILockBytes *pIVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  HRESULT HVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong *puVar19;
  longlong lVar20;
  ILockBytes *plkbyt;
  ulonglong uVar21;
  HMODULE hModule;
  FARPROC pFVar22;
  uint uVar23;
  ushort *puVar24;
  LPWSTR pWVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int iVar28;
  wchar_t **ppwVar29;
  bool bVar30;
  undefined1 auStackY_328 [32];
  undefined1 local_2e8 [8];
  undefined8 *local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  IStorage *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  LPWSTR local_2a8;
  ILockBytes *local_2a0;
  undefined1 local_298 [8];
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  ushort *local_250;
  ILockBytesVtbl local_248;
  wchar_t *local_1f8 [10];
  undefined1 *local_1a8;
  undefined1 local_1a0 [264];
  wchar_t *local_98 [8];
  ulonglong local_58;
  
  local_248.Flush = (_func_5442 *)0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_328;
  local_2d0 = 0;
  lVar16 = FUN_140009200();
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar17 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar16);
  pWVar25 = (LPWSTR)(puVar17 + 3);
  local_2a8 = pWVar25;
  iVar15 = MultiByteToWideChar(0,0,"CBinaryDocTypes::Validate",-1,(LPWSTR)0x0,0);
  iVar15 = iVar15 + -1;
  if (iVar15 < 1) {
    uVar18 = *puVar17;
    if (*(int *)(puVar17 + 1) != 0) {
      if (*(int *)(puVar17 + 2) < 0) {
        if (*(int *)((longlong)puVar17 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar17 + 1) = 0;
        *pWVar25 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar17 + 2);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
        pWVar25 = (LPWSTR)(lVar16 + 0x18);
        local_2a8 = pWVar25;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar17 + 0xc) - iVar15 | 1U - *(int *)(puVar17 + 2)) < 0) {
      FUN_140008ae0(&local_2a8,iVar15);
      pWVar25 = local_2a8;
    }
    MultiByteToWideChar(0,0,"CBinaryDocTypes::Validate",-1,pWVar25,iVar15);
    if (*(int *)(pWVar25 + -6) < iVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar25 + -8) = iVar15;
    pWVar25[iVar15] = L'\0';
  }
  pWVar1 = pWVar25 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar16 == 0)) {
    uVar18 = FUN_140009200();
    lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
  }
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_288 = lVar16 + 0x18;
  local_2d0 = 1;
  iVar15 = *(int *)(pWVar25 + -8);
  local_2c0 = CONCAT44(local_2c0._4_4_,iVar15);
  iVar28 = iVar15 + 2;
  if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar16 + 0xc) - iVar28 | 1U - *(int *)(lVar16 + 0x10)) < 0) {
    FUN_140008ae0(&local_288,iVar28);
    iVar15 = (int)local_2c0;
  }
  lVar16 = local_288;
  FUN_140008b60(local_288,(longlong)iVar15,pWVar25,iVar15);
  puVar4 = (undefined4 *)(lVar16 + (longlong)iVar15 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar19 = __doserrno();
    *puVar19 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar16 + -0xc) < iVar28) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar16 + -0x10) = iVar28;
  *(undefined2 *)(lVar16 + 4 + (longlong)(int)local_2c0 * 2) = 0;
  if ((*(longlong *)(lVar16 + -0x18) == 0) ||
     (lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar20 == 0)) {
    uVar18 = FUN_140009200();
    lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar18);
  }
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_280 = lVar20 + 0x18;
  local_2d0 = 3;
  iVar15 = *(int *)(lVar16 + -0x10);
  local_2c0 = CONCAT44(local_2c0._4_4_,iVar15);
  if (iVar15 + 0x11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar20 + 0xc) - (iVar15 + 0x11) | 1U - *(int *)(lVar20 + 0x10)) < 0) {
    FUN_140008ae0(&local_280);
    iVar15 = (int)local_2c0;
  }
  lVar20 = local_280;
  FUN_140008b60(local_280,(longlong)iVar15,lVar16,iVar15);
  uVar13 = u_Trying_Binary_doc_1405cb3e8._12_4_;
  uVar12 = u_Trying_Binary_doc_1405cb3e8._8_4_;
  uVar11 = u_Trying_Binary_doc_1405cb3e8._4_4_;
  pwVar5 = (wchar_t *)(lVar20 + (longlong)iVar15 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar19 = __doserrno();
    *puVar19 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Binary_doc_1405cb3e8._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar11;
    *(undefined4 *)(pwVar5 + 4) = uVar12;
    *(undefined4 *)(pwVar5 + 6) = uVar13;
    uVar18 = u_Trying_Binary_doc_1405cb3e8._24_8_;
    *(undefined8 *)(pwVar5 + 8) = u_Trying_Binary_doc_1405cb3e8._16_8_;
    *(undefined8 *)(pwVar5 + 0xc) = uVar18;
    pwVar5[0x10] = u_Trying_Binary_doc_1405cb3e8[0x10];
  }
  if (*(int *)(lVar20 + -0xc) < (int)local_2c0 + 0x11) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar20 + -0x10) = (int)local_2c0 + 0x11;
  *(undefined2 *)(lVar20 + 0x22 + (longlong)(int)local_2c0 * 2) = 0;
  uVar18 = FUN_140040170();
  FUN_140041bc0(uVar18,700,lVar20);
  local_2d0 = 1;
  LOCK();
  piVar2 = (int *)(lVar20 + -8);
  iVar15 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar16 + -8);
  iVar15 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar16 + -0x18),lVar16 + -0x18);
  }
  LOCK();
  pWVar25 = pWVar25 + -4;
  iVar15 = *(int *)pWVar25;
  *(int *)pWVar25 = *(int *)pWVar25 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  if (**(longlong **)(param_4 + 8) != DAT_1405cb508) {
    return 0;
  }
  local_248.QueryInterface = (_func_5437 *)CRandomReaderMaxSizeTracking::vftable;
  local_248.AddRef = (_func_5438 *)0x0;
  local_248.Release = param_2;
  plkbyt = (ILockBytes *)FUN_1402e2c84(0x48);
  *(undefined4 *)&plkbyt[1].lpVtbl = 0;
  plkbyt[2].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[3].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[4].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[5].lpVtbl = (ILockBytesVtbl *)0x0;
  plkbyt[6].lpVtbl = (ILockBytesVtbl *)0x0;
  *(undefined1 *)&plkbyt[7].lpVtbl = 0;
  plkbyt->lpVtbl = (ILockBytesVtbl *)ATL::CComObject<CLockBytesImplBase>::vftable;
  local_2a0 = plkbyt;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  plkbyt->lpVtbl = (ILockBytesVtbl *)CLockBytesRandomReader::vftable;
  plkbyt[8].lpVtbl = &local_248;
  local_248.SetSize = (_func_5443 *)plkbyt;
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(plkbyt);
  local_2c8 = (IStorage *)0x0;
  lVar16 = FUN_140009200();
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar16);
  local_2a0 = (ILockBytes *)(lVar16 + 0x18);
  HVar14 = StgOpenStorageOnILockBytes(plkbyt,(IStorage *)0x0,0x10,(SNB)0x0,0,&local_2c8);
  if (-1 < HVar14) {
    local_2b0 = 0;
    iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2c8,0,0,0);
    if (-1 < iVar15) {
      local_2e0 = (undefined8 *)0x0;
      local_2d8 = 0;
      local_2e0 = (undefined8 *)FUN_140154f40();
      iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b0,1,local_1f8,local_298);
      while (iVar15 == 0) {
        local_2b8 = 0;
        if (local_1f8[0] != (wchar_t *)0x0) {
          FUN_140008d70(&local_278);
          FUN_1401c4db0(&local_2e0,&local_248.LockRegion);
          LOCK();
          piVar2 = (int *)(local_278 + -8);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2c8,local_1f8[0],0,0x10);
          if (-1 < iVar15) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b8,0xffffffffffffffff,2);
            (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b8,local_2e8,1);
            uVar21 = 0xffffffffffffffff;
            do {
              uVar21 = uVar21 + 1;
            } while (local_1f8[0][uVar21] != L'\0');
            if ((1 < uVar21) &&
               (iVar15 = _wcsicmp(local_1f8[0],L"\x05SummaryInformation"), iVar15 == 0)) {
              hModule = GetModuleHandleW(L"Ole32.dll");
              pFVar22 = GetProcAddress(hModule,"StgOpenPropStg");
              if (pFVar22 != (FARPROC)0x0) {
                (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b8,0,0,0);
                local_290 = 0;
                iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                                   (local_2b8,&DAT_140593758,0,0);
                if (-1 < iVar15) {
                  local_248.ReadAt._0_4_ = 1;
                  local_248.WriteAt._0_4_ = 2;
                  local_268 = 0;
                  local_260 = 0;
                  local_258 = 0;
                  iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)
                                     (local_290,1,&local_248.ReadAt,&local_268);
                  if (-1 < iVar15) {
                    if ((short)local_268 == 0x1e) {
                      local_1a8 = local_1a0;
                      FUN_140040580(&local_1a8,local_260,0);
                      if (local_1a8 == (undefined1 *)0x0) {
                        uVar21 = 0;
                      }
                      else {
                        uVar21 = 0xffffffffffffffff;
                        do {
                          uVar21 = uVar21 + 1;
                        } while (*(short *)(local_1a8 + uVar21 * 2) != 0);
                      }
                      FUN_140008c50(&local_2a0,local_1a8,uVar21 & 0xffffffff);
                      if (local_1a8 != local_1a0) {
                        _free_base();
                      }
                    }
                    FreePropVariantArray(1,(PROPVARIANT *)&local_268);
                  }
                }
                if (local_290 != 0) {
                  (*(code *)PTR__guard_dispatch_icall_1405394d0)();
                }
              }
            }
          }
          if (local_2b8 != 0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
        }
        iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_2b0,1,local_1f8,local_298);
      }
      local_98[0] = L"Workbook";
      local_98[1] = L".xls";
      local_98[2] = L"WordDocument";
      local_98[3] = L".doc";
      local_98[4] = L"PowerPoint Document";
      local_98[5] = L".ppt";
      local_98[6] = L"VisioDocument";
      local_98[7] = L".vds";
      lVar16 = 0;
      ppwVar29 = local_98;
      do {
        FUN_140008d70(&local_250,*ppwVar29);
        if (*(char *)((longlong)local_2e0[1] + 0x19) == '\0') {
          puVar17 = (undefined8 *)local_2e0[1];
          puVar27 = local_2e0;
          do {
            if (local_250 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_140008e90(0x80004005);
            }
            puVar24 = (ushort *)puVar17[4];
            lVar20 = (longlong)local_250 - (longlong)puVar24;
            do {
              uVar7 = *puVar24;
              uVar8 = *(ushort *)((longlong)puVar24 + lVar20);
              if (uVar7 != uVar8) {
                uVar23 = -(uint)(uVar7 < uVar8) | 1;
                goto LAB_140282fcc;
              }
              puVar24 = puVar24 + 1;
            } while (uVar7 != 0);
            uVar23 = 0;
LAB_140282fcc:
            if ((int)uVar23 < 0) {
              puVar26 = (undefined8 *)puVar17[2];
            }
            else {
              puVar26 = (undefined8 *)*puVar17;
              puVar27 = puVar17;
            }
            puVar17 = puVar26;
          } while (*(char *)((longlong)puVar26 + 0x19) == '\0');
          if (puVar27 == local_2e0) goto LAB_140283023;
          if (puVar27[4] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80004005);
          }
          puVar24 = local_250;
          do {
            uVar7 = *puVar24;
            uVar8 = *(ushort *)((longlong)puVar24 + (puVar27[4] - (longlong)local_250));
            if (uVar7 != uVar8) {
              uVar23 = -(uint)(uVar7 < uVar8) | 1;
              goto LAB_14028301c;
            }
            puVar24 = puVar24 + 1;
          } while (uVar7 != 0);
          uVar23 = 0;
LAB_14028301c:
          if ((int)uVar23 < 0) goto LAB_140283023;
        }
        else {
LAB_140283023:
          puVar27 = local_2e0;
        }
        bVar30 = puVar27 != local_2e0;
        LOCK();
        puVar24 = local_250 + -4;
        iVar15 = *(int *)puVar24;
        *(int *)puVar24 = *(int *)puVar24 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        puVar17 = local_2e0;
        if (bVar30) {
          FUN_140026080(&local_270,&local_2a0,local_98[lVar16 * 2 + 1]);
          local_2c0 = FUN_1402e2c84(0x28);
          uVar18 = FUN_14024db10(local_2c0,param_3,local_270,0);
          LOCK();
          piVar2 = (int *)(local_270 + -8);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          puVar17 = local_2e0;
          cVar6 = *(char *)((longlong)local_2e0[1] + 0x19);
          plVar10 = (longlong *)local_2e0[1];
          while (cVar6 == '\0') {
            FUN_140075740(&local_2e0,plVar10[2]);
            plVar9 = (longlong *)*plVar10;
            LOCK();
            piVar2 = (int *)(plVar10[4] + -8);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 < 2) {
              (*(code *)PTR__guard_dispatch_icall_1405394d0)();
            }
            _free_base(plVar10,0x28);
            plVar10 = plVar9;
            cVar6 = *(char *)((longlong)plVar9 + 0x19);
          }
          local_2e0[1] = puVar17;
          *local_2e0 = puVar17;
          local_2e0[2] = puVar17;
          local_2d8 = 0;
          _free_base(local_2e0,0x28);
          if (local_2b0 != 0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          LOCK();
          pIVar3 = local_2a0 + -1;
          iVar15 = *(int *)&pIVar3->lpVtbl;
          *(int *)&pIVar3->lpVtbl = *(int *)&pIVar3->lpVtbl + -1;
          UNLOCK();
          if (iVar15 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          if (local_2c8 != (IStorage *)0x0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          (*(code *)PTR__guard_dispatch_icall_1405394d0)(plkbyt);
          return uVar18;
        }
        lVar16 = lVar16 + 1;
        ppwVar29 = ppwVar29 + 2;
      } while (lVar16 != 4);
      cVar6 = *(char *)((longlong)local_2e0[1] + 0x19);
      plVar10 = (longlong *)local_2e0[1];
      while (cVar6 == '\0') {
        FUN_140075740(&local_2e0,plVar10[2]);
        plVar9 = (longlong *)*plVar10;
        LOCK();
        piVar2 = (int *)(plVar10[4] + -8);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        _free_base(plVar10,0x28);
        plVar10 = plVar9;
        cVar6 = *(char *)((longlong)plVar9 + 0x19);
      }
      local_2e0[1] = puVar17;
      *local_2e0 = puVar17;
      local_2e0[2] = puVar17;
      local_2d8 = 0;
      FUN_140018fc0(local_2e0,0x28);
      if (local_2b0 != 0) {
        (*(code *)PTR__guard_dispatch_icall_1405394d0)();
      }
      FUN_1400092d0(local_2a0 + -3);
      goto LAB_140282bdf;
    }
    if (local_2b0 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  LOCK();
  piVar2 = (int *)(lVar16 + 0x10);
  iVar15 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
LAB_140282bdf:
  if (local_2c8 != (IStorage *)0x0) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(plkbyt);
  return 0;
}



// ===== string at 1405cb520 : CMpegFileData::Validate
// ---- function FUN_140283480 @ 140283480 (xref 1402834e1)

/* WARNING: Removing unreachable block (ram,0x000140283ada) */
/* WARNING: Removing unreachable block (ram,0x000140283aeb) */
/* WARNING: Removing unreachable block (ram,0x0001402834f5) */
/* WARNING: Removing unreachable block (ram,0x000140283508) */
/* WARNING: Removing unreachable block (ram,0x000140283b96) */
/* WARNING: Removing unreachable block (ram,0x000140283ba7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140283480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  LPWSTR pWVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  ushort local_98 [2];
  undefined4 local_94;
  int local_90;
  uint local_8c;
  LPWSTR local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  local_94 = 0;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar15 = (LPWSTR)(puVar10 + 3);
  local_88 = pWVar15;
  iVar18 = MultiByteToWideChar(0,0,"CMpegFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar18 = iVar18 + -1;
  if (iVar18 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar15 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar18 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar18 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar15 = (LPWSTR)(lVar9 + 0x18);
        local_88 = pWVar15;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar18 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_88,iVar18);
      pWVar15 = local_88;
    }
    MultiByteToWideChar(0,0,"CMpegFileData::Validate",-1,pWVar15,iVar18);
    if (*(int *)(pWVar15 + -6) < iVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar15 + -8) = iVar18;
    pWVar15[iVar18] = L'\0';
  }
  pWVar1 = pWVar15 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar9 + 0x18;
  local_94 = 1;
  iVar18 = *(int *)(pWVar15 + -8);
  lVar19 = (longlong)iVar18;
  iVar22 = iVar18 + 2;
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar22 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar22);
  }
  lVar9 = local_70;
  FUN_140008b60(local_70,lVar19,pWVar15,iVar18);
  puVar4 = (undefined4 *)(lVar9 + lVar19 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar22;
  *(undefined2 *)(lVar9 + 4 + lVar19 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar19 == 0)) {
    uVar11 = FUN_140009200();
    lVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_80 = (longlong *)(lVar19 + 0x18);
  local_94 = 3;
  local_90 = *(int *)(lVar9 + -0x10);
  iVar18 = local_90 + 0xb;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar19 + 0xc) - iVar18 | 1U - *(int *)(lVar19 + 0x10)) < 0) {
    FUN_140008ae0(&local_80,iVar18);
  }
  plVar3 = local_80;
  lVar19 = (longlong)local_90;
  FUN_140008b60(local_80,lVar19,lVar9,local_90);
  uVar7 = _UNK_1405cb544;
  uVar6 = _UNK_1405cb540;
  uVar5 = _UNK_1405cb53c;
  puVar4 = (undefined4 *)((longlong)plVar3 + lVar19 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = _DAT_1405cb538;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar4[4] = DAT_1405cb548;
    *(undefined2 *)(puVar4 + 5) = DAT_1405cb54c;
  }
  if (*(int *)((longlong)plVar3 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar3 + -2) = iVar18;
  uVar20 = 0;
  *(undefined2 *)((longlong)plVar3 + (longlong)local_90 * 2 + 0x16) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,plVar3);
  local_94 = 1;
  LOCK();
  plVar3 = plVar3 + -1;
  lVar19 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar18 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar15 = pWVar15 + -4;
  iVar18 = *(int *)pWVar15;
  *(int *)pWVar15 = *(int *)pWVar15 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_68 = param_2;
  iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_8c,4);
  uVar16 = 4;
  uVar17 = uVar20;
  uVar21 = uVar20;
  if (-1 < iVar18) {
    do {
      if ((local_8c & 0xffffff) != 0x10000) {
        uVar16 = uVar16 - 3;
        uVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (uVar16 <= uVar17) goto LAB_140283b29;
LAB_140283a6a:
        uVar13 = uVar20;
        break;
      }
      uVar14 = local_8c >> 0x18;
      uVar13 = uVar16;
      if (uVar14 == 0xb9) break;
      if ((uVar14 == 0xba) && ((int)uVar17 != 1)) {
        iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,&local_78,8);
        uVar16 = uVar16 + 8;
        uVar13 = uVar16;
        if (iVar18 < 0) break;
        if ((((((byte)local_78 & 0xf0) == 0x20) && (((uint)local_78 & 0x10001) == 0x10001)) &&
            (((ulonglong)local_78 & 0x100000000) != 0)) &&
           (((local_78._4_4_ >> 0xf & 1) != 0 && ((local_78._4_4_ >> 0x18 & 1) != 0)))) {
          bVar23 = true;
        }
        else {
          bVar23 = false;
        }
        if (!bVar23) goto LAB_140283b29;
        uVar17 = 1;
      }
      else {
        if ((uVar14 == 0xbb) && ((int)uVar17 == 1)) {
          iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,local_98,2);
          local_60 = uVar16 + 2;
          uVar13 = local_60;
          if ((iVar18 < 0) ||
             (cVar8 = FUN_14024e000(&local_68,local_98[0] << 8 | local_98[0] >> 8),
             uVar13 = local_60, cVar8 == '\0')) break;
          uVar16 = local_60;
          param_2 = local_68;
        }
        else {
          bVar23 = (uVar14 & 0xf0) < 0xb0;
          bVar24 = (uVar14 & 0xf0) == 0xb0;
          if (bVar24) {
            if (((byte)(local_8c >> 0x18) & 0xc) != 0xc) {
              bVar23 = false;
              bVar24 = true;
              goto LAB_1402839a5;
            }
LAB_1402839ab:
            bVar23 = true;
          }
          else {
LAB_1402839a5:
            if (!bVar23 && !bVar24) goto LAB_1402839ab;
            bVar23 = false;
          }
          if (!bVar23) {
LAB_140283b29:
            if (uVar21 < 0x81) {
              return (undefined8 *)0x0;
            }
            puVar10 = (undefined8 *)FUN_1402e2c84(0x28);
            *puVar10 = CRecognisedDataOneFileImpl::vftable;
            puVar10[1] = param_3;
            plVar3 = puVar10 + 2;
            local_80 = plVar3;
            local_78 = puVar10;
            lVar9 = FUN_140009200();
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140008e90(0x80004005);
            }
            lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
            *plVar3 = lVar9 + 0x18;
            FUN_140008c50(plVar3,L".mpg",4);
            puVar10[3] = uVar16;
            *(undefined1 *)(puVar10 + 4) = 1;
            return puVar10;
          }
          uVar21 = uVar21 + 1;
          iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,local_98,2);
          uVar13 = uVar16 + 2;
          if (iVar18 < 0) break;
          uVar13 = (ulonglong)(ushort)(local_98[0] << 8 | local_98[0] >> 8);
          uVar16 = uVar16 + 2 + uVar13;
          uVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          if (uVar17 < uVar16) {
            if (uVar13 == 0) goto LAB_140283a6a;
            uVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
            break;
          }
        }
        uVar17 = 2;
      }
      iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,&local_8c,4);
      uVar16 = uVar16 + 4;
      uVar13 = uVar16;
    } while (-1 < iVar18);
    if (0x80 < uVar21) {
      puVar10 = (undefined8 *)FUN_1402e2c84(0x28);
      *puVar10 = CRecognisedDataOneFileImpl::vftable;
      puVar10[1] = param_3;
      plVar3 = puVar10 + 2;
      local_80 = plVar3;
      local_78 = puVar10;
      lVar9 = FUN_140009200();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80004005);
      }
      lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
      *plVar3 = lVar9 + 0x18;
      FUN_140008c50(plVar3,L".mpg",4);
      puVar10[3] = uVar13;
      *(undefined1 *)(puVar10 + 4) = 1;
      return puVar10;
    }
  }
  return (undefined8 *)0x0;
}


// ---- function FUN_140283480 @ 140283480 (xref 14028352d)

/* WARNING: Removing unreachable block (ram,0x000140283ada) */
/* WARNING: Removing unreachable block (ram,0x000140283aeb) */
/* WARNING: Removing unreachable block (ram,0x0001402834f5) */
/* WARNING: Removing unreachable block (ram,0x000140283508) */
/* WARNING: Removing unreachable block (ram,0x000140283b96) */
/* WARNING: Removing unreachable block (ram,0x000140283ba7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140283480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  LPWSTR pWVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  ushort local_98 [2];
  undefined4 local_94;
  int local_90;
  uint local_8c;
  LPWSTR local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  local_94 = 0;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar15 = (LPWSTR)(puVar10 + 3);
  local_88 = pWVar15;
  iVar18 = MultiByteToWideChar(0,0,"CMpegFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar18 = iVar18 + -1;
  if (iVar18 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar15 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar18 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar18 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar15 = (LPWSTR)(lVar9 + 0x18);
        local_88 = pWVar15;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar18 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_88,iVar18);
      pWVar15 = local_88;
    }
    MultiByteToWideChar(0,0,"CMpegFileData::Validate",-1,pWVar15,iVar18);
    if (*(int *)(pWVar15 + -6) < iVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar15 + -8) = iVar18;
    pWVar15[iVar18] = L'\0';
  }
  pWVar1 = pWVar15 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar9 + 0x18;
  local_94 = 1;
  iVar18 = *(int *)(pWVar15 + -8);
  lVar19 = (longlong)iVar18;
  iVar22 = iVar18 + 2;
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar22 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar22);
  }
  lVar9 = local_70;
  FUN_140008b60(local_70,lVar19,pWVar15,iVar18);
  puVar4 = (undefined4 *)(lVar9 + lVar19 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar22;
  *(undefined2 *)(lVar9 + 4 + lVar19 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar19 == 0)) {
    uVar11 = FUN_140009200();
    lVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_80 = (longlong *)(lVar19 + 0x18);
  local_94 = 3;
  local_90 = *(int *)(lVar9 + -0x10);
  iVar18 = local_90 + 0xb;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar19 + 0xc) - iVar18 | 1U - *(int *)(lVar19 + 0x10)) < 0) {
    FUN_140008ae0(&local_80,iVar18);
  }
  plVar3 = local_80;
  lVar19 = (longlong)local_90;
  FUN_140008b60(local_80,lVar19,lVar9,local_90);
  uVar7 = _UNK_1405cb544;
  uVar6 = _UNK_1405cb540;
  uVar5 = _UNK_1405cb53c;
  puVar4 = (undefined4 *)((longlong)plVar3 + lVar19 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = _DAT_1405cb538;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar4[4] = DAT_1405cb548;
    *(undefined2 *)(puVar4 + 5) = DAT_1405cb54c;
  }
  if (*(int *)((longlong)plVar3 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar3 + -2) = iVar18;
  uVar20 = 0;
  *(undefined2 *)((longlong)plVar3 + (longlong)local_90 * 2 + 0x16) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,plVar3);
  local_94 = 1;
  LOCK();
  plVar3 = plVar3 + -1;
  lVar19 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar18 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar15 = pWVar15 + -4;
  iVar18 = *(int *)pWVar15;
  *(int *)pWVar15 = *(int *)pWVar15 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_68 = param_2;
  iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_8c,4);
  uVar16 = 4;
  uVar17 = uVar20;
  uVar21 = uVar20;
  if (-1 < iVar18) {
    do {
      if ((local_8c & 0xffffff) != 0x10000) {
        uVar16 = uVar16 - 3;
        uVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (uVar16 <= uVar17) goto LAB_140283b29;
LAB_140283a6a:
        uVar13 = uVar20;
        break;
      }
      uVar14 = local_8c >> 0x18;
      uVar13 = uVar16;
      if (uVar14 == 0xb9) break;
      if ((uVar14 == 0xba) && ((int)uVar17 != 1)) {
        iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,&local_78,8);
        uVar16 = uVar16 + 8;
        uVar13 = uVar16;
        if (iVar18 < 0) break;
        if ((((((byte)local_78 & 0xf0) == 0x20) && (((uint)local_78 & 0x10001) == 0x10001)) &&
            (((ulonglong)local_78 & 0x100000000) != 0)) &&
           (((local_78._4_4_ >> 0xf & 1) != 0 && ((local_78._4_4_ >> 0x18 & 1) != 0)))) {
          bVar23 = true;
        }
        else {
          bVar23 = false;
        }
        if (!bVar23) goto LAB_140283b29;
        uVar17 = 1;
      }
      else {
        if ((uVar14 == 0xbb) && ((int)uVar17 == 1)) {
          iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,local_98,2);
          local_60 = uVar16 + 2;
          uVar13 = local_60;
          if ((iVar18 < 0) ||
             (cVar8 = FUN_14024e000(&local_68,local_98[0] << 8 | local_98[0] >> 8),
             uVar13 = local_60, cVar8 == '\0')) break;
          uVar16 = local_60;
          param_2 = local_68;
        }
        else {
          bVar23 = (uVar14 & 0xf0) < 0xb0;
          bVar24 = (uVar14 & 0xf0) == 0xb0;
          if (bVar24) {
            if (((byte)(local_8c >> 0x18) & 0xc) != 0xc) {
              bVar23 = false;
              bVar24 = true;
              goto LAB_1402839a5;
            }
LAB_1402839ab:
            bVar23 = true;
          }
          else {
LAB_1402839a5:
            if (!bVar23 && !bVar24) goto LAB_1402839ab;
            bVar23 = false;
          }
          if (!bVar23) {
LAB_140283b29:
            if (uVar21 < 0x81) {
              return (undefined8 *)0x0;
            }
            puVar10 = (undefined8 *)FUN_1402e2c84(0x28);
            *puVar10 = CRecognisedDataOneFileImpl::vftable;
            puVar10[1] = param_3;
            plVar3 = puVar10 + 2;
            local_80 = plVar3;
            local_78 = puVar10;
            lVar9 = FUN_140009200();
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140008e90(0x80004005);
            }
            lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
            *plVar3 = lVar9 + 0x18;
            FUN_140008c50(plVar3,L".mpg",4);
            puVar10[3] = uVar16;
            *(undefined1 *)(puVar10 + 4) = 1;
            return puVar10;
          }
          uVar21 = uVar21 + 1;
          iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,local_98,2);
          uVar13 = uVar16 + 2;
          if (iVar18 < 0) break;
          uVar13 = (ulonglong)(ushort)(local_98[0] << 8 | local_98[0] >> 8);
          uVar16 = uVar16 + 2 + uVar13;
          uVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          if (uVar17 < uVar16) {
            if (uVar13 == 0) goto LAB_140283a6a;
            uVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
            break;
          }
        }
        uVar17 = 2;
      }
      iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,&local_8c,4);
      uVar16 = uVar16 + 4;
      uVar13 = uVar16;
    } while (-1 < iVar18);
    if (0x80 < uVar21) {
      puVar10 = (undefined8 *)FUN_1402e2c84(0x28);
      *puVar10 = CRecognisedDataOneFileImpl::vftable;
      puVar10[1] = param_3;
      plVar3 = puVar10 + 2;
      local_80 = plVar3;
      local_78 = puVar10;
      lVar9 = FUN_140009200();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80004005);
      }
      lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
      *plVar3 = lVar9 + 0x18;
      FUN_140008c50(plVar3,L".mpg",4);
      puVar10[3] = uVar13;
      *(undefined1 *)(puVar10 + 4) = 1;
      return puVar10;
    }
  }
  return (undefined8 *)0x0;
}


// ---- function FUN_140283480 @ 140283480 (xref 14028356d)

/* WARNING: Removing unreachable block (ram,0x000140283ada) */
/* WARNING: Removing unreachable block (ram,0x000140283aeb) */
/* WARNING: Removing unreachable block (ram,0x0001402834f5) */
/* WARNING: Removing unreachable block (ram,0x000140283508) */
/* WARNING: Removing unreachable block (ram,0x000140283b96) */
/* WARNING: Removing unreachable block (ram,0x000140283ba7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140283480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  LPWSTR pWVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  ushort local_98 [2];
  undefined4 local_94;
  int local_90;
  uint local_8c;
  LPWSTR local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  local_94 = 0;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar15 = (LPWSTR)(puVar10 + 3);
  local_88 = pWVar15;
  iVar18 = MultiByteToWideChar(0,0,"CMpegFileData::Validate",-1,(LPWSTR)0x0,0);
  iVar18 = iVar18 + -1;
  if (iVar18 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar15 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar18 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar18 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar15 = (LPWSTR)(lVar9 + 0x18);
        local_88 = pWVar15;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar18 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_88,iVar18);
      pWVar15 = local_88;
    }
    MultiByteToWideChar(0,0,"CMpegFileData::Validate",-1,pWVar15,iVar18);
    if (*(int *)(pWVar15 + -6) < iVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar15 + -8) = iVar18;
    pWVar15[iVar18] = L'\0';
  }
  pWVar1 = pWVar15 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar9 + 0x18;
  local_94 = 1;
  iVar18 = *(int *)(pWVar15 + -8);
  lVar19 = (longlong)iVar18;
  iVar22 = iVar18 + 2;
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar22 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar22);
  }
  lVar9 = local_70;
  FUN_140008b60(local_70,lVar19,pWVar15,iVar18);
  puVar4 = (undefined4 *)(lVar9 + lVar19 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar22;
  *(undefined2 *)(lVar9 + 4 + lVar19 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar19 == 0)) {
    uVar11 = FUN_140009200();
    lVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_80 = (longlong *)(lVar19 + 0x18);
  local_94 = 3;
  local_90 = *(int *)(lVar9 + -0x10);
  iVar18 = local_90 + 0xb;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar19 + 0xc) - iVar18 | 1U - *(int *)(lVar19 + 0x10)) < 0) {
    FUN_140008ae0(&local_80,iVar18);
  }
  plVar3 = local_80;
  lVar19 = (longlong)local_90;
  FUN_140008b60(local_80,lVar19,lVar9,local_90);
  uVar7 = _UNK_1405cb544;
  uVar6 = _UNK_1405cb540;
  uVar5 = _UNK_1405cb53c;
  puVar4 = (undefined4 *)((longlong)plVar3 + lVar19 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = _DAT_1405cb538;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar4[4] = DAT_1405cb548;
    *(undefined2 *)(puVar4 + 5) = DAT_1405cb54c;
  }
  if (*(int *)((longlong)plVar3 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar3 + -2) = iVar18;
  uVar20 = 0;
  *(undefined2 *)((longlong)plVar3 + (longlong)local_90 * 2 + 0x16) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,plVar3);
  local_94 = 1;
  LOCK();
  plVar3 = plVar3 + -1;
  lVar19 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar18 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar15 = pWVar15 + -4;
  iVar18 = *(int *)pWVar15;
  *(int *)pWVar15 = *(int *)pWVar15 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_68 = param_2;
  iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_8c,4);
  uVar16 = 4;
  uVar17 = uVar20;
  uVar21 = uVar20;
  if (-1 < iVar18) {
    do {
      if ((local_8c & 0xffffff) != 0x10000) {
        uVar16 = uVar16 - 3;
        uVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (uVar16 <= uVar17) goto LAB_140283b29;
LAB_140283a6a:
        uVar13 = uVar20;
        break;
      }
      uVar14 = local_8c >> 0x18;
      uVar13 = uVar16;
      if (uVar14 == 0xb9) break;
      if ((uVar14 == 0xba) && ((int)uVar17 != 1)) {
        iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,&local_78,8);
        uVar16 = uVar16 + 8;
        uVar13 = uVar16;
        if (iVar18 < 0) break;
        if ((((((byte)local_78 & 0xf0) == 0x20) && (((uint)local_78 & 0x10001) == 0x10001)) &&
            (((ulonglong)local_78 & 0x100000000) != 0)) &&
           (((local_78._4_4_ >> 0xf & 1) != 0 && ((local_78._4_4_ >> 0x18 & 1) != 0)))) {
          bVar23 = true;
        }
        else {
          bVar23 = false;
        }
        if (!bVar23) goto LAB_140283b29;
        uVar17 = 1;
      }
      else {
        if ((uVar14 == 0xbb) && ((int)uVar17 == 1)) {
          iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,local_98,2);
          local_60 = uVar16 + 2;
          uVar13 = local_60;
          if ((iVar18 < 0) ||
             (cVar8 = FUN_14024e000(&local_68,local_98[0] << 8 | local_98[0] >> 8),
             uVar13 = local_60, cVar8 == '\0')) break;
          uVar16 = local_60;
          param_2 = local_68;
        }
        else {
          bVar23 = (uVar14 & 0xf0) < 0xb0;
          bVar24 = (uVar14 & 0xf0) == 0xb0;
          if (bVar24) {
            if (((byte)(local_8c >> 0x18) & 0xc) != 0xc) {
              bVar23 = false;
              bVar24 = true;
              goto LAB_1402839a5;
            }
LAB_1402839ab:
            bVar23 = true;
          }
          else {
LAB_1402839a5:
            if (!bVar23 && !bVar24) goto LAB_1402839ab;
            bVar23 = false;
          }
          if (!bVar23) {
LAB_140283b29:
            if (uVar21 < 0x81) {
              return (undefined8 *)0x0;
            }
            puVar10 = (undefined8 *)FUN_1402e2c84(0x28);
            *puVar10 = CRecognisedDataOneFileImpl::vftable;
            puVar10[1] = param_3;
            plVar3 = puVar10 + 2;
            local_80 = plVar3;
            local_78 = puVar10;
            lVar9 = FUN_140009200();
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140008e90(0x80004005);
            }
            lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
            *plVar3 = lVar9 + 0x18;
            FUN_140008c50(plVar3,L".mpg",4);
            puVar10[3] = uVar16;
            *(undefined1 *)(puVar10 + 4) = 1;
            return puVar10;
          }
          uVar21 = uVar21 + 1;
          iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,local_98,2);
          uVar13 = uVar16 + 2;
          if (iVar18 < 0) break;
          uVar13 = (ulonglong)(ushort)(local_98[0] << 8 | local_98[0] >> 8);
          uVar16 = uVar16 + 2 + uVar13;
          uVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          if (uVar17 < uVar16) {
            if (uVar13 == 0) goto LAB_140283a6a;
            uVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
            break;
          }
        }
        uVar17 = 2;
      }
      iVar18 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar16,&local_8c,4);
      uVar16 = uVar16 + 4;
      uVar13 = uVar16;
    } while (-1 < iVar18);
    if (0x80 < uVar21) {
      puVar10 = (undefined8 *)FUN_1402e2c84(0x28);
      *puVar10 = CRecognisedDataOneFileImpl::vftable;
      puVar10[1] = param_3;
      plVar3 = puVar10 + 2;
      local_80 = plVar3;
      local_78 = puVar10;
      lVar9 = FUN_140009200();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80004005);
      }
      lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
      *plVar3 = lVar9 + 0x18;
      FUN_140008c50(plVar3,L".mpg",4);
      puVar10[3] = uVar13;
      *(undefined1 *)(puVar10 + 4) = 1;
      return puVar10;
    }
  }
  return (undefined8 *)0x0;
}



// ===== string at 1405cb578 : CAsfDataType::Validate
// ---- function FUN_140283ca0 @ 140283ca0 (xref 140283d11)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140283d29) */
/* WARNING: Removing unreachable block (ram,0x000140283d3d) */

undefined8 * FUN_140283ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  LPWSTR pWVar14;
  wchar_t *pwVar15;
  int iVar16;
  undefined8 uVar17;
  undefined1 auStackY_128 [32];
  LPWSTR local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  uint local_a0;
  longlong local_78;
  undefined1 local_70 [24];
  ulonglong local_58;
  
  local_b0 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_128;
  uVar17 = 0;
  lVar8 = FUN_140009200();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar9 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar8);
  pWVar14 = (LPWSTR)(puVar9 + 3);
  local_e8 = pWVar14;
  iVar7 = MultiByteToWideChar(0,0,"CAsfDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar7 = iVar7 + -1;
  if (iVar7 < 1) {
    uVar10 = *puVar9;
    if (*(int *)(puVar9 + 1) != 0) {
      if (*(int *)(puVar9 + 2) < 0) {
        if (*(int *)((longlong)puVar9 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar9 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar9 + 2);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar10);
        pWVar14 = (LPWSTR)(lVar8 + 0x18);
        local_e8 = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar9 + 0xc) - iVar7 | 1U - *(int *)(puVar9 + 2)) < 0) {
      FUN_140008ae0(&local_e8,iVar7);
      pWVar14 = local_e8;
    }
    MultiByteToWideChar(0,0,"CAsfDataType::Validate",-1,pWVar14,iVar7);
    if (*(int *)(pWVar14 + -6) < iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar7;
    pWVar14[iVar7] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar8 == 0)) {
    uVar10 = FUN_140009200();
    lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar10);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_e0 = lVar8 + 0x18;
  iVar7 = *(int *)(pWVar14 + -8);
  iVar16 = iVar7 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar8 + 0xc) - iVar16 | 1U - *(int *)(lVar8 + 0x10)) < 0) {
    FUN_140008ae0(&local_e0,iVar16);
  }
  lVar8 = local_e0;
  FUN_140008b60(local_e0,(longlong)iVar7,pWVar14,iVar7);
  puVar3 = (undefined4 *)(lVar8 + (longlong)iVar7 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar11 = __doserrno();
    *puVar11 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar8 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar8 + -0x10) = iVar16;
  *(undefined2 *)(lVar8 + 4 + (longlong)iVar7 * 2) = 0;
  if ((*(longlong *)(lVar8 + -0x18) == 0) ||
     (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
    uVar10 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar10);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_d8 = lVar12 + 0x18;
  iVar7 = *(int *)(lVar8 + -0x10);
  iVar16 = iVar7 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar16 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_d8,iVar16);
  }
  lVar12 = local_d8;
  FUN_140008b60(local_d8,(longlong)iVar7,lVar8,iVar7);
  uVar6 = u_Trying_Asf_1405cb558._12_4_;
  uVar5 = u_Trying_Asf_1405cb558._8_4_;
  uVar4 = u_Trying_Asf_1405cb558._4_4_;
  pwVar15 = (wchar_t *)(lVar12 + (longlong)iVar7 * 2);
  if (pwVar15 == (wchar_t *)0x0) {
    puVar11 = __doserrno();
    *puVar11 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar15 = u_Trying_Asf_1405cb558._0_4_;
    *(undefined4 *)(pwVar15 + 2) = uVar4;
    *(undefined4 *)(pwVar15 + 4) = uVar5;
    *(undefined4 *)(pwVar15 + 6) = uVar6;
    *(undefined4 *)(pwVar15 + 8) = u_Trying_Asf_1405cb558._16_4_;
  }
  if (*(int *)(lVar12 + -0xc) < iVar7 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar12 + -0x10) = iVar7 + 10;
  *(undefined2 *)(lVar12 + 0x14 + (longlong)iVar7 * 2) = 0;
  uVar10 = FUN_140040170();
  FUN_140041bc0(uVar10,700,lVar12);
  LOCK();
  piVar2 = (int *)(lVar12 + -8);
  iVar7 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar7 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar8 + -8);
  iVar7 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar7 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar8 + -0x18),lVar8 + -0x18);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar7 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar7 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_b8 = 0;
  local_c0 = param_2;
  FUN_140297ac0(local_a8,&local_c0);
  if (local_a0 < 2) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)FUN_1402e2c84(0x28);
    FUN_14024cf70(local_70,&local_d0);
    if (local_a0 == 2) {
      pwVar15 = L".wma";
    }
    else if (local_a0 == 3) {
      pwVar15 = L".wmv";
    }
    else {
      pwVar15 = (wchar_t *)0x0;
    }
    puVar13 = (undefined8 *)FUN_140026080(&local_c8,&local_d0,pwVar15);
    if (local_78 != 0) {
      uVar17 = *(undefined8 *)(local_78 + 0x10);
    }
    uVar10 = *puVar13;
    *puVar9 = CRecognisedDataOneFileImpl::vftable;
    puVar9[1] = param_3;
    FUN_140008d70(puVar9 + 2,uVar10);
    puVar9[3] = uVar17;
    *(undefined1 *)(puVar9 + 4) = 0;
    LOCK();
    piVar2 = (int *)(local_c8 + -8);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
    LOCK();
    piVar2 = (int *)(local_d0 + -8);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  FUN_140026670(local_70);
  _free_base(local_78,0x50);
  return puVar9;
}


// ---- function FUN_140283ca0 @ 140283ca0 (xref 140283d64)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140283d29) */
/* WARNING: Removing unreachable block (ram,0x000140283d3d) */

undefined8 * FUN_140283ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  LPWSTR pWVar14;
  wchar_t *pwVar15;
  int iVar16;
  undefined8 uVar17;
  undefined1 auStackY_128 [32];
  LPWSTR local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  uint local_a0;
  longlong local_78;
  undefined1 local_70 [24];
  ulonglong local_58;
  
  local_b0 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_128;
  uVar17 = 0;
  lVar8 = FUN_140009200();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar9 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar8);
  pWVar14 = (LPWSTR)(puVar9 + 3);
  local_e8 = pWVar14;
  iVar7 = MultiByteToWideChar(0,0,"CAsfDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar7 = iVar7 + -1;
  if (iVar7 < 1) {
    uVar10 = *puVar9;
    if (*(int *)(puVar9 + 1) != 0) {
      if (*(int *)(puVar9 + 2) < 0) {
        if (*(int *)((longlong)puVar9 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar9 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar9 + 2);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar10);
        pWVar14 = (LPWSTR)(lVar8 + 0x18);
        local_e8 = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar9 + 0xc) - iVar7 | 1U - *(int *)(puVar9 + 2)) < 0) {
      FUN_140008ae0(&local_e8,iVar7);
      pWVar14 = local_e8;
    }
    MultiByteToWideChar(0,0,"CAsfDataType::Validate",-1,pWVar14,iVar7);
    if (*(int *)(pWVar14 + -6) < iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar7;
    pWVar14[iVar7] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar8 == 0)) {
    uVar10 = FUN_140009200();
    lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar10);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_e0 = lVar8 + 0x18;
  iVar7 = *(int *)(pWVar14 + -8);
  iVar16 = iVar7 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar8 + 0xc) - iVar16 | 1U - *(int *)(lVar8 + 0x10)) < 0) {
    FUN_140008ae0(&local_e0,iVar16);
  }
  lVar8 = local_e0;
  FUN_140008b60(local_e0,(longlong)iVar7,pWVar14,iVar7);
  puVar3 = (undefined4 *)(lVar8 + (longlong)iVar7 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar11 = __doserrno();
    *puVar11 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar8 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar8 + -0x10) = iVar16;
  *(undefined2 *)(lVar8 + 4 + (longlong)iVar7 * 2) = 0;
  if ((*(longlong *)(lVar8 + -0x18) == 0) ||
     (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
    uVar10 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar10);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_d8 = lVar12 + 0x18;
  iVar7 = *(int *)(lVar8 + -0x10);
  iVar16 = iVar7 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar16 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_d8,iVar16);
  }
  lVar12 = local_d8;
  FUN_140008b60(local_d8,(longlong)iVar7,lVar8,iVar7);
  uVar6 = u_Trying_Asf_1405cb558._12_4_;
  uVar5 = u_Trying_Asf_1405cb558._8_4_;
  uVar4 = u_Trying_Asf_1405cb558._4_4_;
  pwVar15 = (wchar_t *)(lVar12 + (longlong)iVar7 * 2);
  if (pwVar15 == (wchar_t *)0x0) {
    puVar11 = __doserrno();
    *puVar11 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar15 = u_Trying_Asf_1405cb558._0_4_;
    *(undefined4 *)(pwVar15 + 2) = uVar4;
    *(undefined4 *)(pwVar15 + 4) = uVar5;
    *(undefined4 *)(pwVar15 + 6) = uVar6;
    *(undefined4 *)(pwVar15 + 8) = u_Trying_Asf_1405cb558._16_4_;
  }
  if (*(int *)(lVar12 + -0xc) < iVar7 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar12 + -0x10) = iVar7 + 10;
  *(undefined2 *)(lVar12 + 0x14 + (longlong)iVar7 * 2) = 0;
  uVar10 = FUN_140040170();
  FUN_140041bc0(uVar10,700,lVar12);
  LOCK();
  piVar2 = (int *)(lVar12 + -8);
  iVar7 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar7 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar8 + -8);
  iVar7 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar7 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar8 + -0x18),lVar8 + -0x18);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar7 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar7 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_b8 = 0;
  local_c0 = param_2;
  FUN_140297ac0(local_a8,&local_c0);
  if (local_a0 < 2) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)FUN_1402e2c84(0x28);
    FUN_14024cf70(local_70,&local_d0);
    if (local_a0 == 2) {
      pwVar15 = L".wma";
    }
    else if (local_a0 == 3) {
      pwVar15 = L".wmv";
    }
    else {
      pwVar15 = (wchar_t *)0x0;
    }
    puVar13 = (undefined8 *)FUN_140026080(&local_c8,&local_d0,pwVar15);
    if (local_78 != 0) {
      uVar17 = *(undefined8 *)(local_78 + 0x10);
    }
    uVar10 = *puVar13;
    *puVar9 = CRecognisedDataOneFileImpl::vftable;
    puVar9[1] = param_3;
    FUN_140008d70(puVar9 + 2,uVar10);
    puVar9[3] = uVar17;
    *(undefined1 *)(puVar9 + 4) = 0;
    LOCK();
    piVar2 = (int *)(local_c8 + -8);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
    LOCK();
    piVar2 = (int *)(local_d0 + -8);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  FUN_140026670(local_70);
  _free_base(local_78,0x50);
  return puVar9;
}


// ---- function FUN_140283ca0 @ 140283ca0 (xref 140283da3)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140283d29) */
/* WARNING: Removing unreachable block (ram,0x000140283d3d) */

undefined8 * FUN_140283ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  LPWSTR pWVar14;
  wchar_t *pwVar15;
  int iVar16;
  undefined8 uVar17;
  undefined1 auStackY_128 [32];
  LPWSTR local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  uint local_a0;
  longlong local_78;
  undefined1 local_70 [24];
  ulonglong local_58;
  
  local_b0 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_128;
  uVar17 = 0;
  lVar8 = FUN_140009200();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar9 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar8);
  pWVar14 = (LPWSTR)(puVar9 + 3);
  local_e8 = pWVar14;
  iVar7 = MultiByteToWideChar(0,0,"CAsfDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar7 = iVar7 + -1;
  if (iVar7 < 1) {
    uVar10 = *puVar9;
    if (*(int *)(puVar9 + 1) != 0) {
      if (*(int *)(puVar9 + 2) < 0) {
        if (*(int *)((longlong)puVar9 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar9 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar9 + 2);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar10);
        pWVar14 = (LPWSTR)(lVar8 + 0x18);
        local_e8 = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar9 + 0xc) - iVar7 | 1U - *(int *)(puVar9 + 2)) < 0) {
      FUN_140008ae0(&local_e8,iVar7);
      pWVar14 = local_e8;
    }
    MultiByteToWideChar(0,0,"CAsfDataType::Validate",-1,pWVar14,iVar7);
    if (*(int *)(pWVar14 + -6) < iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar7;
    pWVar14[iVar7] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar8 == 0)) {
    uVar10 = FUN_140009200();
    lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar10);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar8 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_e0 = lVar8 + 0x18;
  iVar7 = *(int *)(pWVar14 + -8);
  iVar16 = iVar7 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar8 + 0xc) - iVar16 | 1U - *(int *)(lVar8 + 0x10)) < 0) {
    FUN_140008ae0(&local_e0,iVar16);
  }
  lVar8 = local_e0;
  FUN_140008b60(local_e0,(longlong)iVar7,pWVar14,iVar7);
  puVar3 = (undefined4 *)(lVar8 + (longlong)iVar7 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar11 = __doserrno();
    *puVar11 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar8 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar8 + -0x10) = iVar16;
  *(undefined2 *)(lVar8 + 4 + (longlong)iVar7 * 2) = 0;
  if ((*(longlong *)(lVar8 + -0x18) == 0) ||
     (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
    uVar10 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar10);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_d8 = lVar12 + 0x18;
  iVar7 = *(int *)(lVar8 + -0x10);
  iVar16 = iVar7 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar16 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_d8,iVar16);
  }
  lVar12 = local_d8;
  FUN_140008b60(local_d8,(longlong)iVar7,lVar8,iVar7);
  uVar6 = u_Trying_Asf_1405cb558._12_4_;
  uVar5 = u_Trying_Asf_1405cb558._8_4_;
  uVar4 = u_Trying_Asf_1405cb558._4_4_;
  pwVar15 = (wchar_t *)(lVar12 + (longlong)iVar7 * 2);
  if (pwVar15 == (wchar_t *)0x0) {
    puVar11 = __doserrno();
    *puVar11 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar15 = u_Trying_Asf_1405cb558._0_4_;
    *(undefined4 *)(pwVar15 + 2) = uVar4;
    *(undefined4 *)(pwVar15 + 4) = uVar5;
    *(undefined4 *)(pwVar15 + 6) = uVar6;
    *(undefined4 *)(pwVar15 + 8) = u_Trying_Asf_1405cb558._16_4_;
  }
  if (*(int *)(lVar12 + -0xc) < iVar7 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar12 + -0x10) = iVar7 + 10;
  *(undefined2 *)(lVar12 + 0x14 + (longlong)iVar7 * 2) = 0;
  uVar10 = FUN_140040170();
  FUN_140041bc0(uVar10,700,lVar12);
  LOCK();
  piVar2 = (int *)(lVar12 + -8);
  iVar7 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar7 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar8 + -8);
  iVar7 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar7 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar8 + -0x18),lVar8 + -0x18);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar7 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar7 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_b8 = 0;
  local_c0 = param_2;
  FUN_140297ac0(local_a8,&local_c0);
  if (local_a0 < 2) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)FUN_1402e2c84(0x28);
    FUN_14024cf70(local_70,&local_d0);
    if (local_a0 == 2) {
      pwVar15 = L".wma";
    }
    else if (local_a0 == 3) {
      pwVar15 = L".wmv";
    }
    else {
      pwVar15 = (wchar_t *)0x0;
    }
    puVar13 = (undefined8 *)FUN_140026080(&local_c8,&local_d0,pwVar15);
    if (local_78 != 0) {
      uVar17 = *(undefined8 *)(local_78 + 0x10);
    }
    uVar10 = *puVar13;
    *puVar9 = CRecognisedDataOneFileImpl::vftable;
    puVar9[1] = param_3;
    FUN_140008d70(puVar9 + 2,uVar10);
    puVar9[3] = uVar17;
    *(undefined1 *)(puVar9 + 4) = 0;
    LOCK();
    piVar2 = (int *)(local_c8 + -8);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
    LOCK();
    piVar2 = (int *)(local_d0 + -8);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  FUN_140026670(local_70);
  _free_base(local_78,0x50);
  return puVar9;
}



// ===== string at 1405cb5b8 : CFlvDataType::Validate
// ---- function FUN_1402843a0 @ 1402843a0 (xref 14028440d)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140284421) */
/* WARNING: Removing unreachable block (ram,0x000140284435) */
/* WARNING: Removing unreachable block (ram,0x000140284968) */
/* WARNING: Removing unreachable block (ram,0x000140284979) */

undefined8 * FUN_1402843a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  char cVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  LPWSTR pWVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 auStackY_e8 [32];
  undefined4 local_b4;
  undefined8 local_b0;
  ulonglong local_a8;
  int local_a0;
  undefined1 local_9c [4];
  LPWSTR local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 auStack_6f [7];
  char local_68;
  char local_67;
  char local_66;
  short local_60;
  char local_5e;
  undefined1 auStack_5b [11];
  ulonglong local_50;
  
  local_78 = 0xfffffffffffffffe;
  local_50 = DAT_1406f60c0 ^ (ulonglong)auStackY_e8;
  lVar12 = FUN_140009200();
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
  pWVar19 = (LPWSTR)(puVar13 + 3);
  local_98 = pWVar19;
  iVar20 = MultiByteToWideChar(0,0,"CFlvDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar20 = iVar20 + -1;
  if (iVar20 < 1) {
    uVar14 = *puVar13;
    if (*(int *)(puVar13 + 1) != 0) {
      if (*(int *)(puVar13 + 2) < 0) {
        if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar13 + 1) = 0;
        *pWVar19 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar13 + 2);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
        pWVar19 = (LPWSTR)(lVar12 + 0x18);
        local_98 = pWVar19;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar13 + 0xc) - iVar20 | 1U - *(int *)(puVar13 + 2)) < 0) {
      FUN_140008ae0(&local_98,iVar20);
      pWVar19 = local_98;
    }
    MultiByteToWideChar(0,0,"CFlvDataType::Validate",-1,pWVar19,iVar20);
    if (*(int *)(pWVar19 + -6) < iVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar19 + -8) = iVar20;
    pWVar19[iVar20] = L'\0';
  }
  pWVar2 = pWVar19 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
    uVar14 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_88 = (longlong *)(lVar12 + 0x18);
  iVar20 = *(int *)(pWVar19 + -8);
  lVar21 = (longlong)iVar20;
  iVar23 = iVar20 + 2;
  if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar23 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_88,iVar23);
  }
  plVar4 = local_88;
  FUN_140008b60(local_88,lVar21,pWVar19,iVar20);
  puVar5 = (undefined4 *)((longlong)plVar4 + lVar21 * 2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar5 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar23) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar23;
  *(undefined2 *)((longlong)plVar4 + lVar21 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0))
  {
    uVar14 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_80 = (undefined8 *)(lVar12 + 0x18);
  local_a0 = (int)plVar4[-2];
  iVar20 = local_a0 + 10;
  if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar20 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_80,iVar20);
  }
  puVar13 = local_80;
  lVar12 = (longlong)local_a0;
  FUN_140008b60(local_80,lVar12,plVar4,local_a0);
  uVar9 = u_Trying_Flv_1405cb5d0._12_4_;
  uVar8 = u_Trying_Flv_1405cb5d0._8_4_;
  uVar7 = u_Trying_Flv_1405cb5d0._4_4_;
  pwVar6 = (wchar_t *)((longlong)puVar13 + lVar12 * 2);
  if (pwVar6 == (wchar_t *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar6 = u_Trying_Flv_1405cb5d0._0_4_;
    *(undefined4 *)(pwVar6 + 2) = uVar7;
    *(undefined4 *)(pwVar6 + 4) = uVar8;
    *(undefined4 *)(pwVar6 + 6) = uVar9;
    *(undefined4 *)(pwVar6 + 8) = u_Trying_Flv_1405cb5d0._16_4_;
  }
  if (*(int *)((longlong)puVar13 + -0xc) < iVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar13 + -2) = iVar20;
  uVar22 = 0;
  *(undefined2 *)((longlong)puVar13 + (longlong)local_a0 * 2 + 0x14) = 0;
  uVar14 = FUN_140040170();
  FUN_140041bc0(uVar14,700,puVar13);
  LOCK();
  piVar1 = (int *)(puVar13 + -1);
  iVar20 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar20 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar12 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar19 = pWVar19 + -4;
  iVar20 = *(int *)pWVar19;
  *(int *)pWVar19 = *(int *)pWVar19 + -1;
  UNLOCK();
  if (iVar20 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  local_b0 = param_2;
  iVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_60,9);
  local_a8 = 9;
  if (((-1 < iVar20) && (local_60 == DAT_1405cb5e8)) && (local_5e == DAT_1405cb5ea)) {
    puVar18 = (undefined1 *)((longlong)&local_90 + 3);
    for (uVar16 = uVar22; uVar16 != 4; uVar16 = uVar16 + 1) {
      *puVar18 = auStack_5b[uVar16];
      puVar18 = puVar18 + -1;
    }
    if ((8 < local_90) &&
       (cVar11 = FUN_14024e000(&local_b0,(longlong)(local_90 + -9)), cVar11 != '\0')) {
      uVar16 = uVar22;
      while( true ) {
        uVar10 = local_a8;
        uVar14 = local_b0;
        iVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_b0,local_a8,local_9c,4);
        local_a8 = uVar10 + 4;
        if (iVar20 < 0) break;
        puVar18 = (undefined1 *)((longlong)&local_8c + 3);
        for (uVar17 = uVar22; uVar17 != 4; uVar17 = uVar17 + 1) {
          *puVar18 = local_9c[uVar17];
          puVar18 = puVar18 + -1;
        }
        if ((local_8c != 0) && (local_8c != (int)uVar16)) {
          FUN_14024e000(&local_b0,(longlong)-(int)uVar16);
          break;
        }
        iVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14,local_a8,&local_70,0xb);
        local_a8 = uVar10 + 0xf;
        if (iVar20 < 0) break;
        puVar18 = (undefined1 *)((longlong)&local_b4 + 3);
        for (uVar16 = uVar22; uVar16 != 3; uVar16 = uVar16 + 1) {
          *puVar18 = auStack_6f[uVar16];
          puVar18 = puVar18 + -1;
        }
        iVar20 = local_b4 >> 8;
        local_b4 = iVar20;
        cVar11 = FUN_14024e000(&local_b0,(longlong)iVar20);
        if ((((cVar11 == '\0') || (local_68 != '\0')) || (local_67 != '\0')) || (local_66 != '\0'))
        break;
        uVar16 = (ulonglong)(iVar20 + 0xb);
      }
      uVar22 = local_a8;
      if (0x14 < local_a8) {
        puVar13 = (undefined8 *)FUN_1402e2c84(0x28);
        *puVar13 = CRecognisedDataOneFileImpl::vftable;
        puVar13[1] = param_3;
        plVar4 = puVar13 + 2;
        local_88 = plVar4;
        local_80 = puVar13;
        lVar12 = FUN_140009200();
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
        *plVar4 = lVar12 + 0x18;
        FUN_140008c50(plVar4,L".flv",4);
        puVar13[3] = uVar22;
        *(undefined1 *)(puVar13 + 4) = 0;
        return puVar13;
      }
    }
  }
  return (undefined8 *)0x0;
}


// ---- function FUN_1402843a0 @ 1402843a0 (xref 140284459)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140284421) */
/* WARNING: Removing unreachable block (ram,0x000140284435) */
/* WARNING: Removing unreachable block (ram,0x000140284968) */
/* WARNING: Removing unreachable block (ram,0x000140284979) */

undefined8 * FUN_1402843a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  char cVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  LPWSTR pWVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 auStackY_e8 [32];
  undefined4 local_b4;
  undefined8 local_b0;
  ulonglong local_a8;
  int local_a0;
  undefined1 local_9c [4];
  LPWSTR local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 auStack_6f [7];
  char local_68;
  char local_67;
  char local_66;
  short local_60;
  char local_5e;
  undefined1 auStack_5b [11];
  ulonglong local_50;
  
  local_78 = 0xfffffffffffffffe;
  local_50 = DAT_1406f60c0 ^ (ulonglong)auStackY_e8;
  lVar12 = FUN_140009200();
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
  pWVar19 = (LPWSTR)(puVar13 + 3);
  local_98 = pWVar19;
  iVar20 = MultiByteToWideChar(0,0,"CFlvDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar20 = iVar20 + -1;
  if (iVar20 < 1) {
    uVar14 = *puVar13;
    if (*(int *)(puVar13 + 1) != 0) {
      if (*(int *)(puVar13 + 2) < 0) {
        if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar13 + 1) = 0;
        *pWVar19 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar13 + 2);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
        pWVar19 = (LPWSTR)(lVar12 + 0x18);
        local_98 = pWVar19;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar13 + 0xc) - iVar20 | 1U - *(int *)(puVar13 + 2)) < 0) {
      FUN_140008ae0(&local_98,iVar20);
      pWVar19 = local_98;
    }
    MultiByteToWideChar(0,0,"CFlvDataType::Validate",-1,pWVar19,iVar20);
    if (*(int *)(pWVar19 + -6) < iVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar19 + -8) = iVar20;
    pWVar19[iVar20] = L'\0';
  }
  pWVar2 = pWVar19 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
    uVar14 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_88 = (longlong *)(lVar12 + 0x18);
  iVar20 = *(int *)(pWVar19 + -8);
  lVar21 = (longlong)iVar20;
  iVar23 = iVar20 + 2;
  if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar23 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_88,iVar23);
  }
  plVar4 = local_88;
  FUN_140008b60(local_88,lVar21,pWVar19,iVar20);
  puVar5 = (undefined4 *)((longlong)plVar4 + lVar21 * 2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar5 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar23) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar23;
  *(undefined2 *)((longlong)plVar4 + lVar21 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0))
  {
    uVar14 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_80 = (undefined8 *)(lVar12 + 0x18);
  local_a0 = (int)plVar4[-2];
  iVar20 = local_a0 + 10;
  if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar20 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_80,iVar20);
  }
  puVar13 = local_80;
  lVar12 = (longlong)local_a0;
  FUN_140008b60(local_80,lVar12,plVar4,local_a0);
  uVar9 = u_Trying_Flv_1405cb5d0._12_4_;
  uVar8 = u_Trying_Flv_1405cb5d0._8_4_;
  uVar7 = u_Trying_Flv_1405cb5d0._4_4_;
  pwVar6 = (wchar_t *)((longlong)puVar13 + lVar12 * 2);
  if (pwVar6 == (wchar_t *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar6 = u_Trying_Flv_1405cb5d0._0_4_;
    *(undefined4 *)(pwVar6 + 2) = uVar7;
    *(undefined4 *)(pwVar6 + 4) = uVar8;
    *(undefined4 *)(pwVar6 + 6) = uVar9;
    *(undefined4 *)(pwVar6 + 8) = u_Trying_Flv_1405cb5d0._16_4_;
  }
  if (*(int *)((longlong)puVar13 + -0xc) < iVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar13 + -2) = iVar20;
  uVar22 = 0;
  *(undefined2 *)((longlong)puVar13 + (longlong)local_a0 * 2 + 0x14) = 0;
  uVar14 = FUN_140040170();
  FUN_140041bc0(uVar14,700,puVar13);
  LOCK();
  piVar1 = (int *)(puVar13 + -1);
  iVar20 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar20 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar12 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar19 = pWVar19 + -4;
  iVar20 = *(int *)pWVar19;
  *(int *)pWVar19 = *(int *)pWVar19 + -1;
  UNLOCK();
  if (iVar20 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  local_b0 = param_2;
  iVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_60,9);
  local_a8 = 9;
  if (((-1 < iVar20) && (local_60 == DAT_1405cb5e8)) && (local_5e == DAT_1405cb5ea)) {
    puVar18 = (undefined1 *)((longlong)&local_90 + 3);
    for (uVar16 = uVar22; uVar16 != 4; uVar16 = uVar16 + 1) {
      *puVar18 = auStack_5b[uVar16];
      puVar18 = puVar18 + -1;
    }
    if ((8 < local_90) &&
       (cVar11 = FUN_14024e000(&local_b0,(longlong)(local_90 + -9)), cVar11 != '\0')) {
      uVar16 = uVar22;
      while( true ) {
        uVar10 = local_a8;
        uVar14 = local_b0;
        iVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_b0,local_a8,local_9c,4);
        local_a8 = uVar10 + 4;
        if (iVar20 < 0) break;
        puVar18 = (undefined1 *)((longlong)&local_8c + 3);
        for (uVar17 = uVar22; uVar17 != 4; uVar17 = uVar17 + 1) {
          *puVar18 = local_9c[uVar17];
          puVar18 = puVar18 + -1;
        }
        if ((local_8c != 0) && (local_8c != (int)uVar16)) {
          FUN_14024e000(&local_b0,(longlong)-(int)uVar16);
          break;
        }
        iVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14,local_a8,&local_70,0xb);
        local_a8 = uVar10 + 0xf;
        if (iVar20 < 0) break;
        puVar18 = (undefined1 *)((longlong)&local_b4 + 3);
        for (uVar16 = uVar22; uVar16 != 3; uVar16 = uVar16 + 1) {
          *puVar18 = auStack_6f[uVar16];
          puVar18 = puVar18 + -1;
        }
        iVar20 = local_b4 >> 8;
        local_b4 = iVar20;
        cVar11 = FUN_14024e000(&local_b0,(longlong)iVar20);
        if ((((cVar11 == '\0') || (local_68 != '\0')) || (local_67 != '\0')) || (local_66 != '\0'))
        break;
        uVar16 = (ulonglong)(iVar20 + 0xb);
      }
      uVar22 = local_a8;
      if (0x14 < local_a8) {
        puVar13 = (undefined8 *)FUN_1402e2c84(0x28);
        *puVar13 = CRecognisedDataOneFileImpl::vftable;
        puVar13[1] = param_3;
        plVar4 = puVar13 + 2;
        local_88 = plVar4;
        local_80 = puVar13;
        lVar12 = FUN_140009200();
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
        *plVar4 = lVar12 + 0x18;
        FUN_140008c50(plVar4,L".flv",4);
        puVar13[3] = uVar22;
        *(undefined1 *)(puVar13 + 4) = 0;
        return puVar13;
      }
    }
  }
  return (undefined8 *)0x0;
}


// ---- function FUN_1402843a0 @ 1402843a0 (xref 140284499)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140284421) */
/* WARNING: Removing unreachable block (ram,0x000140284435) */
/* WARNING: Removing unreachable block (ram,0x000140284968) */
/* WARNING: Removing unreachable block (ram,0x000140284979) */

undefined8 * FUN_1402843a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  char cVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  LPWSTR pWVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 auStackY_e8 [32];
  undefined4 local_b4;
  undefined8 local_b0;
  ulonglong local_a8;
  int local_a0;
  undefined1 local_9c [4];
  LPWSTR local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 auStack_6f [7];
  char local_68;
  char local_67;
  char local_66;
  short local_60;
  char local_5e;
  undefined1 auStack_5b [11];
  ulonglong local_50;
  
  local_78 = 0xfffffffffffffffe;
  local_50 = DAT_1406f60c0 ^ (ulonglong)auStackY_e8;
  lVar12 = FUN_140009200();
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
  pWVar19 = (LPWSTR)(puVar13 + 3);
  local_98 = pWVar19;
  iVar20 = MultiByteToWideChar(0,0,"CFlvDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar20 = iVar20 + -1;
  if (iVar20 < 1) {
    uVar14 = *puVar13;
    if (*(int *)(puVar13 + 1) != 0) {
      if (*(int *)(puVar13 + 2) < 0) {
        if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar13 + 1) = 0;
        *pWVar19 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar13 + 2);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
        pWVar19 = (LPWSTR)(lVar12 + 0x18);
        local_98 = pWVar19;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar13 + 0xc) - iVar20 | 1U - *(int *)(puVar13 + 2)) < 0) {
      FUN_140008ae0(&local_98,iVar20);
      pWVar19 = local_98;
    }
    MultiByteToWideChar(0,0,"CFlvDataType::Validate",-1,pWVar19,iVar20);
    if (*(int *)(pWVar19 + -6) < iVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar19 + -8) = iVar20;
    pWVar19[iVar20] = L'\0';
  }
  pWVar2 = pWVar19 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
    uVar14 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_88 = (longlong *)(lVar12 + 0x18);
  iVar20 = *(int *)(pWVar19 + -8);
  lVar21 = (longlong)iVar20;
  iVar23 = iVar20 + 2;
  if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar23 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_88,iVar23);
  }
  plVar4 = local_88;
  FUN_140008b60(local_88,lVar21,pWVar19,iVar20);
  puVar5 = (undefined4 *)((longlong)plVar4 + lVar21 * 2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar5 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar23) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar23;
  *(undefined2 *)((longlong)plVar4 + lVar21 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0))
  {
    uVar14 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_80 = (undefined8 *)(lVar12 + 0x18);
  local_a0 = (int)plVar4[-2];
  iVar20 = local_a0 + 10;
  if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar20 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_80,iVar20);
  }
  puVar13 = local_80;
  lVar12 = (longlong)local_a0;
  FUN_140008b60(local_80,lVar12,plVar4,local_a0);
  uVar9 = u_Trying_Flv_1405cb5d0._12_4_;
  uVar8 = u_Trying_Flv_1405cb5d0._8_4_;
  uVar7 = u_Trying_Flv_1405cb5d0._4_4_;
  pwVar6 = (wchar_t *)((longlong)puVar13 + lVar12 * 2);
  if (pwVar6 == (wchar_t *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar6 = u_Trying_Flv_1405cb5d0._0_4_;
    *(undefined4 *)(pwVar6 + 2) = uVar7;
    *(undefined4 *)(pwVar6 + 4) = uVar8;
    *(undefined4 *)(pwVar6 + 6) = uVar9;
    *(undefined4 *)(pwVar6 + 8) = u_Trying_Flv_1405cb5d0._16_4_;
  }
  if (*(int *)((longlong)puVar13 + -0xc) < iVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar13 + -2) = iVar20;
  uVar22 = 0;
  *(undefined2 *)((longlong)puVar13 + (longlong)local_a0 * 2 + 0x14) = 0;
  uVar14 = FUN_140040170();
  FUN_140041bc0(uVar14,700,puVar13);
  LOCK();
  piVar1 = (int *)(puVar13 + -1);
  iVar20 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar20 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar12 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar12 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar19 = pWVar19 + -4;
  iVar20 = *(int *)pWVar19;
  *(int *)pWVar19 = *(int *)pWVar19 + -1;
  UNLOCK();
  if (iVar20 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  local_b0 = param_2;
  iVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_60,9);
  local_a8 = 9;
  if (((-1 < iVar20) && (local_60 == DAT_1405cb5e8)) && (local_5e == DAT_1405cb5ea)) {
    puVar18 = (undefined1 *)((longlong)&local_90 + 3);
    for (uVar16 = uVar22; uVar16 != 4; uVar16 = uVar16 + 1) {
      *puVar18 = auStack_5b[uVar16];
      puVar18 = puVar18 + -1;
    }
    if ((8 < local_90) &&
       (cVar11 = FUN_14024e000(&local_b0,(longlong)(local_90 + -9)), cVar11 != '\0')) {
      uVar16 = uVar22;
      while( true ) {
        uVar10 = local_a8;
        uVar14 = local_b0;
        iVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_b0,local_a8,local_9c,4);
        local_a8 = uVar10 + 4;
        if (iVar20 < 0) break;
        puVar18 = (undefined1 *)((longlong)&local_8c + 3);
        for (uVar17 = uVar22; uVar17 != 4; uVar17 = uVar17 + 1) {
          *puVar18 = local_9c[uVar17];
          puVar18 = puVar18 + -1;
        }
        if ((local_8c != 0) && (local_8c != (int)uVar16)) {
          FUN_14024e000(&local_b0,(longlong)-(int)uVar16);
          break;
        }
        iVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14,local_a8,&local_70,0xb);
        local_a8 = uVar10 + 0xf;
        if (iVar20 < 0) break;
        puVar18 = (undefined1 *)((longlong)&local_b4 + 3);
        for (uVar16 = uVar22; uVar16 != 3; uVar16 = uVar16 + 1) {
          *puVar18 = auStack_6f[uVar16];
          puVar18 = puVar18 + -1;
        }
        iVar20 = local_b4 >> 8;
        local_b4 = iVar20;
        cVar11 = FUN_14024e000(&local_b0,(longlong)iVar20);
        if ((((cVar11 == '\0') || (local_68 != '\0')) || (local_67 != '\0')) || (local_66 != '\0'))
        break;
        uVar16 = (ulonglong)(iVar20 + 0xb);
      }
      uVar22 = local_a8;
      if (0x14 < local_a8) {
        puVar13 = (undefined8 *)FUN_1402e2c84(0x28);
        *puVar13 = CRecognisedDataOneFileImpl::vftable;
        puVar13[1] = param_3;
        plVar4 = puVar13 + 2;
        local_88 = plVar4;
        local_80 = puVar13;
        lVar12 = FUN_140009200();
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
        *plVar4 = lVar12 + 0x18;
        FUN_140008c50(plVar4,L".flv",4);
        puVar13[3] = uVar22;
        *(undefined1 *)(puVar13 + 4) = 0;
        return puVar13;
      }
    }
  }
  return (undefined8 *)0x0;
}



// ===== string at 1405cb608 : COggDataType::Validate
// ---- function FUN_140284b30 @ 140284b30 (xref 140284b9f)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140284bb3) */
/* WARNING: Removing unreachable block (ram,0x000140284bc6) */
/* WARNING: Removing unreachable block (ram,0x000140285167) */
/* WARNING: Removing unreachable block (ram,0x000140285176) */

undefined8 * FUN_140284b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  unkuint10 Var8;
  undefined1 auVar9 [13];
  undefined1 auVar10 [11];
  undefined1 auVar11 [13];
  undefined1 auVar12 [11];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  uint6 uVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong *puVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  LPWSTR pWVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar36;
  int iVar37;
  int iVar39;
  int iVar40;
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  ushort uVar38;
  undefined1 auVar31 [16];
  int iVar41;
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  int iVar42;
  undefined1 auStackY_e8 [32];
  LPWSTR local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  byte *local_98;
  byte *pbStack_90;
  longlong local_88;
  undefined8 local_80;
  int local_78 [6];
  undefined1 local_5e;
  ulonglong local_58;
  
  local_80 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_e8;
  puVar22 = (undefined8 *)0x0;
  lVar17 = FUN_140009200();
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar18 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
  pWVar23 = (LPWSTR)(puVar18 + 3);
  local_b0 = pWVar23;
  iVar16 = MultiByteToWideChar(0,0,"COggDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar16 = iVar16 + -1;
  if (iVar16 < 1) {
    uVar19 = *puVar18;
    if (*(int *)(puVar18 + 1) != 0) {
      if (*(int *)(puVar18 + 2) < 0) {
        if (*(int *)((longlong)puVar18 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar18 + 1) = 0;
        *pWVar23 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar18 + 2);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
        pWVar23 = (LPWSTR)(lVar17 + 0x18);
        local_b0 = pWVar23;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar18 + 0xc) - iVar16 | 1U - *(int *)(puVar18 + 2)) < 0) {
      FUN_140008ae0(&local_b0,iVar16);
      pWVar23 = local_b0;
    }
    MultiByteToWideChar(0,0,"COggDataType::Validate",-1,pWVar23,iVar16);
    if (*(int *)(pWVar23 + -6) < iVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar23 + -8) = iVar16;
    pWVar23[iVar16] = L'\0';
  }
  pWVar2 = pWVar23 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0)) {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_a8 = (longlong *)(lVar17 + 0x18);
  iVar16 = *(int *)(pWVar23 + -8);
  iVar26 = iVar16 + 2;
  if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - iVar26 | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_a8,iVar26);
  }
  plVar4 = local_a8;
  FUN_140008b60(local_a8,(longlong)iVar16,pWVar23,iVar16);
  puVar5 = (undefined4 *)((longlong)plVar4 + (longlong)iVar16 * 2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar5 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar26) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar26;
  *(undefined2 *)((longlong)plVar4 + (longlong)iVar16 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0))
  {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_a0 = (undefined8 *)(lVar17 + 0x18);
  iVar16 = (int)plVar4[-2];
  if (iVar16 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - (iVar16 + 10) | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_a0);
  }
  puVar18 = local_a0;
  FUN_140008b60(local_a0,(longlong)iVar16,plVar4,iVar16);
  uVar19 = u_Trying_Ogg_1405cb620._8_8_;
  pwVar6 = (wchar_t *)((longlong)puVar18 + (longlong)iVar16 * 2);
  if (pwVar6 == (wchar_t *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined8 *)pwVar6 = u_Trying_Ogg_1405cb620._0_8_;
    *(undefined8 *)(pwVar6 + 4) = uVar19;
    *(undefined4 *)(pwVar6 + 8) = u_Trying_Ogg_1405cb620._16_4_;
  }
  if (*(int *)((longlong)puVar18 + -0xc) < iVar16 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar18 + -2) = iVar16 + 10;
  *(undefined2 *)((longlong)puVar18 + (longlong)iVar16 * 2 + 0x14) = 0;
  uVar19 = FUN_140040170();
  FUN_140041bc0(uVar19,700,puVar18);
  LOCK();
  piVar1 = (int *)(puVar18 + -1);
  iVar16 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar16 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar17 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar23 = pWVar23 + -4;
  iVar16 = *(int *)pWVar23;
  *(int *)pWVar23 = *(int *)pWVar23 + -1;
  UNLOCK();
  if (iVar16 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  local_98 = (byte *)0x0;
  pbStack_90 = (byte *)0x0;
  local_88 = 0;
  FUN_14020cd90(&local_98,0xff);
  uVar27 = 0;
  iVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,local_78,0x1b);
  uVar24 = 0x1b;
  if (-1 < iVar16) {
    do {
      if (local_78[0] != s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8._24_4_) {
        uVar24 = uVar24 - 0x1b;
        uVar25 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (uVar25 < uVar24) {
LAB_1402850fa:
          uVar24 = 0;
        }
        break;
      }
      FUN_1401fe880(&local_98,local_5e);
      if (local_98 != pbStack_90) {
        lVar17 = (longlong)pbStack_90 - (longlong)local_98;
        iVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar24,local_98,lVar17);
        lVar17 = uVar24 + lVar17;
        if (iVar16 < 0) {
          uVar24 = lVar17 - 0x1b;
          uVar25 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          if (uVar25 < uVar24) {
            uVar24 = 0;
          }
          break;
        }
        iVar16 = 0;
        uVar24 = 0;
        uVar25 = (longlong)pbStack_90 - (longlong)local_98;
        if (pbStack_90 < local_98) {
          uVar25 = 0;
        }
        if (uVar25 != 0) {
          pbVar21 = local_98;
          if (7 < uVar25) {
            iVar16 = 0;
            iVar36 = 0;
            iVar39 = 0;
            iVar41 = 0;
            iVar26 = 0;
            iVar37 = 0;
            iVar40 = 0;
            iVar42 = 0;
            do {
              uVar7 = *(undefined4 *)pbVar21;
              Var8 = CONCAT91((unkuint9)0,(char)((uint)uVar7 >> 0x18));
              auVar10[10] = 0;
              auVar10._0_10_ = Var8;
              auVar30[4] = (char)((uint)uVar7 >> 0x10);
              auVar30._0_4_ = uVar7;
              auVar30._5_11_ = auVar10 << 8;
              auVar9[0xc] = 0;
              auVar9._0_12_ = auVar30._4_12_;
              auVar29._0_2_ = (ushort)uVar7;
              auVar29[2] = (char)((uint)uVar7 >> 8);
              auVar29._3_13_ = auVar9 << 8;
              auVar28._2_14_ = auVar29._2_14_;
              auVar28._0_2_ = auVar29._0_2_ & 0xff;
              uVar38 = (ushort)Var8;
              auVar13._10_2_ = 0;
              auVar13._0_10_ = auVar28._0_10_;
              auVar13._12_2_ = uVar38;
              uVar15 = CONCAT42(auVar13._10_4_,auVar30._4_2_);
              auVar31._0_4_ = auVar28._0_4_;
              auVar31._4_2_ = auVar29._2_2_;
              auVar31._6_10_ = (unkuint10)uVar15 << 0x10;
              iVar16 = (auVar31._0_4_ & 0xffff) + iVar16;
              iVar36 = auVar31._4_4_ + iVar36;
              iVar39 = (int)uVar15 + iVar39;
              iVar41 = (uint)uVar38 + iVar41;
              uVar7 = *(undefined4 *)(pbVar21 + 4);
              Var8 = CONCAT91((unkuint9)0,(char)((uint)uVar7 >> 0x18));
              auVar12[10] = 0;
              auVar12._0_10_ = Var8;
              auVar34[4] = (char)((uint)uVar7 >> 0x10);
              auVar34._0_4_ = uVar7;
              auVar34._5_11_ = auVar12 << 8;
              auVar11[0xc] = 0;
              auVar11._0_12_ = auVar34._4_12_;
              auVar33._0_2_ = (ushort)uVar7;
              auVar33[2] = (char)((uint)uVar7 >> 8);
              auVar33._3_13_ = auVar11 << 8;
              auVar32._2_14_ = auVar33._2_14_;
              auVar32._0_2_ = auVar33._0_2_ & 0xff;
              uVar38 = (ushort)Var8;
              auVar14._10_2_ = 0;
              auVar14._0_10_ = auVar32._0_10_;
              auVar14._12_2_ = uVar38;
              uVar15 = CONCAT42(auVar14._10_4_,auVar34._4_2_);
              auVar35._0_4_ = auVar32._0_4_;
              auVar35._4_2_ = auVar33._2_2_;
              auVar35._6_10_ = (unkuint10)uVar15 << 0x10;
              iVar26 = (auVar35._0_4_ & 0xffff) + iVar26;
              iVar37 = auVar35._4_4_ + iVar37;
              iVar40 = (int)uVar15 + iVar40;
              iVar42 = (uint)uVar38 + iVar42;
              pbVar21 = pbVar21 + 8;
              uVar24 = uVar24 + 8;
            } while (uVar24 != (uVar25 & 0xfffffffffffffff8));
            iVar16 = iVar16 + iVar26 + iVar39 + iVar40 + iVar36 + iVar37 + iVar41 + iVar42;
          }
          for (; uVar24 != uVar25; uVar24 = uVar24 + 1) {
            iVar16 = iVar16 + (uint)*pbVar21;
            pbVar21 = pbVar21 + 1;
          }
        }
        uVar24 = lVar17 + iVar16;
        uVar25 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (uVar25 < uVar24) {
          if ((longlong)iVar16 < 1) goto LAB_1402850fa;
          uVar24 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          break;
        }
        uVar27 = uVar27 + 1;
      }
      iVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar24,local_78,0x1b);
      uVar24 = uVar24 + 0x1b;
    } while (-1 < iVar16);
    if (2 < uVar27) {
      puVar22 = (undefined8 *)FUN_1402e2c84(0x28);
      *puVar22 = CRecognisedDataOneFileImpl::vftable;
      puVar22[1] = param_3;
      plVar4 = puVar22 + 2;
      local_a8 = plVar4;
      local_a0 = puVar22;
      lVar17 = FUN_140009200();
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80004005);
      }
      lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
      *plVar4 = lVar17 + 0x18;
      FUN_140008c50(plVar4,L".Ogg",4);
      puVar22[3] = uVar24;
      *(undefined1 *)(puVar22 + 4) = 1;
    }
  }
  if (local_98 != (byte *)0x0) {
    if (0xfff < (ulonglong)(local_88 - (longlong)local_98)) {
      if ((byte *)0x1f < local_98 + (-8 - *(longlong *)(local_98 + -8))) {
                    /* WARNING: Subroutine does not return */
        FUN_14033bbe4(*(longlong *)(local_98 + -8),(local_88 - (longlong)local_98) + 0x27);
      }
    }
    _free_base();
  }
  return puVar22;
}


// ---- function FUN_140284b30 @ 140284b30 (xref 140284beb)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140284bb3) */
/* WARNING: Removing unreachable block (ram,0x000140284bc6) */
/* WARNING: Removing unreachable block (ram,0x000140285167) */
/* WARNING: Removing unreachable block (ram,0x000140285176) */

undefined8 * FUN_140284b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  unkuint10 Var8;
  undefined1 auVar9 [13];
  undefined1 auVar10 [11];
  undefined1 auVar11 [13];
  undefined1 auVar12 [11];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  uint6 uVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong *puVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  LPWSTR pWVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar36;
  int iVar37;
  int iVar39;
  int iVar40;
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  ushort uVar38;
  undefined1 auVar31 [16];
  int iVar41;
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  int iVar42;
  undefined1 auStackY_e8 [32];
  LPWSTR local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  byte *local_98;
  byte *pbStack_90;
  longlong local_88;
  undefined8 local_80;
  int local_78 [6];
  undefined1 local_5e;
  ulonglong local_58;
  
  local_80 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_e8;
  puVar22 = (undefined8 *)0x0;
  lVar17 = FUN_140009200();
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar18 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
  pWVar23 = (LPWSTR)(puVar18 + 3);
  local_b0 = pWVar23;
  iVar16 = MultiByteToWideChar(0,0,"COggDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar16 = iVar16 + -1;
  if (iVar16 < 1) {
    uVar19 = *puVar18;
    if (*(int *)(puVar18 + 1) != 0) {
      if (*(int *)(puVar18 + 2) < 0) {
        if (*(int *)((longlong)puVar18 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar18 + 1) = 0;
        *pWVar23 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar18 + 2);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
        pWVar23 = (LPWSTR)(lVar17 + 0x18);
        local_b0 = pWVar23;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar18 + 0xc) - iVar16 | 1U - *(int *)(puVar18 + 2)) < 0) {
      FUN_140008ae0(&local_b0,iVar16);
      pWVar23 = local_b0;
    }
    MultiByteToWideChar(0,0,"COggDataType::Validate",-1,pWVar23,iVar16);
    if (*(int *)(pWVar23 + -6) < iVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar23 + -8) = iVar16;
    pWVar23[iVar16] = L'\0';
  }
  pWVar2 = pWVar23 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0)) {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_a8 = (longlong *)(lVar17 + 0x18);
  iVar16 = *(int *)(pWVar23 + -8);
  iVar26 = iVar16 + 2;
  if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - iVar26 | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_a8,iVar26);
  }
  plVar4 = local_a8;
  FUN_140008b60(local_a8,(longlong)iVar16,pWVar23,iVar16);
  puVar5 = (undefined4 *)((longlong)plVar4 + (longlong)iVar16 * 2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar5 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar26) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar26;
  *(undefined2 *)((longlong)plVar4 + (longlong)iVar16 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0))
  {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_a0 = (undefined8 *)(lVar17 + 0x18);
  iVar16 = (int)plVar4[-2];
  if (iVar16 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - (iVar16 + 10) | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_a0);
  }
  puVar18 = local_a0;
  FUN_140008b60(local_a0,(longlong)iVar16,plVar4,iVar16);
  uVar19 = u_Trying_Ogg_1405cb620._8_8_;
  pwVar6 = (wchar_t *)((longlong)puVar18 + (longlong)iVar16 * 2);
  if (pwVar6 == (wchar_t *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined8 *)pwVar6 = u_Trying_Ogg_1405cb620._0_8_;
    *(undefined8 *)(pwVar6 + 4) = uVar19;
    *(undefined4 *)(pwVar6 + 8) = u_Trying_Ogg_1405cb620._16_4_;
  }
  if (*(int *)((longlong)puVar18 + -0xc) < iVar16 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar18 + -2) = iVar16 + 10;
  *(undefined2 *)((longlong)puVar18 + (longlong)iVar16 * 2 + 0x14) = 0;
  uVar19 = FUN_140040170();
  FUN_140041bc0(uVar19,700,puVar18);
  LOCK();
  piVar1 = (int *)(puVar18 + -1);
  iVar16 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar16 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar17 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar23 = pWVar23 + -4;
  iVar16 = *(int *)pWVar23;
  *(int *)pWVar23 = *(int *)pWVar23 + -1;
  UNLOCK();
  if (iVar16 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  local_98 = (byte *)0x0;
  pbStack_90 = (byte *)0x0;
  local_88 = 0;
  FUN_14020cd90(&local_98,0xff);
  uVar27 = 0;
  iVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,local_78,0x1b);
  uVar24 = 0x1b;
  if (-1 < iVar16) {
    do {
      if (local_78[0] != s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8._24_4_) {
        uVar24 = uVar24 - 0x1b;
        uVar25 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (uVar25 < uVar24) {
LAB_1402850fa:
          uVar24 = 0;
        }
        break;
      }
      FUN_1401fe880(&local_98,local_5e);
      if (local_98 != pbStack_90) {
        lVar17 = (longlong)pbStack_90 - (longlong)local_98;
        iVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar24,local_98,lVar17);
        lVar17 = uVar24 + lVar17;
        if (iVar16 < 0) {
          uVar24 = lVar17 - 0x1b;
          uVar25 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          if (uVar25 < uVar24) {
            uVar24 = 0;
          }
          break;
        }
        iVar16 = 0;
        uVar24 = 0;
        uVar25 = (longlong)pbStack_90 - (longlong)local_98;
        if (pbStack_90 < local_98) {
          uVar25 = 0;
        }
        if (uVar25 != 0) {
          pbVar21 = local_98;
          if (7 < uVar25) {
            iVar16 = 0;
            iVar36 = 0;
            iVar39 = 0;
            iVar41 = 0;
            iVar26 = 0;
            iVar37 = 0;
            iVar40 = 0;
            iVar42 = 0;
            do {
              uVar7 = *(undefined4 *)pbVar21;
              Var8 = CONCAT91((unkuint9)0,(char)((uint)uVar7 >> 0x18));
              auVar10[10] = 0;
              auVar10._0_10_ = Var8;
              auVar30[4] = (char)((uint)uVar7 >> 0x10);
              auVar30._0_4_ = uVar7;
              auVar30._5_11_ = auVar10 << 8;
              auVar9[0xc] = 0;
              auVar9._0_12_ = auVar30._4_12_;
              auVar29._0_2_ = (ushort)uVar7;
              auVar29[2] = (char)((uint)uVar7 >> 8);
              auVar29._3_13_ = auVar9 << 8;
              auVar28._2_14_ = auVar29._2_14_;
              auVar28._0_2_ = auVar29._0_2_ & 0xff;
              uVar38 = (ushort)Var8;
              auVar13._10_2_ = 0;
              auVar13._0_10_ = auVar28._0_10_;
              auVar13._12_2_ = uVar38;
              uVar15 = CONCAT42(auVar13._10_4_,auVar30._4_2_);
              auVar31._0_4_ = auVar28._0_4_;
              auVar31._4_2_ = auVar29._2_2_;
              auVar31._6_10_ = (unkuint10)uVar15 << 0x10;
              iVar16 = (auVar31._0_4_ & 0xffff) + iVar16;
              iVar36 = auVar31._4_4_ + iVar36;
              iVar39 = (int)uVar15 + iVar39;
              iVar41 = (uint)uVar38 + iVar41;
              uVar7 = *(undefined4 *)(pbVar21 + 4);
              Var8 = CONCAT91((unkuint9)0,(char)((uint)uVar7 >> 0x18));
              auVar12[10] = 0;
              auVar12._0_10_ = Var8;
              auVar34[4] = (char)((uint)uVar7 >> 0x10);
              auVar34._0_4_ = uVar7;
              auVar34._5_11_ = auVar12 << 8;
              auVar11[0xc] = 0;
              auVar11._0_12_ = auVar34._4_12_;
              auVar33._0_2_ = (ushort)uVar7;
              auVar33[2] = (char)((uint)uVar7 >> 8);
              auVar33._3_13_ = auVar11 << 8;
              auVar32._2_14_ = auVar33._2_14_;
              auVar32._0_2_ = auVar33._0_2_ & 0xff;
              uVar38 = (ushort)Var8;
              auVar14._10_2_ = 0;
              auVar14._0_10_ = auVar32._0_10_;
              auVar14._12_2_ = uVar38;
              uVar15 = CONCAT42(auVar14._10_4_,auVar34._4_2_);
              auVar35._0_4_ = auVar32._0_4_;
              auVar35._4_2_ = auVar33._2_2_;
              auVar35._6_10_ = (unkuint10)uVar15 << 0x10;
              iVar26 = (auVar35._0_4_ & 0xffff) + iVar26;
              iVar37 = auVar35._4_4_ + iVar37;
              iVar40 = (int)uVar15 + iVar40;
              iVar42 = (uint)uVar38 + iVar42;
              pbVar21 = pbVar21 + 8;
              uVar24 = uVar24 + 8;
            } while (uVar24 != (uVar25 & 0xfffffffffffffff8));
            iVar16 = iVar16 + iVar26 + iVar39 + iVar40 + iVar36 + iVar37 + iVar41 + iVar42;
          }
          for (; uVar24 != uVar25; uVar24 = uVar24 + 1) {
            iVar16 = iVar16 + (uint)*pbVar21;
            pbVar21 = pbVar21 + 1;
          }
        }
        uVar24 = lVar17 + iVar16;
        uVar25 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (uVar25 < uVar24) {
          if ((longlong)iVar16 < 1) goto LAB_1402850fa;
          uVar24 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          break;
        }
        uVar27 = uVar27 + 1;
      }
      iVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar24,local_78,0x1b);
      uVar24 = uVar24 + 0x1b;
    } while (-1 < iVar16);
    if (2 < uVar27) {
      puVar22 = (undefined8 *)FUN_1402e2c84(0x28);
      *puVar22 = CRecognisedDataOneFileImpl::vftable;
      puVar22[1] = param_3;
      plVar4 = puVar22 + 2;
      local_a8 = plVar4;
      local_a0 = puVar22;
      lVar17 = FUN_140009200();
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80004005);
      }
      lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
      *plVar4 = lVar17 + 0x18;
      FUN_140008c50(plVar4,L".Ogg",4);
      puVar22[3] = uVar24;
      *(undefined1 *)(puVar22 + 4) = 1;
    }
  }
  if (local_98 != (byte *)0x0) {
    if (0xfff < (ulonglong)(local_88 - (longlong)local_98)) {
      if ((byte *)0x1f < local_98 + (-8 - *(longlong *)(local_98 + -8))) {
                    /* WARNING: Subroutine does not return */
        FUN_14033bbe4(*(longlong *)(local_98 + -8),(local_88 - (longlong)local_98) + 0x27);
      }
    }
    _free_base();
  }
  return puVar22;
}


// ---- function FUN_140284b30 @ 140284b30 (xref 140284c2b)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140284bb3) */
/* WARNING: Removing unreachable block (ram,0x000140284bc6) */
/* WARNING: Removing unreachable block (ram,0x000140285167) */
/* WARNING: Removing unreachable block (ram,0x000140285176) */

undefined8 * FUN_140284b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  unkuint10 Var8;
  undefined1 auVar9 [13];
  undefined1 auVar10 [11];
  undefined1 auVar11 [13];
  undefined1 auVar12 [11];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  uint6 uVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong *puVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  LPWSTR pWVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar36;
  int iVar37;
  int iVar39;
  int iVar40;
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  ushort uVar38;
  undefined1 auVar31 [16];
  int iVar41;
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  int iVar42;
  undefined1 auStackY_e8 [32];
  LPWSTR local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  byte *local_98;
  byte *pbStack_90;
  longlong local_88;
  undefined8 local_80;
  int local_78 [6];
  undefined1 local_5e;
  ulonglong local_58;
  
  local_80 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_e8;
  puVar22 = (undefined8 *)0x0;
  lVar17 = FUN_140009200();
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar18 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
  pWVar23 = (LPWSTR)(puVar18 + 3);
  local_b0 = pWVar23;
  iVar16 = MultiByteToWideChar(0,0,"COggDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar16 = iVar16 + -1;
  if (iVar16 < 1) {
    uVar19 = *puVar18;
    if (*(int *)(puVar18 + 1) != 0) {
      if (*(int *)(puVar18 + 2) < 0) {
        if (*(int *)((longlong)puVar18 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar18 + 1) = 0;
        *pWVar23 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar18 + 2);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
        pWVar23 = (LPWSTR)(lVar17 + 0x18);
        local_b0 = pWVar23;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar18 + 0xc) - iVar16 | 1U - *(int *)(puVar18 + 2)) < 0) {
      FUN_140008ae0(&local_b0,iVar16);
      pWVar23 = local_b0;
    }
    MultiByteToWideChar(0,0,"COggDataType::Validate",-1,pWVar23,iVar16);
    if (*(int *)(pWVar23 + -6) < iVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar23 + -8) = iVar16;
    pWVar23[iVar16] = L'\0';
  }
  pWVar2 = pWVar23 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0)) {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_a8 = (longlong *)(lVar17 + 0x18);
  iVar16 = *(int *)(pWVar23 + -8);
  iVar26 = iVar16 + 2;
  if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - iVar26 | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_a8,iVar26);
  }
  plVar4 = local_a8;
  FUN_140008b60(local_a8,(longlong)iVar16,pWVar23,iVar16);
  puVar5 = (undefined4 *)((longlong)plVar4 + (longlong)iVar16 * 2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar5 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar26) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar26;
  *(undefined2 *)((longlong)plVar4 + (longlong)iVar16 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0))
  {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_a0 = (undefined8 *)(lVar17 + 0x18);
  iVar16 = (int)plVar4[-2];
  if (iVar16 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - (iVar16 + 10) | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_a0);
  }
  puVar18 = local_a0;
  FUN_140008b60(local_a0,(longlong)iVar16,plVar4,iVar16);
  uVar19 = u_Trying_Ogg_1405cb620._8_8_;
  pwVar6 = (wchar_t *)((longlong)puVar18 + (longlong)iVar16 * 2);
  if (pwVar6 == (wchar_t *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined8 *)pwVar6 = u_Trying_Ogg_1405cb620._0_8_;
    *(undefined8 *)(pwVar6 + 4) = uVar19;
    *(undefined4 *)(pwVar6 + 8) = u_Trying_Ogg_1405cb620._16_4_;
  }
  if (*(int *)((longlong)puVar18 + -0xc) < iVar16 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar18 + -2) = iVar16 + 10;
  *(undefined2 *)((longlong)puVar18 + (longlong)iVar16 * 2 + 0x14) = 0;
  uVar19 = FUN_140040170();
  FUN_140041bc0(uVar19,700,puVar18);
  LOCK();
  piVar1 = (int *)(puVar18 + -1);
  iVar16 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar16 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar17 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar23 = pWVar23 + -4;
  iVar16 = *(int *)pWVar23;
  *(int *)pWVar23 = *(int *)pWVar23 + -1;
  UNLOCK();
  if (iVar16 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  local_98 = (byte *)0x0;
  pbStack_90 = (byte *)0x0;
  local_88 = 0;
  FUN_14020cd90(&local_98,0xff);
  uVar27 = 0;
  iVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,local_78,0x1b);
  uVar24 = 0x1b;
  if (-1 < iVar16) {
    do {
      if (local_78[0] != s_AVI_hdrlmoviWAVEfmt_dataOggS_1406f96f8._24_4_) {
        uVar24 = uVar24 - 0x1b;
        uVar25 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (uVar25 < uVar24) {
LAB_1402850fa:
          uVar24 = 0;
        }
        break;
      }
      FUN_1401fe880(&local_98,local_5e);
      if (local_98 != pbStack_90) {
        lVar17 = (longlong)pbStack_90 - (longlong)local_98;
        iVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar24,local_98,lVar17);
        lVar17 = uVar24 + lVar17;
        if (iVar16 < 0) {
          uVar24 = lVar17 - 0x1b;
          uVar25 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          if (uVar25 < uVar24) {
            uVar24 = 0;
          }
          break;
        }
        iVar16 = 0;
        uVar24 = 0;
        uVar25 = (longlong)pbStack_90 - (longlong)local_98;
        if (pbStack_90 < local_98) {
          uVar25 = 0;
        }
        if (uVar25 != 0) {
          pbVar21 = local_98;
          if (7 < uVar25) {
            iVar16 = 0;
            iVar36 = 0;
            iVar39 = 0;
            iVar41 = 0;
            iVar26 = 0;
            iVar37 = 0;
            iVar40 = 0;
            iVar42 = 0;
            do {
              uVar7 = *(undefined4 *)pbVar21;
              Var8 = CONCAT91((unkuint9)0,(char)((uint)uVar7 >> 0x18));
              auVar10[10] = 0;
              auVar10._0_10_ = Var8;
              auVar30[4] = (char)((uint)uVar7 >> 0x10);
              auVar30._0_4_ = uVar7;
              auVar30._5_11_ = auVar10 << 8;
              auVar9[0xc] = 0;
              auVar9._0_12_ = auVar30._4_12_;
              auVar29._0_2_ = (ushort)uVar7;
              auVar29[2] = (char)((uint)uVar7 >> 8);
              auVar29._3_13_ = auVar9 << 8;
              auVar28._2_14_ = auVar29._2_14_;
              auVar28._0_2_ = auVar29._0_2_ & 0xff;
              uVar38 = (ushort)Var8;
              auVar13._10_2_ = 0;
              auVar13._0_10_ = auVar28._0_10_;
              auVar13._12_2_ = uVar38;
              uVar15 = CONCAT42(auVar13._10_4_,auVar30._4_2_);
              auVar31._0_4_ = auVar28._0_4_;
              auVar31._4_2_ = auVar29._2_2_;
              auVar31._6_10_ = (unkuint10)uVar15 << 0x10;
              iVar16 = (auVar31._0_4_ & 0xffff) + iVar16;
              iVar36 = auVar31._4_4_ + iVar36;
              iVar39 = (int)uVar15 + iVar39;
              iVar41 = (uint)uVar38 + iVar41;
              uVar7 = *(undefined4 *)(pbVar21 + 4);
              Var8 = CONCAT91((unkuint9)0,(char)((uint)uVar7 >> 0x18));
              auVar12[10] = 0;
              auVar12._0_10_ = Var8;
              auVar34[4] = (char)((uint)uVar7 >> 0x10);
              auVar34._0_4_ = uVar7;
              auVar34._5_11_ = auVar12 << 8;
              auVar11[0xc] = 0;
              auVar11._0_12_ = auVar34._4_12_;
              auVar33._0_2_ = (ushort)uVar7;
              auVar33[2] = (char)((uint)uVar7 >> 8);
              auVar33._3_13_ = auVar11 << 8;
              auVar32._2_14_ = auVar33._2_14_;
              auVar32._0_2_ = auVar33._0_2_ & 0xff;
              uVar38 = (ushort)Var8;
              auVar14._10_2_ = 0;
              auVar14._0_10_ = auVar32._0_10_;
              auVar14._12_2_ = uVar38;
              uVar15 = CONCAT42(auVar14._10_4_,auVar34._4_2_);
              auVar35._0_4_ = auVar32._0_4_;
              auVar35._4_2_ = auVar33._2_2_;
              auVar35._6_10_ = (unkuint10)uVar15 << 0x10;
              iVar26 = (auVar35._0_4_ & 0xffff) + iVar26;
              iVar37 = auVar35._4_4_ + iVar37;
              iVar40 = (int)uVar15 + iVar40;
              iVar42 = (uint)uVar38 + iVar42;
              pbVar21 = pbVar21 + 8;
              uVar24 = uVar24 + 8;
            } while (uVar24 != (uVar25 & 0xfffffffffffffff8));
            iVar16 = iVar16 + iVar26 + iVar39 + iVar40 + iVar36 + iVar37 + iVar41 + iVar42;
          }
          for (; uVar24 != uVar25; uVar24 = uVar24 + 1) {
            iVar16 = iVar16 + (uint)*pbVar21;
            pbVar21 = pbVar21 + 1;
          }
        }
        uVar24 = lVar17 + iVar16;
        uVar25 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (uVar25 < uVar24) {
          if ((longlong)iVar16 < 1) goto LAB_1402850fa;
          uVar24 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          break;
        }
        uVar27 = uVar27 + 1;
      }
      iVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar24,local_78,0x1b);
      uVar24 = uVar24 + 0x1b;
    } while (-1 < iVar16);
    if (2 < uVar27) {
      puVar22 = (undefined8 *)FUN_1402e2c84(0x28);
      *puVar22 = CRecognisedDataOneFileImpl::vftable;
      puVar22[1] = param_3;
      plVar4 = puVar22 + 2;
      local_a8 = plVar4;
      local_a0 = puVar22;
      lVar17 = FUN_140009200();
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80004005);
      }
      lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
      *plVar4 = lVar17 + 0x18;
      FUN_140008c50(plVar4,L".Ogg",4);
      puVar22[3] = uVar24;
      *(undefined1 *)(puVar22 + 4) = 1;
    }
  }
  if (local_98 != (byte *)0x0) {
    if (0xfff < (ulonglong)(local_88 - (longlong)local_98)) {
      if ((byte *)0x1f < local_98 + (-8 - *(longlong *)(local_98 + -8))) {
                    /* WARNING: Subroutine does not return */
        FUN_14033bbe4(*(longlong *)(local_98 + -8),(local_88 - (longlong)local_98) + 0x27);
      }
    }
    _free_base();
  }
  return puVar22;
}



// ===== string at 1405cb668 : CMovDataType::Validate
// ---- function FUN_140285420 @ 140285420 (xref 140285481)

/* WARNING: Removing unreachable block (ram,0x000140285496) */
/* WARNING: Removing unreachable block (ram,0x0001402854aa) */
/* WARNING: Removing unreachable block (ram,0x000140285813) */
/* WARNING: Removing unreachable block (ram,0x000140285822) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_140285420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulonglong uVar16;
  uint uVar17;
  LPWSTR pWVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  LPWSTR pWVar25;
  undefined4 uVar26;
  LPWSTR local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined4 local_88 [2];
  uint local_80;
  int iStack_7c;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  lVar12 = FUN_140009200();
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
  pWVar18 = (LPWSTR)(puVar13 + 3);
  iVar10 = 0;
  pWVar25 = (LPWSTR)0x0;
  local_a0 = pWVar18;
  iVar9 = MultiByteToWideChar(0,0,"CMovDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar14 = *puVar13;
    if (*(int *)(puVar13 + 1) != 0) {
      if (*(int *)(puVar13 + 2) < 0) {
        if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar13 + 1) = 0;
        *pWVar18 = L'\0';
      }
      else {
        LOCK();
        piVar3 = (int *)(puVar13 + 2);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
        pWVar18 = (LPWSTR)(lVar12 + 0x18);
        local_a0 = pWVar18;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar13 + 0xc) - iVar9 | 1U - *(int *)(puVar13 + 2)) < 0) {
      FUN_140008ae0(&local_a0,iVar9);
      pWVar18 = local_a0;
    }
    pWVar25 = pWVar18;
    iVar10 = iVar9;
    MultiByteToWideChar(0,0,"CMovDataType::Validate",-1,pWVar18,iVar9);
    if (*(int *)(pWVar18 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar18 + -8) = iVar9;
    pWVar18[iVar9] = L'\0';
  }
  pWVar1 = pWVar18 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
    uVar14 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar12 + 0x18;
  uVar26 = 1;
  iVar9 = *(int *)(pWVar18 + -8);
  lVar22 = (longlong)iVar9;
  iVar24 = iVar9 + 2;
  if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar24 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar24);
  }
  lVar12 = local_70;
  FUN_140008b60(local_70,lVar22,pWVar18,iVar9,pWVar25,iVar10,uVar26);
  puVar4 = (undefined4 *)(lVar12 + lVar22 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar12 + -0xc) < iVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar12 + -0x10) = iVar24;
  *(undefined2 *)(lVar12 + 4 + lVar22 * 2) = 0;
  plVar2 = (longlong *)(lVar12 + -0x18);
  if ((*plVar2 == 0) || (lVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar22 == 0)) {
    uVar14 = FUN_140009200();
    lVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar22 + 0x18;
  uVar26 = 3;
  iVar9 = *(int *)(lVar12 + -0x10);
  lVar23 = (longlong)iVar9;
  iVar24 = iVar9 + 10;
  if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar22 + 0xc) - iVar24 | 1U - *(int *)(lVar22 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar24);
  }
  lVar22 = local_68;
  FUN_140008b60(local_68,lVar23,lVar12,iVar9,pWVar25,iVar10,uVar26);
  uVar8 = u_Trying_Mov_1405cb680._12_4_;
  uVar7 = u_Trying_Mov_1405cb680._8_4_;
  uVar26 = u_Trying_Mov_1405cb680._4_4_;
  pwVar5 = (wchar_t *)(lVar22 + lVar23 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Mov_1405cb680._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar26;
    *(undefined4 *)(pwVar5 + 4) = uVar7;
    *(undefined4 *)(pwVar5 + 6) = uVar8;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Mov_1405cb680._16_4_;
  }
  if (*(int *)(lVar22 + -0xc) < iVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar22 + -0x10) = iVar24;
  puVar13 = (undefined8 *)0x0;
  *(undefined2 *)(lVar22 + 0x14 + lVar23 * 2) = 0;
  uVar14 = FUN_140040170();
  FUN_140041bc0(uVar14,700,lVar22);
  LOCK();
  piVar3 = (int *)(lVar22 + -8);
  iVar10 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar3 = (int *)(lVar12 + -8);
  iVar10 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar2,plVar2);
  }
  LOCK();
  pWVar18 = pWVar18 + -4;
  iVar10 = *(int *)pWVar18;
  *(int *)pWVar18 = *(int *)pWVar18 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  lVar12 = FUN_140009200();
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_98 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
  local_98 = local_98 + 0x18;
  FUN_140008c50(&local_98,L".mov",4);
  bVar6 = false;
  iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_80,8);
  uVar19 = 8;
  if (iVar10 < 0) goto LAB_140285b21;
  while( true ) {
    uVar21 = 0;
    if (local_80 == 0x1000000) {
      iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar19,&local_90,8);
      uVar19 = uVar19 + 8;
      uVar20 = uVar19;
      if (iVar10 < 0) goto LAB_140285ae4;
      uVar11 = (uint)((ulonglong)local_90 >> 0x20);
      uVar17 = (uint)local_90;
      local_78 = (undefined8 *)
                 CONCAT44((uVar17 & 0xff0000 | (uint)((ulonglong)local_90 >> 0x10) & 0xffff) >> 8 |
                          (uVar17 << 0x10 | uVar17 & 0xff00) << 8,
                          uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                          uVar11 << 0x18);
      local_90 = local_78;
    }
    else {
      local_90 = (undefined8 *)
                 (ulonglong)
                 ((local_80 & 0xff00 | local_80 << 0x10) << 8 |
                 (local_80 & 0xff0000 | local_80 >> 0x10) >> 8);
    }
    if (DAT_1405f02b8 != iStack_7c) break;
    uVar20 = uVar19;
    if ((local_90 < &DAT_00000010) || (((ulonglong)local_90 & 3) != 0)) goto LAB_140285ae4;
    iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar19,local_60,8);
    uVar20 = uVar19 + 8;
    if (iVar10 < 0) goto LAB_140285ae4;
    puVar13 = local_90 + -2;
    lVar12 = FUN_1402853a0(param_1 + 8,local_60[0]);
    if ((ulonglong)puVar13 >> 2 != 0) {
      do {
        iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar20,local_88,4);
        uVar20 = uVar20 + 4;
        if (iVar10 < 0) break;
        if (lVar12 == 0) {
          lVar12 = FUN_1402853a0(param_1 + 8,local_88[0]);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != (ulonglong)puVar13 >> 2);
    }
    if (lVar12 != 0) {
      uVar19 = 0xffffffffffffffff;
      do {
        uVar19 = uVar19 + 1;
      } while (*(short *)(lVar12 + uVar19 * 2) != 0);
      FUN_140008c50(&local_98,lVar12,uVar19 & 0xffffffff);
    }
LAB_140285a05:
    iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar20,&local_80,8);
    uVar19 = uVar20 + 8;
    uVar20 = uVar19;
    if (iVar10 < 0) goto LAB_140285ae4;
  }
  if ((((DAT_1405f02bc == iStack_7c) || (DAT_1405f02cc == iStack_7c)) ||
      (DAT_1405f02c8 == iStack_7c)) ||
     ((DAT_1405f02c4 == iStack_7c || (DAT_1405f02c0 == iStack_7c)))) {
    if (local_90 < &DAT_00000008) {
      uVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
      uVar20 = uVar19 + -8;
      if (uVar16 < uVar19 + -8) {
        uVar20 = uVar21;
      }
    }
    else {
      if (DAT_1405f02c0 == iStack_7c) {
        bVar6 = true;
      }
      puVar13 = local_90 + -1;
      uVar20 = uVar19 + (longlong)puVar13;
      uVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
      if (uVar20 <= uVar19) goto LAB_140285a05;
      if ((longlong)puVar13 < 1) goto LAB_140285ac4;
      uVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
    }
  }
  else {
    uVar20 = uVar19 + -8;
    uVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
    if (uVar19 < uVar20) {
LAB_140285ac4:
      uVar20 = uVar21;
    }
  }
LAB_140285ae4:
  puVar13 = (undefined8 *)0x0;
  if (bVar6) {
    puVar13 = (undefined8 *)FUN_1402e2c84(0x28);
    *puVar13 = CRecognisedDataOneFileImpl::vftable;
    puVar13[1] = param_3;
    local_78 = puVar13;
    FUN_140008d70(puVar13 + 2,local_98);
    puVar13[3] = uVar20;
    *(undefined1 *)(puVar13 + 4) = 0;
  }
LAB_140285b21:
  LOCK();
  piVar3 = (int *)(local_98 + -8);
  iVar10 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  return puVar13;
}


// ---- function FUN_140285420 @ 140285420 (xref 1402854cf)

/* WARNING: Removing unreachable block (ram,0x000140285496) */
/* WARNING: Removing unreachable block (ram,0x0001402854aa) */
/* WARNING: Removing unreachable block (ram,0x000140285813) */
/* WARNING: Removing unreachable block (ram,0x000140285822) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_140285420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulonglong uVar16;
  uint uVar17;
  LPWSTR pWVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  LPWSTR pWVar25;
  undefined4 uVar26;
  LPWSTR local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined4 local_88 [2];
  uint local_80;
  int iStack_7c;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  lVar12 = FUN_140009200();
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
  pWVar18 = (LPWSTR)(puVar13 + 3);
  iVar10 = 0;
  pWVar25 = (LPWSTR)0x0;
  local_a0 = pWVar18;
  iVar9 = MultiByteToWideChar(0,0,"CMovDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar14 = *puVar13;
    if (*(int *)(puVar13 + 1) != 0) {
      if (*(int *)(puVar13 + 2) < 0) {
        if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar13 + 1) = 0;
        *pWVar18 = L'\0';
      }
      else {
        LOCK();
        piVar3 = (int *)(puVar13 + 2);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
        pWVar18 = (LPWSTR)(lVar12 + 0x18);
        local_a0 = pWVar18;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar13 + 0xc) - iVar9 | 1U - *(int *)(puVar13 + 2)) < 0) {
      FUN_140008ae0(&local_a0,iVar9);
      pWVar18 = local_a0;
    }
    pWVar25 = pWVar18;
    iVar10 = iVar9;
    MultiByteToWideChar(0,0,"CMovDataType::Validate",-1,pWVar18,iVar9);
    if (*(int *)(pWVar18 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar18 + -8) = iVar9;
    pWVar18[iVar9] = L'\0';
  }
  pWVar1 = pWVar18 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
    uVar14 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar12 + 0x18;
  uVar26 = 1;
  iVar9 = *(int *)(pWVar18 + -8);
  lVar22 = (longlong)iVar9;
  iVar24 = iVar9 + 2;
  if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar24 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar24);
  }
  lVar12 = local_70;
  FUN_140008b60(local_70,lVar22,pWVar18,iVar9,pWVar25,iVar10,uVar26);
  puVar4 = (undefined4 *)(lVar12 + lVar22 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar12 + -0xc) < iVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar12 + -0x10) = iVar24;
  *(undefined2 *)(lVar12 + 4 + lVar22 * 2) = 0;
  plVar2 = (longlong *)(lVar12 + -0x18);
  if ((*plVar2 == 0) || (lVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar22 == 0)) {
    uVar14 = FUN_140009200();
    lVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar22 + 0x18;
  uVar26 = 3;
  iVar9 = *(int *)(lVar12 + -0x10);
  lVar23 = (longlong)iVar9;
  iVar24 = iVar9 + 10;
  if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar22 + 0xc) - iVar24 | 1U - *(int *)(lVar22 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar24);
  }
  lVar22 = local_68;
  FUN_140008b60(local_68,lVar23,lVar12,iVar9,pWVar25,iVar10,uVar26);
  uVar8 = u_Trying_Mov_1405cb680._12_4_;
  uVar7 = u_Trying_Mov_1405cb680._8_4_;
  uVar26 = u_Trying_Mov_1405cb680._4_4_;
  pwVar5 = (wchar_t *)(lVar22 + lVar23 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Mov_1405cb680._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar26;
    *(undefined4 *)(pwVar5 + 4) = uVar7;
    *(undefined4 *)(pwVar5 + 6) = uVar8;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Mov_1405cb680._16_4_;
  }
  if (*(int *)(lVar22 + -0xc) < iVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar22 + -0x10) = iVar24;
  puVar13 = (undefined8 *)0x0;
  *(undefined2 *)(lVar22 + 0x14 + lVar23 * 2) = 0;
  uVar14 = FUN_140040170();
  FUN_140041bc0(uVar14,700,lVar22);
  LOCK();
  piVar3 = (int *)(lVar22 + -8);
  iVar10 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar3 = (int *)(lVar12 + -8);
  iVar10 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar2,plVar2);
  }
  LOCK();
  pWVar18 = pWVar18 + -4;
  iVar10 = *(int *)pWVar18;
  *(int *)pWVar18 = *(int *)pWVar18 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  lVar12 = FUN_140009200();
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_98 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
  local_98 = local_98 + 0x18;
  FUN_140008c50(&local_98,L".mov",4);
  bVar6 = false;
  iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_80,8);
  uVar19 = 8;
  if (iVar10 < 0) goto LAB_140285b21;
  while( true ) {
    uVar21 = 0;
    if (local_80 == 0x1000000) {
      iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar19,&local_90,8);
      uVar19 = uVar19 + 8;
      uVar20 = uVar19;
      if (iVar10 < 0) goto LAB_140285ae4;
      uVar11 = (uint)((ulonglong)local_90 >> 0x20);
      uVar17 = (uint)local_90;
      local_78 = (undefined8 *)
                 CONCAT44((uVar17 & 0xff0000 | (uint)((ulonglong)local_90 >> 0x10) & 0xffff) >> 8 |
                          (uVar17 << 0x10 | uVar17 & 0xff00) << 8,
                          uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                          uVar11 << 0x18);
      local_90 = local_78;
    }
    else {
      local_90 = (undefined8 *)
                 (ulonglong)
                 ((local_80 & 0xff00 | local_80 << 0x10) << 8 |
                 (local_80 & 0xff0000 | local_80 >> 0x10) >> 8);
    }
    if (DAT_1405f02b8 != iStack_7c) break;
    uVar20 = uVar19;
    if ((local_90 < &DAT_00000010) || (((ulonglong)local_90 & 3) != 0)) goto LAB_140285ae4;
    iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar19,local_60,8);
    uVar20 = uVar19 + 8;
    if (iVar10 < 0) goto LAB_140285ae4;
    puVar13 = local_90 + -2;
    lVar12 = FUN_1402853a0(param_1 + 8,local_60[0]);
    if ((ulonglong)puVar13 >> 2 != 0) {
      do {
        iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar20,local_88,4);
        uVar20 = uVar20 + 4;
        if (iVar10 < 0) break;
        if (lVar12 == 0) {
          lVar12 = FUN_1402853a0(param_1 + 8,local_88[0]);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != (ulonglong)puVar13 >> 2);
    }
    if (lVar12 != 0) {
      uVar19 = 0xffffffffffffffff;
      do {
        uVar19 = uVar19 + 1;
      } while (*(short *)(lVar12 + uVar19 * 2) != 0);
      FUN_140008c50(&local_98,lVar12,uVar19 & 0xffffffff);
    }
LAB_140285a05:
    iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar20,&local_80,8);
    uVar19 = uVar20 + 8;
    uVar20 = uVar19;
    if (iVar10 < 0) goto LAB_140285ae4;
  }
  if ((((DAT_1405f02bc == iStack_7c) || (DAT_1405f02cc == iStack_7c)) ||
      (DAT_1405f02c8 == iStack_7c)) ||
     ((DAT_1405f02c4 == iStack_7c || (DAT_1405f02c0 == iStack_7c)))) {
    if (local_90 < &DAT_00000008) {
      uVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
      uVar20 = uVar19 + -8;
      if (uVar16 < uVar19 + -8) {
        uVar20 = uVar21;
      }
    }
    else {
      if (DAT_1405f02c0 == iStack_7c) {
        bVar6 = true;
      }
      puVar13 = local_90 + -1;
      uVar20 = uVar19 + (longlong)puVar13;
      uVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
      if (uVar20 <= uVar19) goto LAB_140285a05;
      if ((longlong)puVar13 < 1) goto LAB_140285ac4;
      uVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
    }
  }
  else {
    uVar20 = uVar19 + -8;
    uVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
    if (uVar19 < uVar20) {
LAB_140285ac4:
      uVar20 = uVar21;
    }
  }
LAB_140285ae4:
  puVar13 = (undefined8 *)0x0;
  if (bVar6) {
    puVar13 = (undefined8 *)FUN_1402e2c84(0x28);
    *puVar13 = CRecognisedDataOneFileImpl::vftable;
    puVar13[1] = param_3;
    local_78 = puVar13;
    FUN_140008d70(puVar13 + 2,local_98);
    puVar13[3] = uVar20;
    *(undefined1 *)(puVar13 + 4) = 0;
  }
LAB_140285b21:
  LOCK();
  piVar3 = (int *)(local_98 + -8);
  iVar10 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  return puVar13;
}


// ---- function FUN_140285420 @ 140285420 (xref 14028550f)

/* WARNING: Removing unreachable block (ram,0x000140285496) */
/* WARNING: Removing unreachable block (ram,0x0001402854aa) */
/* WARNING: Removing unreachable block (ram,0x000140285813) */
/* WARNING: Removing unreachable block (ram,0x000140285822) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_140285420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulonglong uVar16;
  uint uVar17;
  LPWSTR pWVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  LPWSTR pWVar25;
  undefined4 uVar26;
  LPWSTR local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined4 local_88 [2];
  uint local_80;
  int iStack_7c;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  lVar12 = FUN_140009200();
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
  pWVar18 = (LPWSTR)(puVar13 + 3);
  iVar10 = 0;
  pWVar25 = (LPWSTR)0x0;
  local_a0 = pWVar18;
  iVar9 = MultiByteToWideChar(0,0,"CMovDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar14 = *puVar13;
    if (*(int *)(puVar13 + 1) != 0) {
      if (*(int *)(puVar13 + 2) < 0) {
        if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar13 + 1) = 0;
        *pWVar18 = L'\0';
      }
      else {
        LOCK();
        piVar3 = (int *)(puVar13 + 2);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
        pWVar18 = (LPWSTR)(lVar12 + 0x18);
        local_a0 = pWVar18;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar13 + 0xc) - iVar9 | 1U - *(int *)(puVar13 + 2)) < 0) {
      FUN_140008ae0(&local_a0,iVar9);
      pWVar18 = local_a0;
    }
    pWVar25 = pWVar18;
    iVar10 = iVar9;
    MultiByteToWideChar(0,0,"CMovDataType::Validate",-1,pWVar18,iVar9);
    if (*(int *)(pWVar18 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar18 + -8) = iVar9;
    pWVar18[iVar9] = L'\0';
  }
  pWVar1 = pWVar18 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
    uVar14 = FUN_140009200();
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar12 + 0x18;
  uVar26 = 1;
  iVar9 = *(int *)(pWVar18 + -8);
  lVar22 = (longlong)iVar9;
  iVar24 = iVar9 + 2;
  if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar12 + 0xc) - iVar24 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar24);
  }
  lVar12 = local_70;
  FUN_140008b60(local_70,lVar22,pWVar18,iVar9,pWVar25,iVar10,uVar26);
  puVar4 = (undefined4 *)(lVar12 + lVar22 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar12 + -0xc) < iVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar12 + -0x10) = iVar24;
  *(undefined2 *)(lVar12 + 4 + lVar22 * 2) = 0;
  plVar2 = (longlong *)(lVar12 + -0x18);
  if ((*plVar2 == 0) || (lVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar22 == 0)) {
    uVar14 = FUN_140009200();
    lVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
  }
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar22 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar22 + 0x18;
  uVar26 = 3;
  iVar9 = *(int *)(lVar12 + -0x10);
  lVar23 = (longlong)iVar9;
  iVar24 = iVar9 + 10;
  if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar22 + 0xc) - iVar24 | 1U - *(int *)(lVar22 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar24);
  }
  lVar22 = local_68;
  FUN_140008b60(local_68,lVar23,lVar12,iVar9,pWVar25,iVar10,uVar26);
  uVar8 = u_Trying_Mov_1405cb680._12_4_;
  uVar7 = u_Trying_Mov_1405cb680._8_4_;
  uVar26 = u_Trying_Mov_1405cb680._4_4_;
  pwVar5 = (wchar_t *)(lVar22 + lVar23 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar15 = __doserrno();
    *puVar15 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Mov_1405cb680._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar26;
    *(undefined4 *)(pwVar5 + 4) = uVar7;
    *(undefined4 *)(pwVar5 + 6) = uVar8;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Mov_1405cb680._16_4_;
  }
  if (*(int *)(lVar22 + -0xc) < iVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar22 + -0x10) = iVar24;
  puVar13 = (undefined8 *)0x0;
  *(undefined2 *)(lVar22 + 0x14 + lVar23 * 2) = 0;
  uVar14 = FUN_140040170();
  FUN_140041bc0(uVar14,700,lVar22);
  LOCK();
  piVar3 = (int *)(lVar22 + -8);
  iVar10 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar3 = (int *)(lVar12 + -8);
  iVar10 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar2,plVar2);
  }
  LOCK();
  pWVar18 = pWVar18 + -4;
  iVar10 = *(int *)pWVar18;
  *(int *)pWVar18 = *(int *)pWVar18 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  lVar12 = FUN_140009200();
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  local_98 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
  local_98 = local_98 + 0x18;
  FUN_140008c50(&local_98,L".mov",4);
  bVar6 = false;
  iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_80,8);
  uVar19 = 8;
  if (iVar10 < 0) goto LAB_140285b21;
  while( true ) {
    uVar21 = 0;
    if (local_80 == 0x1000000) {
      iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar19,&local_90,8);
      uVar19 = uVar19 + 8;
      uVar20 = uVar19;
      if (iVar10 < 0) goto LAB_140285ae4;
      uVar11 = (uint)((ulonglong)local_90 >> 0x20);
      uVar17 = (uint)local_90;
      local_78 = (undefined8 *)
                 CONCAT44((uVar17 & 0xff0000 | (uint)((ulonglong)local_90 >> 0x10) & 0xffff) >> 8 |
                          (uVar17 << 0x10 | uVar17 & 0xff00) << 8,
                          uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                          uVar11 << 0x18);
      local_90 = local_78;
    }
    else {
      local_90 = (undefined8 *)
                 (ulonglong)
                 ((local_80 & 0xff00 | local_80 << 0x10) << 8 |
                 (local_80 & 0xff0000 | local_80 >> 0x10) >> 8);
    }
    if (DAT_1405f02b8 != iStack_7c) break;
    uVar20 = uVar19;
    if ((local_90 < &DAT_00000010) || (((ulonglong)local_90 & 3) != 0)) goto LAB_140285ae4;
    iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar19,local_60,8);
    uVar20 = uVar19 + 8;
    if (iVar10 < 0) goto LAB_140285ae4;
    puVar13 = local_90 + -2;
    lVar12 = FUN_1402853a0(param_1 + 8,local_60[0]);
    if ((ulonglong)puVar13 >> 2 != 0) {
      do {
        iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar20,local_88,4);
        uVar20 = uVar20 + 4;
        if (iVar10 < 0) break;
        if (lVar12 == 0) {
          lVar12 = FUN_1402853a0(param_1 + 8,local_88[0]);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != (ulonglong)puVar13 >> 2);
    }
    if (lVar12 != 0) {
      uVar19 = 0xffffffffffffffff;
      do {
        uVar19 = uVar19 + 1;
      } while (*(short *)(lVar12 + uVar19 * 2) != 0);
      FUN_140008c50(&local_98,lVar12,uVar19 & 0xffffffff);
    }
LAB_140285a05:
    iVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,uVar20,&local_80,8);
    uVar19 = uVar20 + 8;
    uVar20 = uVar19;
    if (iVar10 < 0) goto LAB_140285ae4;
  }
  if ((((DAT_1405f02bc == iStack_7c) || (DAT_1405f02cc == iStack_7c)) ||
      (DAT_1405f02c8 == iStack_7c)) ||
     ((DAT_1405f02c4 == iStack_7c || (DAT_1405f02c0 == iStack_7c)))) {
    if (local_90 < &DAT_00000008) {
      uVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
      uVar20 = uVar19 + -8;
      if (uVar16 < uVar19 + -8) {
        uVar20 = uVar21;
      }
    }
    else {
      if (DAT_1405f02c0 == iStack_7c) {
        bVar6 = true;
      }
      puVar13 = local_90 + -1;
      uVar20 = uVar19 + (longlong)puVar13;
      uVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
      if (uVar20 <= uVar19) goto LAB_140285a05;
      if ((longlong)puVar13 < 1) goto LAB_140285ac4;
      uVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
    }
  }
  else {
    uVar20 = uVar19 + -8;
    uVar19 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
    if (uVar19 < uVar20) {
LAB_140285ac4:
      uVar20 = uVar21;
    }
  }
LAB_140285ae4:
  puVar13 = (undefined8 *)0x0;
  if (bVar6) {
    puVar13 = (undefined8 *)FUN_1402e2c84(0x28);
    *puVar13 = CRecognisedDataOneFileImpl::vftable;
    puVar13[1] = param_3;
    local_78 = puVar13;
    FUN_140008d70(puVar13 + 2,local_98);
    puVar13[3] = uVar20;
    *(undefined1 *)(puVar13 + 4) = 0;
  }
LAB_140285b21:
  LOCK();
  piVar3 = (int *)(local_98 + -8);
  iVar10 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar10 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  return puVar13;
}



// ===== string at 1405cb6b8 : CRarDataType::Validate
// ---- function FUN_140285d00 @ 140285d00 (xref 140285d5c)

/* WARNING: Removing unreachable block (ram,0x000140285d70) */
/* WARNING: Removing unreachable block (ram,0x000140285d83) */
/* WARNING: Removing unreachable block (ram,0x0001402863a7) */
/* WARNING: Removing unreachable block (ram,0x0001402863b6) */

undefined8 * FUN_140285d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ushort uVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  LPWSTR pWVar24;
  ulonglong *puVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  int iVar28;
  short local_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  byte bStack_80;
  undefined1 uStack_7f;
  char local_7e;
  undefined4 local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  LPWSTR local_68;
  ulonglong *local_60;
  longlong *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  puVar22 = (undefined8 *)0x0;
  local_7c = 0;
  lVar17 = FUN_140009200();
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar18 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
  pWVar24 = (LPWSTR)(puVar18 + 3);
  local_68 = pWVar24;
  iVar15 = MultiByteToWideChar(0,0,"CRarDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar15 = iVar15 + -1;
  if (iVar15 < 1) {
    uVar19 = *puVar18;
    if (*(int *)(puVar18 + 1) != 0) {
      if (*(int *)(puVar18 + 2) < 0) {
        if (*(int *)((longlong)puVar18 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar18 + 1) = 0;
        *pWVar24 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar18 + 2);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
        pWVar24 = (LPWSTR)(lVar17 + 0x18);
        local_68 = pWVar24;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar18 + 0xc) - iVar15 | 1U - *(int *)(puVar18 + 2)) < 0) {
      FUN_140008ae0(&local_68,iVar15);
      pWVar24 = local_68;
    }
    MultiByteToWideChar(0,0,"CRarDataType::Validate",-1,pWVar24,iVar15);
    if (*(int *)(pWVar24 + -6) < iVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar24 + -8) = iVar15;
    pWVar24[iVar15] = L'\0';
  }
  pWVar2 = pWVar24 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0)) {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_58 = (longlong *)(lVar17 + 0x18);
  local_7c = 1;
  iVar15 = *(int *)(pWVar24 + -8);
  iVar28 = iVar15 + 2;
  if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - iVar28 | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_58,iVar28);
  }
  plVar4 = local_58;
  FUN_140008b60(local_58,(longlong)iVar15,pWVar24,iVar15);
  puVar6 = (undefined4 *)((longlong)plVar4 + (longlong)iVar15 * 2);
  if (puVar6 == (undefined4 *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar6 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar28) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar28;
  *(undefined2 *)((longlong)plVar4 + (longlong)iVar15 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0))
  {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = (undefined8 *)(lVar17 + 0x18);
  local_7c = 3;
  iVar15 = (int)plVar4[-2];
  if (iVar15 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - (iVar15 + 10) | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_70);
  }
  puVar18 = local_70;
  FUN_140008b60(local_70,(longlong)iVar15,plVar4,iVar15);
  uVar13 = u_Trying_Rar_1405cb6d0._12_4_;
  uVar12 = u_Trying_Rar_1405cb6d0._8_4_;
  uVar16 = u_Trying_Rar_1405cb6d0._4_4_;
  pwVar7 = (wchar_t *)((longlong)puVar18 + (longlong)iVar15 * 2);
  if (pwVar7 == (wchar_t *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar7 = u_Trying_Rar_1405cb6d0._0_4_;
    *(undefined4 *)(pwVar7 + 2) = uVar16;
    *(undefined4 *)(pwVar7 + 4) = uVar12;
    *(undefined4 *)(pwVar7 + 6) = uVar13;
    *(undefined4 *)(pwVar7 + 8) = u_Trying_Rar_1405cb6d0._16_4_;
  }
  if (*(int *)((longlong)puVar18 + -0xc) < iVar15 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar18 + -2) = iVar15 + 10;
  *(undefined2 *)((longlong)puVar18 + (longlong)iVar15 * 2 + 0x14) = 0;
  uVar19 = FUN_140040170();
  FUN_140041bc0(uVar19,700,puVar18);
  local_7c = 1;
  LOCK();
  piVar1 = (int *)(puVar18 + -1);
  iVar15 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar17 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar24 = pWVar24 + -4;
  iVar15 = *(int *)pWVar24;
  *(int *)pWVar24 = *(int *)pWVar24 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_84,7);
  if ((((iVar15 < 0) || (DAT_1405cb6e8 != CONCAT13(uStack_81,CONCAT12(uStack_82,local_84)))) ||
      (DAT_1405cb6ec != CONCAT11(uStack_7f,bStack_80))) || (DAT_1405cb6ee != local_7e)) {
    puVar22 = (undefined8 *)0x0;
  }
  else {
    DAT_1406f9078 = DAT_1406f9078 + 1;
    puVar25 = &DAT_1406f9068;
    local_60 = &DAT_1406f9068;
    bVar8 = false;
    local_70 = (undefined8 *)0x7;
    iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,7,&local_84);
    lVar17 = 0xe;
    if (-1 < iVar15) {
      do {
        local_78[0] = 0;
        bVar9 = bStack_80 & 0x80;
        bVar10 = bStack_80 & 0x80;
        bVar11 = bStack_80 & 0x80;
        if ((bStack_80 & 0x80) != 0) {
          iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,lVar17,local_78,4);
          lVar17 = lVar17 + 4;
          if (iVar15 < 0) break;
        }
        if (!bVar8) {
          if (bVar9 != 0) goto LAB_1402863de;
          bVar8 = true;
        }
        uVar14 = 7;
        if (bVar10 != 0) {
          uVar14 = 0xb;
        }
        if (CONCAT11(local_7e,uStack_7f) < uVar14) break;
        uVar27 = (ulonglong)CONCAT11(local_7e,uStack_7f) - (ulonglong)uVar14;
        local_60 = (ulonglong *)FUN_1401e02e0(puVar25);
        local_60 = (ulonglong *)FUN_1401e02e0(local_60);
        uVar23 = uVar27 - 1;
        uVar21 = uVar23 >> 1 | uVar23;
        if (uVar23 != uVar21) {
          do {
            uVar23 = uVar21;
            uVar21 = uVar23 >> 1 | uVar23;
          } while (uVar23 != uVar21);
        }
        if (local_60[1] <= uVar23 + 1) {
          local_60 = (ulonglong *)FUN_1401e00f0(local_60);
        }
        *local_60 = uVar27;
        puVar25 = local_60;
        if (uVar27 != 0) {
          puVar25 = (ulonglong *)FUN_1401e02e0(local_60);
          local_60 = puVar25;
          iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,lVar17,puVar25 + 3,uVar27)
          ;
          lVar17 = lVar17 + uVar27;
          if (iVar15 < 0) break;
        }
        uVar16 = FUN_140459950(0,0,0);
        uVar16 = FUN_140459950(uVar16,&uStack_82,5);
        if (bVar11 != 0) {
          uVar16 = FUN_140459950(uVar16,local_78,4);
        }
        uVar23 = *puVar25;
        if (uVar23 != 0) {
          puVar25 = (ulonglong *)FUN_1401e02e0(puVar25);
          local_60 = puVar25;
          uVar16 = FUN_140459950(uVar16,puVar25 + 3,uVar23 & 0xffffffff);
        }
        if ((short)uVar16 != local_84) break;
        uVar23 = (ulonglong)local_78[0];
        puVar26 = (undefined8 *)(lVar17 + uVar23);
        puVar18 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (puVar18 < puVar26) {
          if (uVar23 != 0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          }
          break;
        }
        local_70 = puVar26;
        iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,puVar26,&local_84,7);
        lVar17 = (longlong)puVar26 + 7;
      } while (-1 < iVar15);
      puVar18 = local_70;
      if ((undefined8 *)0x7 < local_70) {
        puVar22 = (undefined8 *)FUN_1402e2c84(0x28);
        *puVar22 = CRecognisedDataOneFileImpl::vftable;
        puVar22[1] = param_3;
        plVar4 = puVar22 + 2;
        local_70 = puVar22;
        local_58 = plVar4;
        lVar17 = FUN_140009200();
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
        *plVar4 = lVar17 + 0x18;
        FUN_140008c50(plVar4,L".rar",4);
        puVar22[3] = puVar18;
        *(undefined1 *)(puVar22 + 4) = 1;
      }
    }
LAB_1402863de:
    puVar5 = puVar25 + 2;
    *puVar5 = *puVar5 - 1;
    if (*puVar5 == 0) {
      _free_base(puVar25);
    }
  }
  return puVar22;
}


// ---- function FUN_140285d00 @ 140285d00 (xref 140285da8)

/* WARNING: Removing unreachable block (ram,0x000140285d70) */
/* WARNING: Removing unreachable block (ram,0x000140285d83) */
/* WARNING: Removing unreachable block (ram,0x0001402863a7) */
/* WARNING: Removing unreachable block (ram,0x0001402863b6) */

undefined8 * FUN_140285d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ushort uVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  LPWSTR pWVar24;
  ulonglong *puVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  int iVar28;
  short local_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  byte bStack_80;
  undefined1 uStack_7f;
  char local_7e;
  undefined4 local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  LPWSTR local_68;
  ulonglong *local_60;
  longlong *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  puVar22 = (undefined8 *)0x0;
  local_7c = 0;
  lVar17 = FUN_140009200();
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar18 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
  pWVar24 = (LPWSTR)(puVar18 + 3);
  local_68 = pWVar24;
  iVar15 = MultiByteToWideChar(0,0,"CRarDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar15 = iVar15 + -1;
  if (iVar15 < 1) {
    uVar19 = *puVar18;
    if (*(int *)(puVar18 + 1) != 0) {
      if (*(int *)(puVar18 + 2) < 0) {
        if (*(int *)((longlong)puVar18 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar18 + 1) = 0;
        *pWVar24 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar18 + 2);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
        pWVar24 = (LPWSTR)(lVar17 + 0x18);
        local_68 = pWVar24;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar18 + 0xc) - iVar15 | 1U - *(int *)(puVar18 + 2)) < 0) {
      FUN_140008ae0(&local_68,iVar15);
      pWVar24 = local_68;
    }
    MultiByteToWideChar(0,0,"CRarDataType::Validate",-1,pWVar24,iVar15);
    if (*(int *)(pWVar24 + -6) < iVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar24 + -8) = iVar15;
    pWVar24[iVar15] = L'\0';
  }
  pWVar2 = pWVar24 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0)) {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_58 = (longlong *)(lVar17 + 0x18);
  local_7c = 1;
  iVar15 = *(int *)(pWVar24 + -8);
  iVar28 = iVar15 + 2;
  if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - iVar28 | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_58,iVar28);
  }
  plVar4 = local_58;
  FUN_140008b60(local_58,(longlong)iVar15,pWVar24,iVar15);
  puVar6 = (undefined4 *)((longlong)plVar4 + (longlong)iVar15 * 2);
  if (puVar6 == (undefined4 *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar6 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar28) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar28;
  *(undefined2 *)((longlong)plVar4 + (longlong)iVar15 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0))
  {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = (undefined8 *)(lVar17 + 0x18);
  local_7c = 3;
  iVar15 = (int)plVar4[-2];
  if (iVar15 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - (iVar15 + 10) | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_70);
  }
  puVar18 = local_70;
  FUN_140008b60(local_70,(longlong)iVar15,plVar4,iVar15);
  uVar13 = u_Trying_Rar_1405cb6d0._12_4_;
  uVar12 = u_Trying_Rar_1405cb6d0._8_4_;
  uVar16 = u_Trying_Rar_1405cb6d0._4_4_;
  pwVar7 = (wchar_t *)((longlong)puVar18 + (longlong)iVar15 * 2);
  if (pwVar7 == (wchar_t *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar7 = u_Trying_Rar_1405cb6d0._0_4_;
    *(undefined4 *)(pwVar7 + 2) = uVar16;
    *(undefined4 *)(pwVar7 + 4) = uVar12;
    *(undefined4 *)(pwVar7 + 6) = uVar13;
    *(undefined4 *)(pwVar7 + 8) = u_Trying_Rar_1405cb6d0._16_4_;
  }
  if (*(int *)((longlong)puVar18 + -0xc) < iVar15 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar18 + -2) = iVar15 + 10;
  *(undefined2 *)((longlong)puVar18 + (longlong)iVar15 * 2 + 0x14) = 0;
  uVar19 = FUN_140040170();
  FUN_140041bc0(uVar19,700,puVar18);
  local_7c = 1;
  LOCK();
  piVar1 = (int *)(puVar18 + -1);
  iVar15 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar17 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar24 = pWVar24 + -4;
  iVar15 = *(int *)pWVar24;
  *(int *)pWVar24 = *(int *)pWVar24 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_84,7);
  if ((((iVar15 < 0) || (DAT_1405cb6e8 != CONCAT13(uStack_81,CONCAT12(uStack_82,local_84)))) ||
      (DAT_1405cb6ec != CONCAT11(uStack_7f,bStack_80))) || (DAT_1405cb6ee != local_7e)) {
    puVar22 = (undefined8 *)0x0;
  }
  else {
    DAT_1406f9078 = DAT_1406f9078 + 1;
    puVar25 = &DAT_1406f9068;
    local_60 = &DAT_1406f9068;
    bVar8 = false;
    local_70 = (undefined8 *)0x7;
    iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,7,&local_84);
    lVar17 = 0xe;
    if (-1 < iVar15) {
      do {
        local_78[0] = 0;
        bVar9 = bStack_80 & 0x80;
        bVar10 = bStack_80 & 0x80;
        bVar11 = bStack_80 & 0x80;
        if ((bStack_80 & 0x80) != 0) {
          iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,lVar17,local_78,4);
          lVar17 = lVar17 + 4;
          if (iVar15 < 0) break;
        }
        if (!bVar8) {
          if (bVar9 != 0) goto LAB_1402863de;
          bVar8 = true;
        }
        uVar14 = 7;
        if (bVar10 != 0) {
          uVar14 = 0xb;
        }
        if (CONCAT11(local_7e,uStack_7f) < uVar14) break;
        uVar27 = (ulonglong)CONCAT11(local_7e,uStack_7f) - (ulonglong)uVar14;
        local_60 = (ulonglong *)FUN_1401e02e0(puVar25);
        local_60 = (ulonglong *)FUN_1401e02e0(local_60);
        uVar23 = uVar27 - 1;
        uVar21 = uVar23 >> 1 | uVar23;
        if (uVar23 != uVar21) {
          do {
            uVar23 = uVar21;
            uVar21 = uVar23 >> 1 | uVar23;
          } while (uVar23 != uVar21);
        }
        if (local_60[1] <= uVar23 + 1) {
          local_60 = (ulonglong *)FUN_1401e00f0(local_60);
        }
        *local_60 = uVar27;
        puVar25 = local_60;
        if (uVar27 != 0) {
          puVar25 = (ulonglong *)FUN_1401e02e0(local_60);
          local_60 = puVar25;
          iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,lVar17,puVar25 + 3,uVar27)
          ;
          lVar17 = lVar17 + uVar27;
          if (iVar15 < 0) break;
        }
        uVar16 = FUN_140459950(0,0,0);
        uVar16 = FUN_140459950(uVar16,&uStack_82,5);
        if (bVar11 != 0) {
          uVar16 = FUN_140459950(uVar16,local_78,4);
        }
        uVar23 = *puVar25;
        if (uVar23 != 0) {
          puVar25 = (ulonglong *)FUN_1401e02e0(puVar25);
          local_60 = puVar25;
          uVar16 = FUN_140459950(uVar16,puVar25 + 3,uVar23 & 0xffffffff);
        }
        if ((short)uVar16 != local_84) break;
        uVar23 = (ulonglong)local_78[0];
        puVar26 = (undefined8 *)(lVar17 + uVar23);
        puVar18 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (puVar18 < puVar26) {
          if (uVar23 != 0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          }
          break;
        }
        local_70 = puVar26;
        iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,puVar26,&local_84,7);
        lVar17 = (longlong)puVar26 + 7;
      } while (-1 < iVar15);
      puVar18 = local_70;
      if ((undefined8 *)0x7 < local_70) {
        puVar22 = (undefined8 *)FUN_1402e2c84(0x28);
        *puVar22 = CRecognisedDataOneFileImpl::vftable;
        puVar22[1] = param_3;
        plVar4 = puVar22 + 2;
        local_70 = puVar22;
        local_58 = plVar4;
        lVar17 = FUN_140009200();
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
        *plVar4 = lVar17 + 0x18;
        FUN_140008c50(plVar4,L".rar",4);
        puVar22[3] = puVar18;
        *(undefined1 *)(puVar22 + 4) = 1;
      }
    }
LAB_1402863de:
    puVar5 = puVar25 + 2;
    *puVar5 = *puVar5 - 1;
    if (*puVar5 == 0) {
      _free_base(puVar25);
    }
  }
  return puVar22;
}


// ---- function FUN_140285d00 @ 140285d00 (xref 140285de8)

/* WARNING: Removing unreachable block (ram,0x000140285d70) */
/* WARNING: Removing unreachable block (ram,0x000140285d83) */
/* WARNING: Removing unreachable block (ram,0x0001402863a7) */
/* WARNING: Removing unreachable block (ram,0x0001402863b6) */

undefined8 * FUN_140285d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ushort uVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  LPWSTR pWVar24;
  ulonglong *puVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  int iVar28;
  short local_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  byte bStack_80;
  undefined1 uStack_7f;
  char local_7e;
  undefined4 local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  LPWSTR local_68;
  ulonglong *local_60;
  longlong *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  puVar22 = (undefined8 *)0x0;
  local_7c = 0;
  lVar17 = FUN_140009200();
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar18 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
  pWVar24 = (LPWSTR)(puVar18 + 3);
  local_68 = pWVar24;
  iVar15 = MultiByteToWideChar(0,0,"CRarDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar15 = iVar15 + -1;
  if (iVar15 < 1) {
    uVar19 = *puVar18;
    if (*(int *)(puVar18 + 1) != 0) {
      if (*(int *)(puVar18 + 2) < 0) {
        if (*(int *)((longlong)puVar18 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar18 + 1) = 0;
        *pWVar24 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar18 + 2);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
        pWVar24 = (LPWSTR)(lVar17 + 0x18);
        local_68 = pWVar24;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar18 + 0xc) - iVar15 | 1U - *(int *)(puVar18 + 2)) < 0) {
      FUN_140008ae0(&local_68,iVar15);
      pWVar24 = local_68;
    }
    MultiByteToWideChar(0,0,"CRarDataType::Validate",-1,pWVar24,iVar15);
    if (*(int *)(pWVar24 + -6) < iVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar24 + -8) = iVar15;
    pWVar24[iVar15] = L'\0';
  }
  pWVar2 = pWVar24 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0)) {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_58 = (longlong *)(lVar17 + 0x18);
  local_7c = 1;
  iVar15 = *(int *)(pWVar24 + -8);
  iVar28 = iVar15 + 2;
  if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - iVar28 | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_58,iVar28);
  }
  plVar4 = local_58;
  FUN_140008b60(local_58,(longlong)iVar15,pWVar24,iVar15);
  puVar6 = (undefined4 *)((longlong)plVar4 + (longlong)iVar15 * 2);
  if (puVar6 == (undefined4 *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar6 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar28) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar28;
  *(undefined2 *)((longlong)plVar4 + (longlong)iVar15 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar17 == 0))
  {
    uVar19 = FUN_140009200();
    lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar19);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = (undefined8 *)(lVar17 + 0x18);
  local_7c = 3;
  iVar15 = (int)plVar4[-2];
  if (iVar15 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar17 + 0xc) - (iVar15 + 10) | 1U - *(int *)(lVar17 + 0x10)) < 0) {
    FUN_140008ae0(&local_70);
  }
  puVar18 = local_70;
  FUN_140008b60(local_70,(longlong)iVar15,plVar4,iVar15);
  uVar13 = u_Trying_Rar_1405cb6d0._12_4_;
  uVar12 = u_Trying_Rar_1405cb6d0._8_4_;
  uVar16 = u_Trying_Rar_1405cb6d0._4_4_;
  pwVar7 = (wchar_t *)((longlong)puVar18 + (longlong)iVar15 * 2);
  if (pwVar7 == (wchar_t *)0x0) {
    puVar20 = __doserrno();
    *puVar20 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar7 = u_Trying_Rar_1405cb6d0._0_4_;
    *(undefined4 *)(pwVar7 + 2) = uVar16;
    *(undefined4 *)(pwVar7 + 4) = uVar12;
    *(undefined4 *)(pwVar7 + 6) = uVar13;
    *(undefined4 *)(pwVar7 + 8) = u_Trying_Rar_1405cb6d0._16_4_;
  }
  if (*(int *)((longlong)puVar18 + -0xc) < iVar15 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar18 + -2) = iVar15 + 10;
  *(undefined2 *)((longlong)puVar18 + (longlong)iVar15 * 2 + 0x14) = 0;
  uVar19 = FUN_140040170();
  FUN_140041bc0(uVar19,700,puVar18);
  local_7c = 1;
  LOCK();
  piVar1 = (int *)(puVar18 + -1);
  iVar15 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar17 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar17 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar24 = pWVar24 + -4;
  iVar15 = *(int *)pWVar24;
  *(int *)pWVar24 = *(int *)pWVar24 + -1;
  UNLOCK();
  if (iVar15 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,0,&local_84,7);
  if ((((iVar15 < 0) || (DAT_1405cb6e8 != CONCAT13(uStack_81,CONCAT12(uStack_82,local_84)))) ||
      (DAT_1405cb6ec != CONCAT11(uStack_7f,bStack_80))) || (DAT_1405cb6ee != local_7e)) {
    puVar22 = (undefined8 *)0x0;
  }
  else {
    DAT_1406f9078 = DAT_1406f9078 + 1;
    puVar25 = &DAT_1406f9068;
    local_60 = &DAT_1406f9068;
    bVar8 = false;
    local_70 = (undefined8 *)0x7;
    iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,7,&local_84);
    lVar17 = 0xe;
    if (-1 < iVar15) {
      do {
        local_78[0] = 0;
        bVar9 = bStack_80 & 0x80;
        bVar10 = bStack_80 & 0x80;
        bVar11 = bStack_80 & 0x80;
        if ((bStack_80 & 0x80) != 0) {
          iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,lVar17,local_78,4);
          lVar17 = lVar17 + 4;
          if (iVar15 < 0) break;
        }
        if (!bVar8) {
          if (bVar9 != 0) goto LAB_1402863de;
          bVar8 = true;
        }
        uVar14 = 7;
        if (bVar10 != 0) {
          uVar14 = 0xb;
        }
        if (CONCAT11(local_7e,uStack_7f) < uVar14) break;
        uVar27 = (ulonglong)CONCAT11(local_7e,uStack_7f) - (ulonglong)uVar14;
        local_60 = (ulonglong *)FUN_1401e02e0(puVar25);
        local_60 = (ulonglong *)FUN_1401e02e0(local_60);
        uVar23 = uVar27 - 1;
        uVar21 = uVar23 >> 1 | uVar23;
        if (uVar23 != uVar21) {
          do {
            uVar23 = uVar21;
            uVar21 = uVar23 >> 1 | uVar23;
          } while (uVar23 != uVar21);
        }
        if (local_60[1] <= uVar23 + 1) {
          local_60 = (ulonglong *)FUN_1401e00f0(local_60);
        }
        *local_60 = uVar27;
        puVar25 = local_60;
        if (uVar27 != 0) {
          puVar25 = (ulonglong *)FUN_1401e02e0(local_60);
          local_60 = puVar25;
          iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,lVar17,puVar25 + 3,uVar27)
          ;
          lVar17 = lVar17 + uVar27;
          if (iVar15 < 0) break;
        }
        uVar16 = FUN_140459950(0,0,0);
        uVar16 = FUN_140459950(uVar16,&uStack_82,5);
        if (bVar11 != 0) {
          uVar16 = FUN_140459950(uVar16,local_78,4);
        }
        uVar23 = *puVar25;
        if (uVar23 != 0) {
          puVar25 = (ulonglong *)FUN_1401e02e0(puVar25);
          local_60 = puVar25;
          uVar16 = FUN_140459950(uVar16,puVar25 + 3,uVar23 & 0xffffffff);
        }
        if ((short)uVar16 != local_84) break;
        uVar23 = (ulonglong)local_78[0];
        puVar26 = (undefined8 *)(lVar17 + uVar23);
        puVar18 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
        if (puVar18 < puVar26) {
          if (uVar23 != 0) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2);
          }
          break;
        }
        local_70 = puVar26;
        iVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,puVar26,&local_84,7);
        lVar17 = (longlong)puVar26 + 7;
      } while (-1 < iVar15);
      puVar18 = local_70;
      if ((undefined8 *)0x7 < local_70) {
        puVar22 = (undefined8 *)FUN_1402e2c84(0x28);
        *puVar22 = CRecognisedDataOneFileImpl::vftable;
        puVar22[1] = param_3;
        plVar4 = puVar22 + 2;
        local_70 = puVar22;
        local_58 = plVar4;
        lVar17 = FUN_140009200();
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        lVar17 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar17);
        *plVar4 = lVar17 + 0x18;
        FUN_140008c50(plVar4,L".rar",4);
        puVar22[3] = puVar18;
        *(undefined1 *)(puVar22 + 4) = 1;
      }
    }
LAB_1402863de:
    puVar5 = puVar25 + 2;
    *puVar5 = *puVar5 - 1;
    if (*puVar5 == 0) {
      _free_base(puVar25);
    }
  }
  return puVar22;
}



// ===== string at 1405cb700 : CCabDataType::Validate
// ---- function FUN_1402865a0 @ 1402865a0 (xref 1402865fc)

/* WARNING: Removing unreachable block (ram,0x000140286611) */
/* WARNING: Removing unreachable block (ram,0x000140286624) */
/* WARNING: Removing unreachable block (ram,0x000140286a14) */
/* WARNING: Removing unreachable block (ram,0x000140286a23) */

undefined8 *
FUN_1402865a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong *puVar14;
  LPWSTR pWVar15;
  longlong lVar16;
  int iVar17;
  LPWSTR pWVar18;
  int iVar19;
  undefined4 uVar20;
  LPWSTR local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  lVar11 = FUN_140009200();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar12 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
  pWVar15 = (LPWSTR)(puVar12 + 3);
  iVar19 = 0;
  pWVar18 = (LPWSTR)0x0;
  local_70 = pWVar15;
  iVar10 = MultiByteToWideChar(0,0,"CCabDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar10 = iVar10 + -1;
  if (iVar10 < 1) {
    uVar13 = *puVar12;
    if (*(int *)(puVar12 + 1) != 0) {
      if (*(int *)(puVar12 + 2) < 0) {
        if (*(int *)((longlong)puVar12 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar12 + 1) = 0;
        *pWVar15 = L'\0';
      }
      else {
        LOCK();
        piVar7 = (int *)(puVar12 + 2);
        iVar10 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar10 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
        pWVar15 = (LPWSTR)(lVar11 + 0x18);
        local_70 = pWVar15;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar12 + 0xc) - iVar10 | 1U - *(int *)(puVar12 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar10);
      pWVar15 = local_70;
    }
    pWVar18 = pWVar15;
    iVar19 = iVar10;
    MultiByteToWideChar(0,0,"CCabDataType::Validate",-1,pWVar15,iVar10);
    if (*(int *)(pWVar15 + -6) < iVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar15 + -8) = iVar10;
    pWVar15[iVar10] = L'\0';
  }
  pWVar1 = pWVar15 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0)) {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = (longlong *)(lVar11 + 0x18);
  uVar20 = 1;
  iVar10 = *(int *)(pWVar15 + -8);
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 2;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar17);
  }
  plVar3 = local_68;
  FUN_140008b60(local_68,lVar16,pWVar15,iVar10,pWVar18,iVar19,uVar20);
  puVar4 = (undefined4 *)((longlong)plVar3 + lVar16 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar3 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar3 + -2) = iVar17;
  *(undefined2 *)((longlong)plVar3 + lVar16 * 2 + 4) = 0;
  if ((plVar3[-3] == 0) || (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0))
  {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60 = (undefined8 *)(lVar11 + 0x18);
  uVar20 = 3;
  iVar10 = (int)plVar3[-2];
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 10;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_60,iVar17);
  }
  puVar12 = local_60;
  FUN_140008b60(local_60,lVar16,plVar3,iVar10,pWVar18,iVar19,uVar20);
  uVar9 = u_Trying_Cab_1405cb718._12_4_;
  uVar8 = u_Trying_Cab_1405cb718._8_4_;
  uVar20 = u_Trying_Cab_1405cb718._4_4_;
  pwVar5 = (wchar_t *)((longlong)puVar12 + lVar16 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Cab_1405cb718._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar20;
    *(undefined4 *)(pwVar5 + 4) = uVar8;
    *(undefined4 *)(pwVar5 + 6) = uVar9;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Cab_1405cb718._16_4_;
  }
  if (*(int *)((longlong)puVar12 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar12 + -2) = iVar17;
  *(undefined2 *)((longlong)puVar12 + lVar16 * 2 + 0x14) = 0;
  uVar13 = FUN_140040170();
  FUN_140041bc0(uVar13,700,puVar12);
  LOCK();
  piVar7 = (int *)(puVar12 + -1);
  iVar19 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar2 = plVar3 + -1;
  lVar11 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar11 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar3[-3],plVar3 + -3);
  }
  LOCK();
  pWVar15 = pWVar15 + -4;
  iVar19 = *(int *)pWVar15;
  *(int *)pWVar15 = *(int *)pWVar15 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  piVar7 = *(int **)(param_4 + 8);
  if ((((*piVar7 == DAT_1405cb738) && (piVar7[1] == 0)) && (piVar7[3] == 0)) &&
     (((piVar7[5] == 0 && (*(byte *)((longlong)piVar7 + 0x19) < 2)) &&
      (((uint)piVar7[4] < (uint)piVar7[2] && (0x4f < (uint)piVar7[2])))))) {
    puVar12 = (undefined8 *)FUN_1402e2c84(0x28);
    uVar6 = piVar7[2];
    *puVar12 = CRecognisedDataOneFileImpl::vftable;
    puVar12[1] = param_3;
    plVar3 = puVar12 + 2;
    local_68 = plVar3;
    local_60 = puVar12;
    lVar11 = FUN_140009200();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
    *plVar3 = lVar11 + 0x18;
    FUN_140008c50(plVar3,L".cab",4);
    puVar12[3] = (ulonglong)uVar6;
    *(undefined1 *)(puVar12 + 4) = 0;
  }
  else {
    puVar12 = (undefined8 *)0x0;
  }
  return puVar12;
}


// ---- function FUN_1402865a0 @ 1402865a0 (xref 14028664b)

/* WARNING: Removing unreachable block (ram,0x000140286611) */
/* WARNING: Removing unreachable block (ram,0x000140286624) */
/* WARNING: Removing unreachable block (ram,0x000140286a14) */
/* WARNING: Removing unreachable block (ram,0x000140286a23) */

undefined8 *
FUN_1402865a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong *puVar14;
  LPWSTR pWVar15;
  longlong lVar16;
  int iVar17;
  LPWSTR pWVar18;
  int iVar19;
  undefined4 uVar20;
  LPWSTR local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  lVar11 = FUN_140009200();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar12 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
  pWVar15 = (LPWSTR)(puVar12 + 3);
  iVar19 = 0;
  pWVar18 = (LPWSTR)0x0;
  local_70 = pWVar15;
  iVar10 = MultiByteToWideChar(0,0,"CCabDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar10 = iVar10 + -1;
  if (iVar10 < 1) {
    uVar13 = *puVar12;
    if (*(int *)(puVar12 + 1) != 0) {
      if (*(int *)(puVar12 + 2) < 0) {
        if (*(int *)((longlong)puVar12 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar12 + 1) = 0;
        *pWVar15 = L'\0';
      }
      else {
        LOCK();
        piVar7 = (int *)(puVar12 + 2);
        iVar10 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar10 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
        pWVar15 = (LPWSTR)(lVar11 + 0x18);
        local_70 = pWVar15;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar12 + 0xc) - iVar10 | 1U - *(int *)(puVar12 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar10);
      pWVar15 = local_70;
    }
    pWVar18 = pWVar15;
    iVar19 = iVar10;
    MultiByteToWideChar(0,0,"CCabDataType::Validate",-1,pWVar15,iVar10);
    if (*(int *)(pWVar15 + -6) < iVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar15 + -8) = iVar10;
    pWVar15[iVar10] = L'\0';
  }
  pWVar1 = pWVar15 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0)) {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = (longlong *)(lVar11 + 0x18);
  uVar20 = 1;
  iVar10 = *(int *)(pWVar15 + -8);
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 2;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar17);
  }
  plVar3 = local_68;
  FUN_140008b60(local_68,lVar16,pWVar15,iVar10,pWVar18,iVar19,uVar20);
  puVar4 = (undefined4 *)((longlong)plVar3 + lVar16 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar3 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar3 + -2) = iVar17;
  *(undefined2 *)((longlong)plVar3 + lVar16 * 2 + 4) = 0;
  if ((plVar3[-3] == 0) || (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0))
  {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60 = (undefined8 *)(lVar11 + 0x18);
  uVar20 = 3;
  iVar10 = (int)plVar3[-2];
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 10;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_60,iVar17);
  }
  puVar12 = local_60;
  FUN_140008b60(local_60,lVar16,plVar3,iVar10,pWVar18,iVar19,uVar20);
  uVar9 = u_Trying_Cab_1405cb718._12_4_;
  uVar8 = u_Trying_Cab_1405cb718._8_4_;
  uVar20 = u_Trying_Cab_1405cb718._4_4_;
  pwVar5 = (wchar_t *)((longlong)puVar12 + lVar16 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Cab_1405cb718._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar20;
    *(undefined4 *)(pwVar5 + 4) = uVar8;
    *(undefined4 *)(pwVar5 + 6) = uVar9;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Cab_1405cb718._16_4_;
  }
  if (*(int *)((longlong)puVar12 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar12 + -2) = iVar17;
  *(undefined2 *)((longlong)puVar12 + lVar16 * 2 + 0x14) = 0;
  uVar13 = FUN_140040170();
  FUN_140041bc0(uVar13,700,puVar12);
  LOCK();
  piVar7 = (int *)(puVar12 + -1);
  iVar19 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar2 = plVar3 + -1;
  lVar11 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar11 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar3[-3],plVar3 + -3);
  }
  LOCK();
  pWVar15 = pWVar15 + -4;
  iVar19 = *(int *)pWVar15;
  *(int *)pWVar15 = *(int *)pWVar15 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  piVar7 = *(int **)(param_4 + 8);
  if ((((*piVar7 == DAT_1405cb738) && (piVar7[1] == 0)) && (piVar7[3] == 0)) &&
     (((piVar7[5] == 0 && (*(byte *)((longlong)piVar7 + 0x19) < 2)) &&
      (((uint)piVar7[4] < (uint)piVar7[2] && (0x4f < (uint)piVar7[2])))))) {
    puVar12 = (undefined8 *)FUN_1402e2c84(0x28);
    uVar6 = piVar7[2];
    *puVar12 = CRecognisedDataOneFileImpl::vftable;
    puVar12[1] = param_3;
    plVar3 = puVar12 + 2;
    local_68 = plVar3;
    local_60 = puVar12;
    lVar11 = FUN_140009200();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
    *plVar3 = lVar11 + 0x18;
    FUN_140008c50(plVar3,L".cab",4);
    puVar12[3] = (ulonglong)uVar6;
    *(undefined1 *)(puVar12 + 4) = 0;
  }
  else {
    puVar12 = (undefined8 *)0x0;
  }
  return puVar12;
}


// ---- function FUN_1402865a0 @ 1402865a0 (xref 14028668d)

/* WARNING: Removing unreachable block (ram,0x000140286611) */
/* WARNING: Removing unreachable block (ram,0x000140286624) */
/* WARNING: Removing unreachable block (ram,0x000140286a14) */
/* WARNING: Removing unreachable block (ram,0x000140286a23) */

undefined8 *
FUN_1402865a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong *puVar14;
  LPWSTR pWVar15;
  longlong lVar16;
  int iVar17;
  LPWSTR pWVar18;
  int iVar19;
  undefined4 uVar20;
  LPWSTR local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  lVar11 = FUN_140009200();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar12 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
  pWVar15 = (LPWSTR)(puVar12 + 3);
  iVar19 = 0;
  pWVar18 = (LPWSTR)0x0;
  local_70 = pWVar15;
  iVar10 = MultiByteToWideChar(0,0,"CCabDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar10 = iVar10 + -1;
  if (iVar10 < 1) {
    uVar13 = *puVar12;
    if (*(int *)(puVar12 + 1) != 0) {
      if (*(int *)(puVar12 + 2) < 0) {
        if (*(int *)((longlong)puVar12 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar12 + 1) = 0;
        *pWVar15 = L'\0';
      }
      else {
        LOCK();
        piVar7 = (int *)(puVar12 + 2);
        iVar10 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar10 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
        pWVar15 = (LPWSTR)(lVar11 + 0x18);
        local_70 = pWVar15;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar12 + 0xc) - iVar10 | 1U - *(int *)(puVar12 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar10);
      pWVar15 = local_70;
    }
    pWVar18 = pWVar15;
    iVar19 = iVar10;
    MultiByteToWideChar(0,0,"CCabDataType::Validate",-1,pWVar15,iVar10);
    if (*(int *)(pWVar15 + -6) < iVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar15 + -8) = iVar10;
    pWVar15[iVar10] = L'\0';
  }
  pWVar1 = pWVar15 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0)) {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = (longlong *)(lVar11 + 0x18);
  uVar20 = 1;
  iVar10 = *(int *)(pWVar15 + -8);
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 2;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar17);
  }
  plVar3 = local_68;
  FUN_140008b60(local_68,lVar16,pWVar15,iVar10,pWVar18,iVar19,uVar20);
  puVar4 = (undefined4 *)((longlong)plVar3 + lVar16 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar3 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar3 + -2) = iVar17;
  *(undefined2 *)((longlong)plVar3 + lVar16 * 2 + 4) = 0;
  if ((plVar3[-3] == 0) || (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0))
  {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60 = (undefined8 *)(lVar11 + 0x18);
  uVar20 = 3;
  iVar10 = (int)plVar3[-2];
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 10;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_60,iVar17);
  }
  puVar12 = local_60;
  FUN_140008b60(local_60,lVar16,plVar3,iVar10,pWVar18,iVar19,uVar20);
  uVar9 = u_Trying_Cab_1405cb718._12_4_;
  uVar8 = u_Trying_Cab_1405cb718._8_4_;
  uVar20 = u_Trying_Cab_1405cb718._4_4_;
  pwVar5 = (wchar_t *)((longlong)puVar12 + lVar16 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Cab_1405cb718._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar20;
    *(undefined4 *)(pwVar5 + 4) = uVar8;
    *(undefined4 *)(pwVar5 + 6) = uVar9;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Cab_1405cb718._16_4_;
  }
  if (*(int *)((longlong)puVar12 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar12 + -2) = iVar17;
  *(undefined2 *)((longlong)puVar12 + lVar16 * 2 + 0x14) = 0;
  uVar13 = FUN_140040170();
  FUN_140041bc0(uVar13,700,puVar12);
  LOCK();
  piVar7 = (int *)(puVar12 + -1);
  iVar19 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar2 = plVar3 + -1;
  lVar11 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar11 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar3[-3],plVar3 + -3);
  }
  LOCK();
  pWVar15 = pWVar15 + -4;
  iVar19 = *(int *)pWVar15;
  *(int *)pWVar15 = *(int *)pWVar15 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  piVar7 = *(int **)(param_4 + 8);
  if ((((*piVar7 == DAT_1405cb738) && (piVar7[1] == 0)) && (piVar7[3] == 0)) &&
     (((piVar7[5] == 0 && (*(byte *)((longlong)piVar7 + 0x19) < 2)) &&
      (((uint)piVar7[4] < (uint)piVar7[2] && (0x4f < (uint)piVar7[2])))))) {
    puVar12 = (undefined8 *)FUN_1402e2c84(0x28);
    uVar6 = piVar7[2];
    *puVar12 = CRecognisedDataOneFileImpl::vftable;
    puVar12[1] = param_3;
    plVar3 = puVar12 + 2;
    local_68 = plVar3;
    local_60 = puVar12;
    lVar11 = FUN_140009200();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
    *plVar3 = lVar11 + 0x18;
    FUN_140008c50(plVar3,L".cab",4);
    puVar12[3] = (ulonglong)uVar6;
    *(undefined1 *)(puVar12 + 4) = 0;
  }
  else {
    puVar12 = (undefined8 *)0x0;
  }
  return puVar12;
}



// ===== string at 1405cb748 : CRtfData::Validate
// ---- function FUN_140286c10 @ 140286c10 (xref 140286c95)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140286ca9) */
/* WARNING: Removing unreachable block (ram,0x000140286cbd) */

longlong FUN_140286c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  LPWSTR pWVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStackY_f8 [32];
  LPWSTR local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  ulonglong local_58;
  
  local_68 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_f8;
  local_b8 = param_2;
  local_88 = (undefined8 *)param_4;
  local_80 = param_3;
  lVar10 = FUN_140009200();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar11 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar10);
  pWVar14 = (LPWSTR)(puVar11 + 3);
  local_c0 = pWVar14;
  iVar9 = MultiByteToWideChar(0,0,"CRtfData::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar12 = *puVar11;
    if (*(int *)(puVar11 + 1) != 0) {
      if (*(int *)(puVar11 + 2) < 0) {
        if (*(int *)((longlong)puVar11 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar11 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar3 = (int *)(puVar11 + 2);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
        pWVar14 = (LPWSTR)(lVar10 + 0x18);
        local_c0 = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar11 + 0xc) - iVar9 | 1U - *(int *)(puVar11 + 2)) < 0) {
      FUN_140008ae0(&local_c0,iVar9);
      pWVar14 = local_c0;
    }
    MultiByteToWideChar(0,0,"CRtfData::Validate",-1,pWVar14,iVar9);
    if (*(int *)(pWVar14 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar9;
    pWVar14[iVar9] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar10 == 0)) {
    uVar12 = FUN_140009200();
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_98 = lVar10 + 0x18;
  iVar9 = *(int *)(pWVar14 + -8);
  lVar15 = (longlong)iVar9;
  iVar16 = iVar9 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar10 + 0xc) - iVar16 | 1U - *(int *)(lVar10 + 0x10)) < 0) {
    FUN_140008ae0(&local_98,iVar16);
  }
  lVar10 = local_98;
  FUN_140008b60(local_98,lVar15,pWVar14,iVar9);
  puVar4 = (undefined4 *)(lVar10 + lVar15 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar10 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar10 + -0x10) = iVar16;
  *(undefined2 *)(lVar10 + 4 + lVar15 * 2) = 0;
  plVar2 = (longlong *)(lVar10 + -0x18);
  if ((*plVar2 == 0) || (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar12 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_90 = lVar15 + 0x18;
  iVar9 = *(int *)(lVar10 + -0x10);
  iVar16 = iVar9 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - iVar16 | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_90,iVar16);
  }
  lVar15 = local_90;
  FUN_140008b60(local_90,(longlong)iVar9,lVar10,iVar9);
  uVar8 = u_Trying_Rtf_1405cb760._12_4_;
  uVar7 = u_Trying_Rtf_1405cb760._8_4_;
  uVar6 = u_Trying_Rtf_1405cb760._4_4_;
  pwVar5 = (wchar_t *)(lVar15 + (longlong)iVar9 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Rtf_1405cb760._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar6;
    *(undefined4 *)(pwVar5 + 4) = uVar7;
    *(undefined4 *)(pwVar5 + 6) = uVar8;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Rtf_1405cb760._16_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar16;
  *(undefined2 *)(lVar15 + 0x14 + (longlong)iVar9 * 2) = 0;
  uVar12 = FUN_140040170();
  FUN_140041bc0(uVar12,700,lVar15);
  LOCK();
  piVar3 = (int *)(lVar15 + -8);
  iVar9 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar9 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar3 = (int *)(lVar10 + -8);
  iVar9 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar9 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar2,plVar2);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar9 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar9 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar11 = local_88;
  local_60 = DAT_1405cb778;
  local_5c = DAT_1405cb77c;
  iVar9 = strncmp((char *)&local_60,*(char **)((longlong)local_88 + 8),5);
  if (iVar9 == 0) {
    local_88 = (undefined8 *)FUN_1402e2c84(0x58);
    uVar12 = local_80;
    *local_88 = CRtfEndDataType::vftable;
    local_88[7] = 0;
    local_88[8] = 0xf;
    *(undefined1 *)(local_88 + 5) = 0;
    *(undefined2 *)((longlong)local_88 + 0x21) = 0;
    local_88[9] = 0;
    local_88[10] = local_80;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_140287240(&local_a8,local_88);
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_a8,local_b8,uVar12,puVar11);
    if (lVar10 == 0) {
      local_b8 = FUN_1402e2c84(0x18);
      lVar15 = uStack_a0;
      if (uStack_a0 != 0) {
        LOCK();
        *(int *)(uStack_a0 + 8) = *(int *)(uStack_a0 + 8) + 1;
        UNLOCK();
      }
      local_78 = (undefined4)local_a8;
      uStack_74 = local_a8._4_4_;
      uStack_70 = (undefined4)uStack_a0;
      uStack_6c = uStack_a0._4_4_;
      lVar10 = FUN_1402987c0(local_b8,&local_78);
    }
    else {
      lVar15 = uStack_a0;
    }
    if (lVar15 != 0) {
      FUN_140008510(lVar15);
    }
  }
  else {
    lVar10 = 0;
  }
  return lVar10;
}


// ---- function FUN_140286c10 @ 140286c10 (xref 140286ce1)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140286ca9) */
/* WARNING: Removing unreachable block (ram,0x000140286cbd) */

longlong FUN_140286c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  LPWSTR pWVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStackY_f8 [32];
  LPWSTR local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  ulonglong local_58;
  
  local_68 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_f8;
  local_b8 = param_2;
  local_88 = (undefined8 *)param_4;
  local_80 = param_3;
  lVar10 = FUN_140009200();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar11 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar10);
  pWVar14 = (LPWSTR)(puVar11 + 3);
  local_c0 = pWVar14;
  iVar9 = MultiByteToWideChar(0,0,"CRtfData::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar12 = *puVar11;
    if (*(int *)(puVar11 + 1) != 0) {
      if (*(int *)(puVar11 + 2) < 0) {
        if (*(int *)((longlong)puVar11 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar11 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar3 = (int *)(puVar11 + 2);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
        pWVar14 = (LPWSTR)(lVar10 + 0x18);
        local_c0 = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar11 + 0xc) - iVar9 | 1U - *(int *)(puVar11 + 2)) < 0) {
      FUN_140008ae0(&local_c0,iVar9);
      pWVar14 = local_c0;
    }
    MultiByteToWideChar(0,0,"CRtfData::Validate",-1,pWVar14,iVar9);
    if (*(int *)(pWVar14 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar9;
    pWVar14[iVar9] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar10 == 0)) {
    uVar12 = FUN_140009200();
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_98 = lVar10 + 0x18;
  iVar9 = *(int *)(pWVar14 + -8);
  lVar15 = (longlong)iVar9;
  iVar16 = iVar9 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar10 + 0xc) - iVar16 | 1U - *(int *)(lVar10 + 0x10)) < 0) {
    FUN_140008ae0(&local_98,iVar16);
  }
  lVar10 = local_98;
  FUN_140008b60(local_98,lVar15,pWVar14,iVar9);
  puVar4 = (undefined4 *)(lVar10 + lVar15 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar10 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar10 + -0x10) = iVar16;
  *(undefined2 *)(lVar10 + 4 + lVar15 * 2) = 0;
  plVar2 = (longlong *)(lVar10 + -0x18);
  if ((*plVar2 == 0) || (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar12 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_90 = lVar15 + 0x18;
  iVar9 = *(int *)(lVar10 + -0x10);
  iVar16 = iVar9 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - iVar16 | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_90,iVar16);
  }
  lVar15 = local_90;
  FUN_140008b60(local_90,(longlong)iVar9,lVar10,iVar9);
  uVar8 = u_Trying_Rtf_1405cb760._12_4_;
  uVar7 = u_Trying_Rtf_1405cb760._8_4_;
  uVar6 = u_Trying_Rtf_1405cb760._4_4_;
  pwVar5 = (wchar_t *)(lVar15 + (longlong)iVar9 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Rtf_1405cb760._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar6;
    *(undefined4 *)(pwVar5 + 4) = uVar7;
    *(undefined4 *)(pwVar5 + 6) = uVar8;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Rtf_1405cb760._16_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar16;
  *(undefined2 *)(lVar15 + 0x14 + (longlong)iVar9 * 2) = 0;
  uVar12 = FUN_140040170();
  FUN_140041bc0(uVar12,700,lVar15);
  LOCK();
  piVar3 = (int *)(lVar15 + -8);
  iVar9 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar9 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar3 = (int *)(lVar10 + -8);
  iVar9 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar9 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar2,plVar2);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar9 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar9 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar11 = local_88;
  local_60 = DAT_1405cb778;
  local_5c = DAT_1405cb77c;
  iVar9 = strncmp((char *)&local_60,*(char **)((longlong)local_88 + 8),5);
  if (iVar9 == 0) {
    local_88 = (undefined8 *)FUN_1402e2c84(0x58);
    uVar12 = local_80;
    *local_88 = CRtfEndDataType::vftable;
    local_88[7] = 0;
    local_88[8] = 0xf;
    *(undefined1 *)(local_88 + 5) = 0;
    *(undefined2 *)((longlong)local_88 + 0x21) = 0;
    local_88[9] = 0;
    local_88[10] = local_80;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_140287240(&local_a8,local_88);
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_a8,local_b8,uVar12,puVar11);
    if (lVar10 == 0) {
      local_b8 = FUN_1402e2c84(0x18);
      lVar15 = uStack_a0;
      if (uStack_a0 != 0) {
        LOCK();
        *(int *)(uStack_a0 + 8) = *(int *)(uStack_a0 + 8) + 1;
        UNLOCK();
      }
      local_78 = (undefined4)local_a8;
      uStack_74 = local_a8._4_4_;
      uStack_70 = (undefined4)uStack_a0;
      uStack_6c = uStack_a0._4_4_;
      lVar10 = FUN_1402987c0(local_b8,&local_78);
    }
    else {
      lVar15 = uStack_a0;
    }
    if (lVar15 != 0) {
      FUN_140008510(lVar15);
    }
  }
  else {
    lVar10 = 0;
  }
  return lVar10;
}


// ---- function FUN_140286c10 @ 140286c10 (xref 140286d21)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140286ca9) */
/* WARNING: Removing unreachable block (ram,0x000140286cbd) */

longlong FUN_140286c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  LPWSTR pWVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStackY_f8 [32];
  LPWSTR local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  ulonglong local_58;
  
  local_68 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_f8;
  local_b8 = param_2;
  local_88 = (undefined8 *)param_4;
  local_80 = param_3;
  lVar10 = FUN_140009200();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar11 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar10);
  pWVar14 = (LPWSTR)(puVar11 + 3);
  local_c0 = pWVar14;
  iVar9 = MultiByteToWideChar(0,0,"CRtfData::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar12 = *puVar11;
    if (*(int *)(puVar11 + 1) != 0) {
      if (*(int *)(puVar11 + 2) < 0) {
        if (*(int *)((longlong)puVar11 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar11 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar3 = (int *)(puVar11 + 2);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
        pWVar14 = (LPWSTR)(lVar10 + 0x18);
        local_c0 = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar11 + 0xc) - iVar9 | 1U - *(int *)(puVar11 + 2)) < 0) {
      FUN_140008ae0(&local_c0,iVar9);
      pWVar14 = local_c0;
    }
    MultiByteToWideChar(0,0,"CRtfData::Validate",-1,pWVar14,iVar9);
    if (*(int *)(pWVar14 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar9;
    pWVar14[iVar9] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar10 == 0)) {
    uVar12 = FUN_140009200();
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_98 = lVar10 + 0x18;
  iVar9 = *(int *)(pWVar14 + -8);
  lVar15 = (longlong)iVar9;
  iVar16 = iVar9 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar10 + 0xc) - iVar16 | 1U - *(int *)(lVar10 + 0x10)) < 0) {
    FUN_140008ae0(&local_98,iVar16);
  }
  lVar10 = local_98;
  FUN_140008b60(local_98,lVar15,pWVar14,iVar9);
  puVar4 = (undefined4 *)(lVar10 + lVar15 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar10 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar10 + -0x10) = iVar16;
  *(undefined2 *)(lVar10 + 4 + lVar15 * 2) = 0;
  plVar2 = (longlong *)(lVar10 + -0x18);
  if ((*plVar2 == 0) || (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar12 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_90 = lVar15 + 0x18;
  iVar9 = *(int *)(lVar10 + -0x10);
  iVar16 = iVar9 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - iVar16 | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_90,iVar16);
  }
  lVar15 = local_90;
  FUN_140008b60(local_90,(longlong)iVar9,lVar10,iVar9);
  uVar8 = u_Trying_Rtf_1405cb760._12_4_;
  uVar7 = u_Trying_Rtf_1405cb760._8_4_;
  uVar6 = u_Trying_Rtf_1405cb760._4_4_;
  pwVar5 = (wchar_t *)(lVar15 + (longlong)iVar9 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Rtf_1405cb760._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar6;
    *(undefined4 *)(pwVar5 + 4) = uVar7;
    *(undefined4 *)(pwVar5 + 6) = uVar8;
    *(undefined4 *)(pwVar5 + 8) = u_Trying_Rtf_1405cb760._16_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar16;
  *(undefined2 *)(lVar15 + 0x14 + (longlong)iVar9 * 2) = 0;
  uVar12 = FUN_140040170();
  FUN_140041bc0(uVar12,700,lVar15);
  LOCK();
  piVar3 = (int *)(lVar15 + -8);
  iVar9 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar9 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar3 = (int *)(lVar10 + -8);
  iVar9 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar9 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar2,plVar2);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar9 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar9 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar11 = local_88;
  local_60 = DAT_1405cb778;
  local_5c = DAT_1405cb77c;
  iVar9 = strncmp((char *)&local_60,*(char **)((longlong)local_88 + 8),5);
  if (iVar9 == 0) {
    local_88 = (undefined8 *)FUN_1402e2c84(0x58);
    uVar12 = local_80;
    *local_88 = CRtfEndDataType::vftable;
    local_88[7] = 0;
    local_88[8] = 0xf;
    *(undefined1 *)(local_88 + 5) = 0;
    *(undefined2 *)((longlong)local_88 + 0x21) = 0;
    local_88[9] = 0;
    local_88[10] = local_80;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_140287240(&local_a8,local_88);
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_a8,local_b8,uVar12,puVar11);
    if (lVar10 == 0) {
      local_b8 = FUN_1402e2c84(0x18);
      lVar15 = uStack_a0;
      if (uStack_a0 != 0) {
        LOCK();
        *(int *)(uStack_a0 + 8) = *(int *)(uStack_a0 + 8) + 1;
        UNLOCK();
      }
      local_78 = (undefined4)local_a8;
      uStack_74 = local_a8._4_4_;
      uStack_70 = (undefined4)uStack_a0;
      uStack_6c = uStack_a0._4_4_;
      lVar10 = FUN_1402987c0(local_b8,&local_78);
    }
    else {
      lVar15 = uStack_a0;
    }
    if (lVar15 != 0) {
      FUN_140008510(lVar15);
    }
  }
  else {
    lVar10 = 0;
  }
  return lVar10;
}



// ===== string at 1405cb780 : CUrlData::Validate
// ---- function FUN_140287330 @ 140287330 (xref 1402873a7)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001402873bf) */
/* WARNING: Removing unreachable block (ram,0x0001402873d3) */

undefined8 * FUN_140287330(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  LPWSTR pWVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  wchar_t *pwVar20;
  undefined1 auStackY_2f8 [32];
  longlong local_2c0;
  undefined4 local_2b8;
  LPWSTR local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  longlong lStack_280;
  ulonglong local_278;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  longlong lStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 *local_230;
  undefined8 local_228;
  longlong local_220;
  undefined1 local_218 [8];
  longlong local_210;
  undefined1 local_208 [24];
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  char local_1d8;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined8 local_180;
  ulonglong local_178;
  undefined1 *local_168;
  undefined1 local_160 [264];
  ulonglong local_58;
  
  local_238 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_2f8;
  puVar14 = (undefined8 *)0x0;
  local_2b8 = 0;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar16 = (LPWSTR)(puVar10 + 3);
  local_2b0 = pWVar16;
  iVar8 = MultiByteToWideChar(0,0,"CUrlData::Validate",-1,(LPWSTR)0x0,0);
  iVar8 = iVar8 + -1;
  if (iVar8 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar16 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar16 = (LPWSTR)(lVar9 + 0x18);
        local_2b0 = pWVar16;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar8 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_2b0,iVar8);
      pWVar16 = local_2b0;
    }
    MultiByteToWideChar(0,0,"CUrlData::Validate",-1,pWVar16,iVar8);
    if (*(int *)(pWVar16 + -6) < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar16 + -8) = iVar8;
    pWVar16[iVar8] = L'\0';
  }
  pWVar1 = pWVar16 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_2a8 = lVar9 + 0x18;
  local_2b8 = 1;
  iVar8 = *(int *)(pWVar16 + -8);
  iVar19 = iVar8 + 2;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar19 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_2a8,iVar19);
  }
  lVar9 = local_2a8;
  FUN_140008b60(local_2a8,(longlong)iVar8,pWVar16,iVar8);
  puVar3 = (undefined4 *)(lVar9 + (longlong)iVar8 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar19;
  *(undefined2 *)(lVar9 + 4 + (longlong)iVar8 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar13 == 0)) {
    uVar11 = FUN_140009200();
    lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_2a0 = lVar13 + 0x18;
  local_2b8 = 3;
  iVar8 = *(int *)(lVar9 + -0x10);
  if (iVar8 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar13 + 0xc) - (iVar8 + 10) | 1U - *(int *)(lVar13 + 0x10)) < 0) {
    FUN_140008ae0(&local_2a0);
  }
  lVar13 = local_2a0;
  FUN_140008b60(local_2a0,(longlong)iVar8,lVar9,iVar8);
  uVar7 = u_Trying_Url_1405cb798._12_4_;
  uVar6 = u_Trying_Url_1405cb798._8_4_;
  uVar5 = u_Trying_Url_1405cb798._4_4_;
  pwVar20 = (wchar_t *)(lVar13 + (longlong)iVar8 * 2);
  if (pwVar20 == (wchar_t *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar20 = u_Trying_Url_1405cb798._0_4_;
    *(undefined4 *)(pwVar20 + 2) = uVar5;
    *(undefined4 *)(pwVar20 + 4) = uVar6;
    *(undefined4 *)(pwVar20 + 6) = uVar7;
    *(undefined4 *)(pwVar20 + 8) = u_Trying_Url_1405cb798._16_4_;
  }
  if (*(int *)(lVar13 + -0xc) < iVar8 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar13 + -0x10) = iVar8 + 10;
  *(undefined2 *)(lVar13 + 0x14 + (longlong)iVar8 * 2) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,lVar13);
  local_2b8 = 1;
  LOCK();
  piVar2 = (int *)(lVar13 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar16 = pWVar16 + -4;
  iVar8 = *(int *)pWVar16;
  *(int *)pWVar16 = *(int *)pWVar16 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_298 = 0;
  local_288 = 0;
  lStack_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_290 = param_2;
  if (param_2 != 0) {
    uVar18 = *(ulonglong *)(param_2 + 0x20);
    if (uVar18 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(ulonglong *)(param_2 + 0x30);
      if (uVar18 < *(ulonglong *)(param_2 + 0x30)) {
        uVar17 = uVar18;
      }
    }
    local_270 = uVar17;
    puVar10 = (undefined8 *)FUN_14026d460(param_2,local_218,0,1);
    uVar11 = *puVar10;
    lStack_280 = puVar10[1];
    *puVar10 = 0;
    puVar10[1] = 0;
    local_288 = uVar11;
    local_228 = uVar11;
    local_220 = lStack_280;
    if (local_210 != 0) {
      FUN_140008510();
    }
    local_298 = uVar11;
    local_278 = uVar17;
  }
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  lStack_250 = 0;
  local_240 = 0;
  if (param_2 == 0) {
    local_248 = 0;
  }
  else {
    local_248 = *(undefined8 *)(param_2 + 0x20);
  }
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = FUN_140287d20(&local_1c0);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_180 = 0;
  local_178 = 0xf;
  local_190 = 0;
  FUN_140287f40(local_208,&local_298,&local_268,local_1c8);
  if (local_1d8 != '\0') {
    puVar15 = &local_190;
    if (0xf < local_178) {
      puVar15 = (undefined1 *)CONCAT71(uStack_18f,local_190);
    }
    local_168 = local_160;
    FUN_140040580(&local_168,puVar15,0);
    FUN_140008d70(&local_2c0,local_168);
    if (local_168 != local_160) {
      _free_base();
    }
    pwVar20 = L".url";
    uVar18 = (longlong)L".url" - local_2c0 >> 1;
    uVar4 = *(uint *)(local_2c0 + -0x10);
    iVar8 = FUN_14033bf54(L".url",4);
    if (0x7fffffff - iVar8 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    iVar19 = uVar4 + iVar8;
    if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(local_2c0 + -0xc) - iVar19 | 1U - *(int *)(local_2c0 + -8)) < 0) {
      FUN_140008ae0(&local_2c0,iVar19);
    }
    if (uVar18 <= uVar4) {
      pwVar20 = (wchar_t *)(local_2c0 + uVar18 * 2);
    }
    FUN_140008b60(local_2c0 + (ulonglong)uVar4 * 2,(longlong)iVar8,pwVar20,iVar8);
    if (*(int *)(local_2c0 + -0xc) < iVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(local_2c0 + -0x10) = iVar19;
    *(undefined2 *)(local_2c0 + (longlong)iVar19 * 2) = 0;
    puVar14 = (undefined8 *)FUN_1402e2c84(0x28);
    *puVar14 = CRecognisedDataOneFileImpl::vftable;
    puVar14[1] = param_3;
    local_230 = puVar14;
    FUN_140008d70(puVar14 + 2,local_2c0);
    puVar14[3] = local_1e8 - local_1e0;
    *(undefined1 *)(puVar14 + 4) = 1;
    LOCK();
    piVar2 = (int *)(local_2c0 + -8);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  if (local_1f0 != 0) {
    FUN_140008510();
  }
  FUN_140019060(&local_190);
  FUN_140287b90(local_1c8);
  if (lStack_250 != 0) {
    FUN_140008510();
  }
  if (lStack_280 != 0) {
    FUN_140008510();
  }
  return puVar14;
}


// ---- function FUN_140287330 @ 140287330 (xref 1402873fa)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001402873bf) */
/* WARNING: Removing unreachable block (ram,0x0001402873d3) */

undefined8 * FUN_140287330(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  LPWSTR pWVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  wchar_t *pwVar20;
  undefined1 auStackY_2f8 [32];
  longlong local_2c0;
  undefined4 local_2b8;
  LPWSTR local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  longlong lStack_280;
  ulonglong local_278;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  longlong lStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 *local_230;
  undefined8 local_228;
  longlong local_220;
  undefined1 local_218 [8];
  longlong local_210;
  undefined1 local_208 [24];
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  char local_1d8;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined8 local_180;
  ulonglong local_178;
  undefined1 *local_168;
  undefined1 local_160 [264];
  ulonglong local_58;
  
  local_238 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_2f8;
  puVar14 = (undefined8 *)0x0;
  local_2b8 = 0;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar16 = (LPWSTR)(puVar10 + 3);
  local_2b0 = pWVar16;
  iVar8 = MultiByteToWideChar(0,0,"CUrlData::Validate",-1,(LPWSTR)0x0,0);
  iVar8 = iVar8 + -1;
  if (iVar8 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar16 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar16 = (LPWSTR)(lVar9 + 0x18);
        local_2b0 = pWVar16;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar8 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_2b0,iVar8);
      pWVar16 = local_2b0;
    }
    MultiByteToWideChar(0,0,"CUrlData::Validate",-1,pWVar16,iVar8);
    if (*(int *)(pWVar16 + -6) < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar16 + -8) = iVar8;
    pWVar16[iVar8] = L'\0';
  }
  pWVar1 = pWVar16 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_2a8 = lVar9 + 0x18;
  local_2b8 = 1;
  iVar8 = *(int *)(pWVar16 + -8);
  iVar19 = iVar8 + 2;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar19 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_2a8,iVar19);
  }
  lVar9 = local_2a8;
  FUN_140008b60(local_2a8,(longlong)iVar8,pWVar16,iVar8);
  puVar3 = (undefined4 *)(lVar9 + (longlong)iVar8 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar19;
  *(undefined2 *)(lVar9 + 4 + (longlong)iVar8 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar13 == 0)) {
    uVar11 = FUN_140009200();
    lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_2a0 = lVar13 + 0x18;
  local_2b8 = 3;
  iVar8 = *(int *)(lVar9 + -0x10);
  if (iVar8 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar13 + 0xc) - (iVar8 + 10) | 1U - *(int *)(lVar13 + 0x10)) < 0) {
    FUN_140008ae0(&local_2a0);
  }
  lVar13 = local_2a0;
  FUN_140008b60(local_2a0,(longlong)iVar8,lVar9,iVar8);
  uVar7 = u_Trying_Url_1405cb798._12_4_;
  uVar6 = u_Trying_Url_1405cb798._8_4_;
  uVar5 = u_Trying_Url_1405cb798._4_4_;
  pwVar20 = (wchar_t *)(lVar13 + (longlong)iVar8 * 2);
  if (pwVar20 == (wchar_t *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar20 = u_Trying_Url_1405cb798._0_4_;
    *(undefined4 *)(pwVar20 + 2) = uVar5;
    *(undefined4 *)(pwVar20 + 4) = uVar6;
    *(undefined4 *)(pwVar20 + 6) = uVar7;
    *(undefined4 *)(pwVar20 + 8) = u_Trying_Url_1405cb798._16_4_;
  }
  if (*(int *)(lVar13 + -0xc) < iVar8 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar13 + -0x10) = iVar8 + 10;
  *(undefined2 *)(lVar13 + 0x14 + (longlong)iVar8 * 2) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,lVar13);
  local_2b8 = 1;
  LOCK();
  piVar2 = (int *)(lVar13 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar16 = pWVar16 + -4;
  iVar8 = *(int *)pWVar16;
  *(int *)pWVar16 = *(int *)pWVar16 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_298 = 0;
  local_288 = 0;
  lStack_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_290 = param_2;
  if (param_2 != 0) {
    uVar18 = *(ulonglong *)(param_2 + 0x20);
    if (uVar18 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(ulonglong *)(param_2 + 0x30);
      if (uVar18 < *(ulonglong *)(param_2 + 0x30)) {
        uVar17 = uVar18;
      }
    }
    local_270 = uVar17;
    puVar10 = (undefined8 *)FUN_14026d460(param_2,local_218,0,1);
    uVar11 = *puVar10;
    lStack_280 = puVar10[1];
    *puVar10 = 0;
    puVar10[1] = 0;
    local_288 = uVar11;
    local_228 = uVar11;
    local_220 = lStack_280;
    if (local_210 != 0) {
      FUN_140008510();
    }
    local_298 = uVar11;
    local_278 = uVar17;
  }
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  lStack_250 = 0;
  local_240 = 0;
  if (param_2 == 0) {
    local_248 = 0;
  }
  else {
    local_248 = *(undefined8 *)(param_2 + 0x20);
  }
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = FUN_140287d20(&local_1c0);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_180 = 0;
  local_178 = 0xf;
  local_190 = 0;
  FUN_140287f40(local_208,&local_298,&local_268,local_1c8);
  if (local_1d8 != '\0') {
    puVar15 = &local_190;
    if (0xf < local_178) {
      puVar15 = (undefined1 *)CONCAT71(uStack_18f,local_190);
    }
    local_168 = local_160;
    FUN_140040580(&local_168,puVar15,0);
    FUN_140008d70(&local_2c0,local_168);
    if (local_168 != local_160) {
      _free_base();
    }
    pwVar20 = L".url";
    uVar18 = (longlong)L".url" - local_2c0 >> 1;
    uVar4 = *(uint *)(local_2c0 + -0x10);
    iVar8 = FUN_14033bf54(L".url",4);
    if (0x7fffffff - iVar8 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    iVar19 = uVar4 + iVar8;
    if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(local_2c0 + -0xc) - iVar19 | 1U - *(int *)(local_2c0 + -8)) < 0) {
      FUN_140008ae0(&local_2c0,iVar19);
    }
    if (uVar18 <= uVar4) {
      pwVar20 = (wchar_t *)(local_2c0 + uVar18 * 2);
    }
    FUN_140008b60(local_2c0 + (ulonglong)uVar4 * 2,(longlong)iVar8,pwVar20,iVar8);
    if (*(int *)(local_2c0 + -0xc) < iVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(local_2c0 + -0x10) = iVar19;
    *(undefined2 *)(local_2c0 + (longlong)iVar19 * 2) = 0;
    puVar14 = (undefined8 *)FUN_1402e2c84(0x28);
    *puVar14 = CRecognisedDataOneFileImpl::vftable;
    puVar14[1] = param_3;
    local_230 = puVar14;
    FUN_140008d70(puVar14 + 2,local_2c0);
    puVar14[3] = local_1e8 - local_1e0;
    *(undefined1 *)(puVar14 + 4) = 1;
    LOCK();
    piVar2 = (int *)(local_2c0 + -8);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  if (local_1f0 != 0) {
    FUN_140008510();
  }
  FUN_140019060(&local_190);
  FUN_140287b90(local_1c8);
  if (lStack_250 != 0) {
    FUN_140008510();
  }
  if (lStack_280 != 0) {
    FUN_140008510();
  }
  return puVar14;
}


// ---- function FUN_140287330 @ 140287330 (xref 140287439)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001402873bf) */
/* WARNING: Removing unreachable block (ram,0x0001402873d3) */

undefined8 * FUN_140287330(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  LPWSTR pWVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  wchar_t *pwVar20;
  undefined1 auStackY_2f8 [32];
  longlong local_2c0;
  undefined4 local_2b8;
  LPWSTR local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  longlong lStack_280;
  ulonglong local_278;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  longlong lStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 *local_230;
  undefined8 local_228;
  longlong local_220;
  undefined1 local_218 [8];
  longlong local_210;
  undefined1 local_208 [24];
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  char local_1d8;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined8 local_180;
  ulonglong local_178;
  undefined1 *local_168;
  undefined1 local_160 [264];
  ulonglong local_58;
  
  local_238 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_2f8;
  puVar14 = (undefined8 *)0x0;
  local_2b8 = 0;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar16 = (LPWSTR)(puVar10 + 3);
  local_2b0 = pWVar16;
  iVar8 = MultiByteToWideChar(0,0,"CUrlData::Validate",-1,(LPWSTR)0x0,0);
  iVar8 = iVar8 + -1;
  if (iVar8 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar16 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar16 = (LPWSTR)(lVar9 + 0x18);
        local_2b0 = pWVar16;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar8 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_2b0,iVar8);
      pWVar16 = local_2b0;
    }
    MultiByteToWideChar(0,0,"CUrlData::Validate",-1,pWVar16,iVar8);
    if (*(int *)(pWVar16 + -6) < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar16 + -8) = iVar8;
    pWVar16[iVar8] = L'\0';
  }
  pWVar1 = pWVar16 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_2a8 = lVar9 + 0x18;
  local_2b8 = 1;
  iVar8 = *(int *)(pWVar16 + -8);
  iVar19 = iVar8 + 2;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar19 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_2a8,iVar19);
  }
  lVar9 = local_2a8;
  FUN_140008b60(local_2a8,(longlong)iVar8,pWVar16,iVar8);
  puVar3 = (undefined4 *)(lVar9 + (longlong)iVar8 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar19;
  *(undefined2 *)(lVar9 + 4 + (longlong)iVar8 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar13 == 0)) {
    uVar11 = FUN_140009200();
    lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar13 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_2a0 = lVar13 + 0x18;
  local_2b8 = 3;
  iVar8 = *(int *)(lVar9 + -0x10);
  if (iVar8 + 10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar13 + 0xc) - (iVar8 + 10) | 1U - *(int *)(lVar13 + 0x10)) < 0) {
    FUN_140008ae0(&local_2a0);
  }
  lVar13 = local_2a0;
  FUN_140008b60(local_2a0,(longlong)iVar8,lVar9,iVar8);
  uVar7 = u_Trying_Url_1405cb798._12_4_;
  uVar6 = u_Trying_Url_1405cb798._8_4_;
  uVar5 = u_Trying_Url_1405cb798._4_4_;
  pwVar20 = (wchar_t *)(lVar13 + (longlong)iVar8 * 2);
  if (pwVar20 == (wchar_t *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar20 = u_Trying_Url_1405cb798._0_4_;
    *(undefined4 *)(pwVar20 + 2) = uVar5;
    *(undefined4 *)(pwVar20 + 4) = uVar6;
    *(undefined4 *)(pwVar20 + 6) = uVar7;
    *(undefined4 *)(pwVar20 + 8) = u_Trying_Url_1405cb798._16_4_;
  }
  if (*(int *)(lVar13 + -0xc) < iVar8 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar13 + -0x10) = iVar8 + 10;
  *(undefined2 *)(lVar13 + 0x14 + (longlong)iVar8 * 2) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,lVar13);
  local_2b8 = 1;
  LOCK();
  piVar2 = (int *)(lVar13 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar16 = pWVar16 + -4;
  iVar8 = *(int *)pWVar16;
  *(int *)pWVar16 = *(int *)pWVar16 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_298 = 0;
  local_288 = 0;
  lStack_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_290 = param_2;
  if (param_2 != 0) {
    uVar18 = *(ulonglong *)(param_2 + 0x20);
    if (uVar18 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(ulonglong *)(param_2 + 0x30);
      if (uVar18 < *(ulonglong *)(param_2 + 0x30)) {
        uVar17 = uVar18;
      }
    }
    local_270 = uVar17;
    puVar10 = (undefined8 *)FUN_14026d460(param_2,local_218,0,1);
    uVar11 = *puVar10;
    lStack_280 = puVar10[1];
    *puVar10 = 0;
    puVar10[1] = 0;
    local_288 = uVar11;
    local_228 = uVar11;
    local_220 = lStack_280;
    if (local_210 != 0) {
      FUN_140008510();
    }
    local_298 = uVar11;
    local_278 = uVar17;
  }
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  lStack_250 = 0;
  local_240 = 0;
  if (param_2 == 0) {
    local_248 = 0;
  }
  else {
    local_248 = *(undefined8 *)(param_2 + 0x20);
  }
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = FUN_140287d20(&local_1c0);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_180 = 0;
  local_178 = 0xf;
  local_190 = 0;
  FUN_140287f40(local_208,&local_298,&local_268,local_1c8);
  if (local_1d8 != '\0') {
    puVar15 = &local_190;
    if (0xf < local_178) {
      puVar15 = (undefined1 *)CONCAT71(uStack_18f,local_190);
    }
    local_168 = local_160;
    FUN_140040580(&local_168,puVar15,0);
    FUN_140008d70(&local_2c0,local_168);
    if (local_168 != local_160) {
      _free_base();
    }
    pwVar20 = L".url";
    uVar18 = (longlong)L".url" - local_2c0 >> 1;
    uVar4 = *(uint *)(local_2c0 + -0x10);
    iVar8 = FUN_14033bf54(L".url",4);
    if (0x7fffffff - iVar8 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    iVar19 = uVar4 + iVar8;
    if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(local_2c0 + -0xc) - iVar19 | 1U - *(int *)(local_2c0 + -8)) < 0) {
      FUN_140008ae0(&local_2c0,iVar19);
    }
    if (uVar18 <= uVar4) {
      pwVar20 = (wchar_t *)(local_2c0 + uVar18 * 2);
    }
    FUN_140008b60(local_2c0 + (ulonglong)uVar4 * 2,(longlong)iVar8,pwVar20,iVar8);
    if (*(int *)(local_2c0 + -0xc) < iVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(local_2c0 + -0x10) = iVar19;
    *(undefined2 *)(local_2c0 + (longlong)iVar19 * 2) = 0;
    puVar14 = (undefined8 *)FUN_1402e2c84(0x28);
    *puVar14 = CRecognisedDataOneFileImpl::vftable;
    puVar14[1] = param_3;
    local_230 = puVar14;
    FUN_140008d70(puVar14 + 2,local_2c0);
    puVar14[3] = local_1e8 - local_1e0;
    *(undefined1 *)(puVar14 + 4) = 1;
    LOCK();
    piVar2 = (int *)(local_2c0 + -8);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
  }
  if (local_1f0 != 0) {
    FUN_140008510();
  }
  FUN_140019060(&local_190);
  FUN_140287b90(local_1c8);
  if (lStack_250 != 0) {
    FUN_140008510();
  }
  if (lStack_280 != 0) {
    FUN_140008510();
  }
  return puVar14;
}



// ===== string at 1405cb828 : CPdfData::Validate
// ---- function FUN_14028c030 @ 14028c030 (xref 14028c0b5)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014028c0c9) */
/* WARNING: Removing unreachable block (ram,0x00014028c0dd) */

longlong FUN_14028c030(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  LPWSTR pWVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStackY_f8 [32];
  LPWSTR local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  ulonglong local_58;
  
  local_68 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_f8;
  local_b8 = param_2;
  local_88 = (undefined8 *)param_4;
  local_80 = param_3;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar14 = (LPWSTR)(puVar10 + 3);
  local_c0 = pWVar14;
  iVar8 = MultiByteToWideChar(0,0,"CPdfData::Validate",-1,(LPWSTR)0x0,0);
  iVar8 = iVar8 + -1;
  if (iVar8 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar14 = (LPWSTR)(lVar9 + 0x18);
        local_c0 = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar8 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_c0,iVar8);
      pWVar14 = local_c0;
    }
    MultiByteToWideChar(0,0,"CPdfData::Validate",-1,pWVar14,iVar8);
    if (*(int *)(pWVar14 + -6) < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar8;
    pWVar14[iVar8] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_98 = lVar9 + 0x18;
  iVar8 = *(int *)(pWVar14 + -8);
  lVar15 = (longlong)iVar8;
  iVar16 = iVar8 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar16 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_98,iVar16);
  }
  lVar9 = local_98;
  FUN_140008b60(local_98,lVar15,pWVar14,iVar8);
  puVar3 = (undefined4 *)(lVar9 + lVar15 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar16;
  *(undefined2 *)(lVar9 + 4 + lVar15 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar11 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_90 = lVar15 + 0x18;
  iVar8 = *(int *)(lVar9 + -0x10);
  iVar16 = iVar8 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - iVar16 | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_90,iVar16);
  }
  lVar15 = local_90;
  FUN_140008b60(local_90,(longlong)iVar8,lVar9,iVar8);
  uVar7 = u_Trying_Pdf_1405cb800._12_4_;
  uVar6 = u_Trying_Pdf_1405cb800._8_4_;
  uVar5 = u_Trying_Pdf_1405cb800._4_4_;
  pwVar4 = (wchar_t *)(lVar15 + (longlong)iVar8 * 2);
  if (pwVar4 == (wchar_t *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar4 = u_Trying_Pdf_1405cb800._0_4_;
    *(undefined4 *)(pwVar4 + 2) = uVar5;
    *(undefined4 *)(pwVar4 + 4) = uVar6;
    *(undefined4 *)(pwVar4 + 6) = uVar7;
    *(undefined4 *)(pwVar4 + 8) = u_Trying_Pdf_1405cb800._16_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar16;
  *(undefined2 *)(lVar15 + 0x14 + (longlong)iVar8 * 2) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,lVar15);
  LOCK();
  piVar2 = (int *)(lVar15 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar8 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar10 = local_88;
  local_60 = DAT_1405cb818;
  local_5c = DAT_1405cb81c;
  iVar8 = strncmp((char *)&local_60,*(char **)((longlong)local_88 + 8),5);
  if (iVar8 == 0) {
    puVar13 = (undefined8 *)FUN_1402e2c84(0xa8);
    *puVar13 = CPdfEndDataType::vftable;
    local_88 = puVar13;
    FUN_1403329a0(puVar13 + 1,0,0x98);
    uVar11 = local_80;
    *(undefined1 *)(puVar13 + 1) = 1;
    *(undefined2 *)((longlong)puVar13 + 0x11) = 0x101;
    *(undefined2 *)((longlong)puVar13 + 0x14) = 0x101;
    *(undefined1 *)(puVar13 + 5) = 1;
    puVar13[0x14] = local_80;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_14028c670(&local_a8,puVar13);
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_a8,local_b8,uVar11,puVar10);
    if (lVar9 == 0) {
      local_b8 = FUN_1402e2c84(0x18);
      lVar15 = uStack_a0;
      if (uStack_a0 != 0) {
        LOCK();
        *(int *)(uStack_a0 + 8) = *(int *)(uStack_a0 + 8) + 1;
        UNLOCK();
      }
      local_78 = (undefined4)local_a8;
      uStack_74 = local_a8._4_4_;
      uStack_70 = (undefined4)uStack_a0;
      uStack_6c = uStack_a0._4_4_;
      lVar9 = FUN_1402987c0(local_b8,&local_78);
    }
    else {
      lVar15 = uStack_a0;
    }
    if (lVar15 != 0) {
      FUN_140008510(lVar15);
    }
  }
  else {
    lVar9 = 0;
  }
  return lVar9;
}


// ---- function FUN_14028c030 @ 14028c030 (xref 14028c101)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014028c0c9) */
/* WARNING: Removing unreachable block (ram,0x00014028c0dd) */

longlong FUN_14028c030(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  LPWSTR pWVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStackY_f8 [32];
  LPWSTR local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  ulonglong local_58;
  
  local_68 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_f8;
  local_b8 = param_2;
  local_88 = (undefined8 *)param_4;
  local_80 = param_3;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar14 = (LPWSTR)(puVar10 + 3);
  local_c0 = pWVar14;
  iVar8 = MultiByteToWideChar(0,0,"CPdfData::Validate",-1,(LPWSTR)0x0,0);
  iVar8 = iVar8 + -1;
  if (iVar8 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar14 = (LPWSTR)(lVar9 + 0x18);
        local_c0 = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar8 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_c0,iVar8);
      pWVar14 = local_c0;
    }
    MultiByteToWideChar(0,0,"CPdfData::Validate",-1,pWVar14,iVar8);
    if (*(int *)(pWVar14 + -6) < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar8;
    pWVar14[iVar8] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_98 = lVar9 + 0x18;
  iVar8 = *(int *)(pWVar14 + -8);
  lVar15 = (longlong)iVar8;
  iVar16 = iVar8 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar16 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_98,iVar16);
  }
  lVar9 = local_98;
  FUN_140008b60(local_98,lVar15,pWVar14,iVar8);
  puVar3 = (undefined4 *)(lVar9 + lVar15 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar16;
  *(undefined2 *)(lVar9 + 4 + lVar15 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar11 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_90 = lVar15 + 0x18;
  iVar8 = *(int *)(lVar9 + -0x10);
  iVar16 = iVar8 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - iVar16 | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_90,iVar16);
  }
  lVar15 = local_90;
  FUN_140008b60(local_90,(longlong)iVar8,lVar9,iVar8);
  uVar7 = u_Trying_Pdf_1405cb800._12_4_;
  uVar6 = u_Trying_Pdf_1405cb800._8_4_;
  uVar5 = u_Trying_Pdf_1405cb800._4_4_;
  pwVar4 = (wchar_t *)(lVar15 + (longlong)iVar8 * 2);
  if (pwVar4 == (wchar_t *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar4 = u_Trying_Pdf_1405cb800._0_4_;
    *(undefined4 *)(pwVar4 + 2) = uVar5;
    *(undefined4 *)(pwVar4 + 4) = uVar6;
    *(undefined4 *)(pwVar4 + 6) = uVar7;
    *(undefined4 *)(pwVar4 + 8) = u_Trying_Pdf_1405cb800._16_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar16;
  *(undefined2 *)(lVar15 + 0x14 + (longlong)iVar8 * 2) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,lVar15);
  LOCK();
  piVar2 = (int *)(lVar15 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar8 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar10 = local_88;
  local_60 = DAT_1405cb818;
  local_5c = DAT_1405cb81c;
  iVar8 = strncmp((char *)&local_60,*(char **)((longlong)local_88 + 8),5);
  if (iVar8 == 0) {
    puVar13 = (undefined8 *)FUN_1402e2c84(0xa8);
    *puVar13 = CPdfEndDataType::vftable;
    local_88 = puVar13;
    FUN_1403329a0(puVar13 + 1,0,0x98);
    uVar11 = local_80;
    *(undefined1 *)(puVar13 + 1) = 1;
    *(undefined2 *)((longlong)puVar13 + 0x11) = 0x101;
    *(undefined2 *)((longlong)puVar13 + 0x14) = 0x101;
    *(undefined1 *)(puVar13 + 5) = 1;
    puVar13[0x14] = local_80;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_14028c670(&local_a8,puVar13);
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_a8,local_b8,uVar11,puVar10);
    if (lVar9 == 0) {
      local_b8 = FUN_1402e2c84(0x18);
      lVar15 = uStack_a0;
      if (uStack_a0 != 0) {
        LOCK();
        *(int *)(uStack_a0 + 8) = *(int *)(uStack_a0 + 8) + 1;
        UNLOCK();
      }
      local_78 = (undefined4)local_a8;
      uStack_74 = local_a8._4_4_;
      uStack_70 = (undefined4)uStack_a0;
      uStack_6c = uStack_a0._4_4_;
      lVar9 = FUN_1402987c0(local_b8,&local_78);
    }
    else {
      lVar15 = uStack_a0;
    }
    if (lVar15 != 0) {
      FUN_140008510(lVar15);
    }
  }
  else {
    lVar9 = 0;
  }
  return lVar9;
}


// ---- function FUN_14028c030 @ 14028c030 (xref 14028c141)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014028c0c9) */
/* WARNING: Removing unreachable block (ram,0x00014028c0dd) */

longlong FUN_14028c030(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  LPWSTR pWVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStackY_f8 [32];
  LPWSTR local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  ulonglong local_58;
  
  local_68 = 0xfffffffffffffffe;
  local_58 = DAT_1406f60c0 ^ (ulonglong)auStackY_f8;
  local_b8 = param_2;
  local_88 = (undefined8 *)param_4;
  local_80 = param_3;
  lVar9 = FUN_140009200();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar10 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar9);
  pWVar14 = (LPWSTR)(puVar10 + 3);
  local_c0 = pWVar14;
  iVar8 = MultiByteToWideChar(0,0,"CPdfData::Validate",-1,(LPWSTR)0x0,0);
  iVar8 = iVar8 + -1;
  if (iVar8 < 1) {
    uVar11 = *puVar10;
    if (*(int *)(puVar10 + 1) != 0) {
      if (*(int *)(puVar10 + 2) < 0) {
        if (*(int *)((longlong)puVar10 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar10 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar10 + 2);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
        pWVar14 = (LPWSTR)(lVar9 + 0x18);
        local_c0 = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar10 + 0xc) - iVar8 | 1U - *(int *)(puVar10 + 2)) < 0) {
      FUN_140008ae0(&local_c0,iVar8);
      pWVar14 = local_c0;
    }
    MultiByteToWideChar(0,0,"CPdfData::Validate",-1,pWVar14,iVar8);
    if (*(int *)(pWVar14 + -6) < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar8;
    pWVar14[iVar8] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar9 == 0)) {
    uVar11 = FUN_140009200();
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_98 = lVar9 + 0x18;
  iVar8 = *(int *)(pWVar14 + -8);
  lVar15 = (longlong)iVar8;
  iVar16 = iVar8 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar9 + 0xc) - iVar16 | 1U - *(int *)(lVar9 + 0x10)) < 0) {
    FUN_140008ae0(&local_98,iVar16);
  }
  lVar9 = local_98;
  FUN_140008b60(local_98,lVar15,pWVar14,iVar8);
  puVar3 = (undefined4 *)(lVar9 + lVar15 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar9 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar9 + -0x10) = iVar16;
  *(undefined2 *)(lVar9 + 4 + lVar15 * 2) = 0;
  if ((*(longlong *)(lVar9 + -0x18) == 0) ||
     (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar11 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar11);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_90 = lVar15 + 0x18;
  iVar8 = *(int *)(lVar9 + -0x10);
  iVar16 = iVar8 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - iVar16 | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_90,iVar16);
  }
  lVar15 = local_90;
  FUN_140008b60(local_90,(longlong)iVar8,lVar9,iVar8);
  uVar7 = u_Trying_Pdf_1405cb800._12_4_;
  uVar6 = u_Trying_Pdf_1405cb800._8_4_;
  uVar5 = u_Trying_Pdf_1405cb800._4_4_;
  pwVar4 = (wchar_t *)(lVar15 + (longlong)iVar8 * 2);
  if (pwVar4 == (wchar_t *)0x0) {
    puVar12 = __doserrno();
    *puVar12 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar4 = u_Trying_Pdf_1405cb800._0_4_;
    *(undefined4 *)(pwVar4 + 2) = uVar5;
    *(undefined4 *)(pwVar4 + 4) = uVar6;
    *(undefined4 *)(pwVar4 + 6) = uVar7;
    *(undefined4 *)(pwVar4 + 8) = u_Trying_Pdf_1405cb800._16_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar16;
  *(undefined2 *)(lVar15 + 0x14 + (longlong)iVar8 * 2) = 0;
  uVar11 = FUN_140040170();
  FUN_140041bc0(uVar11,700,lVar15);
  LOCK();
  piVar2 = (int *)(lVar15 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar9 + -8);
  iVar8 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar9 + -0x18),lVar9 + -0x18);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar8 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar8 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  puVar10 = local_88;
  local_60 = DAT_1405cb818;
  local_5c = DAT_1405cb81c;
  iVar8 = strncmp((char *)&local_60,*(char **)((longlong)local_88 + 8),5);
  if (iVar8 == 0) {
    puVar13 = (undefined8 *)FUN_1402e2c84(0xa8);
    *puVar13 = CPdfEndDataType::vftable;
    local_88 = puVar13;
    FUN_1403329a0(puVar13 + 1,0,0x98);
    uVar11 = local_80;
    *(undefined1 *)(puVar13 + 1) = 1;
    *(undefined2 *)((longlong)puVar13 + 0x11) = 0x101;
    *(undefined2 *)((longlong)puVar13 + 0x14) = 0x101;
    *(undefined1 *)(puVar13 + 5) = 1;
    puVar13[0x14] = local_80;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_14028c670(&local_a8,puVar13);
    lVar9 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_a8,local_b8,uVar11,puVar10);
    if (lVar9 == 0) {
      local_b8 = FUN_1402e2c84(0x18);
      lVar15 = uStack_a0;
      if (uStack_a0 != 0) {
        LOCK();
        *(int *)(uStack_a0 + 8) = *(int *)(uStack_a0 + 8) + 1;
        UNLOCK();
      }
      local_78 = (undefined4)local_a8;
      uStack_74 = local_a8._4_4_;
      uStack_70 = (undefined4)uStack_a0;
      uStack_6c = uStack_a0._4_4_;
      lVar9 = FUN_1402987c0(local_b8,&local_78);
    }
    else {
      lVar15 = uStack_a0;
    }
    if (lVar15 != 0) {
      FUN_140008510(lVar15);
    }
  }
  else {
    lVar9 = 0;
  }
  return lVar9;
}



// ===== string at 1405cb878 : CItunesDbDataType::Validate
// ---- function FUN_14028c710 @ 14028c710 (xref 14028c76c)

/* WARNING: Removing unreachable block (ram,0x00014028c781) */
/* WARNING: Removing unreachable block (ram,0x00014028c794) */
/* WARNING: Removing unreachable block (ram,0x00014028cb78) */
/* WARNING: Removing unreachable block (ram,0x00014028cb87) */

undefined8 *
FUN_14028c710(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong *puVar14;
  LPWSTR pWVar15;
  longlong lVar16;
  int iVar17;
  LPWSTR pWVar18;
  int iVar19;
  undefined4 uVar20;
  LPWSTR local_70;
  longlong *local_68;
  undefined8 *local_60 [2];
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  lVar11 = FUN_140009200();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar12 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
  pWVar15 = (LPWSTR)(puVar12 + 3);
  iVar19 = 0;
  pWVar18 = (LPWSTR)0x0;
  local_70 = pWVar15;
  iVar10 = MultiByteToWideChar(0,0,"CItunesDbDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar10 = iVar10 + -1;
  if (iVar10 < 1) {
    uVar13 = *puVar12;
    if (*(int *)(puVar12 + 1) != 0) {
      if (*(int *)(puVar12 + 2) < 0) {
        if (*(int *)((longlong)puVar12 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar12 + 1) = 0;
        *pWVar15 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar12 + 2);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
        pWVar15 = (LPWSTR)(lVar11 + 0x18);
        local_70 = pWVar15;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar12 + 0xc) - iVar10 | 1U - *(int *)(puVar12 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar10);
      pWVar15 = local_70;
    }
    pWVar18 = pWVar15;
    iVar19 = iVar10;
    MultiByteToWideChar(0,0,"CItunesDbDataType::Validate",-1,pWVar15,iVar10);
    if (*(int *)(pWVar15 + -6) < iVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar15 + -8) = iVar10;
    pWVar15[iVar10] = L'\0';
  }
  pWVar2 = pWVar15 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0)) {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = (longlong *)(lVar11 + 0x18);
  uVar20 = 1;
  iVar10 = *(int *)(pWVar15 + -8);
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 2;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar17);
  }
  plVar4 = local_68;
  FUN_140008b60(local_68,lVar16,pWVar15,iVar10,pWVar18,iVar19,uVar20);
  puVar5 = (undefined4 *)((longlong)plVar4 + lVar16 * 2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar5 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar17;
  *(undefined2 *)((longlong)plVar4 + lVar16 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0))
  {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = (undefined8 *)(lVar11 + 0x18);
  uVar20 = 3;
  iVar10 = (int)plVar4[-2];
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 0xf;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar17);
  }
  puVar12 = local_60[0];
  FUN_140008b60(local_60[0],lVar16,plVar4,iVar10,pWVar18,iVar19,uVar20);
  uVar9 = u_Trying_ITunesDB_1405cb840._12_4_;
  uVar8 = u_Trying_ITunesDB_1405cb840._8_4_;
  uVar20 = u_Trying_ITunesDB_1405cb840._4_4_;
  pwVar6 = (wchar_t *)((longlong)puVar12 + lVar16 * 2);
  if (pwVar6 == (wchar_t *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar6 = u_Trying_ITunesDB_1405cb840._0_4_;
    *(undefined4 *)(pwVar6 + 2) = uVar20;
    *(undefined4 *)(pwVar6 + 4) = uVar8;
    *(undefined4 *)(pwVar6 + 6) = uVar9;
    *(undefined8 *)(pwVar6 + 8) = u_Trying_ITunesDB_1405cb840._16_8_;
    *(undefined4 *)(pwVar6 + 0xc) = u_Trying_ITunesDB_1405cb840._24_4_;
    pwVar6[0xe] = u_Trying_ITunesDB_1405cb840[0xe];
  }
  if (*(int *)((longlong)puVar12 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar12 + -2) = iVar17;
  *(undefined2 *)((longlong)puVar12 + lVar16 * 2 + 0x1e) = 0;
  uVar13 = FUN_140040170();
  FUN_140041bc0(uVar13,700,puVar12);
  LOCK();
  piVar1 = (int *)(puVar12 + -1);
  iVar19 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar11 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar11 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar15 = pWVar15 + -4;
  iVar19 = *(int *)pWVar15;
  *(int *)pWVar15 = *(int *)pWVar15 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  local_60[0] = (undefined8 *)**(undefined8 **)(param_4 + 8);
  uVar7 = *(uint *)(*(undefined8 **)(param_4 + 8) + 1);
  if ((int)local_60[0] == 0x6462686d) {
    puVar12 = (undefined8 *)FUN_1402e2c84(0x28);
    *puVar12 = CRecognisedDataOneFileImpl::vftable;
    puVar12[1] = param_3;
    plVar4 = puVar12 + 2;
    local_68 = plVar4;
    local_60[0] = puVar12;
    lVar11 = FUN_140009200();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
    *plVar4 = lVar11 + 0x18;
    FUN_140008c50(plVar4,L"iTunesDB",8);
    puVar12[3] = (ulonglong)uVar7;
    *(undefined1 *)(puVar12 + 4) = 0;
  }
  else {
    puVar12 = (undefined8 *)0x0;
  }
  return puVar12;
}


// ---- function FUN_14028c710 @ 14028c710 (xref 14028c7bb)

/* WARNING: Removing unreachable block (ram,0x00014028c781) */
/* WARNING: Removing unreachable block (ram,0x00014028c794) */
/* WARNING: Removing unreachable block (ram,0x00014028cb78) */
/* WARNING: Removing unreachable block (ram,0x00014028cb87) */

undefined8 *
FUN_14028c710(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong *puVar14;
  LPWSTR pWVar15;
  longlong lVar16;
  int iVar17;
  LPWSTR pWVar18;
  int iVar19;
  undefined4 uVar20;
  LPWSTR local_70;
  longlong *local_68;
  undefined8 *local_60 [2];
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  lVar11 = FUN_140009200();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar12 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
  pWVar15 = (LPWSTR)(puVar12 + 3);
  iVar19 = 0;
  pWVar18 = (LPWSTR)0x0;
  local_70 = pWVar15;
  iVar10 = MultiByteToWideChar(0,0,"CItunesDbDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar10 = iVar10 + -1;
  if (iVar10 < 1) {
    uVar13 = *puVar12;
    if (*(int *)(puVar12 + 1) != 0) {
      if (*(int *)(puVar12 + 2) < 0) {
        if (*(int *)((longlong)puVar12 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar12 + 1) = 0;
        *pWVar15 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar12 + 2);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
        pWVar15 = (LPWSTR)(lVar11 + 0x18);
        local_70 = pWVar15;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar12 + 0xc) - iVar10 | 1U - *(int *)(puVar12 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar10);
      pWVar15 = local_70;
    }
    pWVar18 = pWVar15;
    iVar19 = iVar10;
    MultiByteToWideChar(0,0,"CItunesDbDataType::Validate",-1,pWVar15,iVar10);
    if (*(int *)(pWVar15 + -6) < iVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar15 + -8) = iVar10;
    pWVar15[iVar10] = L'\0';
  }
  pWVar2 = pWVar15 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0)) {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = (longlong *)(lVar11 + 0x18);
  uVar20 = 1;
  iVar10 = *(int *)(pWVar15 + -8);
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 2;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar17);
  }
  plVar4 = local_68;
  FUN_140008b60(local_68,lVar16,pWVar15,iVar10,pWVar18,iVar19,uVar20);
  puVar5 = (undefined4 *)((longlong)plVar4 + lVar16 * 2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar5 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar17;
  *(undefined2 *)((longlong)plVar4 + lVar16 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0))
  {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = (undefined8 *)(lVar11 + 0x18);
  uVar20 = 3;
  iVar10 = (int)plVar4[-2];
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 0xf;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar17);
  }
  puVar12 = local_60[0];
  FUN_140008b60(local_60[0],lVar16,plVar4,iVar10,pWVar18,iVar19,uVar20);
  uVar9 = u_Trying_ITunesDB_1405cb840._12_4_;
  uVar8 = u_Trying_ITunesDB_1405cb840._8_4_;
  uVar20 = u_Trying_ITunesDB_1405cb840._4_4_;
  pwVar6 = (wchar_t *)((longlong)puVar12 + lVar16 * 2);
  if (pwVar6 == (wchar_t *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar6 = u_Trying_ITunesDB_1405cb840._0_4_;
    *(undefined4 *)(pwVar6 + 2) = uVar20;
    *(undefined4 *)(pwVar6 + 4) = uVar8;
    *(undefined4 *)(pwVar6 + 6) = uVar9;
    *(undefined8 *)(pwVar6 + 8) = u_Trying_ITunesDB_1405cb840._16_8_;
    *(undefined4 *)(pwVar6 + 0xc) = u_Trying_ITunesDB_1405cb840._24_4_;
    pwVar6[0xe] = u_Trying_ITunesDB_1405cb840[0xe];
  }
  if (*(int *)((longlong)puVar12 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar12 + -2) = iVar17;
  *(undefined2 *)((longlong)puVar12 + lVar16 * 2 + 0x1e) = 0;
  uVar13 = FUN_140040170();
  FUN_140041bc0(uVar13,700,puVar12);
  LOCK();
  piVar1 = (int *)(puVar12 + -1);
  iVar19 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar11 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar11 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar15 = pWVar15 + -4;
  iVar19 = *(int *)pWVar15;
  *(int *)pWVar15 = *(int *)pWVar15 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  local_60[0] = (undefined8 *)**(undefined8 **)(param_4 + 8);
  uVar7 = *(uint *)(*(undefined8 **)(param_4 + 8) + 1);
  if ((int)local_60[0] == 0x6462686d) {
    puVar12 = (undefined8 *)FUN_1402e2c84(0x28);
    *puVar12 = CRecognisedDataOneFileImpl::vftable;
    puVar12[1] = param_3;
    plVar4 = puVar12 + 2;
    local_68 = plVar4;
    local_60[0] = puVar12;
    lVar11 = FUN_140009200();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
    *plVar4 = lVar11 + 0x18;
    FUN_140008c50(plVar4,L"iTunesDB",8);
    puVar12[3] = (ulonglong)uVar7;
    *(undefined1 *)(puVar12 + 4) = 0;
  }
  else {
    puVar12 = (undefined8 *)0x0;
  }
  return puVar12;
}


// ---- function FUN_14028c710 @ 14028c710 (xref 14028c7fd)

/* WARNING: Removing unreachable block (ram,0x00014028c781) */
/* WARNING: Removing unreachable block (ram,0x00014028c794) */
/* WARNING: Removing unreachable block (ram,0x00014028cb78) */
/* WARNING: Removing unreachable block (ram,0x00014028cb87) */

undefined8 *
FUN_14028c710(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong *puVar14;
  LPWSTR pWVar15;
  longlong lVar16;
  int iVar17;
  LPWSTR pWVar18;
  int iVar19;
  undefined4 uVar20;
  LPWSTR local_70;
  longlong *local_68;
  undefined8 *local_60 [2];
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  lVar11 = FUN_140009200();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar12 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
  pWVar15 = (LPWSTR)(puVar12 + 3);
  iVar19 = 0;
  pWVar18 = (LPWSTR)0x0;
  local_70 = pWVar15;
  iVar10 = MultiByteToWideChar(0,0,"CItunesDbDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar10 = iVar10 + -1;
  if (iVar10 < 1) {
    uVar13 = *puVar12;
    if (*(int *)(puVar12 + 1) != 0) {
      if (*(int *)(puVar12 + 2) < 0) {
        if (*(int *)((longlong)puVar12 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar12 + 1) = 0;
        *pWVar15 = L'\0';
      }
      else {
        LOCK();
        piVar1 = (int *)(puVar12 + 2);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
        pWVar15 = (LPWSTR)(lVar11 + 0x18);
        local_70 = pWVar15;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar12 + 0xc) - iVar10 | 1U - *(int *)(puVar12 + 2)) < 0) {
      FUN_140008ae0(&local_70,iVar10);
      pWVar15 = local_70;
    }
    pWVar18 = pWVar15;
    iVar19 = iVar10;
    MultiByteToWideChar(0,0,"CItunesDbDataType::Validate",-1,pWVar15,iVar10);
    if (*(int *)(pWVar15 + -6) < iVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar15 + -8) = iVar10;
    pWVar15[iVar10] = L'\0';
  }
  pWVar2 = pWVar15 + -0xc;
  if ((*(longlong *)pWVar2 == 0) ||
     (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0)) {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = (longlong *)(lVar11 + 0x18);
  uVar20 = 1;
  iVar10 = *(int *)(pWVar15 + -8);
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 2;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar17);
  }
  plVar4 = local_68;
  FUN_140008b60(local_68,lVar16,pWVar15,iVar10,pWVar18,iVar19,uVar20);
  puVar5 = (undefined4 *)((longlong)plVar4 + lVar16 * 2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar5 = DAT_1405a5138;
  }
  if (*(int *)((longlong)plVar4 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(plVar4 + -2) = iVar17;
  *(undefined2 *)((longlong)plVar4 + lVar16 * 2 + 4) = 0;
  if ((plVar4[-3] == 0) || (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0))
  {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_60[0] = (undefined8 *)(lVar11 + 0x18);
  uVar20 = 3;
  iVar10 = (int)plVar4[-2];
  lVar16 = (longlong)iVar10;
  iVar17 = iVar10 + 0xf;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar17 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(local_60,iVar17);
  }
  puVar12 = local_60[0];
  FUN_140008b60(local_60[0],lVar16,plVar4,iVar10,pWVar18,iVar19,uVar20);
  uVar9 = u_Trying_ITunesDB_1405cb840._12_4_;
  uVar8 = u_Trying_ITunesDB_1405cb840._8_4_;
  uVar20 = u_Trying_ITunesDB_1405cb840._4_4_;
  pwVar6 = (wchar_t *)((longlong)puVar12 + lVar16 * 2);
  if (pwVar6 == (wchar_t *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar6 = u_Trying_ITunesDB_1405cb840._0_4_;
    *(undefined4 *)(pwVar6 + 2) = uVar20;
    *(undefined4 *)(pwVar6 + 4) = uVar8;
    *(undefined4 *)(pwVar6 + 6) = uVar9;
    *(undefined8 *)(pwVar6 + 8) = u_Trying_ITunesDB_1405cb840._16_8_;
    *(undefined4 *)(pwVar6 + 0xc) = u_Trying_ITunesDB_1405cb840._24_4_;
    pwVar6[0xe] = u_Trying_ITunesDB_1405cb840[0xe];
  }
  if (*(int *)((longlong)puVar12 + -0xc) < iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(puVar12 + -2) = iVar17;
  *(undefined2 *)((longlong)puVar12 + lVar16 * 2 + 0x1e) = 0;
  uVar13 = FUN_140040170();
  FUN_140041bc0(uVar13,700,puVar12);
  LOCK();
  piVar1 = (int *)(puVar12 + -1);
  iVar19 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  plVar3 = plVar4 + -1;
  lVar11 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar11 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
  }
  LOCK();
  pWVar15 = pWVar15 + -4;
  iVar19 = *(int *)pWVar15;
  *(int *)pWVar15 = *(int *)pWVar15 + -1;
  UNLOCK();
  if (iVar19 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
  }
  local_60[0] = (undefined8 *)**(undefined8 **)(param_4 + 8);
  uVar7 = *(uint *)(*(undefined8 **)(param_4 + 8) + 1);
  if ((int)local_60[0] == 0x6462686d) {
    puVar12 = (undefined8 *)FUN_1402e2c84(0x28);
    *puVar12 = CRecognisedDataOneFileImpl::vftable;
    puVar12[1] = param_3;
    plVar4 = puVar12 + 2;
    local_68 = plVar4;
    local_60[0] = puVar12;
    lVar11 = FUN_140009200();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
    *plVar4 = lVar11 + 0x18;
    FUN_140008c50(plVar4,L"iTunesDB",8);
    puVar12[3] = (ulonglong)uVar7;
    *(undefined1 *)(puVar12 + 4) = 0;
  }
  else {
    puVar12 = (undefined8 *)0x0;
  }
  return puVar12;
}



// ===== string at 1405cb8b8 : CCrwDataType::Validate
// ---- function FUN_14028cc70 @ 14028cc70 (xref 14028cccf)

/* WARNING: Removing unreachable block (ram,0x00014028cce3) */
/* WARNING: Removing unreachable block (ram,0x00014028ccf7) */

longlong FUN_14028cc70(undefined8 param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  uint uVar5;
  short *psVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  LPWSTR pWVar14;
  longlong lVar15;
  int iVar16;
  LPWSTR pWVar17;
  int iVar18;
  undefined4 uVar19;
  LPWSTR local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  lVar10 = FUN_140009200();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar11 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar10);
  pWVar14 = (LPWSTR)(puVar11 + 3);
  iVar18 = 0;
  pWVar17 = (LPWSTR)0x0;
  local_98[0] = pWVar14;
  iVar9 = MultiByteToWideChar(0,0,"CCrwDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar12 = *puVar11;
    if (*(int *)(puVar11 + 1) != 0) {
      if (*(int *)(puVar11 + 2) < 0) {
        if (*(int *)((longlong)puVar11 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar11 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar11 + 2);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
        pWVar14 = (LPWSTR)(lVar10 + 0x18);
        local_98[0] = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar11 + 0xc) - iVar9 | 1U - *(int *)(puVar11 + 2)) < 0) {
      FUN_140008ae0(local_98,iVar9);
      pWVar14 = local_98[0];
    }
    pWVar17 = pWVar14;
    iVar18 = iVar9;
    MultiByteToWideChar(0,0,"CCrwDataType::Validate",-1,pWVar14,iVar9);
    if (*(int *)(pWVar14 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar9;
    pWVar14[iVar9] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar10 == 0)) {
    uVar12 = FUN_140009200();
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_78 = lVar10 + 0x18;
  uVar19 = 1;
  iVar9 = *(int *)(pWVar14 + -8);
  lVar15 = (longlong)iVar9;
  iVar16 = iVar9 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar10 + 0xc) - iVar16 | 1U - *(int *)(lVar10 + 0x10)) < 0) {
    FUN_140008ae0(&local_78,iVar16);
  }
  lVar10 = local_78;
  FUN_140008b60(local_78,lVar15,pWVar14,iVar9,pWVar17,iVar18,uVar19);
  puVar3 = (undefined4 *)(lVar10 + lVar15 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar10 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar10 + -0x10) = iVar16;
  *(undefined2 *)(lVar10 + 4 + lVar15 * 2) = 0;
  if ((*(longlong *)(lVar10 + -0x18) == 0) ||
     (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar12 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar15 + 0x18;
  uVar19 = 3;
  iVar9 = *(int *)(lVar10 + -0x10);
  iVar16 = iVar9 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - iVar16 | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar16);
  }
  lVar15 = local_70;
  FUN_140008b60(local_70,(longlong)iVar9,lVar10,iVar9,pWVar17,iVar18,uVar19);
  uVar8 = u_Trying_Crw_1405cb898._12_4_;
  uVar7 = u_Trying_Crw_1405cb898._8_4_;
  uVar19 = u_Trying_Crw_1405cb898._4_4_;
  pwVar4 = (wchar_t *)(lVar15 + (longlong)iVar9 * 2);
  if (pwVar4 == (wchar_t *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar4 = u_Trying_Crw_1405cb898._0_4_;
    *(undefined4 *)(pwVar4 + 2) = uVar19;
    *(undefined4 *)(pwVar4 + 4) = uVar7;
    *(undefined4 *)(pwVar4 + 6) = uVar8;
    *(undefined4 *)(pwVar4 + 8) = u_Trying_Crw_1405cb898._16_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar16;
  *(undefined2 *)(lVar15 + 0x14 + (longlong)iVar9 * 2) = 0;
  uVar12 = FUN_140040170();
  FUN_140041bc0(uVar12,700,lVar15);
  LOCK();
  piVar2 = (int *)(lVar15 + -8);
  iVar18 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar10 + -8);
  iVar18 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar10 + -0x18),lVar10 + -0x18);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar18 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  psVar6 = *(short **)(param_4 + 2);
  if ((((*psVar6 == 0x4949) && (*(int *)(psVar6 + 7) == 0x10002)) &&
      (*(int *)(psVar6 + 3) == DAT_1405f0af0)) && (0x19 < *(uint *)(psVar6 + 1))) {
    puVar11 = (undefined8 *)FUN_1402e2c84(0x28);
    uVar19 = *(undefined4 *)(psVar6 + 1);
    uVar5 = *param_4;
    *puVar11 = CCrwEndDataType::vftable;
    puVar11[2] = (ulonglong)uVar5 * param_3;
    *(undefined4 *)(puVar11 + 3) = uVar19;
    puVar11[4] = param_3;
    puVar11[1] = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_14028d270(&local_88,puVar11);
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_88,param_2,param_3,param_4);
    if (lVar10 == 0) {
      uVar12 = FUN_1402e2c84(0x18);
      lVar15 = uStack_80;
      if (uStack_80 != 0) {
        LOCK();
        *(int *)(uStack_80 + 8) = *(int *)(uStack_80 + 8) + 1;
        UNLOCK();
      }
      local_68 = (undefined4)local_88;
      uStack_64 = local_88._4_4_;
      uStack_60 = (undefined4)uStack_80;
      uStack_5c = uStack_80._4_4_;
      lVar10 = FUN_1402987c0(uVar12,&local_68);
    }
    else {
      lVar15 = uStack_80;
    }
    if (lVar15 != 0) {
      FUN_140008510(lVar15);
    }
  }
  else {
    lVar10 = 0;
  }
  return lVar10;
}


// ---- function FUN_14028cc70 @ 14028cc70 (xref 14028cd1b)

/* WARNING: Removing unreachable block (ram,0x00014028cce3) */
/* WARNING: Removing unreachable block (ram,0x00014028ccf7) */

longlong FUN_14028cc70(undefined8 param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  uint uVar5;
  short *psVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  LPWSTR pWVar14;
  longlong lVar15;
  int iVar16;
  LPWSTR pWVar17;
  int iVar18;
  undefined4 uVar19;
  LPWSTR local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  lVar10 = FUN_140009200();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar11 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar10);
  pWVar14 = (LPWSTR)(puVar11 + 3);
  iVar18 = 0;
  pWVar17 = (LPWSTR)0x0;
  local_98[0] = pWVar14;
  iVar9 = MultiByteToWideChar(0,0,"CCrwDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar12 = *puVar11;
    if (*(int *)(puVar11 + 1) != 0) {
      if (*(int *)(puVar11 + 2) < 0) {
        if (*(int *)((longlong)puVar11 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar11 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar11 + 2);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
        pWVar14 = (LPWSTR)(lVar10 + 0x18);
        local_98[0] = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar11 + 0xc) - iVar9 | 1U - *(int *)(puVar11 + 2)) < 0) {
      FUN_140008ae0(local_98,iVar9);
      pWVar14 = local_98[0];
    }
    pWVar17 = pWVar14;
    iVar18 = iVar9;
    MultiByteToWideChar(0,0,"CCrwDataType::Validate",-1,pWVar14,iVar9);
    if (*(int *)(pWVar14 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar9;
    pWVar14[iVar9] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar10 == 0)) {
    uVar12 = FUN_140009200();
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_78 = lVar10 + 0x18;
  uVar19 = 1;
  iVar9 = *(int *)(pWVar14 + -8);
  lVar15 = (longlong)iVar9;
  iVar16 = iVar9 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar10 + 0xc) - iVar16 | 1U - *(int *)(lVar10 + 0x10)) < 0) {
    FUN_140008ae0(&local_78,iVar16);
  }
  lVar10 = local_78;
  FUN_140008b60(local_78,lVar15,pWVar14,iVar9,pWVar17,iVar18,uVar19);
  puVar3 = (undefined4 *)(lVar10 + lVar15 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar10 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar10 + -0x10) = iVar16;
  *(undefined2 *)(lVar10 + 4 + lVar15 * 2) = 0;
  if ((*(longlong *)(lVar10 + -0x18) == 0) ||
     (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar12 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar15 + 0x18;
  uVar19 = 3;
  iVar9 = *(int *)(lVar10 + -0x10);
  iVar16 = iVar9 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - iVar16 | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar16);
  }
  lVar15 = local_70;
  FUN_140008b60(local_70,(longlong)iVar9,lVar10,iVar9,pWVar17,iVar18,uVar19);
  uVar8 = u_Trying_Crw_1405cb898._12_4_;
  uVar7 = u_Trying_Crw_1405cb898._8_4_;
  uVar19 = u_Trying_Crw_1405cb898._4_4_;
  pwVar4 = (wchar_t *)(lVar15 + (longlong)iVar9 * 2);
  if (pwVar4 == (wchar_t *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar4 = u_Trying_Crw_1405cb898._0_4_;
    *(undefined4 *)(pwVar4 + 2) = uVar19;
    *(undefined4 *)(pwVar4 + 4) = uVar7;
    *(undefined4 *)(pwVar4 + 6) = uVar8;
    *(undefined4 *)(pwVar4 + 8) = u_Trying_Crw_1405cb898._16_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar16;
  *(undefined2 *)(lVar15 + 0x14 + (longlong)iVar9 * 2) = 0;
  uVar12 = FUN_140040170();
  FUN_140041bc0(uVar12,700,lVar15);
  LOCK();
  piVar2 = (int *)(lVar15 + -8);
  iVar18 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar10 + -8);
  iVar18 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar10 + -0x18),lVar10 + -0x18);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar18 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  psVar6 = *(short **)(param_4 + 2);
  if ((((*psVar6 == 0x4949) && (*(int *)(psVar6 + 7) == 0x10002)) &&
      (*(int *)(psVar6 + 3) == DAT_1405f0af0)) && (0x19 < *(uint *)(psVar6 + 1))) {
    puVar11 = (undefined8 *)FUN_1402e2c84(0x28);
    uVar19 = *(undefined4 *)(psVar6 + 1);
    uVar5 = *param_4;
    *puVar11 = CCrwEndDataType::vftable;
    puVar11[2] = (ulonglong)uVar5 * param_3;
    *(undefined4 *)(puVar11 + 3) = uVar19;
    puVar11[4] = param_3;
    puVar11[1] = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_14028d270(&local_88,puVar11);
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_88,param_2,param_3,param_4);
    if (lVar10 == 0) {
      uVar12 = FUN_1402e2c84(0x18);
      lVar15 = uStack_80;
      if (uStack_80 != 0) {
        LOCK();
        *(int *)(uStack_80 + 8) = *(int *)(uStack_80 + 8) + 1;
        UNLOCK();
      }
      local_68 = (undefined4)local_88;
      uStack_64 = local_88._4_4_;
      uStack_60 = (undefined4)uStack_80;
      uStack_5c = uStack_80._4_4_;
      lVar10 = FUN_1402987c0(uVar12,&local_68);
    }
    else {
      lVar15 = uStack_80;
    }
    if (lVar15 != 0) {
      FUN_140008510(lVar15);
    }
  }
  else {
    lVar10 = 0;
  }
  return lVar10;
}


// ---- function FUN_14028cc70 @ 14028cc70 (xref 14028cd5b)

/* WARNING: Removing unreachable block (ram,0x00014028cce3) */
/* WARNING: Removing unreachable block (ram,0x00014028ccf7) */

longlong FUN_14028cc70(undefined8 param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  uint uVar5;
  short *psVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  LPWSTR pWVar14;
  longlong lVar15;
  int iVar16;
  LPWSTR pWVar17;
  int iVar18;
  undefined4 uVar19;
  LPWSTR local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  lVar10 = FUN_140009200();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar11 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar10);
  pWVar14 = (LPWSTR)(puVar11 + 3);
  iVar18 = 0;
  pWVar17 = (LPWSTR)0x0;
  local_98[0] = pWVar14;
  iVar9 = MultiByteToWideChar(0,0,"CCrwDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar9 = iVar9 + -1;
  if (iVar9 < 1) {
    uVar12 = *puVar11;
    if (*(int *)(puVar11 + 1) != 0) {
      if (*(int *)(puVar11 + 2) < 0) {
        if (*(int *)((longlong)puVar11 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar11 + 1) = 0;
        *pWVar14 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar11 + 2);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
        pWVar14 = (LPWSTR)(lVar10 + 0x18);
        local_98[0] = pWVar14;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar11 + 0xc) - iVar9 | 1U - *(int *)(puVar11 + 2)) < 0) {
      FUN_140008ae0(local_98,iVar9);
      pWVar14 = local_98[0];
    }
    pWVar17 = pWVar14;
    iVar18 = iVar9;
    MultiByteToWideChar(0,0,"CCrwDataType::Validate",-1,pWVar14,iVar9);
    if (*(int *)(pWVar14 + -6) < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar14 + -8) = iVar9;
    pWVar14[iVar9] = L'\0';
  }
  pWVar1 = pWVar14 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar10 == 0)) {
    uVar12 = FUN_140009200();
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_78 = lVar10 + 0x18;
  uVar19 = 1;
  iVar9 = *(int *)(pWVar14 + -8);
  lVar15 = (longlong)iVar9;
  iVar16 = iVar9 + 2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar10 + 0xc) - iVar16 | 1U - *(int *)(lVar10 + 0x10)) < 0) {
    FUN_140008ae0(&local_78,iVar16);
  }
  lVar10 = local_78;
  FUN_140008b60(local_78,lVar15,pWVar14,iVar9,pWVar17,iVar18,uVar19);
  puVar3 = (undefined4 *)(lVar10 + lVar15 * 2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar3 = DAT_1405a5138;
  }
  if (*(int *)(lVar10 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar10 + -0x10) = iVar16;
  *(undefined2 *)(lVar10 + 4 + lVar15 * 2) = 0;
  if ((*(longlong *)(lVar10 + -0x18) == 0) ||
     (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar12 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar12);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar15 + 0x18;
  uVar19 = 3;
  iVar9 = *(int *)(lVar10 + -0x10);
  iVar16 = iVar9 + 10;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - iVar16 | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar16);
  }
  lVar15 = local_70;
  FUN_140008b60(local_70,(longlong)iVar9,lVar10,iVar9,pWVar17,iVar18,uVar19);
  uVar8 = u_Trying_Crw_1405cb898._12_4_;
  uVar7 = u_Trying_Crw_1405cb898._8_4_;
  uVar19 = u_Trying_Crw_1405cb898._4_4_;
  pwVar4 = (wchar_t *)(lVar15 + (longlong)iVar9 * 2);
  if (pwVar4 == (wchar_t *)0x0) {
    puVar13 = __doserrno();
    *puVar13 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar4 = u_Trying_Crw_1405cb898._0_4_;
    *(undefined4 *)(pwVar4 + 2) = uVar19;
    *(undefined4 *)(pwVar4 + 4) = uVar7;
    *(undefined4 *)(pwVar4 + 6) = uVar8;
    *(undefined4 *)(pwVar4 + 8) = u_Trying_Crw_1405cb898._16_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar16;
  *(undefined2 *)(lVar15 + 0x14 + (longlong)iVar9 * 2) = 0;
  uVar12 = FUN_140040170();
  FUN_140041bc0(uVar12,700,lVar15);
  LOCK();
  piVar2 = (int *)(lVar15 + -8);
  iVar18 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar10 + -8);
  iVar18 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar10 + -0x18),lVar10 + -0x18);
  }
  LOCK();
  pWVar14 = pWVar14 + -4;
  iVar18 = *(int *)pWVar14;
  *(int *)pWVar14 = *(int *)pWVar14 + -1;
  UNLOCK();
  if (iVar18 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  psVar6 = *(short **)(param_4 + 2);
  if ((((*psVar6 == 0x4949) && (*(int *)(psVar6 + 7) == 0x10002)) &&
      (*(int *)(psVar6 + 3) == DAT_1405f0af0)) && (0x19 < *(uint *)(psVar6 + 1))) {
    puVar11 = (undefined8 *)FUN_1402e2c84(0x28);
    uVar19 = *(undefined4 *)(psVar6 + 1);
    uVar5 = *param_4;
    *puVar11 = CCrwEndDataType::vftable;
    puVar11[2] = (ulonglong)uVar5 * param_3;
    *(undefined4 *)(puVar11 + 3) = uVar19;
    puVar11[4] = param_3;
    puVar11[1] = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_14028d270(&local_88,puVar11);
    lVar10 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(local_88,param_2,param_3,param_4);
    if (lVar10 == 0) {
      uVar12 = FUN_1402e2c84(0x18);
      lVar15 = uStack_80;
      if (uStack_80 != 0) {
        LOCK();
        *(int *)(uStack_80 + 8) = *(int *)(uStack_80 + 8) + 1;
        UNLOCK();
      }
      local_68 = (undefined4)local_88;
      uStack_64 = local_88._4_4_;
      uStack_60 = (undefined4)uStack_80;
      uStack_5c = uStack_80._4_4_;
      lVar10 = FUN_1402987c0(uVar12,&local_68);
    }
    else {
      lVar15 = uStack_80;
    }
    if (lVar15 != 0) {
      FUN_140008510(lVar15);
    }
  }
  else {
    lVar10 = 0;
  }
  return lVar10;
}



// ===== string at 1405cbf90 : CRtfEndDataType::Validate
// ---- function FUN_140298020 @ 140298020 (xref 14029807c)

/* WARNING: Removing unreachable block (ram,0x000140298091) */
/* WARNING: Removing unreachable block (ram,0x0001402980a5) */

undefined8 FUN_140298020(longlong param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong *puVar17;
  LPWSTR pWVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  LPWSTR pWVar23;
  undefined4 uVar24;
  LPWSTR local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60 [2];
  undefined8 *local_50;
  
  local_60[1] = 0xfffffffffffffffe;
  lVar14 = FUN_140009200();
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar15 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar14);
  pWVar18 = (LPWSTR)(puVar15 + 3);
  iVar13 = 0;
  pWVar23 = (LPWSTR)0x0;
  local_80 = pWVar18;
  iVar12 = MultiByteToWideChar(0,0,"CRtfEndDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar12 = iVar12 + -1;
  if (iVar12 < 1) {
    uVar16 = *puVar15;
    if (*(int *)(puVar15 + 1) != 0) {
      if (*(int *)(puVar15 + 2) < 0) {
        if (*(int *)((longlong)puVar15 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar15 + 1) = 0;
        *pWVar18 = L'\0';
      }
      else {
        LOCK();
        piVar3 = (int *)(puVar15 + 2);
        iVar12 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar12 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar16);
        pWVar18 = (LPWSTR)(lVar14 + 0x18);
        local_80 = pWVar18;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar15 + 0xc) - iVar12 | 1U - *(int *)(puVar15 + 2)) < 0) {
      FUN_140008ae0(&local_80,iVar12);
      pWVar18 = local_80;
    }
    pWVar23 = pWVar18;
    iVar13 = iVar12;
    MultiByteToWideChar(0,0,"CRtfEndDataType::Validate",-1,pWVar18,iVar12);
    if (*(int *)(pWVar18 + -6) < iVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar18 + -8) = iVar12;
    pWVar18[iVar12] = L'\0';
  }
  pWVar1 = pWVar18 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar14 == 0)) {
    uVar16 = FUN_140009200();
    lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar16);
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar14 + 0x18;
  uVar24 = 1;
  iVar12 = *(int *)(pWVar18 + -8);
  lVar20 = (longlong)iVar12;
  iVar22 = iVar12 + 2;
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar14 + 0xc) - iVar22 | 1U - *(int *)(lVar14 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar22);
  }
  lVar14 = local_70;
  FUN_140008b60(local_70,lVar20,pWVar18,iVar12,pWVar23,iVar13,uVar24);
  puVar4 = (undefined4 *)(lVar14 + lVar20 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar17 = __doserrno();
    *puVar17 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar14 + -0xc) < iVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar14 + -0x10) = iVar22;
  *(undefined2 *)(lVar14 + 4 + lVar20 * 2) = 0;
  plVar2 = (longlong *)(lVar14 + -0x18);
  if ((*plVar2 == 0) || (lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar20 == 0)) {
    uVar16 = FUN_140009200();
    lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar16);
  }
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar20 + 0x18;
  uVar24 = 3;
  iVar12 = *(int *)(lVar14 + -0x10);
  lVar21 = (longlong)iVar12;
  iVar22 = iVar12 + 0xe;
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar20 + 0xc) - iVar22 | 1U - *(int *)(lVar20 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar22);
  }
  lVar20 = local_68;
  FUN_140008b60(local_68,lVar21,lVar14,iVar12,pWVar23,iVar13,uVar24);
  uVar11 = u_Trying_Rtf_eof_1405cbfb0._12_4_;
  uVar10 = u_Trying_Rtf_eof_1405cbfb0._8_4_;
  uVar24 = u_Trying_Rtf_eof_1405cbfb0._4_4_;
  pwVar5 = (wchar_t *)(lVar20 + lVar21 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar17 = __doserrno();
    *puVar17 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Rtf_eof_1405cbfb0._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar24;
    *(undefined4 *)(pwVar5 + 4) = uVar10;
    *(undefined4 *)(pwVar5 + 6) = uVar11;
    *(undefined8 *)(pwVar5 + 8) = u_Trying_Rtf_eof_1405cbfb0._16_8_;
    *(undefined4 *)(pwVar5 + 0xc) = u_Trying_Rtf_eof_1405cbfb0._24_4_;
  }
  if (*(int *)(lVar20 + -0xc) < iVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar20 + -0x10) = iVar22;
  *(undefined2 *)(lVar20 + 0x1c + lVar21 * 2) = 0;
  uVar16 = FUN_140040170();
  FUN_140041bc0(uVar16,700,lVar20);
  LOCK();
  piVar3 = (int *)(lVar20 + -8);
  iVar13 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar13 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar3 = (int *)(lVar14 + -8);
  iVar13 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar13 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar2,plVar2);
  }
  LOCK();
  pWVar18 = pWVar18 + -4;
  iVar13 = *(int *)pWVar18;
  *(int *)pWVar18 = *(int *)pWVar18 + -1;
  UNLOCK();
  if (iVar13 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_78 = *(longlong *)(param_4 + 2);
  uVar19 = 0;
  uVar8 = *param_4;
  if (uVar8 != 0) {
    do {
      lVar14 = 0;
      cVar7 = *(char *)((ulonglong)uVar19 + local_78);
      if (((byte)(cVar7 + 0x9fU) < 0x1a) || ((byte)(cVar7 + 0xbfU) < 0x1a)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if ((!bVar9) && (*(char *)(param_1 + 0x21) != '\0')) {
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x10 + param_1) = 0;
        do {
          pcVar6 = "title" + lVar14;
          lVar14 = lVar14 + 1;
          if (*pcVar6 != *(char *)(param_1 + 0xf + lVar14)) goto LAB_14029847f;
        } while (lVar14 != 6);
        puVar15 = (undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x38) = 0;
        if (0xf < *(ulonglong *)(param_1 + 0x40)) {
          puVar15 = (undefined8 *)*puVar15;
        }
        *(undefined1 *)puVar15 = 0;
        *(undefined1 *)(param_1 + 0x22) = 1;
      }
LAB_14029847f:
      if (*(char *)(param_1 + 0x22) != '\0') {
        if (((byte)(cVar7 + 0xa4U) < 0x22) &&
           ((0x280000001U >> ((longlong)(char)(cVar7 + 0xa4U) & 0x3fU) & 1) != 0)) {
          *(undefined1 *)(param_1 + 0x22) = 0;
        }
        else if ((*(longlong *)(param_1 + 0x38) != 0) || (iVar13 = isspace((int)cVar7), iVar13 == 0)
                ) {
          FUN_1400f7a80(param_1 + 0x28,cVar7);
        }
      }
      if (((byte)(cVar7 + 0x9fU) < 0x1a) || ((byte)(cVar7 + 0xbfU) < 0x1a)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        if (*(char *)(param_1 + 0x21) != '\0') {
          if (*(ulonglong *)(param_1 + 8) < 0x10) {
            *(char *)(*(ulonglong *)(param_1 + 8) + 0x10 + param_1) = cVar7;
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x21) = 0;
          }
        }
LAB_14029853b:
        iVar13 = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x21) = 0;
        if (cVar7 == '{') {
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
          goto LAB_14029853b;
        }
        if (cVar7 == '\\') {
          *(undefined1 *)(param_1 + 0x21) = 1;
          *(undefined8 *)(param_1 + 8) = 0;
          goto LAB_14029853b;
        }
        if (cVar7 != '}') goto LAB_14029853b;
        plVar2 = (longlong *)(param_1 + 0x48);
        *plVar2 = *plVar2 + -1;
        iVar13 = 1;
        if (*plVar2 != 0) goto LAB_14029853b;
      }
      if (iVar13 == 1) {
        lVar14 = *(longlong *)(param_1 + 0x50);
        uVar8 = *param_4;
        puVar15 = (undefined8 *)(param_1 + 0x28);
        if (0xf < *(ulonglong *)(param_1 + 0x40)) {
          puVar15 = (undefined8 *)*puVar15;
        }
        lVar20 = FUN_140009200();
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        local_78 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar20);
        local_78 = local_78 + 0x18;
        if ((puVar15 == (undefined8 *)0x0) || ((undefined8 *)0xffff < puVar15)) {
          FUN_14001d6c0(&local_78,puVar15);
        }
        else {
          lVar20 = FUN_140008650((ulonglong)puVar15 & 0xffff);
          if (lVar20 != 0) {
            FUN_140008830(&local_78,lVar20,(ulonglong)puVar15 & 0xffff);
          }
        }
        FUN_140026080(local_60,&local_78,L".rtf");
        LOCK();
        piVar3 = (int *)(local_78 + -8);
        iVar13 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar13 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        puVar15 = (undefined8 *)FUN_1402e2c84(0x28);
        uVar16 = *(undefined8 *)(param_1 + 0x50);
        *puVar15 = CRecognisedDataOneFileImpl::vftable;
        puVar15[1] = uVar16;
        local_50 = puVar15;
        FUN_140008d70(puVar15 + 2,local_60[0]);
        puVar15[3] = (ulonglong)uVar19 + (param_3 - lVar14) * (ulonglong)uVar8 + 1;
        *(undefined1 *)(puVar15 + 4) = 0;
        uVar16 = FUN_140298720(param_1,puVar15);
        LOCK();
        piVar3 = (int *)(local_60[0] + -8);
        iVar13 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar13 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        return uVar16;
      }
      if (iVar13 == 2) {
        uVar16 = FUN_140298720(param_1,0);
        return uVar16;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar8);
  }
  return 0;
}


// ---- function FUN_140298020 @ 140298020 (xref 1402980ca)

/* WARNING: Removing unreachable block (ram,0x000140298091) */
/* WARNING: Removing unreachable block (ram,0x0001402980a5) */

undefined8 FUN_140298020(longlong param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong *puVar17;
  LPWSTR pWVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  LPWSTR pWVar23;
  undefined4 uVar24;
  LPWSTR local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60 [2];
  undefined8 *local_50;
  
  local_60[1] = 0xfffffffffffffffe;
  lVar14 = FUN_140009200();
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar15 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar14);
  pWVar18 = (LPWSTR)(puVar15 + 3);
  iVar13 = 0;
  pWVar23 = (LPWSTR)0x0;
  local_80 = pWVar18;
  iVar12 = MultiByteToWideChar(0,0,"CRtfEndDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar12 = iVar12 + -1;
  if (iVar12 < 1) {
    uVar16 = *puVar15;
    if (*(int *)(puVar15 + 1) != 0) {
      if (*(int *)(puVar15 + 2) < 0) {
        if (*(int *)((longlong)puVar15 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar15 + 1) = 0;
        *pWVar18 = L'\0';
      }
      else {
        LOCK();
        piVar3 = (int *)(puVar15 + 2);
        iVar12 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar12 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar16);
        pWVar18 = (LPWSTR)(lVar14 + 0x18);
        local_80 = pWVar18;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar15 + 0xc) - iVar12 | 1U - *(int *)(puVar15 + 2)) < 0) {
      FUN_140008ae0(&local_80,iVar12);
      pWVar18 = local_80;
    }
    pWVar23 = pWVar18;
    iVar13 = iVar12;
    MultiByteToWideChar(0,0,"CRtfEndDataType::Validate",-1,pWVar18,iVar12);
    if (*(int *)(pWVar18 + -6) < iVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar18 + -8) = iVar12;
    pWVar18[iVar12] = L'\0';
  }
  pWVar1 = pWVar18 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar14 == 0)) {
    uVar16 = FUN_140009200();
    lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar16);
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar14 + 0x18;
  uVar24 = 1;
  iVar12 = *(int *)(pWVar18 + -8);
  lVar20 = (longlong)iVar12;
  iVar22 = iVar12 + 2;
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar14 + 0xc) - iVar22 | 1U - *(int *)(lVar14 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar22);
  }
  lVar14 = local_70;
  FUN_140008b60(local_70,lVar20,pWVar18,iVar12,pWVar23,iVar13,uVar24);
  puVar4 = (undefined4 *)(lVar14 + lVar20 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar17 = __doserrno();
    *puVar17 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar14 + -0xc) < iVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar14 + -0x10) = iVar22;
  *(undefined2 *)(lVar14 + 4 + lVar20 * 2) = 0;
  plVar2 = (longlong *)(lVar14 + -0x18);
  if ((*plVar2 == 0) || (lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar20 == 0)) {
    uVar16 = FUN_140009200();
    lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar16);
  }
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar20 + 0x18;
  uVar24 = 3;
  iVar12 = *(int *)(lVar14 + -0x10);
  lVar21 = (longlong)iVar12;
  iVar22 = iVar12 + 0xe;
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar20 + 0xc) - iVar22 | 1U - *(int *)(lVar20 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar22);
  }
  lVar20 = local_68;
  FUN_140008b60(local_68,lVar21,lVar14,iVar12,pWVar23,iVar13,uVar24);
  uVar11 = u_Trying_Rtf_eof_1405cbfb0._12_4_;
  uVar10 = u_Trying_Rtf_eof_1405cbfb0._8_4_;
  uVar24 = u_Trying_Rtf_eof_1405cbfb0._4_4_;
  pwVar5 = (wchar_t *)(lVar20 + lVar21 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar17 = __doserrno();
    *puVar17 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Rtf_eof_1405cbfb0._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar24;
    *(undefined4 *)(pwVar5 + 4) = uVar10;
    *(undefined4 *)(pwVar5 + 6) = uVar11;
    *(undefined8 *)(pwVar5 + 8) = u_Trying_Rtf_eof_1405cbfb0._16_8_;
    *(undefined4 *)(pwVar5 + 0xc) = u_Trying_Rtf_eof_1405cbfb0._24_4_;
  }
  if (*(int *)(lVar20 + -0xc) < iVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar20 + -0x10) = iVar22;
  *(undefined2 *)(lVar20 + 0x1c + lVar21 * 2) = 0;
  uVar16 = FUN_140040170();
  FUN_140041bc0(uVar16,700,lVar20);
  LOCK();
  piVar3 = (int *)(lVar20 + -8);
  iVar13 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar13 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar3 = (int *)(lVar14 + -8);
  iVar13 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar13 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar2,plVar2);
  }
  LOCK();
  pWVar18 = pWVar18 + -4;
  iVar13 = *(int *)pWVar18;
  *(int *)pWVar18 = *(int *)pWVar18 + -1;
  UNLOCK();
  if (iVar13 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_78 = *(longlong *)(param_4 + 2);
  uVar19 = 0;
  uVar8 = *param_4;
  if (uVar8 != 0) {
    do {
      lVar14 = 0;
      cVar7 = *(char *)((ulonglong)uVar19 + local_78);
      if (((byte)(cVar7 + 0x9fU) < 0x1a) || ((byte)(cVar7 + 0xbfU) < 0x1a)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if ((!bVar9) && (*(char *)(param_1 + 0x21) != '\0')) {
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x10 + param_1) = 0;
        do {
          pcVar6 = "title" + lVar14;
          lVar14 = lVar14 + 1;
          if (*pcVar6 != *(char *)(param_1 + 0xf + lVar14)) goto LAB_14029847f;
        } while (lVar14 != 6);
        puVar15 = (undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x38) = 0;
        if (0xf < *(ulonglong *)(param_1 + 0x40)) {
          puVar15 = (undefined8 *)*puVar15;
        }
        *(undefined1 *)puVar15 = 0;
        *(undefined1 *)(param_1 + 0x22) = 1;
      }
LAB_14029847f:
      if (*(char *)(param_1 + 0x22) != '\0') {
        if (((byte)(cVar7 + 0xa4U) < 0x22) &&
           ((0x280000001U >> ((longlong)(char)(cVar7 + 0xa4U) & 0x3fU) & 1) != 0)) {
          *(undefined1 *)(param_1 + 0x22) = 0;
        }
        else if ((*(longlong *)(param_1 + 0x38) != 0) || (iVar13 = isspace((int)cVar7), iVar13 == 0)
                ) {
          FUN_1400f7a80(param_1 + 0x28,cVar7);
        }
      }
      if (((byte)(cVar7 + 0x9fU) < 0x1a) || ((byte)(cVar7 + 0xbfU) < 0x1a)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        if (*(char *)(param_1 + 0x21) != '\0') {
          if (*(ulonglong *)(param_1 + 8) < 0x10) {
            *(char *)(*(ulonglong *)(param_1 + 8) + 0x10 + param_1) = cVar7;
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x21) = 0;
          }
        }
LAB_14029853b:
        iVar13 = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x21) = 0;
        if (cVar7 == '{') {
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
          goto LAB_14029853b;
        }
        if (cVar7 == '\\') {
          *(undefined1 *)(param_1 + 0x21) = 1;
          *(undefined8 *)(param_1 + 8) = 0;
          goto LAB_14029853b;
        }
        if (cVar7 != '}') goto LAB_14029853b;
        plVar2 = (longlong *)(param_1 + 0x48);
        *plVar2 = *plVar2 + -1;
        iVar13 = 1;
        if (*plVar2 != 0) goto LAB_14029853b;
      }
      if (iVar13 == 1) {
        lVar14 = *(longlong *)(param_1 + 0x50);
        uVar8 = *param_4;
        puVar15 = (undefined8 *)(param_1 + 0x28);
        if (0xf < *(ulonglong *)(param_1 + 0x40)) {
          puVar15 = (undefined8 *)*puVar15;
        }
        lVar20 = FUN_140009200();
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        local_78 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar20);
        local_78 = local_78 + 0x18;
        if ((puVar15 == (undefined8 *)0x0) || ((undefined8 *)0xffff < puVar15)) {
          FUN_14001d6c0(&local_78,puVar15);
        }
        else {
          lVar20 = FUN_140008650((ulonglong)puVar15 & 0xffff);
          if (lVar20 != 0) {
            FUN_140008830(&local_78,lVar20,(ulonglong)puVar15 & 0xffff);
          }
        }
        FUN_140026080(local_60,&local_78,L".rtf");
        LOCK();
        piVar3 = (int *)(local_78 + -8);
        iVar13 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar13 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        puVar15 = (undefined8 *)FUN_1402e2c84(0x28);
        uVar16 = *(undefined8 *)(param_1 + 0x50);
        *puVar15 = CRecognisedDataOneFileImpl::vftable;
        puVar15[1] = uVar16;
        local_50 = puVar15;
        FUN_140008d70(puVar15 + 2,local_60[0]);
        puVar15[3] = (ulonglong)uVar19 + (param_3 - lVar14) * (ulonglong)uVar8 + 1;
        *(undefined1 *)(puVar15 + 4) = 0;
        uVar16 = FUN_140298720(param_1,puVar15);
        LOCK();
        piVar3 = (int *)(local_60[0] + -8);
        iVar13 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar13 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        return uVar16;
      }
      if (iVar13 == 2) {
        uVar16 = FUN_140298720(param_1,0);
        return uVar16;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar8);
  }
  return 0;
}


// ---- function FUN_140298020 @ 140298020 (xref 14029810a)

/* WARNING: Removing unreachable block (ram,0x000140298091) */
/* WARNING: Removing unreachable block (ram,0x0001402980a5) */

undefined8 FUN_140298020(longlong param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong *puVar17;
  LPWSTR pWVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  LPWSTR pWVar23;
  undefined4 uVar24;
  LPWSTR local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60 [2];
  undefined8 *local_50;
  
  local_60[1] = 0xfffffffffffffffe;
  lVar14 = FUN_140009200();
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar15 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar14);
  pWVar18 = (LPWSTR)(puVar15 + 3);
  iVar13 = 0;
  pWVar23 = (LPWSTR)0x0;
  local_80 = pWVar18;
  iVar12 = MultiByteToWideChar(0,0,"CRtfEndDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar12 = iVar12 + -1;
  if (iVar12 < 1) {
    uVar16 = *puVar15;
    if (*(int *)(puVar15 + 1) != 0) {
      if (*(int *)(puVar15 + 2) < 0) {
        if (*(int *)((longlong)puVar15 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar15 + 1) = 0;
        *pWVar18 = L'\0';
      }
      else {
        LOCK();
        piVar3 = (int *)(puVar15 + 2);
        iVar12 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar12 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar16);
        pWVar18 = (LPWSTR)(lVar14 + 0x18);
        local_80 = pWVar18;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar15 + 0xc) - iVar12 | 1U - *(int *)(puVar15 + 2)) < 0) {
      FUN_140008ae0(&local_80,iVar12);
      pWVar18 = local_80;
    }
    pWVar23 = pWVar18;
    iVar13 = iVar12;
    MultiByteToWideChar(0,0,"CRtfEndDataType::Validate",-1,pWVar18,iVar12);
    if (*(int *)(pWVar18 + -6) < iVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar18 + -8) = iVar12;
    pWVar18[iVar12] = L'\0';
  }
  pWVar1 = pWVar18 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar14 == 0)) {
    uVar16 = FUN_140009200();
    lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar16);
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar14 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_70 = lVar14 + 0x18;
  uVar24 = 1;
  iVar12 = *(int *)(pWVar18 + -8);
  lVar20 = (longlong)iVar12;
  iVar22 = iVar12 + 2;
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar14 + 0xc) - iVar22 | 1U - *(int *)(lVar14 + 0x10)) < 0) {
    FUN_140008ae0(&local_70,iVar22);
  }
  lVar14 = local_70;
  FUN_140008b60(local_70,lVar20,pWVar18,iVar12,pWVar23,iVar13,uVar24);
  puVar4 = (undefined4 *)(lVar14 + lVar20 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar17 = __doserrno();
    *puVar17 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar14 + -0xc) < iVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar14 + -0x10) = iVar22;
  *(undefined2 *)(lVar14 + 4 + lVar20 * 2) = 0;
  plVar2 = (longlong *)(lVar14 + -0x18);
  if ((*plVar2 == 0) || (lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar20 == 0)) {
    uVar16 = FUN_140009200();
    lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar16);
  }
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar20 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_68 = lVar20 + 0x18;
  uVar24 = 3;
  iVar12 = *(int *)(lVar14 + -0x10);
  lVar21 = (longlong)iVar12;
  iVar22 = iVar12 + 0xe;
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar20 + 0xc) - iVar22 | 1U - *(int *)(lVar20 + 0x10)) < 0) {
    FUN_140008ae0(&local_68,iVar22);
  }
  lVar20 = local_68;
  FUN_140008b60(local_68,lVar21,lVar14,iVar12,pWVar23,iVar13,uVar24);
  uVar11 = u_Trying_Rtf_eof_1405cbfb0._12_4_;
  uVar10 = u_Trying_Rtf_eof_1405cbfb0._8_4_;
  uVar24 = u_Trying_Rtf_eof_1405cbfb0._4_4_;
  pwVar5 = (wchar_t *)(lVar20 + lVar21 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar17 = __doserrno();
    *puVar17 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Rtf_eof_1405cbfb0._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar24;
    *(undefined4 *)(pwVar5 + 4) = uVar10;
    *(undefined4 *)(pwVar5 + 6) = uVar11;
    *(undefined8 *)(pwVar5 + 8) = u_Trying_Rtf_eof_1405cbfb0._16_8_;
    *(undefined4 *)(pwVar5 + 0xc) = u_Trying_Rtf_eof_1405cbfb0._24_4_;
  }
  if (*(int *)(lVar20 + -0xc) < iVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar20 + -0x10) = iVar22;
  *(undefined2 *)(lVar20 + 0x1c + lVar21 * 2) = 0;
  uVar16 = FUN_140040170();
  FUN_140041bc0(uVar16,700,lVar20);
  LOCK();
  piVar3 = (int *)(lVar20 + -8);
  iVar13 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar13 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar3 = (int *)(lVar14 + -8);
  iVar13 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar13 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*plVar2,plVar2);
  }
  LOCK();
  pWVar18 = pWVar18 + -4;
  iVar13 = *(int *)pWVar18;
  *(int *)pWVar18 = *(int *)pWVar18 + -1;
  UNLOCK();
  if (iVar13 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  local_78 = *(longlong *)(param_4 + 2);
  uVar19 = 0;
  uVar8 = *param_4;
  if (uVar8 != 0) {
    do {
      lVar14 = 0;
      cVar7 = *(char *)((ulonglong)uVar19 + local_78);
      if (((byte)(cVar7 + 0x9fU) < 0x1a) || ((byte)(cVar7 + 0xbfU) < 0x1a)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if ((!bVar9) && (*(char *)(param_1 + 0x21) != '\0')) {
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x10 + param_1) = 0;
        do {
          pcVar6 = "title" + lVar14;
          lVar14 = lVar14 + 1;
          if (*pcVar6 != *(char *)(param_1 + 0xf + lVar14)) goto LAB_14029847f;
        } while (lVar14 != 6);
        puVar15 = (undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x38) = 0;
        if (0xf < *(ulonglong *)(param_1 + 0x40)) {
          puVar15 = (undefined8 *)*puVar15;
        }
        *(undefined1 *)puVar15 = 0;
        *(undefined1 *)(param_1 + 0x22) = 1;
      }
LAB_14029847f:
      if (*(char *)(param_1 + 0x22) != '\0') {
        if (((byte)(cVar7 + 0xa4U) < 0x22) &&
           ((0x280000001U >> ((longlong)(char)(cVar7 + 0xa4U) & 0x3fU) & 1) != 0)) {
          *(undefined1 *)(param_1 + 0x22) = 0;
        }
        else if ((*(longlong *)(param_1 + 0x38) != 0) || (iVar13 = isspace((int)cVar7), iVar13 == 0)
                ) {
          FUN_1400f7a80(param_1 + 0x28,cVar7);
        }
      }
      if (((byte)(cVar7 + 0x9fU) < 0x1a) || ((byte)(cVar7 + 0xbfU) < 0x1a)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        if (*(char *)(param_1 + 0x21) != '\0') {
          if (*(ulonglong *)(param_1 + 8) < 0x10) {
            *(char *)(*(ulonglong *)(param_1 + 8) + 0x10 + param_1) = cVar7;
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x21) = 0;
          }
        }
LAB_14029853b:
        iVar13 = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x21) = 0;
        if (cVar7 == '{') {
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
          goto LAB_14029853b;
        }
        if (cVar7 == '\\') {
          *(undefined1 *)(param_1 + 0x21) = 1;
          *(undefined8 *)(param_1 + 8) = 0;
          goto LAB_14029853b;
        }
        if (cVar7 != '}') goto LAB_14029853b;
        plVar2 = (longlong *)(param_1 + 0x48);
        *plVar2 = *plVar2 + -1;
        iVar13 = 1;
        if (*plVar2 != 0) goto LAB_14029853b;
      }
      if (iVar13 == 1) {
        lVar14 = *(longlong *)(param_1 + 0x50);
        uVar8 = *param_4;
        puVar15 = (undefined8 *)(param_1 + 0x28);
        if (0xf < *(ulonglong *)(param_1 + 0x40)) {
          puVar15 = (undefined8 *)*puVar15;
        }
        lVar20 = FUN_140009200();
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        local_78 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar20);
        local_78 = local_78 + 0x18;
        if ((puVar15 == (undefined8 *)0x0) || ((undefined8 *)0xffff < puVar15)) {
          FUN_14001d6c0(&local_78,puVar15);
        }
        else {
          lVar20 = FUN_140008650((ulonglong)puVar15 & 0xffff);
          if (lVar20 != 0) {
            FUN_140008830(&local_78,lVar20,(ulonglong)puVar15 & 0xffff);
          }
        }
        FUN_140026080(local_60,&local_78,L".rtf");
        LOCK();
        piVar3 = (int *)(local_78 + -8);
        iVar13 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar13 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        puVar15 = (undefined8 *)FUN_1402e2c84(0x28);
        uVar16 = *(undefined8 *)(param_1 + 0x50);
        *puVar15 = CRecognisedDataOneFileImpl::vftable;
        puVar15[1] = uVar16;
        local_50 = puVar15;
        FUN_140008d70(puVar15 + 2,local_60[0]);
        puVar15[3] = (ulonglong)uVar19 + (param_3 - lVar14) * (ulonglong)uVar8 + 1;
        *(undefined1 *)(puVar15 + 4) = 0;
        uVar16 = FUN_140298720(param_1,puVar15);
        LOCK();
        piVar3 = (int *)(local_60[0] + -8);
        iVar13 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar13 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        return uVar16;
      }
      if (iVar13 == 2) {
        uVar16 = FUN_140298720(param_1,0);
        return uVar16;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar8);
  }
  return 0;
}



// ===== string at 1405cbfe0 : CPdfEndDataType::Validate
// ---- function FUN_140298920 @ 140298920 (xref 140298981)

/* WARNING: Removing unreachable block (ram,0x000140298995) */
/* WARNING: Removing unreachable block (ram,0x0001402989a8) */
/* WARNING: Removing unreachable block (ram,0x000140298dc5) */
/* WARNING: Removing unreachable block (ram,0x000140298dd6) */

undefined8 FUN_140298920(longlong param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong *puVar14;
  longlong lVar15;
  longlong lVar16;
  LPWSTR pWVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  LPWSTR pWVar21;
  int iVar22;
  undefined4 uVar23;
  LPWSTR local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  uVar20 = 0;
  lVar11 = FUN_140009200();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar12 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
  pWVar17 = (LPWSTR)(puVar12 + 3);
  iVar22 = 0;
  pWVar21 = (LPWSTR)0x0;
  local_98 = pWVar17;
  iVar10 = MultiByteToWideChar(0,0,"CPdfEndDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar10 = iVar10 + -1;
  if (iVar10 < 1) {
    uVar13 = *puVar12;
    if (*(int *)(puVar12 + 1) != 0) {
      if (*(int *)(puVar12 + 2) < 0) {
        if (*(int *)((longlong)puVar12 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar12 + 1) = 0;
        *pWVar17 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar12 + 2);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
        pWVar17 = (LPWSTR)(lVar11 + 0x18);
        local_98 = pWVar17;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar12 + 0xc) - iVar10 | 1U - *(int *)(puVar12 + 2)) < 0) {
      FUN_140008ae0(&local_98,iVar10);
      pWVar17 = local_98;
    }
    pWVar21 = pWVar17;
    iVar22 = iVar10;
    MultiByteToWideChar(0,0,"CPdfEndDataType::Validate",-1,pWVar17,iVar10);
    if (*(int *)(pWVar17 + -6) < iVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar17 + -8) = iVar10;
    pWVar17[iVar10] = L'\0';
  }
  pWVar1 = pWVar17 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0)) {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_90 = lVar11 + 0x18;
  uVar23 = 1;
  iVar10 = *(int *)(pWVar17 + -8);
  iVar18 = iVar10 + 2;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar18 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_90,iVar18);
  }
  lVar11 = local_90;
  FUN_140008b60(local_90,(longlong)iVar10,pWVar17,iVar10,pWVar21,iVar22,uVar23);
  puVar4 = (undefined4 *)(lVar11 + (longlong)iVar10 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar11 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar11 + -0x10) = iVar18;
  *(undefined2 *)(lVar11 + 4 + (longlong)iVar10 * 2) = 0;
  if ((*(longlong *)(lVar11 + -0x18) == 0) ||
     (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar13 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_88 = lVar15 + 0x18;
  uVar23 = 3;
  iVar10 = *(int *)(lVar11 + -0x10);
  if (iVar10 + 0xe < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - (iVar10 + 0xe) | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_88);
  }
  lVar15 = local_88;
  FUN_140008b60(local_88,(longlong)iVar10,lVar11,iVar10,pWVar21,iVar22,uVar23);
  uVar8 = u_Trying_Pdf_eof_1405cc000._12_4_;
  uVar7 = u_Trying_Pdf_eof_1405cc000._8_4_;
  uVar23 = u_Trying_Pdf_eof_1405cc000._4_4_;
  pwVar5 = (wchar_t *)(lVar15 + (longlong)iVar10 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Pdf_eof_1405cc000._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar23;
    *(undefined4 *)(pwVar5 + 4) = uVar7;
    *(undefined4 *)(pwVar5 + 6) = uVar8;
    *(undefined8 *)(pwVar5 + 8) = u_Trying_Pdf_eof_1405cc000._16_8_;
    *(undefined4 *)(pwVar5 + 0xc) = u_Trying_Pdf_eof_1405cc000._24_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar10 + 0xe) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar10 + 0xe;
  *(undefined2 *)(lVar15 + 0x1c + (longlong)iVar10 * 2) = 0;
  uVar13 = FUN_140040170();
  FUN_140041bc0(uVar13,700,lVar15);
  LOCK();
  piVar2 = (int *)(lVar15 + -8);
  iVar22 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar22 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar11 + -8);
  iVar22 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar22 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar11 + -0x18),lVar11 + -0x18);
  }
  LOCK();
  pWVar17 = pWVar17 + -4;
  iVar22 = *(int *)pWVar17;
  *(int *)pWVar17 = *(int *)pWVar17 + -1;
  UNLOCK();
  if (iVar22 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  lVar11 = *(longlong *)(param_4 + 2);
  uVar6 = *param_4;
  if (uVar6 != 0) {
    do {
      cVar9 = FUN_1402a2060(param_1 + 8,*(undefined1 *)(uVar20 + lVar11));
      if (cVar9 != '\0') {
        lVar11 = *(longlong *)(param_1 + 0xa0);
        uVar6 = *param_4;
        lVar15 = *(longlong *)(param_1 + 0x90);
        puVar12 = (undefined8 *)FUN_1402e2c84(0x28);
        uVar13 = *(undefined8 *)(param_1 + 0xa0);
        *puVar12 = CRecognisedDataOneFileImpl::vftable;
        puVar12[1] = uVar13;
        plVar3 = puVar12 + 2;
        local_80 = plVar3;
        lVar16 = FUN_140009200();
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar16);
        *plVar3 = lVar16 + 0x18;
        FUN_140008c50(plVar3,L".pdf",4);
        puVar12[3] = ((param_3 - lVar11) * (ulonglong)uVar6 - lVar15) + uVar20;
        *(undefined1 *)(puVar12 + 4) = 0;
        local_78 = 0;
        uStack_70 = 0;
        FUN_140232b00(&local_78,puVar12);
        local_80 = (longlong *)FUN_1402e2c84(0x20);
        lVar11 = uStack_70;
        if (uStack_70 != 0) {
          LOCK();
          *(int *)(uStack_70 + 8) = *(int *)(uStack_70 + 8) + 1;
          UNLOCK();
        }
        local_68 = (undefined4)local_78;
        uStack_64 = local_78._4_4_;
        uStack_60 = (undefined4)uStack_70;
        uStack_5c = uStack_70._4_4_;
        uVar13 = FUN_1402a1e10(local_80,&local_68,param_1);
        if (lVar11 != 0) {
          FUN_140008510(lVar11);
        }
        return uVar13;
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
    } while (uVar19 != uVar6);
  }
  return 0;
}


// ---- function FUN_140298920 @ 140298920 (xref 1402989cd)

/* WARNING: Removing unreachable block (ram,0x000140298995) */
/* WARNING: Removing unreachable block (ram,0x0001402989a8) */
/* WARNING: Removing unreachable block (ram,0x000140298dc5) */
/* WARNING: Removing unreachable block (ram,0x000140298dd6) */

undefined8 FUN_140298920(longlong param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong *puVar14;
  longlong lVar15;
  longlong lVar16;
  LPWSTR pWVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  LPWSTR pWVar21;
  int iVar22;
  undefined4 uVar23;
  LPWSTR local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  uVar20 = 0;
  lVar11 = FUN_140009200();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar12 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
  pWVar17 = (LPWSTR)(puVar12 + 3);
  iVar22 = 0;
  pWVar21 = (LPWSTR)0x0;
  local_98 = pWVar17;
  iVar10 = MultiByteToWideChar(0,0,"CPdfEndDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar10 = iVar10 + -1;
  if (iVar10 < 1) {
    uVar13 = *puVar12;
    if (*(int *)(puVar12 + 1) != 0) {
      if (*(int *)(puVar12 + 2) < 0) {
        if (*(int *)((longlong)puVar12 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar12 + 1) = 0;
        *pWVar17 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar12 + 2);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
        pWVar17 = (LPWSTR)(lVar11 + 0x18);
        local_98 = pWVar17;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar12 + 0xc) - iVar10 | 1U - *(int *)(puVar12 + 2)) < 0) {
      FUN_140008ae0(&local_98,iVar10);
      pWVar17 = local_98;
    }
    pWVar21 = pWVar17;
    iVar22 = iVar10;
    MultiByteToWideChar(0,0,"CPdfEndDataType::Validate",-1,pWVar17,iVar10);
    if (*(int *)(pWVar17 + -6) < iVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar17 + -8) = iVar10;
    pWVar17[iVar10] = L'\0';
  }
  pWVar1 = pWVar17 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0)) {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_90 = lVar11 + 0x18;
  uVar23 = 1;
  iVar10 = *(int *)(pWVar17 + -8);
  iVar18 = iVar10 + 2;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar18 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_90,iVar18);
  }
  lVar11 = local_90;
  FUN_140008b60(local_90,(longlong)iVar10,pWVar17,iVar10,pWVar21,iVar22,uVar23);
  puVar4 = (undefined4 *)(lVar11 + (longlong)iVar10 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar11 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar11 + -0x10) = iVar18;
  *(undefined2 *)(lVar11 + 4 + (longlong)iVar10 * 2) = 0;
  if ((*(longlong *)(lVar11 + -0x18) == 0) ||
     (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar13 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_88 = lVar15 + 0x18;
  uVar23 = 3;
  iVar10 = *(int *)(lVar11 + -0x10);
  if (iVar10 + 0xe < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - (iVar10 + 0xe) | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_88);
  }
  lVar15 = local_88;
  FUN_140008b60(local_88,(longlong)iVar10,lVar11,iVar10,pWVar21,iVar22,uVar23);
  uVar8 = u_Trying_Pdf_eof_1405cc000._12_4_;
  uVar7 = u_Trying_Pdf_eof_1405cc000._8_4_;
  uVar23 = u_Trying_Pdf_eof_1405cc000._4_4_;
  pwVar5 = (wchar_t *)(lVar15 + (longlong)iVar10 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Pdf_eof_1405cc000._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar23;
    *(undefined4 *)(pwVar5 + 4) = uVar7;
    *(undefined4 *)(pwVar5 + 6) = uVar8;
    *(undefined8 *)(pwVar5 + 8) = u_Trying_Pdf_eof_1405cc000._16_8_;
    *(undefined4 *)(pwVar5 + 0xc) = u_Trying_Pdf_eof_1405cc000._24_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar10 + 0xe) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar10 + 0xe;
  *(undefined2 *)(lVar15 + 0x1c + (longlong)iVar10 * 2) = 0;
  uVar13 = FUN_140040170();
  FUN_140041bc0(uVar13,700,lVar15);
  LOCK();
  piVar2 = (int *)(lVar15 + -8);
  iVar22 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar22 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar11 + -8);
  iVar22 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar22 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar11 + -0x18),lVar11 + -0x18);
  }
  LOCK();
  pWVar17 = pWVar17 + -4;
  iVar22 = *(int *)pWVar17;
  *(int *)pWVar17 = *(int *)pWVar17 + -1;
  UNLOCK();
  if (iVar22 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  lVar11 = *(longlong *)(param_4 + 2);
  uVar6 = *param_4;
  if (uVar6 != 0) {
    do {
      cVar9 = FUN_1402a2060(param_1 + 8,*(undefined1 *)(uVar20 + lVar11));
      if (cVar9 != '\0') {
        lVar11 = *(longlong *)(param_1 + 0xa0);
        uVar6 = *param_4;
        lVar15 = *(longlong *)(param_1 + 0x90);
        puVar12 = (undefined8 *)FUN_1402e2c84(0x28);
        uVar13 = *(undefined8 *)(param_1 + 0xa0);
        *puVar12 = CRecognisedDataOneFileImpl::vftable;
        puVar12[1] = uVar13;
        plVar3 = puVar12 + 2;
        local_80 = plVar3;
        lVar16 = FUN_140009200();
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar16);
        *plVar3 = lVar16 + 0x18;
        FUN_140008c50(plVar3,L".pdf",4);
        puVar12[3] = ((param_3 - lVar11) * (ulonglong)uVar6 - lVar15) + uVar20;
        *(undefined1 *)(puVar12 + 4) = 0;
        local_78 = 0;
        uStack_70 = 0;
        FUN_140232b00(&local_78,puVar12);
        local_80 = (longlong *)FUN_1402e2c84(0x20);
        lVar11 = uStack_70;
        if (uStack_70 != 0) {
          LOCK();
          *(int *)(uStack_70 + 8) = *(int *)(uStack_70 + 8) + 1;
          UNLOCK();
        }
        local_68 = (undefined4)local_78;
        uStack_64 = local_78._4_4_;
        uStack_60 = (undefined4)uStack_70;
        uStack_5c = uStack_70._4_4_;
        uVar13 = FUN_1402a1e10(local_80,&local_68,param_1);
        if (lVar11 != 0) {
          FUN_140008510(lVar11);
        }
        return uVar13;
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
    } while (uVar19 != uVar6);
  }
  return 0;
}


// ---- function FUN_140298920 @ 140298920 (xref 140298a0d)

/* WARNING: Removing unreachable block (ram,0x000140298995) */
/* WARNING: Removing unreachable block (ram,0x0001402989a8) */
/* WARNING: Removing unreachable block (ram,0x000140298dc5) */
/* WARNING: Removing unreachable block (ram,0x000140298dd6) */

undefined8 FUN_140298920(longlong param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  LPWSTR pWVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong *puVar14;
  longlong lVar15;
  longlong lVar16;
  LPWSTR pWVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  LPWSTR pWVar21;
  int iVar22;
  undefined4 uVar23;
  LPWSTR local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  uVar20 = 0;
  lVar11 = FUN_140009200();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  puVar12 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar11);
  pWVar17 = (LPWSTR)(puVar12 + 3);
  iVar22 = 0;
  pWVar21 = (LPWSTR)0x0;
  local_98 = pWVar17;
  iVar10 = MultiByteToWideChar(0,0,"CPdfEndDataType::Validate",-1,(LPWSTR)0x0,0);
  iVar10 = iVar10 + -1;
  if (iVar10 < 1) {
    uVar13 = *puVar12;
    if (*(int *)(puVar12 + 1) != 0) {
      if (*(int *)(puVar12 + 2) < 0) {
        if (*(int *)((longlong)puVar12 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80070057);
        }
        *(undefined4 *)(puVar12 + 1) = 0;
        *pWVar17 = L'\0';
      }
      else {
        LOCK();
        piVar2 = (int *)(puVar12 + 2);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 < 2) {
          (*(code *)PTR__guard_dispatch_icall_1405394d0)();
        }
        lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
        pWVar17 = (LPWSTR)(lVar11 + 0x18);
        local_98 = pWVar17;
      }
    }
  }
  else {
    if ((int)(*(int *)((longlong)puVar12 + 0xc) - iVar10 | 1U - *(int *)(puVar12 + 2)) < 0) {
      FUN_140008ae0(&local_98,iVar10);
      pWVar17 = local_98;
    }
    pWVar21 = pWVar17;
    iVar22 = iVar10;
    MultiByteToWideChar(0,0,"CPdfEndDataType::Validate",-1,pWVar17,iVar10);
    if (*(int *)(pWVar17 + -6) < iVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(pWVar17 + -8) = iVar10;
    pWVar17[iVar10] = L'\0';
  }
  pWVar1 = pWVar17 + -0xc;
  if ((*(longlong *)pWVar1 == 0) ||
     (lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar11 == 0)) {
    uVar13 = FUN_140009200();
    lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar11 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_90 = lVar11 + 0x18;
  uVar23 = 1;
  iVar10 = *(int *)(pWVar17 + -8);
  iVar18 = iVar10 + 2;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar11 + 0xc) - iVar18 | 1U - *(int *)(lVar11 + 0x10)) < 0) {
    FUN_140008ae0(&local_90,iVar18);
  }
  lVar11 = local_90;
  FUN_140008b60(local_90,(longlong)iVar10,pWVar17,iVar10,pWVar21,iVar22,uVar23);
  puVar4 = (undefined4 *)(lVar11 + (longlong)iVar10 * 2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *puVar4 = DAT_1405a5138;
  }
  if (*(int *)(lVar11 + -0xc) < iVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar11 + -0x10) = iVar18;
  *(undefined2 *)(lVar11 + 4 + (longlong)iVar10 * 2) = 0;
  if ((*(longlong *)(lVar11 + -0x18) == 0) ||
     (lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar15 == 0)) {
    uVar13 = FUN_140009200();
    lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar13);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80004005);
  }
  lVar15 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  local_88 = lVar15 + 0x18;
  uVar23 = 3;
  iVar10 = *(int *)(lVar11 + -0x10);
  if (iVar10 + 0xe < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  if ((int)(*(int *)(lVar15 + 0xc) - (iVar10 + 0xe) | 1U - *(int *)(lVar15 + 0x10)) < 0) {
    FUN_140008ae0(&local_88);
  }
  lVar15 = local_88;
  FUN_140008b60(local_88,(longlong)iVar10,lVar11,iVar10,pWVar21,iVar22,uVar23);
  uVar8 = u_Trying_Pdf_eof_1405cc000._12_4_;
  uVar7 = u_Trying_Pdf_eof_1405cc000._8_4_;
  uVar23 = u_Trying_Pdf_eof_1405cc000._4_4_;
  pwVar5 = (wchar_t *)(lVar15 + (longlong)iVar10 * 2);
  if (pwVar5 == (wchar_t *)0x0) {
    puVar14 = __doserrno();
    *puVar14 = 0x16;
    FUN_14033bbc4();
  }
  else {
    *(undefined4 *)pwVar5 = u_Trying_Pdf_eof_1405cc000._0_4_;
    *(undefined4 *)(pwVar5 + 2) = uVar23;
    *(undefined4 *)(pwVar5 + 4) = uVar7;
    *(undefined4 *)(pwVar5 + 6) = uVar8;
    *(undefined8 *)(pwVar5 + 8) = u_Trying_Pdf_eof_1405cc000._16_8_;
    *(undefined4 *)(pwVar5 + 0xc) = u_Trying_Pdf_eof_1405cc000._24_4_;
  }
  if (*(int *)(lVar15 + -0xc) < iVar10 + 0xe) {
                    /* WARNING: Subroutine does not return */
    FUN_140008e90(0x80070057);
  }
  *(int *)(lVar15 + -0x10) = iVar10 + 0xe;
  *(undefined2 *)(lVar15 + 0x1c + (longlong)iVar10 * 2) = 0;
  uVar13 = FUN_140040170();
  FUN_140041bc0(uVar13,700,lVar15);
  LOCK();
  piVar2 = (int *)(lVar15 + -8);
  iVar22 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar22 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)();
  }
  LOCK();
  piVar2 = (int *)(lVar11 + -8);
  iVar22 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar22 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(undefined8 *)(lVar11 + -0x18),lVar11 + -0x18);
  }
  LOCK();
  pWVar17 = pWVar17 + -4;
  iVar22 = *(int *)pWVar17;
  *(int *)pWVar17 = *(int *)pWVar17 + -1;
  UNLOCK();
  if (iVar22 < 2) {
    (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar1,pWVar1);
  }
  lVar11 = *(longlong *)(param_4 + 2);
  uVar6 = *param_4;
  if (uVar6 != 0) {
    do {
      cVar9 = FUN_1402a2060(param_1 + 8,*(undefined1 *)(uVar20 + lVar11));
      if (cVar9 != '\0') {
        lVar11 = *(longlong *)(param_1 + 0xa0);
        uVar6 = *param_4;
        lVar15 = *(longlong *)(param_1 + 0x90);
        puVar12 = (undefined8 *)FUN_1402e2c84(0x28);
        uVar13 = *(undefined8 *)(param_1 + 0xa0);
        *puVar12 = CRecognisedDataOneFileImpl::vftable;
        puVar12[1] = uVar13;
        plVar3 = puVar12 + 2;
        local_80 = plVar3;
        lVar16 = FUN_140009200();
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140008e90(0x80004005);
        }
        lVar16 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar16);
        *plVar3 = lVar16 + 0x18;
        FUN_140008c50(plVar3,L".pdf",4);
        puVar12[3] = ((param_3 - lVar11) * (ulonglong)uVar6 - lVar15) + uVar20;
        *(undefined1 *)(puVar12 + 4) = 0;
        local_78 = 0;
        uStack_70 = 0;
        FUN_140232b00(&local_78,puVar12);
        local_80 = (longlong *)FUN_1402e2c84(0x20);
        lVar11 = uStack_70;
        if (uStack_70 != 0) {
          LOCK();
          *(int *)(uStack_70 + 8) = *(int *)(uStack_70 + 8) + 1;
          UNLOCK();
        }
        local_68 = (undefined4)local_78;
        uStack_64 = local_78._4_4_;
        uStack_60 = (undefined4)uStack_70;
        uStack_5c = uStack_70._4_4_;
        uVar13 = FUN_1402a1e10(local_80,&local_68,param_1);
        if (lVar11 != 0) {
          FUN_140008510(lVar11);
        }
        return uVar13;
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
    } while (uVar19 != uVar6);
  }
  return 0;
}



// ===== string at 1405cc030 : CCrwEndDataType::Validate
// ---- function FUN_140298f10 @ 140298f10 (xref 140298f85)

/* WARNING: Removing unreachable block (ram,0x000140298f9a) */
/* WARNING: Removing unreachable block (ram,0x000140298fad) */
/* WARNING: Removing unreachable block (ram,0x000140299432) */
/* WARNING: Removing unreachable block (ram,0x000140299441) */

undefined8 * FUN_140298f10(longlong param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  longlong lVar16;
  LPWSTR pWVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  LPWSTR pWVar21;
  undefined4 uVar22;
  LPWSTR local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar12 = FUN_140009200();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
    pWVar17 = (LPWSTR)(puVar13 + 3);
    iVar18 = 0;
    pWVar21 = (LPWSTR)0x0;
    local_70 = pWVar17;
    iVar11 = MultiByteToWideChar(0,0,"CCrwEndDataType::Validate",-1,(LPWSTR)0x0,0);
    iVar11 = iVar11 + -1;
    if (iVar11 < 1) {
      uVar14 = *puVar13;
      if (*(int *)(puVar13 + 1) != 0) {
        if (*(int *)(puVar13 + 2) < 0) {
          if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(puVar13 + 1) = 0;
          *pWVar17 = L'\0';
        }
        else {
          LOCK();
          piVar1 = (int *)(puVar13 + 2);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
          pWVar17 = (LPWSTR)(lVar12 + 0x18);
          local_70 = pWVar17;
        }
      }
    }
    else {
      if ((int)(*(int *)((longlong)puVar13 + 0xc) - iVar11 | 1U - *(int *)(puVar13 + 2)) < 0) {
        FUN_140008ae0(&local_70,iVar11);
        pWVar17 = local_70;
      }
      pWVar21 = pWVar17;
      iVar18 = iVar11;
      MultiByteToWideChar(0,0,"CCrwEndDataType::Validate",-1,pWVar17,iVar11);
      if (*(int *)(pWVar17 + -6) < iVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80070057);
      }
      *(int *)(pWVar17 + -8) = iVar11;
      pWVar17[iVar11] = L'\0';
    }
    pWVar2 = pWVar17 + -0xc;
    if ((*(longlong *)pWVar2 == 0) ||
       (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
      uVar14 = FUN_140009200();
      lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_68 = (longlong *)(lVar12 + 0x18);
    uVar22 = 1;
    iVar11 = *(int *)(pWVar17 + -8);
    lVar19 = (longlong)iVar11;
    iVar20 = iVar11 + 2;
    if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar12 + 0xc) - iVar20 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
      FUN_140008ae0(&local_68,iVar20);
    }
    plVar4 = local_68;
    FUN_140008b60(local_68,lVar19,pWVar17,iVar11,pWVar21,iVar18,uVar22);
    puVar5 = (undefined4 *)((longlong)plVar4 + lVar19 * 2);
    if (puVar5 == (undefined4 *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *puVar5 = DAT_1405a5138;
    }
    if (*(int *)((longlong)plVar4 + -0xc) < iVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(plVar4 + -2) = iVar20;
    *(undefined2 *)((longlong)plVar4 + lVar19 * 2 + 4) = 0;
    if ((plVar4[-3] == 0) ||
       (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
      uVar14 = FUN_140009200();
      lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_60 = (undefined8 *)(lVar12 + 0x18);
    uVar22 = 3;
    iVar11 = (int)plVar4[-2];
    iVar20 = iVar11 + 0xd;
    if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar12 + 0xc) - iVar20 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
      FUN_140008ae0(&local_60,iVar20);
    }
    puVar13 = local_60;
    FUN_140008b60(local_60,(longlong)iVar11,plVar4,iVar11,pWVar21,iVar18,uVar22);
    uVar10 = u_Trying_CrwEnd_1405cc050._12_4_;
    uVar9 = u_Trying_CrwEnd_1405cc050._8_4_;
    uVar22 = u_Trying_CrwEnd_1405cc050._4_4_;
    pwVar6 = (wchar_t *)((longlong)puVar13 + (longlong)iVar11 * 2);
    if (pwVar6 == (wchar_t *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *(undefined4 *)pwVar6 = u_Trying_CrwEnd_1405cc050._0_4_;
      *(undefined4 *)(pwVar6 + 2) = uVar22;
      *(undefined4 *)(pwVar6 + 4) = uVar9;
      *(undefined4 *)(pwVar6 + 6) = uVar10;
      *(undefined8 *)(pwVar6 + 8) = u_Trying_CrwEnd_1405cc050._16_8_;
      pwVar6[0xc] = u_Trying_CrwEnd_1405cc050[0xc];
    }
    if (*(int *)((longlong)puVar13 + -0xc) < iVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(puVar13 + -2) = iVar20;
    *(undefined2 *)((longlong)puVar13 + (longlong)iVar11 * 2 + 0x1a) = 0;
    uVar14 = FUN_140040170();
    FUN_140041bc0(uVar14,700,puVar13);
    LOCK();
    piVar1 = (int *)(puVar13 + -1);
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
    LOCK();
    plVar3 = plVar4 + -1;
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
    }
    LOCK();
    pWVar17 = pWVar17 + -4;
    iVar18 = *(int *)pWVar17;
    *(int *)pWVar17 = *(int *)pWVar17 + -1;
    UNLOCK();
    if (iVar18 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
    }
    *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(param_4 + 2);
    uVar7 = *param_4;
    lVar12 = (ulonglong)uVar7 * param_3 - *(longlong *)(param_1 + 0x10);
    if (((longlong)((ulonglong)uVar7 + lVar12) < 0xffffffff) && (iVar18 = -3, uVar7 - 4 != -3)) {
      do {
        lVar19 = iVar18 + lVar12;
        if ((longlong)(ulonglong)*(uint *)(param_1 + 0x18) <= lVar19) {
          lVar16 = *(longlong *)(param_4 + 2);
          if (iVar18 < 0) {
            lVar16 = param_1 + 0xc;
          }
          uVar8 = *(uint *)(lVar16 + iVar18);
          lVar16 = ((lVar19 - (ulonglong)uVar8) - (ulonglong)*(uint *)(param_1 + 0x18)) + -2;
          if ((((0 < lVar16) && (lVar16 == (lVar16 / 10) * 10)) && (lVar16 / 10 < 0x14)) &&
             (uVar8 != 0)) {
            *(undefined4 *)(param_1 + 0x18) = 0;
            puVar13 = (undefined8 *)FUN_1402e2c84(0x28);
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            *puVar13 = CRecognisedDataOneFileImpl::vftable;
            puVar13[1] = uVar14;
            plVar4 = puVar13 + 2;
            local_68 = plVar4;
            local_60 = puVar13;
            lVar12 = FUN_140009200();
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140008e90(0x80004005);
            }
            lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
            *plVar4 = lVar12 + 0x18;
            FUN_140008c50(plVar4,L".crw",4);
            puVar13[3] = lVar19 + 4;
            *(undefined1 *)(puVar13 + 4) = 0;
            return puVar13;
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != uVar7 - 4);
    }
  }
  return (undefined8 *)0x0;
}


// ---- function FUN_140298f10 @ 140298f10 (xref 140298fd4)

/* WARNING: Removing unreachable block (ram,0x000140298f9a) */
/* WARNING: Removing unreachable block (ram,0x000140298fad) */
/* WARNING: Removing unreachable block (ram,0x000140299432) */
/* WARNING: Removing unreachable block (ram,0x000140299441) */

undefined8 * FUN_140298f10(longlong param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  longlong lVar16;
  LPWSTR pWVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  LPWSTR pWVar21;
  undefined4 uVar22;
  LPWSTR local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar12 = FUN_140009200();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
    pWVar17 = (LPWSTR)(puVar13 + 3);
    iVar18 = 0;
    pWVar21 = (LPWSTR)0x0;
    local_70 = pWVar17;
    iVar11 = MultiByteToWideChar(0,0,"CCrwEndDataType::Validate",-1,(LPWSTR)0x0,0);
    iVar11 = iVar11 + -1;
    if (iVar11 < 1) {
      uVar14 = *puVar13;
      if (*(int *)(puVar13 + 1) != 0) {
        if (*(int *)(puVar13 + 2) < 0) {
          if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(puVar13 + 1) = 0;
          *pWVar17 = L'\0';
        }
        else {
          LOCK();
          piVar1 = (int *)(puVar13 + 2);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
          pWVar17 = (LPWSTR)(lVar12 + 0x18);
          local_70 = pWVar17;
        }
      }
    }
    else {
      if ((int)(*(int *)((longlong)puVar13 + 0xc) - iVar11 | 1U - *(int *)(puVar13 + 2)) < 0) {
        FUN_140008ae0(&local_70,iVar11);
        pWVar17 = local_70;
      }
      pWVar21 = pWVar17;
      iVar18 = iVar11;
      MultiByteToWideChar(0,0,"CCrwEndDataType::Validate",-1,pWVar17,iVar11);
      if (*(int *)(pWVar17 + -6) < iVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80070057);
      }
      *(int *)(pWVar17 + -8) = iVar11;
      pWVar17[iVar11] = L'\0';
    }
    pWVar2 = pWVar17 + -0xc;
    if ((*(longlong *)pWVar2 == 0) ||
       (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
      uVar14 = FUN_140009200();
      lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_68 = (longlong *)(lVar12 + 0x18);
    uVar22 = 1;
    iVar11 = *(int *)(pWVar17 + -8);
    lVar19 = (longlong)iVar11;
    iVar20 = iVar11 + 2;
    if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar12 + 0xc) - iVar20 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
      FUN_140008ae0(&local_68,iVar20);
    }
    plVar4 = local_68;
    FUN_140008b60(local_68,lVar19,pWVar17,iVar11,pWVar21,iVar18,uVar22);
    puVar5 = (undefined4 *)((longlong)plVar4 + lVar19 * 2);
    if (puVar5 == (undefined4 *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *puVar5 = DAT_1405a5138;
    }
    if (*(int *)((longlong)plVar4 + -0xc) < iVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(plVar4 + -2) = iVar20;
    *(undefined2 *)((longlong)plVar4 + lVar19 * 2 + 4) = 0;
    if ((plVar4[-3] == 0) ||
       (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
      uVar14 = FUN_140009200();
      lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_60 = (undefined8 *)(lVar12 + 0x18);
    uVar22 = 3;
    iVar11 = (int)plVar4[-2];
    iVar20 = iVar11 + 0xd;
    if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar12 + 0xc) - iVar20 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
      FUN_140008ae0(&local_60,iVar20);
    }
    puVar13 = local_60;
    FUN_140008b60(local_60,(longlong)iVar11,plVar4,iVar11,pWVar21,iVar18,uVar22);
    uVar10 = u_Trying_CrwEnd_1405cc050._12_4_;
    uVar9 = u_Trying_CrwEnd_1405cc050._8_4_;
    uVar22 = u_Trying_CrwEnd_1405cc050._4_4_;
    pwVar6 = (wchar_t *)((longlong)puVar13 + (longlong)iVar11 * 2);
    if (pwVar6 == (wchar_t *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *(undefined4 *)pwVar6 = u_Trying_CrwEnd_1405cc050._0_4_;
      *(undefined4 *)(pwVar6 + 2) = uVar22;
      *(undefined4 *)(pwVar6 + 4) = uVar9;
      *(undefined4 *)(pwVar6 + 6) = uVar10;
      *(undefined8 *)(pwVar6 + 8) = u_Trying_CrwEnd_1405cc050._16_8_;
      pwVar6[0xc] = u_Trying_CrwEnd_1405cc050[0xc];
    }
    if (*(int *)((longlong)puVar13 + -0xc) < iVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(puVar13 + -2) = iVar20;
    *(undefined2 *)((longlong)puVar13 + (longlong)iVar11 * 2 + 0x1a) = 0;
    uVar14 = FUN_140040170();
    FUN_140041bc0(uVar14,700,puVar13);
    LOCK();
    piVar1 = (int *)(puVar13 + -1);
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
    LOCK();
    plVar3 = plVar4 + -1;
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
    }
    LOCK();
    pWVar17 = pWVar17 + -4;
    iVar18 = *(int *)pWVar17;
    *(int *)pWVar17 = *(int *)pWVar17 + -1;
    UNLOCK();
    if (iVar18 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
    }
    *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(param_4 + 2);
    uVar7 = *param_4;
    lVar12 = (ulonglong)uVar7 * param_3 - *(longlong *)(param_1 + 0x10);
    if (((longlong)((ulonglong)uVar7 + lVar12) < 0xffffffff) && (iVar18 = -3, uVar7 - 4 != -3)) {
      do {
        lVar19 = iVar18 + lVar12;
        if ((longlong)(ulonglong)*(uint *)(param_1 + 0x18) <= lVar19) {
          lVar16 = *(longlong *)(param_4 + 2);
          if (iVar18 < 0) {
            lVar16 = param_1 + 0xc;
          }
          uVar8 = *(uint *)(lVar16 + iVar18);
          lVar16 = ((lVar19 - (ulonglong)uVar8) - (ulonglong)*(uint *)(param_1 + 0x18)) + -2;
          if ((((0 < lVar16) && (lVar16 == (lVar16 / 10) * 10)) && (lVar16 / 10 < 0x14)) &&
             (uVar8 != 0)) {
            *(undefined4 *)(param_1 + 0x18) = 0;
            puVar13 = (undefined8 *)FUN_1402e2c84(0x28);
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            *puVar13 = CRecognisedDataOneFileImpl::vftable;
            puVar13[1] = uVar14;
            plVar4 = puVar13 + 2;
            local_68 = plVar4;
            local_60 = puVar13;
            lVar12 = FUN_140009200();
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140008e90(0x80004005);
            }
            lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
            *plVar4 = lVar12 + 0x18;
            FUN_140008c50(plVar4,L".crw",4);
            puVar13[3] = lVar19 + 4;
            *(undefined1 *)(puVar13 + 4) = 0;
            return puVar13;
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != uVar7 - 4);
    }
  }
  return (undefined8 *)0x0;
}


// ---- function FUN_140298f10 @ 140298f10 (xref 140299016)

/* WARNING: Removing unreachable block (ram,0x000140298f9a) */
/* WARNING: Removing unreachable block (ram,0x000140298fad) */
/* WARNING: Removing unreachable block (ram,0x000140299432) */
/* WARNING: Removing unreachable block (ram,0x000140299441) */

undefined8 * FUN_140298f10(longlong param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  int *piVar1;
  LPWSTR pWVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  longlong lVar16;
  LPWSTR pWVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  LPWSTR pWVar21;
  undefined4 uVar22;
  LPWSTR local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar12 = FUN_140009200();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    puVar13 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
    pWVar17 = (LPWSTR)(puVar13 + 3);
    iVar18 = 0;
    pWVar21 = (LPWSTR)0x0;
    local_70 = pWVar17;
    iVar11 = MultiByteToWideChar(0,0,"CCrwEndDataType::Validate",-1,(LPWSTR)0x0,0);
    iVar11 = iVar11 + -1;
    if (iVar11 < 1) {
      uVar14 = *puVar13;
      if (*(int *)(puVar13 + 1) != 0) {
        if (*(int *)(puVar13 + 2) < 0) {
          if (*(int *)((longlong)puVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140008e90(0x80070057);
          }
          *(undefined4 *)(puVar13 + 1) = 0;
          *pWVar17 = L'\0';
        }
        else {
          LOCK();
          piVar1 = (int *)(puVar13 + 2);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 < 2) {
            (*(code *)PTR__guard_dispatch_icall_1405394d0)();
          }
          lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
          pWVar17 = (LPWSTR)(lVar12 + 0x18);
          local_70 = pWVar17;
        }
      }
    }
    else {
      if ((int)(*(int *)((longlong)puVar13 + 0xc) - iVar11 | 1U - *(int *)(puVar13 + 2)) < 0) {
        FUN_140008ae0(&local_70,iVar11);
        pWVar17 = local_70;
      }
      pWVar21 = pWVar17;
      iVar18 = iVar11;
      MultiByteToWideChar(0,0,"CCrwEndDataType::Validate",-1,pWVar17,iVar11);
      if (*(int *)(pWVar17 + -6) < iVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_140008e90(0x80070057);
      }
      *(int *)(pWVar17 + -8) = iVar11;
      pWVar17[iVar11] = L'\0';
    }
    pWVar2 = pWVar17 + -0xc;
    if ((*(longlong *)pWVar2 == 0) ||
       (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
      uVar14 = FUN_140009200();
      lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_68 = (longlong *)(lVar12 + 0x18);
    uVar22 = 1;
    iVar11 = *(int *)(pWVar17 + -8);
    lVar19 = (longlong)iVar11;
    iVar20 = iVar11 + 2;
    if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar12 + 0xc) - iVar20 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
      FUN_140008ae0(&local_68,iVar20);
    }
    plVar4 = local_68;
    FUN_140008b60(local_68,lVar19,pWVar17,iVar11,pWVar21,iVar18,uVar22);
    puVar5 = (undefined4 *)((longlong)plVar4 + lVar19 * 2);
    if (puVar5 == (undefined4 *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *puVar5 = DAT_1405a5138;
    }
    if (*(int *)((longlong)plVar4 + -0xc) < iVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(plVar4 + -2) = iVar20;
    *(undefined2 *)((longlong)plVar4 + lVar19 * 2 + 4) = 0;
    if ((plVar4[-3] == 0) ||
       (lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(), lVar12 == 0)) {
      uVar14 = FUN_140009200();
      lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(uVar14);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80004005);
    }
    lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    local_60 = (undefined8 *)(lVar12 + 0x18);
    uVar22 = 3;
    iVar11 = (int)plVar4[-2];
    iVar20 = iVar11 + 0xd;
    if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    if ((int)(*(int *)(lVar12 + 0xc) - iVar20 | 1U - *(int *)(lVar12 + 0x10)) < 0) {
      FUN_140008ae0(&local_60,iVar20);
    }
    puVar13 = local_60;
    FUN_140008b60(local_60,(longlong)iVar11,plVar4,iVar11,pWVar21,iVar18,uVar22);
    uVar10 = u_Trying_CrwEnd_1405cc050._12_4_;
    uVar9 = u_Trying_CrwEnd_1405cc050._8_4_;
    uVar22 = u_Trying_CrwEnd_1405cc050._4_4_;
    pwVar6 = (wchar_t *)((longlong)puVar13 + (longlong)iVar11 * 2);
    if (pwVar6 == (wchar_t *)0x0) {
      puVar15 = __doserrno();
      *puVar15 = 0x16;
      FUN_14033bbc4();
    }
    else {
      *(undefined4 *)pwVar6 = u_Trying_CrwEnd_1405cc050._0_4_;
      *(undefined4 *)(pwVar6 + 2) = uVar22;
      *(undefined4 *)(pwVar6 + 4) = uVar9;
      *(undefined4 *)(pwVar6 + 6) = uVar10;
      *(undefined8 *)(pwVar6 + 8) = u_Trying_CrwEnd_1405cc050._16_8_;
      pwVar6[0xc] = u_Trying_CrwEnd_1405cc050[0xc];
    }
    if (*(int *)((longlong)puVar13 + -0xc) < iVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_140008e90(0x80070057);
    }
    *(int *)(puVar13 + -2) = iVar20;
    *(undefined2 *)((longlong)puVar13 + (longlong)iVar11 * 2 + 0x1a) = 0;
    uVar14 = FUN_140040170();
    FUN_140041bc0(uVar14,700,puVar13);
    LOCK();
    piVar1 = (int *)(puVar13 + -1);
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)();
    }
    LOCK();
    plVar3 = plVar4 + -1;
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(plVar4[-3],plVar4 + -3);
    }
    LOCK();
    pWVar17 = pWVar17 + -4;
    iVar18 = *(int *)pWVar17;
    *(int *)pWVar17 = *(int *)pWVar17 + -1;
    UNLOCK();
    if (iVar18 < 2) {
      (*(code *)PTR__guard_dispatch_icall_1405394d0)(*(longlong *)pWVar2,pWVar2);
    }
    *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(param_4 + 2);
    uVar7 = *param_4;
    lVar12 = (ulonglong)uVar7 * param_3 - *(longlong *)(param_1 + 0x10);
    if (((longlong)((ulonglong)uVar7 + lVar12) < 0xffffffff) && (iVar18 = -3, uVar7 - 4 != -3)) {
      do {
        lVar19 = iVar18 + lVar12;
        if ((longlong)(ulonglong)*(uint *)(param_1 + 0x18) <= lVar19) {
          lVar16 = *(longlong *)(param_4 + 2);
          if (iVar18 < 0) {
            lVar16 = param_1 + 0xc;
          }
          uVar8 = *(uint *)(lVar16 + iVar18);
          lVar16 = ((lVar19 - (ulonglong)uVar8) - (ulonglong)*(uint *)(param_1 + 0x18)) + -2;
          if ((((0 < lVar16) && (lVar16 == (lVar16 / 10) * 10)) && (lVar16 / 10 < 0x14)) &&
             (uVar8 != 0)) {
            *(undefined4 *)(param_1 + 0x18) = 0;
            puVar13 = (undefined8 *)FUN_1402e2c84(0x28);
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            *puVar13 = CRecognisedDataOneFileImpl::vftable;
            puVar13[1] = uVar14;
            plVar4 = puVar13 + 2;
            local_68 = plVar4;
            local_60 = puVar13;
            lVar12 = FUN_140009200();
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140008e90(0x80004005);
            }
            lVar12 = (*(code *)PTR__guard_dispatch_icall_1405394d0)(lVar12);
            *plVar4 = lVar12 + 0x18;
            FUN_140008c50(plVar4,L".crw",4);
            puVar13[3] = lVar19 + 4;
            *(undefined1 *)(puVar13 + 4) = 0;
            return puVar13;
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != uVar7 - 4);
    }
  }
  return (undefined8 *)0x0;
}


