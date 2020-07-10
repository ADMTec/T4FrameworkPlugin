// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"

/**
  * #114
 */
enum ET4GameConstantTable
{
	Races,

	EGB_Const_Nums,
};

struct T4GAMEPLAY_API FT4GameConstantDataRow
{
	FT4GameConstantDataRow()
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
class T4GAMEPLAY_API IT4GameConstantTableManager
{
public:
	virtual ~IT4GameConstantTableManager() {}

	virtual void Reset() = 0;

	virtual bool LoadEngineTable(ET4GameConstantTable InTable, const FSoftObjectPath& InTablePath) = 0; // #90

	virtual TArray<FT4GameConstantDataRow>& GetConstantDatas(ET4GameConstantTable InTable) = 0;
	virtual const FT4GameConstantDataRow& GetConstantData(ET4GameConstantTable InTable, FName InName) = 0; // #71
};

class UObject;
namespace T4GameConstant
{
	T4GAMEPLAY_API bool Initialize();
	T4GAMEPLAY_API void Finalize();

	T4GAMEPLAY_API IT4GameConstantTableManager* GetTableManager();
}