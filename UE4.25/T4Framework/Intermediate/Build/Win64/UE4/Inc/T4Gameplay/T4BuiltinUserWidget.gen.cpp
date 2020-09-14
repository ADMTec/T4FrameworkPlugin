// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/UI/T4BuiltinUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BuiltinUserWidget() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BuiltinUserWidget_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4BuiltinUserWidget();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4UserWidgetBase();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
// End Cross Module References
	void UT4BuiltinUserWidget::StaticRegisterNativesUT4BuiltinUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UT4BuiltinUserWidget_NoRegister()
	{
		return UT4BuiltinUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UT4BuiltinUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4BuiltinUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4UserWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4BuiltinUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * #150\n */" },
		{ "IncludePath", "UI/T4BuiltinUserWidget.h" },
		{ "ModuleRelativePath", "Classes/UI/T4BuiltinUserWidget.h" },
		{ "ToolTip", "#150" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4BuiltinUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4BuiltinUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4BuiltinUserWidget_Statics::ClassParams = {
		&UT4BuiltinUserWidget::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4BuiltinUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4BuiltinUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4BuiltinUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4BuiltinUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4BuiltinUserWidget, 2079082888);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4BuiltinUserWidget>()
	{
		return UT4BuiltinUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4BuiltinUserWidget(Z_Construct_UClass_UT4BuiltinUserWidget, &UT4BuiltinUserWidget::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4BuiltinUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4BuiltinUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
