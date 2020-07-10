// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Styling/ISlateStyle.h"

/**
  *
 */
class FSlateStyleSet;
class T4EDITORCOMMON_API FT4EditorStyle
{
public:
	static void Initialize();
	static void Shutdown();
	static void ReloadTextures();
	static const ISlateStyle& Get();
	static FName GetStyleSetName();

private:
	static TSharedRef<FSlateStyleSet> Create();

private:
	static TSharedPtr<FSlateStyleSet> StyleInstance;
};
