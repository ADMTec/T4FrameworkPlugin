// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "T4EditorConstantDataTable.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
USTRUCT()
struct T4EDITORCOMMON_API FT4EditorConstantNameTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category=Attribute)
	FName Name;

	UPROPERTY(EditAnywhere, Category=Attribute)
	FString Description; 
};

// #90
USTRUCT()
struct T4EDITORCOMMON_API FT4EditorConstantFloatValueTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category=Attribute)
	FName Name;

	UPROPERTY(EditAnywhere, Category=Attribute)
	float Value; 

	UPROPERTY(EditAnywhere, Category=Attribute)
	FString Description; 
};

// #90
USTRUCT()
struct T4EDITORCOMMON_API FT4EditorConstantIntValueTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category=Attribute)
	FName Name;

	UPROPERTY(EditAnywhere, Category=Attribute)
	int32 Value; 

	UPROPERTY(EditAnywhere, Category=Attribute)
	FString Description; 
};

USTRUCT()
struct T4EDITORCOMMON_API FT4EditorConstantMasterTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category= ConstantTable)
	TSoftObjectPtr<UDataTable> MapZoneConstantDataTable; // #92

	UPROPERTY(EditAnywhere, Category= ConstantTable)
	TSoftObjectPtr<UDataTable> TimeTagConstantDataTable; // #90

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> CharacterSystemAnimationConstantDataTable; // #39

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> CharacterBasicSkillAnimationConstantDataTable; // #39

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> CharacterParagonSkillAnimationConstantDataTable; // #131

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> PropAnimationConstantDataTable; // #126

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> WeaponAnimationConstantDataTable; // #107

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> ActionPointConstantDataTable; // #57

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> EquipPointConstantDataTable; // #72

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> CompositePartConstantDataTable; // #71

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> FullBodySkinConstantDataTable; // #130

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> PlayTagMaterialConstantDataTable; // #74

	UPROPERTY(EditAnywhere, Category = ConstantTable)
	TSoftObjectPtr<UDataTable> PlayTagAttachmentConstantDataTable; // #74

	UPROPERTY(EditAnywhere, Category = ConstantTable)
	TSoftObjectPtr<UDataTable> PlayTagActionConstantDataTable; // #74

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> AnimSetConstantDataTable; // #73

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> StanceConstantDataTable; // #106

	UPROPERTY(EditAnywhere, Category=ConstantTable)
	TSoftObjectPtr<UDataTable> ReactionConstantDataTable; // #76
};