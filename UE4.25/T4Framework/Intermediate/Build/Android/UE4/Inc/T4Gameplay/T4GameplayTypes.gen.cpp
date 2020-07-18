// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Public/T4GameplayTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameplayTypes() {}
// Cross Module References
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4GameTargetParamType();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4ControlModeType();
// End Cross Module References
	static UEnum* ET4GameTargetParamType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4GameTargetParamType, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4GameTargetParamType"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4GameTargetParamType>()
	{
		return ET4GameTargetParamType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameTargetParamType(ET4GameTargetParamType_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4GameTargetParamType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4GameTargetParamType_Hash() { return 3799395665U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4GameTargetParamType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameTargetParamType"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4GameTargetParamType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameTargetParamType::ObjectID", (int64)ET4GameTargetParamType::ObjectID },
				{ "ET4GameTargetParamType::ObjectIDAndLocation", (int64)ET4GameTargetParamType::ObjectIDAndLocation },
				{ "ET4GameTargetParamType::ObjectIDAndDirection", (int64)ET4GameTargetParamType::ObjectIDAndDirection },
				{ "ET4GameTargetParamType::Location", (int64)ET4GameTargetParamType::Location },
				{ "ET4GameTargetParamType::Direction", (int64)ET4GameTargetParamType::Direction },
				{ "ET4GameTargetParamType::None", (int64)ET4GameTargetParamType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #112\n" },
				{ "Direction.Name", "ET4GameTargetParamType::Direction" },
				{ "Location.Comment", "// #135\n" },
				{ "Location.Name", "ET4GameTargetParamType::Location" },
				{ "Location.ToolTip", "#135" },
				{ "ModuleRelativePath", "Public/T4GameplayTypes.h" },
				{ "None.Name", "ET4GameTargetParamType::None" },
				{ "ObjectID.Name", "ET4GameTargetParamType::ObjectID" },
				{ "ObjectIDAndDirection.Comment", "// #126\n" },
				{ "ObjectIDAndDirection.Name", "ET4GameTargetParamType::ObjectIDAndDirection" },
				{ "ObjectIDAndDirection.ToolTip", "#126" },
				{ "ObjectIDAndLocation.Name", "ET4GameTargetParamType::ObjectIDAndLocation" },
				{ "ToolTip", "#112" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4GameTargetParamType",
				"ET4GameTargetParamType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4ControlModeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4ControlModeType, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4ControlModeType"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4ControlModeType>()
	{
		return ET4ControlModeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ControlModeType(ET4ControlModeType_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4ControlModeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4ControlModeType_Hash() { return 2761999169U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4ControlModeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ControlModeType"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4ControlModeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ControlModeType::TPS", (int64)ET4ControlModeType::TPS },
				{ "ET4ControlModeType::QuarterView", (int64)ET4ControlModeType::QuarterView },
				{ "ET4ControlModeType::ShoulderView", (int64)ET4ControlModeType::ShoulderView },
				{ "ET4ControlModeType::FPS", (int64)ET4ControlModeType::FPS },
				{ "ET4ControlModeType::Free", (int64)ET4ControlModeType::Free },
				{ "ET4ControlModeType::None", (int64)ET4ControlModeType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n  * #40, #126\n */" },
				{ "FPS.Comment", "// #40\n" },
				{ "FPS.Name", "ET4ControlModeType::FPS" },
				{ "FPS.ToolTip", "#40" },
				{ "Free.Comment", "// #121\n" },
				{ "Free.Name", "ET4ControlModeType::Free" },
				{ "Free.ToolTip", "#121" },
				{ "ModuleRelativePath", "Public/T4GameplayTypes.h" },
				{ "None.Comment", "// #133\n" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4ControlModeType::None" },
				{ "None.ToolTip", "#133" },
				{ "QuarterView.Name", "ET4ControlModeType::QuarterView" },
				{ "ShoulderView.Comment", "// #139\n" },
				{ "ShoulderView.Name", "ET4ControlModeType::ShoulderView" },
				{ "ShoulderView.ToolTip", "#139" },
				{ "ToolTip", "#40, #126" },
				{ "TPS.Name", "ET4ControlModeType::TPS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4ControlModeType",
				"ET4ControlModeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
