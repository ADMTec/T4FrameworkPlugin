// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef T4ENGINE_T4AnimInstanceBaseImpl_generated_h
#error "T4AnimInstanceBaseImpl.generated.h already included, missing '#pragma once' in T4AnimInstanceBaseImpl.h"
#endif
#define T4ENGINE_T4AnimInstanceBaseImpl_generated_h

#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_SPARSE_DATA
#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOnAnimMontageEnded);


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOnAnimMontageEnded);


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUT4AnimInstanceBaseImpl(); \
	friend struct Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics; \
public: \
	DECLARE_CLASS(UT4AnimInstanceBaseImpl, UT4AnimInstanceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/T4Engine"), NO_API) \
	DECLARE_SERIALIZER(UT4AnimInstanceBaseImpl)


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUT4AnimInstanceBaseImpl(); \
	friend struct Z_Construct_UClass_UT4AnimInstanceBaseImpl_Statics; \
public: \
	DECLARE_CLASS(UT4AnimInstanceBaseImpl, UT4AnimInstanceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/T4Engine"), NO_API) \
	DECLARE_SERIALIZER(UT4AnimInstanceBaseImpl)


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4AnimInstanceBaseImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4AnimInstanceBaseImpl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4AnimInstanceBaseImpl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4AnimInstanceBaseImpl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4AnimInstanceBaseImpl(UT4AnimInstanceBaseImpl&&); \
	NO_API UT4AnimInstanceBaseImpl(const UT4AnimInstanceBaseImpl&); \
public:


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4AnimInstanceBaseImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4AnimInstanceBaseImpl(UT4AnimInstanceBaseImpl&&); \
	NO_API UT4AnimInstanceBaseImpl(const UT4AnimInstanceBaseImpl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4AnimInstanceBaseImpl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4AnimInstanceBaseImpl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4AnimInstanceBaseImpl)


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimsetAsset() { return STRUCT_OFFSET(UT4AnimInstanceBaseImpl, AnimsetAsset); }


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_18_PROLOG
#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_SPARSE_DATA \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_RPC_WRAPPERS \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_INCLASS \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_SPARSE_DATA \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4AnimInstanceBaseImpl."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4ENGINE_API UClass* StaticClass<class UT4AnimInstanceBaseImpl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_T4Framework_Source_T4Engine_Private_WorldActor_Animation_T4AnimInstanceBaseImpl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
