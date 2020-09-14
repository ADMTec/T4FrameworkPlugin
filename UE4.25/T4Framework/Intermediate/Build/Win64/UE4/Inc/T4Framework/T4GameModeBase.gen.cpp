// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/T4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameModeBase() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4GameModeBase_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AT4GameModeBase::execGetText)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InKeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText(Z_Param_InKeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AT4GameModeBase::execGetTextVisibility)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InKeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->GetTextVisibility(Z_Param_InKeyName);
		P_NATIVE_END;
	}
	void AT4GameModeBase::StaticRegisterNativesAT4GameModeBase()
	{
		UClass* Class = AT4GameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", &AT4GameModeBase::execGetText },
			{ "GetTextVisibility", &AT4GameModeBase::execGetTextVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4GameModeBase_GetText_Statics
	{
		struct T4GameModeBase_eventGetText_Parms
		{
			FName InKeyName;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InKeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4GameModeBase_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::NewProp_InKeyName = { "InKeyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4GameModeBase_eventGetText_Parms, InKeyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::NewProp_InKeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextMap" },
		{ "Comment", "// #164\n" },
		{ "ModuleRelativePath", "Classes/T4GameModeBase.h" },
		{ "ToolTip", "#164" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4GameModeBase, nullptr, "GetText", nullptr, nullptr, sizeof(T4GameModeBase_eventGetText_Parms), Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4GameModeBase_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AT4GameModeBase_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics
	{
		struct T4GameModeBase_eventGetTextVisibility_Parms
		{
			FName InKeyName;
			ESlateVisibility ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InKeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4GameModeBase_eventGetTextVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::NewProp_InKeyName = { "InKeyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4GameModeBase_eventGetTextVisibility_Parms, InKeyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::NewProp_InKeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextMap" },
		{ "Comment", "// #164 : GameMode \xec\x99\xb8 \xeb\x8b\xa4\xeb\xa5\xb8 \xea\xb3\xb3\xec\x9c\xbc\xeb\xa1\x9c \xec\x98\xae\xea\xb8\xb4\xeb\x8b\xa4. \xec\x9e\x84\xec\x8b\x9c \xec\x82\xac\xec\x9a\xa9 (TODO)\n" },
		{ "ModuleRelativePath", "Classes/T4GameModeBase.h" },
		{ "ToolTip", "#164 : GameMode \xec\x99\xb8 \xeb\x8b\xa4\xeb\xa5\xb8 \xea\xb3\xb3\xec\x9c\xbc\xeb\xa1\x9c \xec\x98\xae\xea\xb8\xb4\xeb\x8b\xa4. \xec\x9e\x84\xec\x8b\x9c \xec\x82\xac\xec\x9a\xa9 (TODO)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4GameModeBase, nullptr, "GetTextVisibility", nullptr, nullptr, sizeof(T4GameModeBase_eventGetTextVisibility_Parms), Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AT4GameModeBase_NoRegister()
	{
		return AT4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AT4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidgetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UserWidgetMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UserWidgetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidgetMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4GameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4GameModeBase_GetText, "GetText" }, // 1818287238
		{ &Z_Construct_UFunction_AT4GameModeBase_GetTextVisibility, "GetTextVisibility" }, // 168698692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "T4GameModeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/T4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameModeBase_Statics::NewProp_UserWidgetMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/T4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AT4GameModeBase_Statics::NewProp_UserWidgetMap = { "UserWidgetMap", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4GameModeBase, UserWidgetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AT4GameModeBase_Statics::NewProp_UserWidgetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameModeBase_Statics::NewProp_UserWidgetMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AT4GameModeBase_Statics::NewProp_UserWidgetMap_Key_KeyProp = { "UserWidgetMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4GameModeBase_Statics::NewProp_UserWidgetMap_ValueProp = { "UserWidgetMap", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4GameModeBase_Statics::NewProp_UserWidgetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4GameModeBase_Statics::NewProp_UserWidgetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4GameModeBase_Statics::NewProp_UserWidgetMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4GameModeBase_Statics::ClassParams = {
		&AT4GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AT4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4GameModeBase, 92340197);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4GameModeBase>()
	{
		return AT4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4GameModeBase(Z_Construct_UClass_AT4GameModeBase, &AT4GameModeBase::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
