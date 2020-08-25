// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4ENGINE_T4EngineTypes_generated_h
#error "T4EngineTypes.generated.h already included, missing '#pragma once' in T4EngineTypes.h"
#endif
#define T4ENGINE_T4EngineTypes_generated_h

#define HostProject_Plugins_T4Framework_Source_T4Engine_Public_T4EngineTypes_h_401_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ObjectID_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ObjectID>();

#define HostProject_Plugins_T4Framework_Source_T4Engine_Public_T4EngineTypes_h_288_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FT4ActorID_Statics; \
	T4ENGINE_API static class UScriptStruct* StaticStruct();


template<> T4ENGINE_API UScriptStruct* StaticStruct<struct FT4ActorID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Engine_Public_T4EngineTypes_h


#define FOREACH_ENUM_ET4EDITORACTION(op) \
	op(ET4EditorAction::ReloadAttributes) \
	op(ET4EditorAction::ReloadAnimationSkillLayer) \
	op(ET4EditorAction::ReloadAnimationSystemLayer) \
	op(ET4EditorAction::ReloadAnimationStateLayer) \
	op(ET4EditorAction::ReloadObject) \
	op(ET4EditorAction::RestoreReaction) \
	op(ET4EditorAction::UpdateOverrideMaterials) \
	op(ET4EditorAction::PlayTagSet) \
	op(ET4EditorAction::PlayTagClear) \
	op(ET4EditorAction::None) 

enum class ET4EditorAction : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4EditorAction>();

#define FOREACH_ENUM_ET4MOVEMENTPATHTYPE(op) \
	op(ET4MovementPathType::Actor) \
	op(ET4MovementPathType::Location) \
	op(ET4MovementPathType::Gravity) \
	op(ET4MovementPathType::Infinity) \
	op(ET4MovementPathType::InPlace) 

enum class ET4MovementPathType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4MovementPathType>();

#define FOREACH_ENUM_ET4FOOTSTEPTYPE(op) \
	op(ET4FootstepType::FootLeftDown) \
	op(ET4FootstepType::FootLeftUp) \
	op(ET4FootstepType::FootRightDown) \
	op(ET4FootstepType::FootRightUp) \
	op(ET4FootstepType::None) 

enum class ET4FootstepType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4FootstepType>();

#define FOREACH_ENUM_ET4EQUIPMENTTYPE(op) \
	op(ET4EquipmentType::Mount) \
	op(ET4EquipmentType::Unmount) \
	op(ET4EquipmentType::None) 

enum class ET4EquipmentType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4EquipmentType>();

#define FOREACH_ENUM_ET4ANIMNOTIFYTYPE(op) \
	op(ET4AnimNotifyType::Equipment) \
	op(ET4AnimNotifyType::Footstep) \
	op(ET4AnimNotifyType::None) 

enum class ET4AnimNotifyType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4AnimNotifyType>();

#define FOREACH_ENUM_ET4ZONETYPE(op) \
	op(ET4ZoneType::Static) \
	op(ET4ZoneType::Dynamic) \
	op(ET4ZoneType::Default) 

enum class ET4ZoneType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4ZoneType>();

#define FOREACH_ENUM_ET4TARGETTYPE(op) \
	op(ET4TargetType::Location) \
	op(ET4TargetType::Direction) \
	op(ET4TargetType::Actor) \
	op(ET4TargetType::Manual) \
	op(ET4TargetType::Default) 

enum class ET4TargetType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4TargetType>();

#define FOREACH_ENUM_ET4ANIMINSTANCE(op) \
	op(ET4AnimInstance::Human_Basic) \
	op(ET4AnimInstance::Human_Paragon) \
	op(ET4AnimInstance::Animal_Basic) \
	op(ET4AnimInstance::Item_Basic) \
	op(ET4AnimInstance::None) 

enum class ET4AnimInstance : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4AnimInstance>();

#define FOREACH_ENUM_ET4COLLISIONCHANNEL(op) \
	op(ET4CollisionChannel::WorldStatic) \
	op(ET4CollisionChannel::WorldDynamic) \
	op(ET4CollisionChannel::SpawnObject) \
	op(ET4CollisionChannel::CollisionVisibility) \
	op(ET4CollisionChannel::Max) 

enum class ET4CollisionChannel : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4CollisionChannel>();

#define FOREACH_ENUM_ET4MOVEMODE(op) \
	op(ET4MoveMode::Sync) \
	op(ET4MoveMode::Async) \
	op(ET4MoveMode::Current) \
	op(ET4MoveMode::Count) 

enum class ET4MoveMode : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4MoveMode>();

#define FOREACH_ENUM_ET4MOTIONCONTROLLERTYPE(op) \
	op(ET4MotionControllerType::Left) \
	op(ET4MotionControllerType::Right) 

enum class ET4MotionControllerType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4MotionControllerType>();

#define FOREACH_ENUM_ET4CAMERATYPE(op) \
	op(ET4CameraType::TPS) \
	op(ET4CameraType::QuarterView) \
	op(ET4CameraType::ShoulderView) \
	op(ET4CameraType::FPS) \
	op(ET4CameraType::Free) \
	op(ET4CameraType::Editor) \
	op(ET4CameraType::None) 

enum class ET4CameraType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4CameraType>();

#define FOREACH_ENUM_ET4WORLDSOURCE(op) \
	op(ET4WorldSource::Game) \
	op(ET4WorldSource::Preview) \
	op(ET4WorldSource::LevelEditor) \
	op(ET4WorldSource::None) 

enum class ET4WorldSource : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4WorldSource>();

#define FOREACH_ENUM_ET4SPAWNMODE(op) \
	op(ET4SpawnMode::All) \
	op(ET4SpawnMode::Client) \
	op(ET4SpawnMode::Server) \
	op(ET4SpawnMode::Playback) \
	op(ET4SpawnMode::Editor) \
	op(ET4SpawnMode::Max) 

enum class ET4SpawnMode : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4SpawnMode>();

#define FOREACH_ENUM_ET4ACTORTYPE(op) \
	op(ET4ActorType::Character) \
	op(ET4ActorType::PropStatic) \
	op(ET4ActorType::PropSkeletal) \
	op(ET4ActorType::PropParticle) \
	op(ET4ActorType::Item) \
	op(ET4ActorType::Zone) \
	op(ET4ActorType::Projectile) \
	op(ET4ActorType::Indicator) \
	op(ET4ActorType::Anchor) \
	op(ET4ActorType::MotionController) \
	op(ET4ActorType::Default) \
	op(ET4ActorType::Mirror) \
	op(ET4ActorType::None) 

enum class ET4ActorType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4ActorType>();

#define FOREACH_ENUM_ET4WORLDTYPE(op) \
	op(ET4WorldType::Null) \
	op(ET4WorldType::Client) \
	op(ET4WorldType::Server) \
	op(ET4WorldType::Max) 

enum class ET4WorldType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4WorldType>();

#define FOREACH_ENUM_ET4LAYERTYPE(op) \
	op(ET4LayerType::Server) \
	op(ET4LayerType::ServerMax) \
	op(ET4LayerType::Client) \
	op(ET4LayerType::ClientMax) \
	op(ET4LayerType::Preview) \
	op(ET4LayerType::PreviewMax) \
	op(ET4LayerType::LevelEditor) \
	op(ET4LayerType::Max) 

enum class ET4LayerType : uint8;
template<> T4ENGINE_API UEnum* StaticEnum<ET4LayerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
