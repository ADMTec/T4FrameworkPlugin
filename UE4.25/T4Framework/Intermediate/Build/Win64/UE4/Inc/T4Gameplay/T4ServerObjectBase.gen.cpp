// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Server/Object/T4ServerObjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ServerObjectBase() {}
// Cross Module References
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4ServerObjectType();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ServerObjectBase_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ServerObjectBase();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4GameObjectBase();
// End Cross Module References
	static UEnum* ET4ServerObjectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4ServerObjectType, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4ServerObjectType"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4ServerObjectType>()
	{
		return ET4ServerObjectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ServerObjectType(ET4ServerObjectType_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4ServerObjectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4ServerObjectType_Hash() { return 4244473835U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4ServerObjectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ServerObjectType"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4ServerObjectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ServerObjectType::Player", (int64)ET4ServerObjectType::Player },
				{ "ET4ServerObjectType::NPC", (int64)ET4ServerObjectType::NPC },
				{ "ET4ServerObjectType::Item", (int64)ET4ServerObjectType::Item },
				{ "ET4ServerObjectType::None", (int64)ET4ServerObjectType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n  * #114\n */// #142\n" },
				{ "Item.Name", "ET4ServerObjectType::Item" },
				{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectBase.h" },
				{ "None.Comment", "// #161\n" },
				{ "None.Name", "ET4ServerObjectType::None" },
				{ "None.ToolTip", "#161" },
				{ "NPC.Name", "ET4ServerObjectType::NPC" },
				{ "Player.Name", "ET4ServerObjectType::Player" },
				{ "ToolTip", "#114\n // #142" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4ServerObjectType",
				"ET4ServerObjectType",
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
	void UT4ServerObjectBase::StaticRegisterNativesUT4ServerObjectBase()
	{
	}
	UClass* Z_Construct_UClass_UT4ServerObjectBase_NoRegister()
	{
		return UT4ServerObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_UT4ServerObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ServerObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4GameObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ServerObjectBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Server/Object/T4ServerObjectBase.h" },
		{ "ModuleRelativePath", "Private/Server/Object/T4ServerObjectBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ServerObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ServerObjectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ServerObjectBase_Statics::ClassParams = {
		&UT4ServerObjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ServerObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ServerObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ServerObjectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ServerObjectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ServerObjectBase, 1690018971);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4ServerObjectBase>()
	{
		return UT4ServerObjectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ServerObjectBase(Z_Construct_UClass_UT4ServerObjectBase, &UT4ServerObjectBase::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4ServerObjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ServerObjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
