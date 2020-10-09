// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/T4BuiltinGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BuiltinGameMode() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinGameMode_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_AT4BuiltinGameMode();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4GameModeBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	DEFINE_FUNCTION(AT4BuiltinGameMode::execOnDialogueClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueClicked();
		P_NATIVE_END;
	}
	void AT4BuiltinGameMode::StaticRegisterNativesAT4BuiltinGameMode()
	{
		UClass* Class = AT4BuiltinGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDialogueClicked", &AT4BuiltinGameMode::execOnDialogueClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4BuiltinGameMode_OnDialogueClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4BuiltinGameMode_OnDialogueClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "InGame" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4BuiltinGameMode_OnDialogueClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4BuiltinGameMode, nullptr, "OnDialogueClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4BuiltinGameMode_OnDialogueClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4BuiltinGameMode_OnDialogueClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4BuiltinGameMode_OnDialogueClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AT4BuiltinGameMode_OnDialogueClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AT4BuiltinGameMode_NoRegister()
	{
		return AT4BuiltinGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AT4BuiltinGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4BuiltinGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4GameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4BuiltinGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4BuiltinGameMode_OnDialogueClicked, "OnDialogueClicked" }, // 1565434647
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4BuiltinGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "T4BuiltinGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4BuiltinGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4BuiltinGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4BuiltinGameMode_Statics::ClassParams = {
		&AT4BuiltinGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AT4BuiltinGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4BuiltinGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4BuiltinGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4BuiltinGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4BuiltinGameMode, 1548136211);
	template<> T4GAMEPLAY_API UClass* StaticClass<AT4BuiltinGameMode>()
	{
		return AT4BuiltinGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4BuiltinGameMode(Z_Construct_UClass_AT4BuiltinGameMode, &AT4BuiltinGameMode::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("AT4BuiltinGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4BuiltinGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
