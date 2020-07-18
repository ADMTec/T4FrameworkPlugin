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
