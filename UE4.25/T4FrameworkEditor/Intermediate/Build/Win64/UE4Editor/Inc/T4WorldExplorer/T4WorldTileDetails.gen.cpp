// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4WorldExplorer/Private/WorldMap/T4WorldTileDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldTileDetails() {}
// Cross Module References
	T4WORLDEXPLORER_API UScriptStruct* Z_Construct_UScriptStruct_FT4TileLODEntryDetails();
	UPackage* Z_Construct_UPackage__Script_T4WorldExplorer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSimplificationDetails();
	T4WORLDEXPLORER_API UClass* Z_Construct_UClass_UT4WorldTileDetails_NoRegister();
	T4WORLDEXPLORER_API UClass* Z_Construct_UClass_UT4WorldTileDetails();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
class UScriptStruct* FT4TileLODEntryDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4WORLDEXPLORER_API uint32 Get_Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4TileLODEntryDetails, Z_Construct_UPackage__Script_T4WorldExplorer(), TEXT("T4TileLODEntryDetails"), sizeof(FT4TileLODEntryDetails), Get_Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Hash());
	}
	return Singleton;
}
template<> T4WORLDEXPLORER_API UScriptStruct* StaticStruct<FT4TileLODEntryDetails>()
{
	return FT4TileLODEntryDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4TileLODEntryDetails(FT4TileLODEntryDetails::StaticStruct, TEXT("/Script/T4WorldExplorer"), TEXT("T4TileLODEntryDetails"), false, nullptr, nullptr);
static struct FScriptStruct_T4WorldExplorer_StaticRegisterNativesFT4TileLODEntryDetails
{
	FScriptStruct_T4WorldExplorer_StaticRegisterNativesFT4TileLODEntryDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4TileLODEntryDetails")),new UScriptStruct::TCppStructOps<FT4TileLODEntryDetails>);
	}
} ScriptStruct_T4WorldExplorer_StaticRegisterNativesFT4TileLODEntryDetails;
	struct Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimplificationDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimplificationDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// FT4TileLODEntryDetails\n//\n// Helper class to hold tile LOD level description\n//\n" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "FT4TileLODEntryDetails\n\nHelper class to hold tile LOD level description" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4TileLODEntryDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_SimplificationDetails_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_SimplificationDetails = { "SimplificationDetails", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TileLODEntryDetails, SimplificationDetails), Z_Construct_UScriptStruct_FLevelSimplificationDetails, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_SimplificationDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_SimplificationDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "LODDetails" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "10" },
		{ "Comment", "// Relative to original tile streaming distance\n" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "Relative to original tile streaming distance" },
		{ "UIMax", "500000" },
		{ "UIMin", "10" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TileLODEntryDetails, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "LODDetails" },
		{ "Comment", "// Maximum deviation of details percentage\n" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "Maximum deviation of details percentage" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4TileLODEntryDetails, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_LODIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_SimplificationDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::NewProp_LODIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4WorldExplorer,
		nullptr,
		&NewStructOps,
		"T4TileLODEntryDetails",
		sizeof(FT4TileLODEntryDetails),
		alignof(FT4TileLODEntryDetails),
		Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4TileLODEntryDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4WorldExplorer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4TileLODEntryDetails"), sizeof(FT4TileLODEntryDetails), Get_Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4TileLODEntryDetails_Hash() { return 2944471873U; }
	void UT4WorldTileDetails::StaticRegisterNativesUT4WorldTileDetails()
	{
	}
	UClass* Z_Construct_UClass_UT4WorldTileDetails_NoRegister()
	{
		return UT4WorldTileDetails::StaticClass();
	}
	struct Z_Construct_UClass_UT4WorldTileDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LOD4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LOD3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LOD2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LOD1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideInTileView_MetaData[];
#endif
		static void NewProp_bHideInTileView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideInTileView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsolutePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbsolutePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentPackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentPackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileEditable_MetaData[];
#endif
		static void NewProp_bTileEditable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileEditable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4WorldTileDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4WorldExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UT4WorldTileDetails\n// \n// Helper class to hold world tile information\n// Holding this information in UObject gives us ability to use property editors and support undo operations\n// \n" },
		{ "IncludePath", "WorldMap/T4WorldTileDetails.h" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "UT4WorldTileDetails\n\nHelper class to hold world tile information\nHolding this information in UObject gives us ability to use property editors and support undo operations" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD4_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD4 = { "LOD4", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldTileDetails, LOD4), Z_Construct_UScriptStruct_FT4TileLODEntryDetails, METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD3_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD3 = { "LOD3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldTileDetails, LOD3), Z_Construct_UScriptStruct_FT4TileLODEntryDetails, METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD2_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD2 = { "LOD2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldTileDetails, LOD2), Z_Construct_UScriptStruct_FT4TileLODEntryDetails, METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD1_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD1 = { "LOD1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldTileDetails, LOD1), Z_Construct_UScriptStruct_FT4TileLODEntryDetails, METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_NumLOD_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "Comment", "// LOD entries number\n" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "LOD entries number" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_NumLOD = { "NumLOD", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldTileDetails, NumLOD), METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_NumLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_NumLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bHideInTileView_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Whether to hide tile in the world composition tile view\n" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "Whether to hide tile in the world composition tile view" },
	};
#endif
	void Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bHideInTileView_SetBit(void* Obj)
	{
		((UT4WorldTileDetails*)Obj)->bHideInTileView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bHideInTileView = { "bHideInTileView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4WorldTileDetails), &Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bHideInTileView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bHideInTileView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bHideInTileView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_ZOrder_MetaData[] = {
		{ "Category", "Tile" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "-1000" },
		{ "Comment", "// Tile sorting order\n" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "Tile sorting order" },
		{ "UIMax", "1000" },
		{ "UIMin", "-1000" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldTileDetails, ZOrder), METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_ZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_ZOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_AbsolutePosition_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Tile absolute position in the world (readonly)\n" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "Tile absolute position in the world (readonly)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_AbsolutePosition = { "AbsolutePosition", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldTileDetails, AbsolutePosition), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_AbsolutePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_AbsolutePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Tile position in the world, relative to parent \n" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "Tile position in the world, relative to parent" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldTileDetails, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_ParentPackageName_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Parent tile long package name\x09\n" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "Parent tile long package name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_ParentPackageName = { "ParentPackageName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldTileDetails, ParentPackageName), METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_ParentPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_ParentPackageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_PackageName_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Tile long package name (readonly)\x09\n" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "Tile long package name (readonly)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldTileDetails, PackageName), METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bTileEditable_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "// Whether this tile properties can be edited via details panel\n" },
		{ "ModuleRelativePath", "Private/WorldMap/T4WorldTileDetails.h" },
		{ "ToolTip", "Whether this tile properties can be edited via details panel" },
	};
#endif
	void Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bTileEditable_SetBit(void* Obj)
	{
		((UT4WorldTileDetails*)Obj)->bTileEditable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bTileEditable = { "bTileEditable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UT4WorldTileDetails), &Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bTileEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bTileEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bTileEditable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4WorldTileDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_LOD1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_NumLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bHideInTileView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_ZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_AbsolutePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_ParentPackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_PackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldTileDetails_Statics::NewProp_bTileEditable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WorldTileDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WorldTileDetails>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WorldTileDetails_Statics::ClassParams = {
		&UT4WorldTileDetails::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4WorldTileDetails_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4WorldTileDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4WorldTileDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WorldTileDetails()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WorldTileDetails_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WorldTileDetails, 348975856);
	template<> T4WORLDEXPLORER_API UClass* StaticClass<UT4WorldTileDetails>()
	{
		return UT4WorldTileDetails::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WorldTileDetails(Z_Construct_UClass_UT4WorldTileDetails, &UT4WorldTileDetails::StaticClass, TEXT("/Script/T4WorldExplorer"), TEXT("UT4WorldTileDetails"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WorldTileDetails);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
