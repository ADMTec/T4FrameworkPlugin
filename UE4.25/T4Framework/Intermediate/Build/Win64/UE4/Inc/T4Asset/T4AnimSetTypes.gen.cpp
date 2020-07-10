// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Public/AnimSet/T4AnimSetTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AnimSetTypes() {}
// Cross Module References
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4AnimSetTemplate();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
// End Cross Module References
	static UEnum* ET4AnimSetTemplate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4AnimSetTemplate, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4AnimSetTemplate"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4AnimSetTemplate>()
	{
		return ET4AnimSetTemplate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4AnimSetTemplate(ET4AnimSetTemplate_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4AnimSetTemplate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4AnimSetTemplate_Hash() { return 283987008U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4AnimSetTemplate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4AnimSetTemplate"), 0, Get_Z_Construct_UEnum_T4Asset_ET4AnimSetTemplate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4AnimSetTemplate::Basic", (int64)ET4AnimSetTemplate::Basic },
				{ "ET4AnimSetTemplate::Paragon", (int64)ET4AnimSetTemplate::Paragon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic.Name", "ET4AnimSetTemplate::Basic" },
				{ "Comment", "/**\n  * #131\n */// #131\n" },
				{ "ModuleRelativePath", "Public/AnimSet/T4AnimSetTypes.h" },
				{ "Paragon.Name", "ET4AnimSetTemplate::Paragon" },
				{ "ToolTip", "#131\n // #131" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4AnimSetTemplate",
				"ET4AnimSetTemplate",
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
