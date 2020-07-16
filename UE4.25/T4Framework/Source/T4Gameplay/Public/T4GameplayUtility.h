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
}
