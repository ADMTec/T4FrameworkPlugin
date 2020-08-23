// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Public/Animset/T4AnimsetTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimsetTypes() {}
// Cross Module References
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4AnimationLayer();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4AnimsetTemplate();
// End Cross Module References
	static UEnum* ET4AnimationLayer_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4AnimationLayer, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4AnimationLayer"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4AnimationLayer>()
	{
		return ET4AnimationLayer_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4AnimationLayer(ET4AnimationLayer_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4AnimationLayer"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4AnimationLayer_Hash() { return 749629323U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4AnimationLayer()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4AnimationLayer"), 0, Get_Z_Construct_UEnum_T4Asset_ET4AnimationLayer_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4AnimationLayer::Additive", (int64)ET4AnimationLayer::Additive },
				{ "ET4AnimationLayer::Skill", (int64)ET4AnimationLayer::Skill },
				{ "ET4AnimationLayer::System", (int64)ET4AnimationLayer::System },
				{ "ET4AnimationLayer::State", (int64)ET4AnimationLayer::State },
				{ "ET4AnimationLayer::Nums", (int64)ET4AnimationLayer::Nums },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Additive.Name", "ET4AnimationLayer::Additive" },
				{ "Comment", "// #71\n" },
				{ "ModuleRelativePath", "Public/Animset/T4AnimsetTypes.h" },
				{ "Nums.Name", "ET4AnimationLayer::Nums" },
				{ "Skill.Comment", "// #138 : System UI \xeb\xa5\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xea\xb3\xa0, \xeb\x82\xb4\xeb\xb6\x80\xec\xa0\x81\xec\x9c\xbc\xeb\xa1\x9c\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9\xeb\x90\x98\xeb\x8a\x94 Layer (Hit \xeb\xa5\x98)\n" },
				{ "Skill.Name", "ET4AnimationLayer::Skill" },
				{ "Skill.ToolTip", "#138 : System UI \xeb\xa5\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xea\xb3\xa0, \xeb\x82\xb4\xeb\xb6\x80\xec\xa0\x81\xec\x9c\xbc\xeb\xa1\x9c\xeb\xa7\x8c \xec\x82\xac\xec\x9a\xa9\xeb\x90\x98\xeb\x8a\x94 Layer (Hit \xeb\xa5\x98)" },
				{ "State.Comment", "// #131\n" },
				{ "State.Name", "ET4AnimationLayer::State" },
				{ "State.ToolTip", "#131" },
				{ "System.Name", "ET4AnimationLayer::System" },
				{ "ToolTip", "#71" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4AnimationLayer",
				"ET4AnimationLayer",
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
	static UEnum* ET4AnimsetTemplate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4AnimsetTemplate, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4AnimsetTemplate"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4AnimsetTemplate>()
	{
		return ET4AnimsetTemplate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4AnimsetTemplate(ET4AnimsetTemplate_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4AnimsetTemplate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4AnimsetTemplate_Hash() { return 2487212903U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4AnimsetTemplate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4AnimsetTemplate"), 0, Get_Z_Construct_UEnum_T4Asset_ET4AnimsetTemplate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4AnimsetTemplate::Basic", (int64)ET4AnimsetTemplate::Basic },
				{ "ET4AnimsetTemplate::Paragon", (int64)ET4AnimsetTemplate::Paragon },
				{ "ET4AnimsetTemplate::None", (int64)ET4AnimsetTemplate::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic.Name", "ET4AnimsetTemplate::Basic" },
				{ "Comment", "/**\n  * #131\n */// #131\n" },
				{ "ModuleRelativePath", "Public/Animset/T4AnimsetTypes.h" },
				{ "None.Name", "ET4AnimsetTemplate::None" },
				{ "Paragon.Name", "ET4AnimsetTemplate::Paragon" },
				{ "ToolTip", "#131\n // #131" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4AnimsetTemplate",
				"ET4AnimsetTemplate",
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
