// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Engine/DataTable.h"
#include "T4ConstantDataTable.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
USTRUCT()
struct FT4ConstantNameTableRow : public FTableRowBase
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
struct FT4ConstantFloatValueTableRow : public FTableRowBase
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
struct FT4ConstantIntValueTableRow : public FTableRowBase
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
