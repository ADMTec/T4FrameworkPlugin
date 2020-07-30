// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4AssetLoader.h" // #143

/**
  * http://api.unrealengine.com/KOR/Programming/Assets/AsyncLoading/
 */
class USkeletalMesh;
class UMaterialInterface;
class UDecalComponent;
class UAnimMontage;
class UAnimSequence;
class UBlendSpaceBase;
class UPhysicsAsset;
class UParticleSystem;
class USkeletalMeshComponent;
class USkinnedMeshComponent;
class USkeletalMeshComponent;
class UParticleSystemComponent;
class UT4ActionPackAsset;
class UT4AnimsetAsset;

class T4ENGINE_API FT4MaterialLoader : public FT4AssetLoader // #54
{
public:
	explicit FT4MaterialLoader() {}
	virtual ~FT4MaterialLoader() { Reset(); }

	bool Process(UDecalComponent* InDecalComponent);

	UMaterialInterface* GetMaterialInterface();
};

class T4ENGINE_API FT4AnimBlueprintClassLoader : public FT4AssetLoader
{
public:
	explicit FT4AnimBlueprintClassLoader() {}
	virtual ~FT4AnimBlueprintClassLoader() { Reset(); }

	bool Process(USkeletalMeshComponent* InMeshComponent);
};

class T4ENGINE_API FT4AnimMontageLoader : public FT4AssetLoader
{
public:
	explicit FT4AnimMontageLoader() {}
	virtual ~FT4AnimMontageLoader() { Reset(); }

	UAnimMontage* GetAnimMontage() const;
};

class T4ENGINE_API FT4AnimSequenceLoader : public FT4AssetLoader // #131
{
public:
	explicit FT4AnimSequenceLoader() {}
	virtual ~FT4AnimSequenceLoader() { Reset(); }

	UAnimSequence* GetAnimSequence() const;
};

class T4ENGINE_API FT4BlendSpaceLoader : public FT4AssetLoader
{
public:
	explicit FT4BlendSpaceLoader() {}
	virtual ~FT4BlendSpaceLoader() { Reset(); }

	UBlendSpaceBase* GetBlendSpace() const;
};

// #76
class T4ENGINE_API FT4PhysicsAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4PhysicsAssetLoader() {}
	virtual ~FT4PhysicsAssetLoader() { Reset(); }

	bool Process(USkeletalMeshComponent* InMeshComponent);

	UPhysicsAsset* GetPhysicsAsset();
};

class T4ENGINE_API FT4StaticMeshLoader : public FT4AssetLoader
{
public:
	explicit FT4StaticMeshLoader() {}
	virtual ~FT4StaticMeshLoader() { Reset(); }

	bool Process(UStaticMeshComponent* InMeshComponent);
};

class T4ENGINE_API FT4SkeletalMeshLoader : public FT4AssetLoader
{
public:
	explicit FT4SkeletalMeshLoader() {}
	virtual ~FT4SkeletalMeshLoader() { Reset(); }

	virtual bool Process(USkinnedMeshComponent* InMeshComponent);

	void AsyncProcessing(UPrimitiveComponent* InComponent) override; // #143

private:
	bool ProcessInternal(USkinnedMeshComponent* InMeshComponent);

private:
	TWeakObjectPtr<USkeletalMesh> SkeletalMeshPtr;
};

class T4ENGINE_API FT4ParticleSystemLoader : public FT4AssetLoader
{
public:
	explicit FT4ParticleSystemLoader() {}
	virtual ~FT4ParticleSystemLoader() { Reset(); }

	bool Process(UParticleSystemComponent* InParticleSystemComponent);

	UParticleSystem* GetParticleSystem(); // #56
};

// #24
class T4ENGINE_API FT4ActionPackAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4ActionPackAssetLoader() {}
	virtual ~FT4ActionPackAssetLoader() { Reset(); }

	UT4ActionPackAsset* GetActionPackAsset() const;
};

// #39
class T4ENGINE_API FT4AnimsetAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4AnimsetAssetLoader() {}
	virtual ~FT4AnimsetAssetLoader() { Reset(); }

	bool Process();

	UT4AnimsetAsset* GetAnimsetAsset() const;
};
