// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Animation/AnimInstance.h"
#include "T4AnimInstanceBase.generated.h"

/**
  * https://docs.unrealengine.com/ko-kr/Engine/Animation
 */
class UAnimMontage;
class UBlendSpaceBase;
UCLASS()
class T4ENGINE_API UT4AnimInstanceBase : public UAnimInstance
{
	GENERATED_UCLASS_BODY()

	// Disable compiler-generated deprecation warnings by implementing our own destructor
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	virtual ~UT4AnimInstanceBase();
	PRAGMA_ENABLE_DEPRECATION_WARNINGS

protected:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = Asset, Meta = (AllowPrivateAccess = true))
	TMap<FName, UAnimMontage*> AnimMontages;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = Asset, Meta = (AllowPrivateAccess = true))
	TMap<FName, UBlendSpaceBase*> BlendSpaces;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = Asset, Meta = (AllowPrivateAccess = true))
	TMap<FName, UAnimSequence*> AnimSequences; // #131

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = Asset, Meta = (AllowPrivateAccess = true))
	TMap<FName, float> StateParameters; // #131
};
