// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"

/**
  *
 */

// Common

static const FName T4Const_DefaultName = TEXT("Default");

static const FName T4Const_DefaultActionPointName = TEXT("Root"); // #63

// #74 : Entity

static const FName T4Const_DefaultFullBodySkinName = T4Const_DefaultName; // #130
static const FName T4Const_DefaultPlayTagName = T4Const_DefaultName;

static const FName T4Const_RootActorComponentName = TEXT("Root"); // #162
static const FName T4Const_DefaultActorComponentName = T4Const_DefaultName; // #162


// #73, #106 : AnimSet

static const FName T4Const_DefaultAnimSetName = T4Const_DefaultName;

static const FName T4Const_DefaultStanceName = T4Const_DefaultName;
static const FName T4Const_CommonStanceName = TEXT("Common"); // #161 : 모두 적용, 주로 모든 스탠스에 적용될 때 사용
static const FName T4Const_CombatStanceName = TEXT("Combat"); // #108
static const FName T4Const_NonCombatStanceName = TEXT("NonCombat"); // #135
static const FName T4Const_SprintStanceName = TEXT("Sprint"); // #131
static const FName T4Const_CrouchStanceName = TEXT("Crouch"); // #142


// #78

static const float T4Const_ObjectWorldEnterTimeSec = 1.0f;
static const float T4Const_ObjectWorldLeaveTimeSec = 1.0f;


// #39 : AnimSet

static const float T4Const_DefaultAnimBlendTimeSec = 0.1f;

static const FName T4Const_ItemBlendSpaceName = TEXT("Item_Default"); // #107

static const FName T4Const_AdditiveAnimMontageName = TEXT("Additive"); // #138 : System UI 를 사용하고, 내부적으로만 사용되는 Layer (Hit 류)
static const FName T4Const_SkillAnimMontageName = TEXT("Skill");
static const FName T4Const_SystemAnimMontageName = TEXT("System"); // #131

static const FName T4Const_AdditiveAnimMontageSlotName = TEXT("T4AdditiveSlot"); // #138
static const FName T4Const_SkillAnimMontageSlotName = TEXT("T4SkillSlot"); // #39, #107
static const FName T4Const_SystemAnimMontageSlotName = TEXT("T4DefaultSlot"); // #131
