// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"

/**
  * #114
 */
enum ET4GameplayConstantTable
{
	Races,

	EGB_Const_Nums,
};

struct T4GAMEPLAY_API FT4GameplayConstantDataRow
{
	FT4GameplayConstantDataRow()
		: Name(NAME_None)
	{
	}
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
class T4GAMEPLAY_API IT4GameplayConstantTable
{
public:
	virtual ~IT4GameplayConstantTable() {}

	virtual void Reset() = 0;

	virtual bool LoadEngineTable(ET4GameplayConstantTable InTable, const FSoftObjectPath& InTablePath) = 0; // #90

	virtual TArray<FT4GameplayConstantDataRow>& GetConstantDatas(ET4GameplayConstantTable InTable) = 0;
	virtual const FT4GameplayConstantDataRow& GetConstantData(ET4GameplayConstantTable InTable, FName InName) = 0; // #71
};

class UObject;
namespace T4GameplayConstant
{
	T4GAMEPLAY_API bool Initialize();
	T4GAMEPLAY_API void Finalize();

	T4GAMEPLAY_API IT4GameplayConstantTable* GetTableManager();
}