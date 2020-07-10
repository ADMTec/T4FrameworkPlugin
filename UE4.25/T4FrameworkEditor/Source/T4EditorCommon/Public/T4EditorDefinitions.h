// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  *
 */
static const FName T4Editor_DefaultAssetTypeCategory = FName(TEXT("T4Framework"));

static const FName PersistentLevelName = TEXT("PersistentLevel"); // #91

// #124
static const FName T4Editor_PropertyCategoryCommon = TEXT("Common");
static const FName T4Editor_PropertyCategoryServerOnly = TEXT("ServerOnly");
static const FName T4Editor_PropertyCategoryClientOnly = TEXT("ClientOnly");
static const FName T4Editor_PropertyCategoryEditor = TEXT("Editor");
static const FName T4Editor_PropertyCategoryHide = TEXT("Hide");

static const FName T4Editor_SubDetailCategorySortNames[] = {
	T4Editor_PropertyCategoryCommon,
	T4Editor_PropertyCategoryServerOnly,
	T4Editor_PropertyCategoryClientOnly,
	T4Editor_PropertyCategoryEditor,
	T4Editor_PropertyCategoryHide
};
// #124