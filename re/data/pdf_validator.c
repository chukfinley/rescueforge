
// ===== function at 0x14028bff0 name=FUN_14028bff0

void FUN_14028bff0(undefined8 param_1,undefined8 param_2)

{
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,&DAT_1405cb818,4);
  return;
}



// ===== function at 0x14028c030 name=FUN_14028c030

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



// ===== function at 0x1402872a0 name=FUN_1402872a0

/* WARNING: Switch with 1 destination removed at 0x000140287327 */

void FUN_1402872a0(undefined8 param_1,longlong *param_2)

{
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,&DAT_1405cb7bc,2);
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,&DAT_1405cb7b8,2);
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,&DAT_1405cb7b4,2);
                    /* WARNING: Could not recover jumptable at 0x0001404d5a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,&DAT_1405cb7b0,2);
  return;
}



// ===== function at 0x140287ac0 name=FUN_140287ac0

undefined8 FUN_140287ac0(undefined8 param_1,undefined8 param_2)

{
  undefined *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [5];
  
  local_60 = 0xfffffffffffffffe;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_58 = (longlong *)FUN_140018da0(0x10);
  *local_58 = 0;
  local_58[1] = 0;
  *local_58 = (longlong)&local_58;
  local_68 = &DAT_1405cb7e8;
  FUN_14020be60(&local_58,&local_68);
  FUN_14020c0d0(local_30,&local_58);
  FUN_1401a6480(&local_58);
  _free_base(local_58,0x10);
  local_58 = (longlong *)0x0;
  FUN_14020c170(local_30,param_2);
  FUN_1401a6480(local_30);
  _free_base(local_30[0],0x10);
  return param_2;
}


