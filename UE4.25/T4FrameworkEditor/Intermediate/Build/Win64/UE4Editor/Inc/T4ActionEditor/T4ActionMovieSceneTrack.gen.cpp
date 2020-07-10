// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4ActionEditor/Private/Sequencer/T4ActionMovieSceneTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionMovieSceneTrack() {}
// Cross Module References
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionMovieSceneTrack_NoRegister();
	T4ACTIONEDITOR_API UClass* Z_Construct_UClass_UT4ActionMovieSceneTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_T4ActionEditor();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4LifecycleType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4ActionDataType();
// End Cross Module References
	void UT4ActionMovieSceneTrack::StaticRegisterNativesUT4ActionMovieSceneTrack()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionMovieSceneTrack_NoRegister()
	{
		return UT4ActionMovieSceneTrack::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActionSortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionLifecycleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionLifecycleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionLifecycleType_Underlying;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContiViewModelInstanceKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ContiViewModelInstanceKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_T4ActionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sequencer/T4ActionMovieSceneTrack.h" },
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneTrack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionSortOrder_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionSortOrder = { "ActionSortOrder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionMovieSceneTrack, ActionSortOrder), METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionSortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionSortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionLifecycleType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionLifecycleType = { "ActionLifecycleType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionMovieSceneTrack, ActionLifecycleType), Z_Construct_UEnum_T4Asset_ET4LifecycleType, METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionLifecycleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionLifecycleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionLifecycleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionHeaderKey_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionHeaderKey = { "ActionHeaderKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionMovieSceneTrack, ActionHeaderKey), METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionHeaderKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionHeaderKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionDataType_MetaData[] = {
		{ "Comment", "// #56, #65\n" },
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneTrack.h" },
		{ "ToolTip", "#56, #65" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionDataType = { "ActionDataType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionMovieSceneTrack, ActionDataType), Z_Construct_UEnum_T4Asset_ET4ActionDataType, METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionDataType_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ContiViewModelInstanceKey_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/T4ActionMovieSceneTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ContiViewModelInstanceKey = { "ContiViewModelInstanceKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionMovieSceneTrack, ContiViewModelInstanceKey), METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ContiViewModelInstanceKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ContiViewModelInstanceKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionSortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionLifecycleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionLifecycleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionHeaderKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ActionDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::NewProp_ContiViewModelInstanceKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionMovieSceneTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::ClassParams = {
		&UT4ActionMovieSceneTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionMovieSceneTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionMovieSceneTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionMovieSceneTrack, 4052857538);
	template<> T4ACTIONEDITOR_API UClass* StaticClass<UT4ActionMovieSceneTrack>()
	{
		return UT4ActionMovieSceneTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionMovieSceneTrack(Z_Construct_UClass_UT4ActionMovieSceneTrack, &UT4ActionMovieSceneTrack::StaticClass, TEXT("/Script/T4ActionEditor"), TEXT("UT4ActionMovieSceneTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionMovieSceneTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
