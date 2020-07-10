// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4AssetDefinitions.h"
#include "AnimSet/T4AnimSetTypes.h" // #131
#include "T4AnimSetAsset.generated.h"

/**
  * #39
 */
struct FT4AnimSetCustomVersion
{
	enum Type
	{
		InitializeVer = 0,

		CommonPropertyNameChanged, // #124
		CommonPropertyNameV2Changed, // #126

		SequenceAndStateLayerAdded, // #131
		PostureNameAdded, // #131

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ASSET_API const static FGuid GUID;

private:
	FT4AnimSetCustomVersion() {}
};

class UTexture2D;
class USkeleton;
class UAnimSequence;
class UAnimMontage;
class UBlendSpaceBase;
class UT4EntityAsset;

USTRUCT()
struct T4ASSET_API FT4AnimSetAnimSequenceData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSetAnimSequenceData()
		: Name(NAME_None)
		, bAdditiveAnimType(false) // #138
		, DurationSec(0.0f)
#if WITH_EDITORONLY_DATA
		, bUseEndLoop(false) // #135 : System 의 Death 류 사용, End Looping 추가 (시퀀스 끝에 루핑 Section 을 추가해준다.)
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (Name == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4AnimSetAnimSequenceData& InRhs) const
	{
		return (Name == InRhs.Name) ? true : false;
	}

	UPROPERTY(VisibleAnywhere, Category = Common)
	FName Name;

	UPROPERTY(VisibleAnywhere, Category = Common)
	bool bAdditiveAnimType; // #138 : Local Space Base

	UPROPERTY(VisibleAnywhere, Category = Common)
	float DurationSec;

	UPROPERTY(EditAnywhere, Category = Editor)
	TSoftObjectPtr<UAnimSequence> AnimSequenceAsset;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	bool bUseEndLoop; // #135 : System 의 Death 류 사용, End Looping 추가 (시퀀스 끝에 루핑 Section 을 추가해준다.)
#endif
};

USTRUCT()
struct T4ASSET_API FT4AnimSetBlendSpaceData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSetBlendSpaceData()
		: Name(NAME_None)
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (Name == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4AnimSetBlendSpaceData& InRhs) const
	{
		return (Name == InRhs.Name) ? true : false;
	}

	UPROPERTY(VisibleAnywhere, Category = Common)
	FName Name;

	UPROPERTY(VisibleAnywhere, Category = Common)
	TSoftObjectPtr<UBlendSpaceBase> BlendSpaceAsset;
};

// #131
USTRUCT()
struct T4ASSET_API FT4AnimSetSkillLayerData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSetSkillLayerData()
		: bAnimMontageAutoGen(true)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bAnimMontageAutoGen; // #69

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UAnimMontage> AnimMontageAsset; // #69

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4AnimSetAnimSequenceData> AnimSequenceArray;
};

// #131
USTRUCT()
struct T4ASSET_API FT4AnimSetAnimSystemData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSetAnimSystemData()
		: PostureName(NAME_None)
#if WITH_EDITOR
		, bEditorShowNotSetProperty(false)
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (PostureName == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4AnimSetAnimSystemData& InRhs) const
	{
		return (PostureName == InRhs.PostureName) ? true : false;
	}

	// FT4StanceDataLoader::ProcessPre() // #111

	UPROPERTY(VisibleAnywhere, Category = Common)
	FName PostureName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4AnimSetAnimSequenceData> AnimSequenceArray;

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = Hide)
	bool bEditorShowNotSetProperty;
#endif
};

// #131
USTRUCT()
struct T4ASSET_API FT4AnimSetSystemLayerData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSetSystemLayerData()
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UAnimMontage> SystemAnimMontageAsset; // #69

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UAnimMontage> AdditiveAnimMontageAsset; // #138

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4AnimSetAnimSystemData> AnimSystemDataArray;
#endif
};

// #131
USTRUCT()
struct T4ASSET_API FT4AnimSetAnimStateData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSetAnimStateData()
		: PostureName(NAME_None)
#if WITH_EDITOR
		, bEditorShowNotSetProperty(false)
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (PostureName == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4AnimSetAnimStateData& InRhs) const
	{
		return (PostureName == InRhs.PostureName) ? true : false;
	}

	// FT4StanceDataLoader::ProcessPre() // #111

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName PostureName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4AnimSetAnimSequenceData> AnimSequenceArray;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4AnimSetBlendSpaceData> BlendSpaceArray;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TMap<FName, float> StateParameterMap; // #131

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = Hide)
	bool bEditorShowNotSetProperty;
#endif
};

// #131
USTRUCT()
struct T4ASSET_API FT4AnimSetStateLayerData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSetStateLayerData()
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4AnimSetAnimStateData> AnimStateDataArray;
};

// #111
class UT4WeaponEntityAsset;
USTRUCT()
struct T4ASSET_API FT4AnimSetTestSettings
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSetTestSettings()
	{
		Reset();
	}

	void Reset()
	{
#if WITH_EDITOR
		bAutoMounting = false; // #111
#endif
	}

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Testing)
	TSoftObjectPtr<UT4EntityAsset> PreviewEntityAsset;

	UPROPERTY(EditAnywhere, Category = Testing)
	TSoftObjectPtr<UT4WeaponEntityAsset> EquipWeaponEntityAsset; // #111

	UPROPERTY(EditAnywhere, Category = Testing)
	bool bAutoMounting; // #111
#endif
};

UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4AnimSetAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

#if WITH_EDITOR
	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }

#endif // WITH_EDITOR

public:
	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<USkeleton> SkeletonAsset;

	UPROPERTY(EditAnywhere, Category = Common)
	ET4AnimSetTemplate AnimSetTemplate; // #131

	// CustomizeSkillLayerDetails

	UPROPERTY(EditAnywhere, Category = SkillLayer)
	FT4AnimSetSkillLayerData SkillLayerData; // #131

	// CustomizeSystemLayerDetails

	UPROPERTY(EditAnywhere, Category = StateLayer)
	FT4AnimSetSystemLayerData SystemLayerData; // #131

	// CustomizeStateLayerDetails

	UPROPERTY(EditAnywhere, Category = StateLayer)
	FT4AnimSetStateLayerData StateLayerData; // #131

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image

	UPROPERTY(EditAnywhere, Category = Editor)
	FT4AnimSetTestSettings TestSettings; // #111 : 에디터 세팅 옵션
#endif

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
