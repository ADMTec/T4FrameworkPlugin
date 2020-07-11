// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/World/T4MapZoneVolume.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MapZoneVolume() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4MapZoneVolume_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4MapZoneVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	T4ASSET_API UClass* Z_Construct_UClass_UT4EnvironmentAsset_NoRegister();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ZoneType();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
// End Cross Module References
	void AT4MapZoneVolume::StaticRegisterNativesAT4MapZoneVolume()
	{
	}
	UClass* Z_Construct_UClass_AT4MapZoneVolume_NoRegister()
	{
		return AT4MapZoneVolume::StaticClass();
	}
	struct Z_Construct_UClass_AT4MapZoneVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlendPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EnvironmentAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ZoneType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZoneType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ZoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4MapZoneVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MapZoneVolume_Statics::Class_MetaDataParams[] = {
		{ "Category", "T4Framework" },
		{ "ClassGroupNames", "T4Framework" },
		{ "Comment", "// #98\n" },
		{ "HideCategories", "Advanced Collision Volume Brush Attachment Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "World/T4MapZoneVolume.h" },
		{ "ModuleRelativePath", "Classes/World/T4MapZoneVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "#98" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Classes/World/T4MapZoneVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MapZoneVolume, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_DebugColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendOutTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #92\n" },
		{ "ModuleRelativePath", "Classes/World/T4MapZoneVolume.h" },
		{ "ToolTip", "#92" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendOutTimeSec = { "BlendOutTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MapZoneVolume, BlendOutTimeSec), METADATA_PARAMS(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendOutTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendOutTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendInTimeSec_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// #92\n" },
		{ "ModuleRelativePath", "Classes/World/T4MapZoneVolume.h" },
		{ "ToolTip", "#92" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendInTimeSec = { "BlendInTimeSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MapZoneVolume, BlendInTimeSec), METADATA_PARAMS(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendInTimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendInTimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendPriority_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "ClampMin", "0" },
		{ "Comment", "// #90, #92\n" },
		{ "ModuleRelativePath", "Classes/World/T4MapZoneVolume.h" },
		{ "ToolTip", "#90, #92" },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendPriority = { "BlendPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MapZoneVolume, BlendPriority), METADATA_PARAMS(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_EnvironmentAsset_MetaData[] = {
		{ "Category", "ClientOnly" },
		{ "Comment", "// #94\n" },
		{ "ModuleRelativePath", "Classes/World/T4MapZoneVolume.h" },
		{ "ToolTip", "#94" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_EnvironmentAsset = { "EnvironmentAsset", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MapZoneVolume, EnvironmentAsset), Z_Construct_UClass_UT4EnvironmentAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_EnvironmentAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_EnvironmentAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneType_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/World/T4MapZoneVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneType = { "ZoneType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MapZoneVolume, ZoneType), Z_Construct_UEnum_T4Engine_ET4ZoneType, METADATA_PARAMS(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneName_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/World/T4MapZoneVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MapZoneVolume, ZoneName), METADATA_PARAMS(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4MapZoneVolume_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_DebugColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendOutTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendInTimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_BlendPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_EnvironmentAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MapZoneVolume_Statics::NewProp_ZoneName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AT4MapZoneVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister, (int32)VTABLE_OFFSET(AT4MapZoneVolume, IInterface_PostProcessVolume), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4MapZoneVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4MapZoneVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4MapZoneVolume_Statics::ClassParams = {
		&AT4MapZoneVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4MapZoneVolume_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4MapZoneVolume_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4MapZoneVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MapZoneVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4MapZoneVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4MapZoneVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4MapZoneVolume, 3107087057);
	template<> T4ENGINE_API UClass* StaticClass<AT4MapZoneVolume>()
	{
		return AT4MapZoneVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4MapZoneVolume(Z_Construct_UClass_AT4MapZoneVolume, &AT4MapZoneVolume::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4MapZoneVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4MapZoneVolume);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AT4MapZoneVolume)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
