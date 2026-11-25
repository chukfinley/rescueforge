
// ===== function at 0x140281a90 name=FUN_140281a90

void FUN_140281a90(undefined8 param_1,undefined8 param_2)

{
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,&DAT_1405cb310,8);
  return;
}



// ===== function at 0x140281f70 name=FUN_140281f70

undefined8 FUN_140281f70(undefined8 param_1,undefined8 param_2)

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
  local_68 = &DAT_1405cb2c8;
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



// ===== function at 0x140281ad0 name=FUN_140281ad0

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



// ===== function at 0x140282040 name=FUN_140282040

void FUN_140282040(undefined8 param_1,undefined8 param_2)

{
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(param_2,&DAT_1405cb388,4);
  return;
}



// ===== function at 0x140282520 name=FUN_140282520

undefined8 FUN_140282520(undefined8 param_1,undefined8 param_2)

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
  local_68 = &DAT_1405cb340;
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


