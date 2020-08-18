// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/NPC/BTTasks/T4BTTask_T4DetermineNextPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BTTask_T4DetermineNextPoint() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4BTTask_T4DetermineNextPoint::StaticRegisterNativesUT4BTTask_T4DetermineNextPoint()
	{
	}
	UClass* Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint_NoRegister()
	{
		return UT4BTTask_T4DetermineNextPoint::StaticClass();
	}
	struct Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NPC/BTTasks/T4BTTask_T4DetermineNextPoint.h" },
		{ "ModuleRelativePath", "Classes/NPC/BTTasks/T4BTTask_T4DetermineNextPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BTTask_T4DetermineNextPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint_Statics::ClassParams = {
		&UT4BTTask_T4DetermineNextPoint::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BTTask_T4DetermineNextPoint, 4239212595);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4BTTask_T4DetermineNextPoint>()
	{
		return UT4BTTask_T4DetermineNextPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BTTask_T4DetermineNextPoint(Z_Construct_UClass_UT4BTTask_T4DetermineNextPoint, &UT4BTTask_T4DetermineNextPoint::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4BTTask_T4DetermineNextPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BTTask_T4DetermineNextPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
