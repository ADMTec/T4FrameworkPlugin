// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4FRAMEWORK_T4PlayerControllerBase_generated_h
#error "T4PlayerControllerBase.generated.h already included, missing '#pragma once' in T4PlayerControllerBase.h"
#endif
#define T4FRAMEWORK_T4PlayerControllerBase_generated_h

#define HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_SPARSE_DATA
#define HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_RPC_WRAPPERS
#define HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4PlayerControllerBase(); \
	friend struct Z_Construct_UClass_AT4PlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(AT4PlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Framework"), NO_API) \
	DECLARE_SERIALIZER(AT4PlayerControllerBase)


#define HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAT4PlayerControllerBase(); \
	friend struct Z_Construct_UClass_AT4PlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(AT4PlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Framework"), NO_API) \
	DECLARE_SERIALIZER(AT4PlayerControllerBase)


#define HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4PlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4PlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4PlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4PlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4PlayerControllerBase(AT4PlayerControllerBase&&); \
	NO_API AT4PlayerControllerBase(const AT4PlayerControllerBase&); \
public:


#define HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4PlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4PlayerControllerBase(AT4PlayerControllerBase&&); \
	NO_API AT4PlayerControllerBase(const AT4PlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4PlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4PlayerControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4PlayerControllerBase)


#define HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraSpringArmComponent() { return STRUCT_OFFSET(AT4PlayerControllerBase, CameraSpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AT4PlayerControllerBase, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__VROriginComponent() { return STRUCT_OFFSET(AT4PlayerControllerBase, VROriginComponent); }


#define HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_26_PROLOG
#define HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_SPARSE_DATA \
	HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_RPC_WRAPPERS \
	HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_INCLASS \
	HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_SPARSE_DATA \
	HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4PlayerControllerBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4FRAMEWORK_API UClass* StaticClass<class AT4PlayerControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Framework_Classes_Player_T4PlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
