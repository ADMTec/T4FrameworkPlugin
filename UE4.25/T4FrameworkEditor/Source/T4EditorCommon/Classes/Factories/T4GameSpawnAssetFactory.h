// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "T4GameSpawnAssetFactory.generated.h"

/**
  * #118
 */
UCLASS()
class T4EDITORCOMMON_API UT4GameSpawnAssetFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

protected:
	bool IsMacroFactory() const { return false; }

public:
	UObject* FactoryCreateNew(
		UClass* Class,
		UObject* InParent,
		FName Name,
		EObjectFlags Flags,
		UObject* Context,
		FFeedbackContext* Warn
	) override;
};