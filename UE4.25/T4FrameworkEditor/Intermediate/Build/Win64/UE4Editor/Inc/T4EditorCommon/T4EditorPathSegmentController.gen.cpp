// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4EditorCommon/Public/Helper/T4EditorPathSegmentController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EditorPathSegmentController() {}
// Cross Module References
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4EditorPathSegmentController_NoRegister();
	T4EDITORCOMMON_API UClass* Z_Construct_UClass_UT4EditorPathSegmentController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4EditorCommon();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4PathMovementType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UT4EditorPathSegmentController::StaticRegisterNativesUT4EditorPathSegmentController()
	{
	}
	UClass* Z_Construct_UClass_UT4EditorPathSegmentController_NoRegister()
	{
		return UT4EditorPathSegmentController::StaticClass();
	}
	struct Z_Construct_UClass_UT4EditorPathSegmentController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnNavMesh_MetaData[];
#endif
		static void NewProp_bOnNavMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnNavMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4EditorPathSegmentController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4EditorCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EditorPathSegmentController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Helper/T4EditorPathSegmentController.h" },
		{ "ModuleRelativePath", "Public/Helper/T4EditorPathSegmentController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_bOnNavMesh_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "Comment", "// #156\n" },
		{ "ModuleRelativePath", "Public/Helper/T4EditorPathSegmentController.h" },
		{ "ToolTip", "#156" },
	};
#endif
	void Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_bOnNavMesh_SetBit(void* Obj)
	{
		((UT4EditorPathSegmentController*)Obj)->bOnNavMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_bOnNavMesh = { "bOnNavMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4EditorPathSegmentController), &Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_bOnNavMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_bOnNavMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_bOnNavMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_MovementType_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Public/Helper/T4EditorPathSegmentController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EditorPathSegmentController, MovementType), Z_Construct_UEnum_T4Asset_ET4PathMovementType, METADATA_PARAMS(Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_MovementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "ServerOnly" },
		{ "ModuleRelativePath", "Public/Helper/T4EditorPathSegmentController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4EditorPathSegmentController, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4EditorPathSegmentController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_bOnNavMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_MovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_MovementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4EditorPathSegmentController_Statics::NewProp_Location,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4EditorPathSegmentController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4EditorPathSegmentController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4EditorPathSegmentController_Statics::ClassParams = {
		&UT4EditorPathSegmentController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4EditorPathSegmentController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4EditorPathSegmentController_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4EditorPathSegmentController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4EditorPathSegmentController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4EditorPathSegmentController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4EditorPathSegmentController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4EditorPathSegmentController, 729185810);
	template<> T4EDITORCOMMON_API UClass* StaticClass<UT4EditorPathSegmentController>()
	{
		return UT4EditorPathSegmentController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4EditorPathSegmentController(Z_Construct_UClass_UT4EditorPathSegmentController, &UT4EditorPathSegmentController::StaticClass, TEXT("/Script/T4EditorCommon"), TEXT("UT4EditorPathSegmentController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4EditorPathSegmentController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
