// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ActionEditor/Private/Sequencer/T4ActionMovieSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionMovieSection() {}
// Cross Module References
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionMovieSection_NoRegister();
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionMovieSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_T4ActionEditor();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4ActionPlayMode();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4ActionDataType();
	T4ACTIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel();
// End Cross Module References
	void UT4ActionMovieSection::StaticRegisterNativesUT4ActionMovieSection()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionMovieSection_NoRegister()
	{
		return UT4ActionMovieSection::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionMovieSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionActionPlayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionActionPlayMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionActionPlayMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionHeaderKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionHeaderKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionDataType;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewModelInstanceKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ViewModelInstanceKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionMovieSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ActionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sequencer/T4ActionMovieSection.h" },
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionActionPlayMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSection.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionActionPlayMode = { "ActionActionPlayMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionMovieSection, ActionActionPlayMode), Z_Construct_UEnum_T4Asset_ET4ActionPlayMode, METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionActionPlayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionActionPlayMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionActionPlayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionHeaderKey_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSection.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionHeaderKey = { "ActionHeaderKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionMovieSection, ActionHeaderKey), METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionHeaderKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionHeaderKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionDataType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSection.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionDataType = { "ActionDataType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionMovieSection, ActionDataType), Z_Construct_UEnum_T4Asset_ET4ActionDataType, METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionDataType_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionChannel_MetaData[] = {
		{ "Comment", "// #56, #65 : ViewModel \xec\x9d\xb4 Instance \xeb\xa1\x9c \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xea\xb8\xb0 \xeb\x95\x8c\xeb\xac\xb8\xec\x97\x90 \xec\x96\xb4\xeb\x94\x94\xec\x9d\x98 Section \xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8 \xed\x95\x84\xec\x9a\x94\n" },
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSection.h" },
		{ "ToolTip", "#56, #65 : ViewModel \xec\x9d\xb4 Instance \xeb\xa1\x9c \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xea\xb8\xb0 \xeb\x95\x8c\xeb\xac\xb8\xec\x97\x90 \xec\x96\xb4\xeb\x94\x94\xec\x9d\x98 Section \xec\x9d\xb8\xec\xa7\x80 \xed\x99\x95\xec\x9d\xb8 \xed\x95\x84\xec\x9a\x94" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionChannel = { "ActionChannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionMovieSection, ActionChannel), Z_Construct_UScriptStruct_FT4ActionMovieSceneChannel, METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ViewModelInstanceKey_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSection.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ViewModelInstanceKey = { "ViewModelInstanceKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionMovieSection, ViewModelInstanceKey), METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ViewModelInstanceKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ViewModelInstanceKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ActionMovieSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionActionPlayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionActionPlayMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionHeaderKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ActionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSection_Statics::NewProp_ViewModelInstanceKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionMovieSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionMovieSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionMovieSection_Statics::ClassParams = {
		&UT4ActionMovieSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ActionMovieSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionMovieSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionMovieSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionMovieSection, 813688683);
	template<> T4ACTIONEDITOR_API UClass* StaticClass<UT4ActionMovieSection>()
	{
		return UT4ActionMovieSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionMovieSection(Z_Construct_UClass_UT4ActionMovieSection, &UT4ActionMovieSection::StaticClass, TEXT("/Script/T4ActionEditor"), TEXT("UT4ActionMovieSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionMovieSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
