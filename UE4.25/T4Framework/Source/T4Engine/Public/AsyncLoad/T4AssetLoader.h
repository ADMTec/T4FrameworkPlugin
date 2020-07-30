// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineTypes.h"
#include "Async/AsyncWork.h"

/**
  * #143
 */
class UPrimitiveComponent;
class FT4AssetLoader;
struct T4ENGINE_API FT4AsyncProcessTask : public FNonAbandonableTask
{
	FT4AssetLoader* AssetLoader;
	UPrimitiveComponent* Component;

	FT4AsyncProcessTask(FT4AssetLoader* InAssetLoader, UPrimitiveComponent* InComponent)
		: AssetLoader(InAssetLoader)
		, Component(InComponent)
	{
	}

	/**
	* Loads and hashes the file data. Empties the data if the hash check fails
	*/
	void DoWork();

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FT4AsyncProcessTask, STATGROUP_ThreadPoolAsyncTasks);
	}
};

static const FTAsyncLoadPriority T4Const_AssetLoadPriorityHigh = 5; // #143 : Mesh, NPC BT-Tree(Server)
static const FTAsyncLoadPriority T4Const_AssetLoadPriorityMedium = 3; // #143 : AnimBP, AnimSet
static const FTAsyncLoadPriority T4Const_AssetLoadPriorityLow = 0; // #143 : Etc, default

class UObject;
class FT4AssetHandle;
class T4ENGINE_API FT4AssetLoader
{
public:
	explicit FT4AssetLoader();
	virtual ~FT4AssetLoader();

	virtual void Reset();

	void Load(const FSoftObjectPath& InObjectPath, const TCHAR* InDebugString);
	void Load(
		const FSoftObjectPath& InObjectPath,
		FTAsyncLoadPriority InPriority, // #143 : FTAsyncLoadPriority(int32), 0 == Low < High
		const TCHAR* InDebugString
	);
	void Load(
		const FSoftObjectPath& InObjectPath,
		FTAsyncLoadPriority InPriority, // #143 : FTAsyncLoadPriority(int32), 0 == Low < High
		bool bInAsyncProcess,
		const TCHAR* InDebugString
	);

	bool IsLoadStarted() const { return bLoadStart; }
	bool IsLoadFailed() const;
	bool IsLoadCompleted() const;
	bool IsBinded() const;
	
	void SetBinded();
	bool CheckReset() const;

	UObject* GetLoadedAsset() const;

	virtual void AsyncProcessing(UPrimitiveComponent* InComponent) {}
	
protected:
	bool bLoadStart;
	bool bBindComplated;
	FT4AssetHandle* LoadHandle;

	bool bAsyncProcess; // #143 : AsyncWork 를 통한 비동기 Processs 처리
	FAsyncTask<FT4AsyncProcessTask>* AsyncProcessTask;

	FName DebugToken;
};
