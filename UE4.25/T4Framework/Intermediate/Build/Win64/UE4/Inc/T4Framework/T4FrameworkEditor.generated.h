// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4FRAMEWORK_T4FrameworkEditor_generated_h
#error "T4FrameworkEditor.generated.h already included, missing '#pragma once' in T4FrameworkEditor.h"
#endif
#define T4FRAMEWORK_T4FrameworkEditor_generated_h

#define HostProject_Plugins_T4Framework_Source_T4Framework_Public_T4FrameworkEditor_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4EditorEffectDataInfo_Statics; \
	T4FRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<struct FT4EditorEffectDataInfo>();

#define HostProject_Plugins_T4Framework_Source_T4Framework_Public_T4FrameworkEditor_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4EditorSkillDataInfo_Statics; \
	T4FRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<struct FT4EditorSkillDataInfo>();

#define HostProject_Plugins_T4Framework_Source_T4Framework_Public_T4FrameworkEditor_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4EditorNPCDataInfo_Statics; \
	T4FRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<struct FT4EditorNPCDataInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Framework_Public_T4FrameworkEditor_h


#define FOREACH_ENUM_ET4EDITORFINDTARGET(op) \
	op(ET4EditorFindTarget::All) \
	op(ET4EditorFindTarget::Static) \
	op(ET4EditorFindTarget::Dynamic) \
	op(ET4EditorFindTarget::None) 

enum class ET4EditorFindTarget : uint8;
template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4EditorFindTarget>();

#define FOREACH_ENUM_ET4EDITORPLAYROLE(op) \
	op(ET4EditorPlayRole::Attacker) \
	op(ET4EditorPlayRole::Defender) \
	op(ET4EditorPlayRole::None) 

enum class ET4EditorPlayRole : uint8;
template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4EditorPlayRole>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
