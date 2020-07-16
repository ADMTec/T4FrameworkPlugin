// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Public/T4FrameworkTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4FrameworkTypes() {}
// Cross Module References
	T4FRAMEWORK_API UEnum* Z_Construct_UEnum_T4Framework_ET4ControllerType();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	T4FRAMEWORK_API UEnum* Z_Construct_UEnum_T4Framework_ET4FrameworkType();
// End Cross Module References
	static UEnum* ET4ControllerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Framework_ET4ControllerType, Z_Construct_UPackage__Script_T4Framework(), TEXT("ET4ControllerType"));
		}
		return Singleton;
	}
	template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4ControllerType>()
	{
		return ET4ControllerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ControllerType(ET4ControllerType_StaticEnum, TEXT("/Script/T4Framework"), TEXT("ET4ControllerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Framework_ET4ControllerType_Hash() { return 3385833211U; }
	UEnum* Z_Construct_UEnum_T4Framework_ET4ControllerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ControllerType"), 0, Get_Z_Construct_UEnum_T4Framework_ET4ControllerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ControllerType::Player", (int64)ET4ControllerType::Player },
				{ "ET4ControllerType::NPCAI", (int64)ET4ControllerType::NPCAI },
				{ "ET4ControllerType::Max", (int64)ET4ControllerType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Comment", "// #114 : Server Only\n" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "ET4ControllerType::Max" },
				{ "Max.ToolTip", "#114 : Server Only" },
				{ "ModuleRelativePath", "Public/T4FrameworkTypes.h" },
				{ "NPCAI.Comment", "// #114 : Server All, Client Player Only\n" },
				{ "NPCAI.Name", "ET4ControllerType::NPCAI" },
				{ "NPCAI.ToolTip", "#114 : Server All, Client Player Only" },
				{ "Player.Name", "ET4ControllerType::Player" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Framework,
				nullptr,
				"ET4ControllerType",
				"ET4ControllerType",
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
	static UEnum* ET4FrameworkType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Framework_ET4FrameworkType, Z_Construct_UPackage__Script_T4Framework(), TEXT("ET4FrameworkType"));
		}
		return Singleton;
	}
	template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4FrameworkType>()
	{
		return ET4FrameworkType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4FrameworkType(ET4FrameworkType_StaticEnum, TEXT("/Script/T4Framework"), TEXT("ET4FrameworkType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Framework_ET4FrameworkType_Hash() { return 1152334973U; }
	UEnum* Z_Construct_UEnum_T4Framework_ET4FrameworkType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4FrameworkType"), 0, Get_Z_Construct_UEnum_T4Framework_ET4FrameworkType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4FrameworkType::Null", (int64)ET4FrameworkType::Null },
				{ "ET4FrameworkType::Client", (int64)ET4FrameworkType::Client },
				{ "ET4FrameworkType::Server", (int64)ET4FrameworkType::Server },
				{ "ET4FrameworkType::Max", (int64)ET4FrameworkType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Client.Name", "ET4FrameworkType::Client" },
				{ "Comment", "/**\n  * #114\n */// #30\n" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "ET4FrameworkType::Max" },
				{ "ModuleRelativePath", "Public/T4FrameworkTypes.h" },
				{ "Null.Name", "ET4FrameworkType::Null" },
				{ "Server.Name", "ET4FrameworkType::Server" },
				{ "ToolTip", "#114\n // #30" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Framework,
				nullptr,
				"ET4FrameworkType",
				"ET4FrameworkType",
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
