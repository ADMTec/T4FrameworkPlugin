// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Asset/Classes/Data/T4PathSegmentData.h"
#include "T4EditorPathSegmentController.generated.h"

/**
  * #155
 */
UCLASS()
class T4EDITORCOMMON_API UT4EditorPathSegmentController : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	
	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }

public:

private:
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
};
