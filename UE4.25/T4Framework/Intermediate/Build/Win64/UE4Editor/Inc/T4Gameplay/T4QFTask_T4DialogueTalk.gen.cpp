// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFTask_T4DialogueTalk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFTask_T4DialogueTalk() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFTask_T4DialogueTalk_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFTask_T4DialogueTalk();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEDATA_API UScriptStruct* Z_Construct_UScriptStruct_FT4DialogueTextDBKey();
	T4GAMEDATA_API UEnum* Z_Construct_UEnum_T4GameData_ET4GameDialogueSpeakerType();
// End Cross Module References
	void UT4QFTask_T4DialogueTalk::StaticRegisterNativesUT4QFTask_T4DialogueTalk()
	{
	}
	UClass* Z_Construct_UClass_UT4QFTask_T4DialogueTalk_NoRegister()
	{
		return UT4QFTask_T4DialogueTalk::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueTextDBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogueTextDBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerDBKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpeakerDBKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpeakerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpeakerType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_Wait,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #163\n */" },
		{ "HideCategories", "Task" },
		{ "IncludePath", "QuestFlow/T4QFTask_T4DialogueTalk.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4DialogueTalk.h" },
		{ "ToolTip", "#163" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_DialogueTextDBKey_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #163\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4DialogueTalk.h" },
		{ "ToolTip", "#163" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_DialogueTextDBKey = { "DialogueTextDBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4DialogueTalk, DialogueTextDBKey), Z_Construct_UScriptStruct_FT4DialogueTextDBKey, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_DialogueTextDBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_DialogueTextDBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerDBKeyName_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #163\n" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4DialogueTalk.h" },
		{ "ToolTip", "#163" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerDBKeyName = { "SpeakerDBKeyName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4DialogueTalk, SpeakerDBKeyName), METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerDBKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerDBKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFTask_T4DialogueTalk.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerType = { "SpeakerType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4QFTask_T4DialogueTalk, SpeakerType), Z_Construct_UEnum_T4GameData_ET4GameDialogueSpeakerType, METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_DialogueTextDBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerDBKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::NewProp_SpeakerType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFTask_T4DialogueTalk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::ClassParams = {
		&UT4QFTask_T4DialogueTalk::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFTask_T4DialogueTalk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFTask_T4DialogueTalk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFTask_T4DialogueTalk, 1427843128);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFTask_T4DialogueTalk>()
	{
		return UT4QFTask_T4DialogueTalk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFTask_T4DialogueTalk(Z_Construct_UClass_UT4QFTask_T4DialogueTalk, &UT4QFTask_T4DialogueTalk::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFTask_T4DialogueTalk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFTask_T4DialogueTalk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
