// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/T4BuiltinGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BuiltinGameInstance() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BuiltinGameInstance_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BuiltinGameInstance();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4GameInstanceBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	DEFINE_FUNCTION(UT4BuiltinGameInstance::execToggleQuickMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleQuickMenu();
		P_NATIVE_END;
	}
	void UT4BuiltinGameInstance::StaticRegisterNativesUT4BuiltinGameInstance()
	{
		UClass* Class = UT4BuiltinGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleQuickMenu", &UT4BuiltinGameInstance::execToggleQuickMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UT4BuiltinGameInstance_ToggleQuickMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4BuiltinGameInstance_ToggleQuickMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4BuiltinGameInstance_ToggleQuickMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4BuiltinGameInstance, nullptr, "ToggleQuickMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4BuiltinGameInstance_ToggleQuickMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4BuiltinGameInstance_ToggleQuickMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4BuiltinGameInstance_ToggleQuickMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4BuiltinGameInstance_ToggleQuickMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UT4BuiltinGameInstance_NoRegister()
	{
		return UT4BuiltinGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UT4BuiltinGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BuiltinGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4GameInstanceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UT4BuiltinGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UT4BuiltinGameInstance_ToggleQuickMenu, "ToggleQuickMenu" }, // 1395782434
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BuiltinGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * #150\n */" },
		{ "IncludePath", "T4BuiltinGameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameInstance.h" },
		{ "ToolTip", "#150" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BuiltinGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BuiltinGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BuiltinGameInstance_Statics::ClassParams = {
		&UT4BuiltinGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UT4BuiltinGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BuiltinGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BuiltinGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BuiltinGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BuiltinGameInstance, 1213749118);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4BuiltinGameInstance>()
	{
		return UT4BuiltinGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BuiltinGameInstance(Z_Construct_UClass_UT4BuiltinGameInstance, &UT4BuiltinGameInstance::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4BuiltinGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BuiltinGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
