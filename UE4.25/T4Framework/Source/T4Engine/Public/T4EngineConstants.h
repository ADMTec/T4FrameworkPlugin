// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"

/**
  * #39, #90
 */
enum ET4EngineConstantTable
{
    // Engine
    Engine_Start,

    // {

		MapZone = Engine_Start, // #92 : Int Value
        TimeTag, // #90 : Float Value

    // }

	Engine_End,

#if WITH_EDITOR

    // Editor only
    Editor_Start = Engine_End,

    // {

		CharacterSystemAnimation = Editor_Start, // #38
        CharacterBasicSkillAnimation,
		CharacterParagonSkillAnimation, // #131
		PropAnimation, // #126
		WeaponAnimation, // #107

        ActionPoint, // #47

        EquipPoint, // #72
        CompositePart, // #71
		FullBodySkin, // #130

		PlayTagMaterial, // #74
		PlayTagAttachment, // #74
		PlayTagAction, // #74

        Stance, // #73
		Posture, // #106

        Reaction, // #76

    // }

    Editor_End,

	EConst_Nums = Editor_End

#else

	EConst_Nums = Engine_End

#endif
};

struct T4ENGINE_API FT4ConstantDataRow
{
	FT4ConstantDataRow()
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
#if WITH_EDITOR
	FString Description;
	int32 SortOrder; // UI
#endif
};

class UDataTable;
class T4ENGINE_API IT4ConstantTableManager
{
public:
	virtual ~IT4ConstantTableManager() {}

	virtual void Reset() = 0;

	virtual bool LoadEngineTable(ET4EngineConstantTable InTable, const FSoftObjectPath& InTablePath) = 0; // #90

#if WITH_EDITOR
	virtual bool LoadEditorTable(ET4EngineConstantTable InTable, const FSoftObjectPath& InTablePath) = 0;
#endif

	virtual TArray<FT4ConstantDataRow>& GetConstantDatas(ET4EngineConstantTable InTable) = 0;
	virtual const FT4ConstantDataRow& GetConstantData(ET4EngineConstantTable InTable, FName InName) = 0; // #71
};

class UObject;
namespace T4EngineConstant
{
	T4ENGINE_API bool Initialize(); // #115 : TODO Preloading
	T4ENGINE_API void Finalize(); // #115 : TODO Preloading

	T4ENGINE_API UObject* GetMPCGlobalObject(); // #115
	T4ENGINE_API UObject* GetMaterialPostProcessOutlinerObject(); // #115
	
	// MPC Parameter
	T4ENGINE_API FName GetMPCGlobalOutlineColorName(); // #115

	// Normal Material Parameter
	T4ENGINE_API FName GetMaterialParameterOpacityName(); // #78, #108

	T4ENGINE_API float GetWorldTimeHoursPerDay();

	T4ENGINE_API IT4ConstantTableManager* GetTableManager();
}