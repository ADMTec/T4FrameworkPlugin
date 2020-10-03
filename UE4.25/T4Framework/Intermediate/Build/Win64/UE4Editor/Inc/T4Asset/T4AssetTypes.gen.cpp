// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Public/T4AssetTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AssetTypes() {}
// Cross Module References
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4MoveAngleType();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4BuiltInEasing();
// End Cross Module References
	static UEnum* ET4MoveAngleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4MoveAngleType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4MoveAngleType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4MoveAngleType>()
	{
		return ET4MoveAngleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4MoveAngleType(ET4MoveAngleType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4MoveAngleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4MoveAngleType_Hash() { return 808494976U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4MoveAngleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4MoveAngleType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4MoveAngleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4MoveAngleType::Back", (int64)ET4MoveAngleType::Back },
				{ "ET4MoveAngleType::Front", (int64)ET4MoveAngleType::Front },
				{ "ET4MoveAngleType::Left", (int64)ET4MoveAngleType::Left },
				{ "ET4MoveAngleType::Right", (int64)ET4MoveAngleType::Right },
				{ "ET4MoveAngleType::Up", (int64)ET4MoveAngleType::Up },
				{ "ET4MoveAngleType::None", (int64)ET4MoveAngleType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Back.Name", "ET4MoveAngleType::Back" },
				{ "BlueprintType", "true" },
				{ "Comment", "// #132\n" },
				{ "Front.Name", "ET4MoveAngleType::Front" },
				{ "Left.Name", "ET4MoveAngleType::Left" },
				{ "ModuleRelativePath", "Public/T4AssetTypes.h" },
				{ "None.Name", "ET4MoveAngleType::None" },
				{ "Right.Name", "ET4MoveAngleType::Right" },
				{ "ToolTip", "#132" },
				{ "Up.Name", "ET4MoveAngleType::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4MoveAngleType",
				"ET4MoveAngleType",
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
	static UEnum* ET4BuiltInEasing_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4BuiltInEasing, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4BuiltInEasing"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4BuiltInEasing>()
	{
		return ET4BuiltInEasing_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4BuiltInEasing(ET4BuiltInEasing_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4BuiltInEasing"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4BuiltInEasing_Hash() { return 2669277672U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4BuiltInEasing()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4BuiltInEasing"), 0, Get_Z_Construct_UEnum_T4Asset_ET4BuiltInEasing_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4BuiltInEasing::Linear", (int64)ET4BuiltInEasing::Linear },
				{ "ET4BuiltInEasing::SinIn", (int64)ET4BuiltInEasing::SinIn },
				{ "ET4BuiltInEasing::SinOut", (int64)ET4BuiltInEasing::SinOut },
				{ "ET4BuiltInEasing::SinInOut", (int64)ET4BuiltInEasing::SinInOut },
				{ "ET4BuiltInEasing::QuadIn", (int64)ET4BuiltInEasing::QuadIn },
				{ "ET4BuiltInEasing::QuadOut", (int64)ET4BuiltInEasing::QuadOut },
				{ "ET4BuiltInEasing::QuadInOut", (int64)ET4BuiltInEasing::QuadInOut },
				{ "ET4BuiltInEasing::CubicIn", (int64)ET4BuiltInEasing::CubicIn },
				{ "ET4BuiltInEasing::CubicOut", (int64)ET4BuiltInEasing::CubicOut },
				{ "ET4BuiltInEasing::CubicInOut", (int64)ET4BuiltInEasing::CubicInOut },
				{ "ET4BuiltInEasing::QuartIn", (int64)ET4BuiltInEasing::QuartIn },
				{ "ET4BuiltInEasing::QuartOut", (int64)ET4BuiltInEasing::QuartOut },
				{ "ET4BuiltInEasing::QuartInOut", (int64)ET4BuiltInEasing::QuartInOut },
				{ "ET4BuiltInEasing::QuintIn", (int64)ET4BuiltInEasing::QuintIn },
				{ "ET4BuiltInEasing::QuintOut", (int64)ET4BuiltInEasing::QuintOut },
				{ "ET4BuiltInEasing::QuintInOut", (int64)ET4BuiltInEasing::QuintInOut },
				{ "ET4BuiltInEasing::ExpoIn", (int64)ET4BuiltInEasing::ExpoIn },
				{ "ET4BuiltInEasing::ExpoOut", (int64)ET4BuiltInEasing::ExpoOut },
				{ "ET4BuiltInEasing::ExpoInOut", (int64)ET4BuiltInEasing::ExpoInOut },
				{ "ET4BuiltInEasing::CircIn", (int64)ET4BuiltInEasing::CircIn },
				{ "ET4BuiltInEasing::CircOut", (int64)ET4BuiltInEasing::CircOut },
				{ "ET4BuiltInEasing::CircInOut", (int64)ET4BuiltInEasing::CircInOut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CircIn.Comment", "// Circular easing\n" },
				{ "CircIn.Grouping", "Circular" },
				{ "CircIn.Name", "ET4BuiltInEasing::CircIn" },
				{ "CircIn.ToolTip", "Circular easing" },
				{ "CircInOut.Grouping", "Circular" },
				{ "CircInOut.Name", "ET4BuiltInEasing::CircInOut" },
				{ "CircOut.Grouping", "Circular" },
				{ "CircOut.Name", "ET4BuiltInEasing::CircOut" },
				{ "Comment", "/**\n  * \n */// #102 : ref EMovieSceneBuiltInEasing\n//        https://easings.net/\n" },
				{ "CubicIn.Comment", "// Cubic easing\n" },
				{ "CubicIn.Grouping", "Cubic" },
				{ "CubicIn.Name", "ET4BuiltInEasing::CubicIn" },
				{ "CubicIn.ToolTip", "Cubic easing" },
				{ "CubicInOut.Grouping", "Cubic" },
				{ "CubicInOut.Name", "ET4BuiltInEasing::CubicInOut" },
				{ "CubicOut.Grouping", "Cubic" },
				{ "CubicOut.Name", "ET4BuiltInEasing::CubicOut" },
				{ "ExpoIn.Comment", "// Exponential easing\n" },
				{ "ExpoIn.Grouping", "Exponential" },
				{ "ExpoIn.Name", "ET4BuiltInEasing::ExpoIn" },
				{ "ExpoIn.ToolTip", "Exponential easing" },
				{ "ExpoInOut.Grouping", "Exponential" },
				{ "ExpoInOut.Name", "ET4BuiltInEasing::ExpoInOut" },
				{ "ExpoOut.Grouping", "Exponential" },
				{ "ExpoOut.Name", "ET4BuiltInEasing::ExpoOut" },
				{ "Linear.Grouping", "Linear" },
				{ "Linear.Name", "ET4BuiltInEasing::Linear" },
				{ "ModuleRelativePath", "Public/T4AssetTypes.h" },
				{ "QuadIn.Comment", "// Quadratic easing\n" },
				{ "QuadIn.Grouping", "Quadratic" },
				{ "QuadIn.Name", "ET4BuiltInEasing::QuadIn" },
				{ "QuadIn.ToolTip", "Quadratic easing" },
				{ "QuadInOut.Grouping", "Quadratic" },
				{ "QuadInOut.Name", "ET4BuiltInEasing::QuadInOut" },
				{ "QuadOut.Grouping", "Quadratic" },
				{ "QuadOut.Name", "ET4BuiltInEasing::QuadOut" },
				{ "QuartIn.Comment", "// Quartic easing\n" },
				{ "QuartIn.Grouping", "Quartic" },
				{ "QuartIn.Name", "ET4BuiltInEasing::QuartIn" },
				{ "QuartIn.ToolTip", "Quartic easing" },
				{ "QuartInOut.Grouping", "Quartic" },
				{ "QuartInOut.Name", "ET4BuiltInEasing::QuartInOut" },
				{ "QuartOut.Grouping", "Quartic" },
				{ "QuartOut.Name", "ET4BuiltInEasing::QuartOut" },
				{ "QuintIn.Comment", "// Quintic easing\n" },
				{ "QuintIn.Grouping", "Quintic" },
				{ "QuintIn.Name", "ET4BuiltInEasing::QuintIn" },
				{ "QuintIn.ToolTip", "Quintic easing" },
				{ "QuintInOut.Grouping", "Quintic" },
				{ "QuintInOut.Name", "ET4BuiltInEasing::QuintInOut" },
				{ "QuintOut.Grouping", "Quintic" },
				{ "QuintOut.Name", "ET4BuiltInEasing::QuintOut" },
				{ "SinIn.Comment", "// Sinusoidal easing\n" },
				{ "SinIn.Grouping", "Sinusoidal" },
				{ "SinIn.Name", "ET4BuiltInEasing::SinIn" },
				{ "SinIn.ToolTip", "Sinusoidal easing" },
				{ "SinInOut.Grouping", "Sinusoidal" },
				{ "SinInOut.Name", "ET4BuiltInEasing::SinInOut" },
				{ "SinOut.Grouping", "Sinusoidal" },
				{ "SinOut.Name", "ET4BuiltInEasing::SinOut" },
				{ "ToolTip", "// #102 : ref EMovieSceneBuiltInEasing\n//        https://easings.net/" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4BuiltInEasing",
				"ET4BuiltInEasing",
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
