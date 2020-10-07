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
	DEFINE_FUNCTION(UT4BuiltinGameInstance::execReplayStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplayStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4BuiltinGameInstance::execReplayPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplayPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4BuiltinGameInstance::execSetCharacterClassSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InClassName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterClassSelected(Z_Param_InClassName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4BuiltinGameInstance::execGetCharacterClassNameList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetCharacterClassNameList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4BuiltinGameInstance::execSetStartQuestSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InQuestTitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartQuestSelected(Z_Param_InQuestTitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4BuiltinGameInstance::execGetStartQuestList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStartQuestList();
		P_NATIVE_END;
	}
	void UT4BuiltinGameInstance::StaticRegisterNativesUT4BuiltinGameInstance()
	{
		UClass* Class = UT4BuiltinGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterClassNameList", &UT4BuiltinGameInstance::execGetCharacterClassNameList },
			{ "GetStartQuestList", &UT4BuiltinGameInstance::execGetStartQuestList },
			{ "ReplayPlay", &UT4BuiltinGameInstance::execReplayPlay },
			{ "ReplayStop", &UT4BuiltinGameInstance::execReplayStop },
			{ "SetCharacterClassSelected", &UT4BuiltinGameInstance::execSetCharacterClassSelected },
			{ "SetStartQuestSelected", &UT4BuiltinGameInstance::execSetStartQuestSelected },
			{ "ToggleQuickMenu", &UT4BuiltinGameInstance::execToggleQuickMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics
	{
		struct T4BuiltinGameInstance_eventGetCharacterClassNameList_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4BuiltinGameInstance_eventGetCharacterClassNameList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::Function_MetaDataParams[] = {
		{ "Category", "T4Game" },
		{ "Comment", "// #161\n" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameInstance.h" },
		{ "ToolTip", "#161" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4BuiltinGameInstance, nullptr, "GetCharacterClassNameList", nullptr, nullptr, sizeof(T4BuiltinGameInstance_eventGetCharacterClassNameList_Parms), Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics
	{
		struct T4BuiltinGameInstance_eventGetStartQuestList_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4BuiltinGameInstance_eventGetStartQuestList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::Function_MetaDataParams[] = {
		{ "Category", "T4Game" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4BuiltinGameInstance, nullptr, "GetStartQuestList", nullptr, nullptr, sizeof(T4BuiltinGameInstance_eventGetStartQuestList_Parms), Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "T4Game" },
		{ "Comment", "// #161\n" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameInstance.h" },
		{ "ToolTip", "#161" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4BuiltinGameInstance, nullptr, "ReplayPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "T4Game" },
		{ "Comment", "// #150\n" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameInstance.h" },
		{ "ToolTip", "#150" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4BuiltinGameInstance, nullptr, "ReplayStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected_Statics
	{
		struct T4BuiltinGameInstance_eventSetCharacterClassSelected_Parms
		{
			FString InClassName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected_Statics::NewProp_InClassName = { "InClassName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4BuiltinGameInstance_eventSetCharacterClassSelected_Parms, InClassName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected_Statics::NewProp_InClassName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "T4Game" },
		{ "Comment", "// #161\n" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameInstance.h" },
		{ "ToolTip", "#161" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4BuiltinGameInstance, nullptr, "SetCharacterClassSelected", nullptr, nullptr, sizeof(T4BuiltinGameInstance_eventSetCharacterClassSelected_Parms), Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected_Statics
	{
		struct T4BuiltinGameInstance_eventSetStartQuestSelected_Parms
		{
			FString InQuestTitle;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InQuestTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected_Statics::NewProp_InQuestTitle = { "InQuestTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4BuiltinGameInstance_eventSetStartQuestSelected_Parms, InQuestTitle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected_Statics::NewProp_InQuestTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "T4Game" },
		{ "Comment", "// #161\n" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameInstance.h" },
		{ "ToolTip", "#161" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4BuiltinGameInstance, nullptr, "SetStartQuestSelected", nullptr, nullptr, sizeof(T4BuiltinGameInstance_eventSetStartQuestSelected_Parms), Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "Category", "T4Game" },
		{ "Comment", "// #150\n" },
		{ "ModuleRelativePath", "Classes/T4BuiltinGameInstance.h" },
		{ "ToolTip", "#150" },
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
		{ &Z_Construct_UFunction_UT4BuiltinGameInstance_GetCharacterClassNameList, "GetCharacterClassNameList" }, // 3580035626
		{ &Z_Construct_UFunction_UT4BuiltinGameInstance_GetStartQuestList, "GetStartQuestList" }, // 332798629
		{ &Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayPlay, "ReplayPlay" }, // 4255102051
		{ &Z_Construct_UFunction_UT4BuiltinGameInstance_ReplayStop, "ReplayStop" }, // 1459572250
		{ &Z_Construct_UFunction_UT4BuiltinGameInstance_SetCharacterClassSelected, "SetCharacterClassSelected" }, // 1789161323
		{ &Z_Construct_UFunction_UT4BuiltinGameInstance_SetStartQuestSelected, "SetStartQuestSelected" }, // 2612501170
		{ &Z_Construct_UFunction_UT4BuiltinGameInstance_ToggleQuickMenu, "ToggleQuickMenu" }, // 1095192159
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
	IMPLEMENT_CLASS(UT4BuiltinGameInstance, 2385692375);
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
