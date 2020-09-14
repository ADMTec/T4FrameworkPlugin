// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4ASSET_T4ActionPackTypes_generated_h
#error "T4ActionPackTypes.generated.h already included, missing '#pragma once' in T4ActionPackTypes.h"
#endif
#define T4ASSET_T4ActionPackTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Asset_Public_ActionPack_T4ActionPackTypes_h


#define FOREACH_ENUM_ET4ACCELERATEDMOTION(op) \
	op(ET4AcceleratedMotion::Uniform) 

enum class ET4AcceleratedMotion : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4AcceleratedMotion>();

#define FOREACH_ENUM_ET4MOVEMENTTYPE(op) \
	op(ET4MovementType::Straight) \
	op(ET4MovementType::Parabola) \
	op(ET4MovementType::Howitzer) \
	op(ET4MovementType::Mortar) \
	op(ET4MovementType::Airborne) 

enum class ET4MovementType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4MovementType>();

#define FOREACH_ENUM_ET4PLAYTAGTYPE(op) \
	op(ET4PlayTagType::Attachment) \
	op(ET4PlayTagType::Action) \
	op(ET4PlayTagType::Material) \
	op(ET4PlayTagType::All) 

enum class ET4PlayTagType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4PlayTagType>();

#define FOREACH_ENUM_ET4PLAYTARGET(op) \
	op(ET4PlayTarget::Player) \
	op(ET4PlayTarget::All) \
	op(ET4PlayTarget::Default) 

enum class ET4PlayTarget : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4PlayTarget>();

#define FOREACH_ENUM_ET4ATTACHPARENT(op) \
	op(ET4AttachParent::Actor) \
	op(ET4AttachParent::World) \
	op(ET4AttachParent::Default) 

enum class ET4AttachParent : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4AttachParent>();

#define FOREACH_ENUM_ET4BRANCHCONDITION(op) \
	op(ET4BranchCondition::Always) \
	op(ET4BranchCondition::CompareActiveName) \
	op(ET4BranchCondition::Default) 

enum class ET4BranchCondition : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4BranchCondition>();

#define FOREACH_ENUM_ET4PLAYCOUNT(op) \
	op(ET4PlayCount::Looping) \
	op(ET4PlayCount::OneShot) \
	op(ET4PlayCount::Repeat2) \
	op(ET4PlayCount::Repeat3) \
	op(ET4PlayCount::Repeat4) \
	op(ET4PlayCount::Repeat5) \
	op(ET4PlayCount::Repeat6) \
	op(ET4PlayCount::Repeat7) \
	op(ET4PlayCount::Repeat8) \
	op(ET4PlayCount::Repeat9) \
	op(ET4PlayCount::Repeat10) 

enum class ET4PlayCount : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4PlayCount>();

#define FOREACH_ENUM_ET4LIFECYCLETYPE(op) \
	op(ET4LifecycleType::Auto) \
	op(ET4LifecycleType::Duration) \
	op(ET4LifecycleType::Looping) \
	op(ET4LifecycleType::Default) 

enum class ET4LifecycleType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4LifecycleType>();

#define FOREACH_ENUM_ET4ACTIONPLAYMODE(op) \
	op(ET4ActionPlayMode::Auto) \
	op(ET4ActionPlayMode::Duration) \
	op(ET4ActionPlayMode::Looping) \
	op(ET4ActionPlayMode::Default) 

enum class ET4ActionPlayMode : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4ActionPlayMode>();

#define FOREACH_ENUM_ET4ACTIONDATATYPE(op) \
	op(ET4ActionDataType::Branch) \
	op(ET4ActionDataType::Movement) \
	op(ET4ActionDataType::Animation) \
	op(ET4ActionDataType::Mesh) \
	op(ET4ActionDataType::Particle) \
	op(ET4ActionDataType::Trail) \
	op(ET4ActionDataType::Decal) \
	op(ET4ActionDataType::Audio) \
	op(ET4ActionDataType::Projectile) \
	op(ET4ActionDataType::Reaction) \
	op(ET4ActionDataType::PlayTag) \
	op(ET4ActionDataType::TimeScale) \
	op(ET4ActionDataType::CameraWork) \
	op(ET4ActionDataType::CameraShake) \
	op(ET4ActionDataType::PostProcess) \
	op(ET4ActionDataType::Environment) \
	op(ET4ActionDataType::Void) \
	op(ET4ActionDataType::None) 

enum class ET4ActionDataType : uint32;
template<> T4ASSET_API UEnum* StaticEnum<ET4ActionDataType>();

#define FOREACH_ENUM_ET4ACTIONBASETYPE(op) \
	op(ET4ActionBaseType::Command) \
	op(ET4ActionBaseType::Data) \
	op(ET4ActionBaseType::None) 

enum class ET4ActionBaseType : uint32;
template<> T4ASSET_API UEnum* StaticEnum<ET4ActionBaseType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
