// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef T4ENGINE_T4WorldActor_generated_h
#error "T4WorldActor.generated.h already included, missing '#pragma once' in T4WorldActor.h"
#endif
#define T4ENGINE_T4WorldActor_generated_h

#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_SPARSE_DATA
#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOnWeaponOverlap);


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOnWeaponOverlap);


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4WorldActor(); \
	friend struct Z_Construct_UClass_AT4WorldActor_Statics; \
public: \
	DECLARE_CLASS(AT4WorldActor, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Engine"), NO_API) \
	DECLARE_SERIALIZER(AT4WorldActor)


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_INCLASS \
private: \
	static void StaticRegisterNativesAT4WorldActor(); \
	friend struct Z_Construct_UClass_AT4WorldActor_Statics; \
public: \
	DECLARE_CLASS(AT4WorldActor, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Engine"), NO_API) \
	DECLARE_SERIALIZER(AT4WorldActor)


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4WorldActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4WorldActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4WorldActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4WorldActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4WorldActor(AT4WorldActor&&); \
	NO_API AT4WorldActor(const AT4WorldActor&); \
public:


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4WorldActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4WorldActor(AT4WorldActor&&); \
	NO_API AT4WorldActor(const AT4WorldActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4WorldActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4WorldActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4WorldActor)


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaterialDynamicInstances() { return STRUCT_OFFSET(AT4WorldActor, MaterialDynamicInstances); }


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_45_PROLOG
#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_SPARSE_DATA \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_RPC_WRAPPERS \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_INCLASS \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_SPARSE_DATA \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4WorldActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4ENGINE_API UClass* StaticClass<class AT4WorldActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_T4WorldActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
