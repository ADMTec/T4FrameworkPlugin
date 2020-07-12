// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "Common/T4CommonAssetStructs.h" // #100
#include "ActionPak/T4ActionPakDatas.h"
#include "T4ActionPakAsset.generated.h"

/**
  * #24
 */
struct FT4ActionPakCustomVersion
{
	enum Type
	{
		InitializeVer = 0,

		CommonPropertyNameChanged, // #102

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ASSET_API const static FGuid GUID;

private:
	FT4ActionPakCustomVersion() {}
};

// #24
USTRUCT()
struct T4ASSET_API FT4ActionHeaderInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	ET4ActionDataType ActionDataType;

	UPROPERTY(VisibleAnywhere, Category = Default)
	int32 ActionArrayIndex;

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = Default)
	FName FolderName; // #56
#endif

public:
	FT4ActionHeaderInfo()
		: ActionDataType(ET4ActionDataType::None)
		, ActionArrayIndex(INDEX_NONE)
#if WITH_EDITORONLY_DATA
		, FolderName(NAME_None) // #56
#endif
	{
	}
};

// #56
USTRUCT()
struct T4ASSET_API FT4ActionFolderInfo
{
	GENERATED_USTRUCT_BODY()

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = Default)
	FName ParentFolderName; // #56 : lower win

	UPROPERTY(VisibleAnywhere, Category = Default)
	int32 SortOrder; // #56 : lower win
#endif

public:
	FT4ActionFolderInfo()
#if WITH_EDITOR
		: ParentFolderName(NAME_None)
		, SortOrder(TNumericLimits<int32>::Max())
#endif
	{
	}
};

// #54
USTRUCT()
struct T4ASSET_API FT4ActionCompositeData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = Default)
	TMap<uint32, FT4ActionHeaderInfo> HeaderInfoMap;

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = Default)
	TMap<FName, FT4ActionFolderInfo> FolderInfoMap; // #56 : value = sortorder
#endif

	// #T4_ADD_ACTION_TAG_DATA

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4BranchActionData> BranchActions; // #54

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4MovementActionData> MovementActions; // #132

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4AnimationActionData> AnimationActions;

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4MeshActionData> MeshActions; // #108

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4ParticleActionData> ParticleActions;

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4DecalActionData> DecalActions; // #54

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4ProjectileActionData> ProjectileActions; // #63

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4ReactionActionData> ReactionActions; // #76

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4PlayTagActionData> PlayTagActions; // #81

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4TimeScaleActionData> TimeScaleActions; // ##102

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4CameraWorkActionData> CameraWorkActions; // #58

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4CameraShakeActionData> CameraShakeActions; // #101

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4PostProcessActionData> PostProcessActions; // #100

	UPROPERTY(EditAnywhere, Category = Common)
	TArray<FT4EnvironmentActionData> EnvironmentActions; // #99

public:
	void Reset();

#if WITH_EDITOR
	// #24
	template <class T>
	T* AddChild()
	{
		return static_cast<T*>(NewAndAddAction(
			T::StaticActionType()
		));
	}

	template <class T>
	void CopyAction(
		const FT4ActionDataBase* InSourceAction,
		T* InOutTargetAction
	); // #65

	FT4ActionDataBase* NewAndAddAction(ET4ActionDataType InActionDataType); // #24, #65
	FT4ActionDataBase* CloneAndAddAction(uint32 InSourceHeaderKey); // #65
#endif

	FT4ActionDataBase* GetActionDataBase(uint32 InActionHeaderKey); // #65

private:
#if WITH_EDITOR
	uint32 GetNewHeaderKey() const;
#endif
};

// #60
USTRUCT()
struct T4ASSET_API FT4ActionTestSettings
{
	GENERATED_USTRUCT_BODY()

public:
	
#if WITH_EDITORONLY_DATA
	
	// #T4_ADD_EDITOR_PLAY_TAG
	UPROPERTY(EditAnywhere, Category = Editor)
	FName MapEntitySelected; // #87

	UPROPERTY(EditAnywhere, Category = Editor)
	FName AnimSetSelected; // #73

	UPROPERTY(EditAnywhere, Category = Editor)
	FName StanceSelected; // #106

	UPROPERTY(EditAnywhere, Category = Editor)
	FName WeaponNameID; // #60

	UPROPERTY(EditAnywhere, Category = Editor)
	FName SandbagNameID; // #60

	UPROPERTY(EditAnywhere, Category = Editor)
	bool bAISystemDisabled; // #60

	UPROPERTY(EditAnywhere, Category = Editor)
	bool bSandbagRoleAttacker; // #63

	UPROPERTY(EditAnywhere, Category = Editor)
	bool bSandbagOneHitDie; // #76

	UPROPERTY(EditAnywhere, Category = Editor)
	bool bOverrideSkillData; // #63

	UPROPERTY(EditAnywhere, Category = Editor)
	bool bOverrideEffectData; // #68

	UPROPERTY(EditAnywhere, Category = Editor)
	FName SkillDataNameID; // #60

	UPROPERTY(EditAnywhere, Category = Editor)
	FName EffectDataNameID; // #60

	UPROPERTY(EditAnywhere, Category = Editor)
	FName DieReactionNameID; // #76

#endif

public:
	FT4ActionTestSettings()
#if WITH_EDITOR
		: MapEntitySelected(NAME_None) // #87
		, AnimSetSelected(NAME_None) // #73
		, StanceSelected(NAME_None) // #106
		, WeaponNameID(NAME_None) // #60
		, SandbagNameID(NAME_None) // #60
		, bAISystemDisabled(true) // #60
		, bSandbagRoleAttacker(false) // #63
		, bSandbagOneHitDie(false) // #76
		, bOverrideSkillData(false) // #63
		, bOverrideEffectData(false) // #68
		, SkillDataNameID(NAME_None) // #60
		, EffectDataNameID(NAME_None) // #60
		, DieReactionNameID(NAME_None) // #76
#endif
	{
	}
};

class UTexture2D;
class UT4EntityAsset;

UCLASS(ClassGroup = T4Framework, Category = "T4Framework")
class T4ASSET_API UT4ActionPakAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	void Serialize(FArchive& Ar) override;
	void PostLoad() override;
#if WITH_EDITOR
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

#if WITH_EDITOR
	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }
#endif // WITH_EDITOR

public:
	UPROPERTY(EditAnywhere, Category = Common)
	FT4ActionCompositeData CompositeData;

	UPROPERTY(EditAnywhere, Category = Common)
	float TotalPlayTimeSec; // #56

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor, AssetRegistrySearchable)
	TSoftObjectPtr<UT4EntityAsset> PreviewEntityAsset;

	UPROPERTY(EditAnywhere, Category = Editor)
	FT4ActionTestSettings TestSettings; // #60

	UPROPERTY(EditAnywhere, Category = Editor)
	FT4EditorTestAutomationData TestAutomation; // #100

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
