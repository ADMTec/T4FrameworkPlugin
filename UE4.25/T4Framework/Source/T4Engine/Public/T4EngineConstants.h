// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"

/**
  * #39, #90
 */
class UObject;
namespace T4EngineConstant
{
	T4ENGINE_API bool Initialize(); // #115 : TODO Preloading
	T4ENGINE_API void Finalize(); // #115 : TODO Preloading

	T4ENGINE_API UObject* GetMPCGlobalObject(); // #115
	T4ENGINE_API UObject* GetMaterialPostProcessOutlinerObject(); // #115
	
	// MPC Parameter
	T4ENGINE_API FName GetMPCGlobalOutlineColorName(); // #115

	// Normal Material Parameter
	T4ENGINE_API FName GetMaterialParameterOpacityName(); // #78, #108
}