// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4ASSET_T4EntityTypes_generated_h
#error "T4EntityTypes.generated.h already included, missing '#pragma once' in T4EntityTypes.h"
#endif
#define T4ASSET_T4EntityTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Asset_Public_Entity_T4EntityTypes_h


#define FOREACH_ENUM_ET4ENTITYEDITORVIEWPORTITEMSPAWN(op) \
	op(ET4EntityEditorViewportItemSpawn::DropMesh) \
	op(ET4EntityEditorViewportItemSpawn::EquipOrExchange) \
	op(ET4EntityEditorViewportItemSpawn::None) 

enum class ET4EntityEditorViewportItemSpawn : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4EntityEditorViewportItemSpawn>();

#define FOREACH_ENUM_ET4ENTITYZONEBRUSHTYPE(op) \
	op(ET4EntityZoneBrushType::Cylinder) \
	op(ET4EntityZoneBrushType::Cube) \
	op(ET4EntityZoneBrushType::None) 

enum class ET4EntityZoneBrushType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4EntityZoneBrushType>();

#define FOREACH_ENUM_ET4ENTITYZONETYPE(op) \
	op(ET4EntityZoneType::Static) \
	op(ET4EntityZoneType::Dynamic) \
	op(ET4EntityZoneType::Default) 

enum class ET4EntityZoneType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4EntityZoneType>();

#define FOREACH_ENUM_ET4ENTITYREACTIONTYPE(op) \
	op(ET4EntityReactionType::Hit) \
	op(ET4EntityReactionType::Knockback) \
	op(ET4EntityReactionType::Airborne) \
	op(ET4EntityReactionType::Stun) \
	op(ET4EntityReactionType::Die) \
	op(ET4EntityReactionType::Resurrect) \
	op(ET4EntityReactionType::None) 

enum class ET4EntityReactionType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4EntityReactionType>();

#define FOREACH_ENUM_ET4ENTITYCHARACTERMODULARTYPE(op) \
	op(ET4EntityCharacterModularType::MasterPose) \
	op(ET4EntityCharacterModularType::None) 

enum class ET4EntityCharacterModularType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4EntityCharacterModularType>();

#define FOREACH_ENUM_ET4ENTITYCHARACTERMESHTYPE(op) \
	op(ET4EntityCharacterMeshType::FullBody) \
	op(ET4EntityCharacterMeshType::Composite) \
	op(ET4EntityCharacterMeshType::None) 

enum class ET4EntityCharacterMeshType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4EntityCharacterMeshType>();

#define FOREACH_ENUM_ET4ENTITYMESHTYPE(op) \
	op(ET4EntityMeshType::StaticMesh) \
	op(ET4EntityMeshType::SkeletalMesh) \
	op(ET4EntityMeshType::ParticleSystem) \
	op(ET4EntityMeshType::None) 

enum class ET4EntityMeshType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4EntityMeshType>();

#define FOREACH_ENUM_ET4ENTITYBOUNDTYPE(op) \
	op(ET4EntityBoundType::Box) \
	op(ET4EntityBoundType::Sphere) \
	op(ET4EntityBoundType::Cylinder) \
	op(ET4EntityBoundType::Capsule) \
	op(ET4EntityBoundType::None) 

enum class ET4EntityBoundType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4EntityBoundType>();

#define FOREACH_ENUM_ET4ENTITYTYPE(op) \
	op(ET4EntityType::Map) \
	op(ET4EntityType::Character) \
	op(ET4EntityType::Prop) \
	op(ET4EntityType::Item) \
	op(ET4EntityType::Costume) \
	op(ET4EntityType::Weapon) \
	op(ET4EntityType::Zone) \
	op(ET4EntityType::None) 

enum class ET4EntityType : uint8;
template<> T4ASSET_API UEnum* StaticEnum<ET4EntityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
