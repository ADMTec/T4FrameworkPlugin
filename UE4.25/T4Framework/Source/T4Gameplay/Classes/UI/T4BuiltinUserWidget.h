// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "Blueprint/UserWidget.h"
#include "T4BuiltinUserWidget.generated.h"


/**
  * #150
 */
UCLASS()
class UT4BuiltinUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual bool Initialize() override;
	virtual void BeginDestroy() override;
};
