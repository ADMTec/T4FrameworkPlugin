// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4AssetConstants.h"
#include "Animset/T4AnimsetTypes.h" // #131
#include "T4AnimsetAsset.generated.h"

/**
  * #39
 */
struct FT4AnimsetCustomVersion
{
	enum Type
	{
		InitializeVer = 0,

		CommonPropertyNameChanged, // #124
		CommonPropertyNameV2Changed, // #126

		SequenceAndStateLayerAdded, // #131
		StanceNameAdded, // #131

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ASSET_API const static FGuid GUID;

private:
	FT4AnimsetCustomVersion() {}
};

class UTexture2D;
class USkeleton;
class UAnimSequence;
class UAnimMontage;
class UBlendSpaceBase;
class UT4EntityAsset;

USTRUCT()
struct T4ASSET_API FT4AnimsetAnimSequenceData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimsetAnimSequenceData()
		: Name(NAME_None)
		, bAdditiveAnimType(false) // #138
		, DurationSec(0.0f)
#if WITH_EDITORONLY_DATA
		, TagName(NAME_None) // #154 : 색인을 위한 프로퍼티 (SystemLayer 의 StanceToStance Transform 에서 사용함)
		, bUseEndLoop(false) // #135 : System 의 Death 류 사용, End Looping 추가 (시퀀스 끝에 루핑 Section 을 추가해준다.)
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (Name == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4AnimsetAnimSequenceData& InRhs) const
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
	FName TagName; // #154 : 색인을 위한 프로퍼티 (SystemLayer 의 StanceToStance Transform 에서 사용함)

	UPROPERTY(EditAnywhere, Category = Editor)
	bool bUseEndLoop; // #135 : System 의 Death 류 사용, End Looping 추가 (시퀀스 끝에 루핑 Section 을 추가해준다.)
#endif
};

USTRUCT()
struct T4ASSET_API FT4AnimsetBlendSpaceData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimsetBlendSpaceData()
		: Name(NAME_None)
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (Name == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4AnimsetBlendSpaceData& InRhs) const
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
struct T4ASSET_API FT4AnimsetSkillLayerData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimsetSkillLayerData()
		: bAnimMontageAutoGen(true)
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	bool bAnimMontageAutoGen; // #69

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UAnimMontage> AnimMontageAsset; // #69

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4AnimsetAnimSequenceData> AnimSequenceArray;
};

// #131
USTRUCT()
struct T4ASSET_API FT4AnimsetAnimSystemData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimsetAnimSystemData()
		: StanceName(NAME_None)
#if WITH_EDITOR
		, bEditorShowNotSetProperty(false)
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (StanceName == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4AnimsetAnimSystemData& InRhs) const
	{
		return (StanceName == InRhs.StanceName) ? true : false;
	}

	// FT4AnimSetDataLoader::ProcessPre() // #111

	UPROPERTY(VisibleAnywhere, Category = Common)
	FName StanceName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4AnimsetAnimSequenceData> AnimSequenceArray;

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = Hide)
	bool bEditorShowNotSetProperty;
#endif
};

// #131
USTRUCT()
struct T4ASSET_API FT4AnimsetSystemLayerData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimsetSystemLayerData()
	{
	}

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UAnimMontage> SystemAnimMontageAsset; // #69

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UAnimMontage> AdditiveAnimMontageAsset; // #138

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4AnimsetAnimSystemData> AnimSystemDataArray;
#endif
};

// #131
USTRUCT()
struct T4ASSET_API FT4AnimsetAnimStateData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimsetAnimStateData()
		: StanceName(NAME_None)
#if WITH_EDITOR
		, bEditorShowNotSetProperty(false)
#endif
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (StanceName == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4AnimsetAnimStateData& InRhs) const
	{
		return (StanceName == InRhs.StanceName) ? true : false;
	}

	// FT4AnimSetDataLoader::ProcessPre() // #111

	UPROPERTY(VisibleAnywhere, Category = Default)
	FName StanceName;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4AnimsetAnimSequenceData> AnimSequenceArray;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TArray<FT4AnimsetBlendSpaceData> BlendSpaceArray;

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
	TArray<FT4AnimsetAnimStateData> AnimStateDataArray;
};

// #111
class UT4WeaponEntityAsset;
USTRUCT()
struct T4ASSET_API FT4AnimsetTestSettings
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimsetTestSettings()
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
class T4ASSET_API UT4AnimsetAsset : public UObject
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
	ET4AnimsetTemplate AnimsetTemplate; // #131

	// CustomizeSkillLayerDetails

	UPROPERTY(EditAnywhere, Category = SkillLayer)
	FT4AnimsetSkillLayerData SkillLayerData; // #131

	// CustomizeSystemLayerDetails

	UPROPERTY(EditAnywhere, Category = StateLayer)
	FT4AnimsetSystemLayerData SystemLayerData; // #131

	// CustomizeStateLayerDetails

	UPROPERTY(EditAnywhere, Category = StateLayer)
	FT4AnimSetStateLayerData StateLayerData; // #131

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image

	UPROPERTY(EditAnywhere, Category = Editor)
	FT4AnimsetTestSettings TestSettings; // #111 : 에디터 세팅 옵션
#endif

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
