// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineTypes.h"
#include "UObject/ObjectMacros.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "T4AnimNotify_Equipment.generated.h"

/**
  * #111 : refer AnimNotify_PlayParticleEffect.h
 */
class UAnimSequenceBase;
class USkeletalMeshComponent;
UCLASS(const, hidecategories=Object, collapsecategories, meta=(DisplayName="T4Equipment"))
class T4ENGINE_API UT4AnimNotify_Equipment : public UAnimNotify
{
	GENERATED_BODY()

public:
	UT4AnimNotify_Equipment();

	// Begin UAnimNotify interface
	virtual FString GetNotifyName_Implementation() const override;
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
#if WITH_EDITOR
	virtual void ValidateAssociatedAssets() override;
#endif
	// End UAnimNotify interface

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AnimNotify")
	ET4EquipmentType EquipmentType;
};
