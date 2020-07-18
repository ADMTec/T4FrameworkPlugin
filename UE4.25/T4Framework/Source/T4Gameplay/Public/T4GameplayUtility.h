// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameplayTypes.h"

/**
  * #151
 */
namespace T4GameplayUtility
{
	T4GAMEPLAY_API const TCHAR* GetControlModeName(ET4ControlModeType InControlModeType);
	T4GAMEPLAY_API ET4ControlModeType GetControlModeType(const TCHAR* InControlModeName);

#if !UE_BUILD_SHIPPING
	T4GAMEPLAY_API void ResetTestHotKes(); // #150

	T4GAMEPLAY_API void AddTestHotKeyValue(FName InHotKeyName, FName InValue); // #150
	T4GAMEPLAY_API FName GetTestHotKeyValue(FName InHotKeyName); // #150
#endif
}
