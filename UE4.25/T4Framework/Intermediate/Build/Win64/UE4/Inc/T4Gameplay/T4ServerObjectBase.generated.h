// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4GAMEPLAY_T4ServerObjectBase_generated_h
#error "T4ServerObjectBase.generated.h already included, missing '#pragma once' in T4ServerObjectBase.h"
#endif
#define T4GAMEPLAY_T4ServerObjectBase_generated_h

#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_SPARSE_DATA
#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_RPC_WRAPPERS
#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUT4ServerObjectBase(); \
	friend struct Z_Construct_UClass_UT4ServerObjectBase_Statics; \
public: \
	DECLARE_CLASS(UT4ServerObjectBase, UT4GameObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/T4Gameplay"), NO_API) \
	DECLARE_SERIALIZER(UT4ServerObjectBase)


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUT4ServerObjectBase(); \
	friend struct Z_Construct_UClass_UT4ServerObjectBase_Statics; \
public: \
	DECLARE_CLASS(UT4ServerObjectBase, UT4GameObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/T4Gameplay"), NO_API) \
	DECLARE_SERIALIZER(UT4ServerObjectBase)


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4ServerObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4ServerObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4ServerObjectBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4ServerObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4ServerObjectBase(UT4ServerObjectBase&&); \
	NO_API UT4ServerObjectBase(const UT4ServerObjectBase&); \
public:


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4ServerObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4ServerObjectBase(UT4ServerObjectBase&&); \
	NO_API UT4ServerObjectBase(const UT4ServerObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4ServerObjectBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4ServerObjectBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4ServerObjectBase)


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_29_PROLOG
#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_SPARSE_DATA \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_RPC_WRAPPERS \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_INCLASS \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_SPARSE_DATA \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4ServerObjectBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4GAMEPLAY_API UClass* StaticClass<class UT4ServerObjectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Gameplay_Private_Server_Object_T4ServerObjectBase_h


#define FOREACH_ENUM_ET4SERVEROBJECTTYPE(op) \
	op(ET4ServerObjectType::Player) \
	op(ET4ServerObjectType::NPC) \
	op(ET4ServerObjectType::None) 

enum class ET4ServerObjectType : uint8;
template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4ServerObjectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
