// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #39, #90
 */

static const TCHAR* T4Editor_EditorVersionName = TEXT("v0.9.8");

static const FName T4Editor_ConstnatTableMapZone = TEXT("MapZone"); // #92 : Int Value
static const FName T4Editor_ConstnatTableTimeTag = TEXT("TimeTag"); // #90 : Float Value

static const FName T4Editor_ConstnatTableCharacterSystemAnimation = TEXT("CharacterSystemAnimation"); // #38
static const FName T4Editor_ConstnatTableCharacterBasicSkillAnimation = TEXT("CharacterBasicSkillAnimation");
static const FName T4Editor_ConstnatTableCharacterParagonSkillAnimation = TEXT("CharacterParagonSkillAnimation"); // #131
static const FName T4Editor_ConstnatTablePropAnimation = TEXT("PropAnimation"); // #126
static const FName T4Editor_ConstnatTableWeaponAnimation = TEXT("WeaponAnimation"); // #107

static const FName T4Editor_ConstnatTableActionPoint = TEXT("ActionPoint"); // #47

static const FName T4Editor_ConstnatTableEquipPoint = TEXT("EquipPoint"); // #72
static const FName T4Editor_ConstnatTableCompositePart = TEXT("CompositePart"); // #71
static const FName T4Editor_ConstnatTableFullBodySkin = TEXT("FullBodySkin"); // #130

static const FName T4Editor_ConstnatTablePlayTagMaterial = TEXT("PlayTagMaterial"); // #74
static const FName T4Editor_ConstnatTablePlayTagAttachment = TEXT("PlayTagAttachment"); // #74
static const FName T4Editor_ConstnatTablePlayTagAction = TEXT("PlayTagAction"); // #74

static const FName T4Editor_ConstnatTableAnimset = TEXT("Animset");  // #73
static const FName T4Editor_ConstnatTableStance = TEXT("Stance"); // #106

static const FName T4Editor_ConstnatTableReaction = TEXT("Reaction"); // #76

static const FName T4Editor_DefaultAssetTypeCategory = FName(TEXT("T4Framework"));

static const FName PersistentLevelName = TEXT("PersistentLevel"); // #91

// #124
static const FName T4Editor_PropertyCategoryConstant = TEXT("Constant"); // #150
static const FName T4Editor_PropertyCategoryCommon = TEXT("Common");
static const FName T4Editor_PropertyCategoryServerOnly = TEXT("ServerOnly");
static const FName T4Editor_PropertyCategoryClientOnly = TEXT("ClientOnly");
static const FName T4Editor_PropertyCategoryEditor = TEXT("Editor");
static const FName T4Editor_PropertyCategoryHide = TEXT("Hide");

static const FName T4Editor_SubDetailCategorySortNames[] = {
	T4Editor_PropertyCategoryConstant,
	T4Editor_PropertyCategoryCommon,
	T4Editor_PropertyCategoryServerOnly,
	T4Editor_PropertyCategoryClientOnly,
	T4Editor_PropertyCategoryEditor,
	T4Editor_PropertyCategoryHide
};
// #124

enum ET4EditorConstantValueType // #92
{
	ConstantValue_Name,
	ConstantValue_Float,
	ConstantValue_Int,
};

struct T4EDITORCOMMON_API FT4EditorConstantDataRow
{
	FT4EditorConstantDataRow()
		: Key(NAME_None)
		, Name(NAME_None)
	{
	}
	FName Key;
	FName Name;
	union 
	{
		float FloatValue;
		float IntValue;
	};
	FString Description;
	int32 SortOrder; // UI
};

class UDataTable;
class T4EDITORCOMMON_API IT4EditorConstantTableManager
{
public:
	virtual ~IT4EditorConstantTableManager() {}

	virtual void Reset() = 0;

	virtual bool LoadTable(
		const FName InTableName,
		const FSoftObjectPath& InTablePath,
		ET4EditorConstantValueType InValueType
	) = 0;

	virtual TArray<FT4EditorConstantDataRow>& GetConstantDatas(const FName InTableName) = 0;
	virtual const FT4EditorConstantDataRow& GetConstantData(const FName InTableName, FName InValueName) = 0; // #71
};

class UObject;
namespace T4EditorCommonConstant
{
	T4EDITORCOMMON_API bool Initialize(); // #115
	T4EDITORCOMMON_API void Finalize(); // #115

	T4EDITORCOMMON_API IT4EditorConstantTableManager* GetTableManager();
}