// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"

#include "T4GameDBTypes.h" // #48

#include "Engine/DataTable.h"

#include "T4TableRowBase.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
USTRUCT()
struct FT4TableRowBase : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(Transient, VisibleAnywhere, Category = Constant)
	ET4GameDBType DBType;

	UPROPERTY(Transient, VisibleAnywhere, Category = Constant)
	FName DBKeyName;

	UPROPERTY(EditAnywhere, Category= Editor)
	FString Description;

	UPROPERTY(EditAnywhere, Category = Editor)
	bool bPinned; // #142

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName ParentRowName; // #122

	UPROPERTY(VisibleAnywhere, Category = Hide)
	FName FolderName; // #122
#endif

public:
	FT4TableRowBase()
#if WITH_EDITORONLY_DATA
		: DBType(ET4GameDBType::Nums)
		, DBKeyName(NAME_None)
		, bPinned(true) // #142
		, ParentRowName(NAME_None) // #122
		, FolderName(NAME_None) // #122
#endif
	{
	}
};
