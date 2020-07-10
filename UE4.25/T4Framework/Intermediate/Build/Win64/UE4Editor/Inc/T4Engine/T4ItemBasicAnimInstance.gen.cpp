// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/World/Actor/Animation/Item/Basic/T4ItemBasicAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ItemBasicAnimInstance() {}
// Cross Module References
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ItemBasicAnimInstance_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ItemBasicAnimInstance();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4AnimInstanceBase();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4StateAnimVariables();
// End Cross Module References
class UScriptStruct* FT4ItemPostureAnimVariables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ItemPostureAnimVariables"), sizeof(FT4ItemPostureAnimVariables), Get_Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ItemPostureAnimVariables>()
{
	return FT4ItemPostureAnimVariables::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ItemPostureAnimVariables(FT4ItemPostureAnimVariables::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ItemPostureAnimVariables"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ItemPostureAnimVariables
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ItemPostureAnimVariables()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ItemPostureAnimVariables")),new UScriptStruct::TCppStructOps<FT4ItemPostureAnimVariables>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ItemPostureAnimVariables;
	struct Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IdleSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "T4Engine" },
		{ "Comment", "/**\n  * https://docs.unrealengine.com/ko-kr/Engine/Animation\n */" },
		{ "ModuleRelativePath", "Private/World/Actor/Animation/Item/Basic/T4ItemBasicAnimInstance.h" },
		{ "ToolTip", "https://docs.unrealengine.com/ko-kr/Engine/Animation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ItemPostureAnimVariables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::NewProp_IdleSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StateVar" },
		{ "ModuleRelativePath", "Private/World/Actor/Animation/Item/Basic/T4ItemBasicAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::NewProp_IdleSelected = { "IdleSelected", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ItemPostureAnimVariables, IdleSelected), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::NewProp_IdleSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::NewProp_IdleSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::NewProp_IdleSelected,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ItemPostureAnimVariables",
		sizeof(FT4ItemPostureAnimVariables),
		alignof(FT4ItemPostureAnimVariables),
		Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ItemPostureAnimVariables"), sizeof(FT4ItemPostureAnimVariables), Get_Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables_Hash() { return 3504379511U; }
	void UT4ItemBasicAnimInstance::StaticRegisterNativesUT4ItemBasicAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UT4ItemBasicAnimInstance_NoRegister()
	{
		return UT4ItemBasicAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostureVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostureVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateVariables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4AnimInstanceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "World/Actor/Animation/Item/Basic/T4ItemBasicAnimInstance.h" },
		{ "ModuleRelativePath", "Private/World/Actor/Animation/Item/Basic/T4ItemBasicAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::NewProp_PostureVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Private/World/Actor/Animation/Item/Basic/T4ItemBasicAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::NewProp_PostureVariables = { "PostureVariables", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ItemBasicAnimInstance, PostureVariables), Z_Construct_UScriptStruct_FT4ItemPostureAnimVariables, METADATA_PARAMS(Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::NewProp_PostureVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::NewProp_PostureVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::NewProp_StateVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Private/World/Actor/Animation/Item/Basic/T4ItemBasicAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::NewProp_StateVariables = { "StateVariables", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ItemBasicAnimInstance, StateVariables), Z_Construct_UScriptStruct_FT4StateAnimVariables, METADATA_PARAMS(Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::NewProp_StateVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::NewProp_StateVariables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::NewProp_PostureVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::NewProp_StateVariables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ItemBasicAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::ClassParams = {
		&UT4ItemBasicAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ItemBasicAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ItemBasicAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ItemBasicAnimInstance, 205982703);
	template<> T4ENGINE_API UClass* StaticClass<UT4ItemBasicAnimInstance>()
	{
		return UT4ItemBasicAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ItemBasicAnimInstance(Z_Construct_UClass_UT4ItemBasicAnimInstance, &UT4ItemBasicAnimInstance::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4ItemBasicAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ItemBasicAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
