// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Framework/Public/T4FrameworkVersion.h"

/**
  * #39, #90
 */
static const FName T4Editor_ConstantTableMapZone = TEXT("MapZone"); // #92 : Int Value
static const FName T4Editor_ConstantTableTimeTag = TEXT("TimeTag"); // #90 : Float Value

static const FName T4Editor_ConstantTableCharacterSystemAnimation = TEXT("CharacterSystemAnimation"); // #38
static const FName T4Editor_ConstantTableCharacterBasicSkillAnimation = TEXT("CharacterBasicSkillAnimation");
static const FName T4Editor_ConstantTableCharacterParagonSkillAnimation = TEXT("CharacterParagonSkillAnimation"); // #131
static const FName T4Editor_ConstantTablePropAnimation = TEXT("PropAnimation"); // #126
static const FName T4Editor_ConstantTableWeaponAnimation = TEXT("WeaponAnimation"); // #107

static const FName T4Editor_ConstantTableActionPoint = TEXT("ActionPoint"); // #47

static const FName T4Editor_ConstantTableEquipPoint = TEXT("EquipPoint"); // #72
static const FName T4Editor_ConstantTableCompositePart = TEXT("CompositePart"); // #71
static const FName T4Editor_ConstantTableFullBodySkin = TEXT("FullBodySkin"); // #130

static const FName T4Editor_ConstantTablePlayTagMaterial = TEXT("PlayTagMaterial"); // #74
static const FName T4Editor_ConstantTablePlayTagAttachment = TEXT("PlayTagAttachment"); // #74
static const FName T4Editor_ConstantTablePlayTagAction = TEXT("PlayTagAction"); // #74

static const FName T4Editor_ConstantTableAnimset = TEXT("Animset");  // #73
static const FName T4Editor_ConstantTableStance = TEXT("Stance"); // #106

static const FName T4Editor_ConstantTableReaction = TEXT("Reaction"); // #76

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
		const TSoftObjectPtr<UDataTable>& InDataTablePtr,
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