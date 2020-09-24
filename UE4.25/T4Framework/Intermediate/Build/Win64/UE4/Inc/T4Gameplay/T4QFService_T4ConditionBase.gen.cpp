// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/QuestFlow/T4QFService_T4ConditionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4QFService_T4ConditionBase() {}
// Cross Module References
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4QFBranchConditionType();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4ConditionBase_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4QFService_T4ConditionBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
// End Cross Module References
	static UEnum* ET4QFBranchConditionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4QFBranchConditionType, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4QFBranchConditionType"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4QFBranchConditionType>()
	{
		return ET4QFBranchConditionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4QFBranchConditionType(ET4QFBranchConditionType_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4QFBranchConditionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4QFBranchConditionType_Hash() { return 385967369U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4QFBranchConditionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4QFBranchConditionType"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4QFBranchConditionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4QFBranchConditionType::Race", (int64)ET4QFBranchConditionType::Race },
				{ "ET4QFBranchConditionType::HP", (int64)ET4QFBranchConditionType::HP },
				{ "ET4QFBranchConditionType::Level", (int64)ET4QFBranchConditionType::Level },
				{ "ET4QFBranchConditionType::None", (int64)ET4QFBranchConditionType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n  * #168\n */" },
				{ "HP.Name", "ET4QFBranchConditionType::HP" },
				{ "Level.Name", "ET4QFBranchConditionType::Level" },
				{ "ModuleRelativePath", "Classes/QuestFlow/T4QFService_T4ConditionBase.h" },
				{ "None.Name", "ET4QFBranchConditionType::None" },
				{ "Race.Name", "ET4QFBranchConditionType::Race" },
				{ "ToolTip", "#168" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4QFBranchConditionType",
				"ET4QFBranchConditionType",
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
	void UT4QFService_T4ConditionBase::StaticRegisterNativesUT4QFService_T4ConditionBase()
	{
	}
	UClass* Z_Construct_UClass_UT4QFService_T4ConditionBase_NoRegister()
	{
		return UT4QFService_T4ConditionBase::StaticClass();
	}
	struct Z_Construct_UClass_UT4QFService_T4ConditionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4QFService_T4ConditionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4QFService_T4ConditionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestFlow/T4QFService_T4ConditionBase.h" },
		{ "ModuleRelativePath", "Classes/QuestFlow/T4QFService_T4ConditionBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4QFService_T4ConditionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4QFService_T4ConditionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4QFService_T4ConditionBase_Statics::ClassParams = {
		&UT4QFService_T4ConditionBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4QFService_T4ConditionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4QFService_T4ConditionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4QFService_T4ConditionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4QFService_T4ConditionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4QFService_T4ConditionBase, 3755551827);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4QFService_T4ConditionBase>()
	{
		return UT4QFService_T4ConditionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4QFService_T4ConditionBase(Z_Construct_UClass_UT4QFService_T4ConditionBase, &UT4QFService_T4ConditionBase::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4QFService_T4ConditionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4QFService_T4ConditionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
