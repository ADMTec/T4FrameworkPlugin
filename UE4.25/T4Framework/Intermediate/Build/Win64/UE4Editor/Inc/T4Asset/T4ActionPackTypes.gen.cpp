// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Public/ActionPack/T4ActionPackTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionPackTypes() {}
// Cross Module References
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4AcceleratedMotion();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4MovementType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4PlayTagType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4PlayTarget();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4AttachParent();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4BranchCondition();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4PlayCount();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4LifecycleType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4ActionPlayMode();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4ActionDataType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4ActionBaseType();
// End Cross Module References
	static UEnum* ET4AcceleratedMotion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4AcceleratedMotion, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4AcceleratedMotion"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4AcceleratedMotion>()
	{
		return ET4AcceleratedMotion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4AcceleratedMotion(ET4AcceleratedMotion_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4AcceleratedMotion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4AcceleratedMotion_Hash() { return 3578565349U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4AcceleratedMotion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4AcceleratedMotion"), 0, Get_Z_Construct_UEnum_T4Asset_ET4AcceleratedMotion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4AcceleratedMotion::Uniform", (int64)ET4AcceleratedMotion::Uniform },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #127\n" },
				{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackTypes.h" },
				{ "ToolTip", "#127" },
				{ "Uniform.Name", "ET4AcceleratedMotion::Uniform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4AcceleratedMotion",
				"ET4AcceleratedMotion",
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
	static UEnum* ET4MovementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4MovementType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4MovementType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4MovementType>()
	{
		return ET4MovementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4MovementType(ET4MovementType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4MovementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4MovementType_Hash() { return 1682354168U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4MovementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4MovementType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4MovementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4MovementType::Straight", (int64)ET4MovementType::Straight },
				{ "ET4MovementType::Parabola", (int64)ET4MovementType::Parabola },
				{ "ET4MovementType::Howitzer", (int64)ET4MovementType::Howitzer },
				{ "ET4MovementType::Mortar", (int64)ET4MovementType::Mortar },
				{ "ET4MovementType::Airborne", (int64)ET4MovementType::Airborne },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Airborne.Comment", "// #127 : \xeb\xb0\x95\xea\xb2\xa9\xed\x8f\xac\n" },
				{ "Airborne.Name", "ET4MovementType::Airborne" },
				{ "Airborne.ToolTip", "#127 : \xeb\xb0\x95\xea\xb2\xa9\xed\x8f\xac" },
				{ "BlueprintType", "true" },
				{ "Comment", "// #127, #132\n" },
				{ "Howitzer.Comment", "// #127 : \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0\n" },
				{ "Howitzer.Name", "ET4MovementType::Howitzer" },
				{ "Howitzer.ToolTip", "#127 : \xed\x8f\xac\xeb\xac\xbc\xec\x84\xa0" },
				{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackTypes.h" },
				{ "Mortar.Comment", "// #127 : \xea\xb3\xa1\xec\x82\xac\xed\x8f\xac\n" },
				{ "Mortar.Name", "ET4MovementType::Mortar" },
				{ "Mortar.ToolTip", "#127 : \xea\xb3\xa1\xec\x82\xac\xed\x8f\xac" },
				{ "Parabola.Comment", "// #63\n" },
				{ "Parabola.Name", "ET4MovementType::Parabola" },
				{ "Parabola.ToolTip", "#63" },
				{ "Straight.Name", "ET4MovementType::Straight" },
				{ "ToolTip", "#127, #132" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4MovementType",
				"ET4MovementType",
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
	static UEnum* ET4PlayTagType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4PlayTagType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4PlayTagType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4PlayTagType>()
	{
		return ET4PlayTagType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4PlayTagType(ET4PlayTagType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4PlayTagType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4PlayTagType_Hash() { return 4080374520U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4PlayTagType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4PlayTagType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4PlayTagType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4PlayTagType::Attachment", (int64)ET4PlayTagType::Attachment },
				{ "ET4PlayTagType::Action", (int64)ET4PlayTagType::Action },
				{ "ET4PlayTagType::Material", (int64)ET4PlayTagType::Material },
				{ "ET4PlayTagType::All", (int64)ET4PlayTagType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Action.Comment", "// #74\n" },
				{ "Action.Name", "ET4PlayTagType::Action" },
				{ "Action.ToolTip", "#74" },
				{ "All.Comment", "// #81\n" },
				{ "All.Name", "ET4PlayTagType::All" },
				{ "All.ToolTip", "#81" },
				{ "Attachment.Name", "ET4PlayTagType::Attachment" },
				{ "Comment", "// #81\n" },
				{ "Material.Comment", "// #74\n" },
				{ "Material.Name", "ET4PlayTagType::Material" },
				{ "Material.ToolTip", "#74" },
				{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackTypes.h" },
				{ "ToolTip", "#81" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4PlayTagType",
				"ET4PlayTagType",
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
	static UEnum* ET4PlayTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4PlayTarget, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4PlayTarget"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4PlayTarget>()
	{
		return ET4PlayTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4PlayTarget(ET4PlayTarget_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4PlayTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4PlayTarget_Hash() { return 317496049U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4PlayTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4PlayTarget"), 0, Get_Z_Construct_UEnum_T4Asset_ET4PlayTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4PlayTarget::Player", (int64)ET4PlayTarget::Player },
				{ "ET4PlayTarget::All", (int64)ET4PlayTarget::All },
				{ "ET4PlayTarget::Default", (int64)ET4PlayTarget::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Comment", "// Default\n" },
				{ "All.Name", "ET4PlayTarget::All" },
				{ "All.ToolTip", "Default" },
				{ "Comment", "// #100\n" },
				{ "Default.Name", "ET4PlayTarget::Default" },
				{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackTypes.h" },
				{ "Player.Name", "ET4PlayTarget::Player" },
				{ "ToolTip", "#100" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4PlayTarget",
				"ET4PlayTarget",
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
	static UEnum* ET4AttachParent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4AttachParent, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4AttachParent"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4AttachParent>()
	{
		return ET4AttachParent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4AttachParent(ET4AttachParent_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4AttachParent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4AttachParent_Hash() { return 3750998676U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4AttachParent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4AttachParent"), 0, Get_Z_Construct_UEnum_T4Asset_ET4AttachParent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4AttachParent::Object", (int64)ET4AttachParent::Object },
				{ "ET4AttachParent::World", (int64)ET4AttachParent::World },
				{ "ET4AttachParent::Default", (int64)ET4AttachParent::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// #54\n" },
				{ "Default.Name", "ET4AttachParent::Default" },
				{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackTypes.h" },
				{ "Object.Name", "ET4AttachParent::Object" },
				{ "ToolTip", "#54" },
				{ "World.Comment", "// Default\n" },
				{ "World.Name", "ET4AttachParent::World" },
				{ "World.ToolTip", "Default" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4AttachParent",
				"ET4AttachParent",
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
	static UEnum* ET4BranchCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4BranchCondition, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4BranchCondition"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4BranchCondition>()
	{
		return ET4BranchCondition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4BranchCondition(ET4BranchCondition_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4BranchCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4BranchCondition_Hash() { return 3949015904U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4BranchCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4BranchCondition"), 0, Get_Z_Construct_UEnum_T4Asset_ET4BranchCondition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4BranchCondition::Always", (int64)ET4BranchCondition::Always },
				{ "ET4BranchCondition::CompareActiveName", (int64)ET4BranchCondition::CompareActiveName },
				{ "ET4BranchCondition::Default", (int64)ET4BranchCondition::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "ET4BranchCondition::Always" },
				{ "Comment", "// #54\n" },
				{ "CompareActiveName.Name", "ET4BranchCondition::CompareActiveName" },
				{ "Default.Name", "ET4BranchCondition::Default" },
				{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackTypes.h" },
				{ "ToolTip", "#54" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4BranchCondition",
				"ET4BranchCondition",
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
	static UEnum* ET4PlayCount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4PlayCount, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4PlayCount"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4PlayCount>()
	{
		return ET4PlayCount_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4PlayCount(ET4PlayCount_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4PlayCount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4PlayCount_Hash() { return 1985566788U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4PlayCount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4PlayCount"), 0, Get_Z_Construct_UEnum_T4Asset_ET4PlayCount_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4PlayCount::Looping", (int64)ET4PlayCount::Looping },
				{ "ET4PlayCount::OneShot", (int64)ET4PlayCount::OneShot },
				{ "ET4PlayCount::Repeat2", (int64)ET4PlayCount::Repeat2 },
				{ "ET4PlayCount::Repeat3", (int64)ET4PlayCount::Repeat3 },
				{ "ET4PlayCount::Repeat4", (int64)ET4PlayCount::Repeat4 },
				{ "ET4PlayCount::Repeat5", (int64)ET4PlayCount::Repeat5 },
				{ "ET4PlayCount::Repeat6", (int64)ET4PlayCount::Repeat6 },
				{ "ET4PlayCount::Repeat7", (int64)ET4PlayCount::Repeat7 },
				{ "ET4PlayCount::Repeat8", (int64)ET4PlayCount::Repeat8 },
				{ "ET4PlayCount::Repeat9", (int64)ET4PlayCount::Repeat9 },
				{ "ET4PlayCount::Repeat10", (int64)ET4PlayCount::Repeat10 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #134\n" },
				{ "Looping.Name", "ET4PlayCount::Looping" },
				{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackTypes.h" },
				{ "OneShot.Name", "ET4PlayCount::OneShot" },
				{ "Repeat10.DisplayName", "Repeat X 10" },
				{ "Repeat10.Name", "ET4PlayCount::Repeat10" },
				{ "Repeat2.DisplayName", "Repeat X 2" },
				{ "Repeat2.Name", "ET4PlayCount::Repeat2" },
				{ "Repeat3.DisplayName", "Repeat X 3" },
				{ "Repeat3.Name", "ET4PlayCount::Repeat3" },
				{ "Repeat4.DisplayName", "Repeat X 4" },
				{ "Repeat4.Name", "ET4PlayCount::Repeat4" },
				{ "Repeat5.DisplayName", "Repeat X 5" },
				{ "Repeat5.Name", "ET4PlayCount::Repeat5" },
				{ "Repeat6.DisplayName", "Repeat X 6" },
				{ "Repeat6.Name", "ET4PlayCount::Repeat6" },
				{ "Repeat7.DisplayName", "Repeat X 7" },
				{ "Repeat7.Name", "ET4PlayCount::Repeat7" },
				{ "Repeat8.DisplayName", "Repeat X 8" },
				{ "Repeat8.Name", "ET4PlayCount::Repeat8" },
				{ "Repeat9.DisplayName", "Repeat X 9" },
				{ "Repeat9.Name", "ET4PlayCount::Repeat9" },
				{ "ToolTip", "#134" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4PlayCount",
				"ET4PlayCount",
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
	static UEnum* ET4LifecycleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4LifecycleType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4LifecycleType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4LifecycleType>()
	{
		return ET4LifecycleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4LifecycleType(ET4LifecycleType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4LifecycleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4LifecycleType_Hash() { return 3632221159U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4LifecycleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4LifecycleType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4LifecycleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4LifecycleType::Auto", (int64)ET4LifecycleType::Auto },
				{ "ET4LifecycleType::Duration", (int64)ET4LifecycleType::Duration },
				{ "ET4LifecycleType::Looping", (int64)ET4LifecycleType::Looping },
				{ "ET4LifecycleType::Default", (int64)ET4LifecycleType::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Name", "ET4LifecycleType::Auto" },
				{ "Comment", "// #24\n" },
				{ "Default.Comment", "// #74, #158\n" },
				{ "Default.Name", "ET4LifecycleType::Default" },
				{ "Default.ToolTip", "#74, #158" },
				{ "Duration.Comment", "// #56\n" },
				{ "Duration.Name", "ET4LifecycleType::Duration" },
				{ "Duration.ToolTip", "#56" },
				{ "Looping.Name", "ET4LifecycleType::Looping" },
				{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackTypes.h" },
				{ "ToolTip", "#24" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4LifecycleType",
				"ET4LifecycleType",
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
	static UEnum* ET4ActionPlayMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4ActionPlayMode, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4ActionPlayMode"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4ActionPlayMode>()
	{
		return ET4ActionPlayMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ActionPlayMode(ET4ActionPlayMode_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4ActionPlayMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4ActionPlayMode_Hash() { return 1240191310U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4ActionPlayMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ActionPlayMode"), 0, Get_Z_Construct_UEnum_T4Asset_ET4ActionPlayMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ActionPlayMode::Auto", (int64)ET4ActionPlayMode::Auto },
				{ "ET4ActionPlayMode::Duration", (int64)ET4ActionPlayMode::Duration },
				{ "ET4ActionPlayMode::Looping", (int64)ET4ActionPlayMode::Looping },
				{ "ET4ActionPlayMode::Default", (int64)ET4ActionPlayMode::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Name", "ET4ActionPlayMode::Auto" },
				{ "Comment", "// #24 => #152 : to ET4LifecycleType\n" },
				{ "Default.Comment", "// #74, #158\n" },
				{ "Default.Name", "ET4ActionPlayMode::Default" },
				{ "Default.ToolTip", "#74, #158" },
				{ "Duration.Comment", "// #56\n" },
				{ "Duration.Name", "ET4ActionPlayMode::Duration" },
				{ "Duration.ToolTip", "#56" },
				{ "Looping.Name", "ET4ActionPlayMode::Looping" },
				{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackTypes.h" },
				{ "ToolTip", "#24 => #152 : to ET4LifecycleType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4ActionPlayMode",
				"ET4ActionPlayMode",
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
	static UEnum* ET4ActionDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4ActionDataType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4ActionDataType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4ActionDataType>()
	{
		return ET4ActionDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ActionDataType(ET4ActionDataType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4ActionDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4ActionDataType_Hash() { return 3507012196U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4ActionDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ActionDataType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4ActionDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ActionDataType::Branch", (int64)ET4ActionDataType::Branch },
				{ "ET4ActionDataType::Movement", (int64)ET4ActionDataType::Movement },
				{ "ET4ActionDataType::Animation", (int64)ET4ActionDataType::Animation },
				{ "ET4ActionDataType::Mesh", (int64)ET4ActionDataType::Mesh },
				{ "ET4ActionDataType::Particle", (int64)ET4ActionDataType::Particle },
				{ "ET4ActionDataType::Decal", (int64)ET4ActionDataType::Decal },
				{ "ET4ActionDataType::Audio", (int64)ET4ActionDataType::Audio },
				{ "ET4ActionDataType::Projectile", (int64)ET4ActionDataType::Projectile },
				{ "ET4ActionDataType::Reaction", (int64)ET4ActionDataType::Reaction },
				{ "ET4ActionDataType::PlayTag", (int64)ET4ActionDataType::PlayTag },
				{ "ET4ActionDataType::TimeScale", (int64)ET4ActionDataType::TimeScale },
				{ "ET4ActionDataType::CameraWork", (int64)ET4ActionDataType::CameraWork },
				{ "ET4ActionDataType::CameraShake", (int64)ET4ActionDataType::CameraShake },
				{ "ET4ActionDataType::PostProcess", (int64)ET4ActionDataType::PostProcess },
				{ "ET4ActionDataType::Environment", (int64)ET4ActionDataType::Environment },
				{ "ET4ActionDataType::Void", (int64)ET4ActionDataType::Void },
				{ "ET4ActionDataType::None", (int64)ET4ActionDataType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animation.Comment", "// #132\n" },
				{ "Animation.Name", "ET4ActionDataType::Animation" },
				{ "Animation.ToolTip", "#132" },
				{ "Audio.Comment", "// #54\n" },
				{ "Audio.Name", "ET4ActionDataType::Audio" },
				{ "Audio.ToolTip", "#54" },
				{ "Branch.Comment", "// #62 : Begin Data Format // #T4_ADD_ACTION_TAG_DATA\n" },
				{ "Branch.Name", "ET4ActionDataType::Branch" },
				{ "Branch.ToolTip", "#62 : Begin Data Format  #T4_ADD_ACTION_TAG_DATA" },
				{ "CameraShake.Comment", "// #54\n" },
				{ "CameraShake.Name", "ET4ActionDataType::CameraShake" },
				{ "CameraShake.ToolTip", "#54" },
				{ "CameraWork.Comment", "// #102\n" },
				{ "CameraWork.Name", "ET4ActionDataType::CameraWork" },
				{ "CameraWork.ToolTip", "#102" },
				{ "Decal.Name", "ET4ActionDataType::Decal" },
				{ "Environment.Comment", "// #100\n" },
				{ "Environment.Name", "ET4ActionDataType::Environment" },
				{ "Environment.ToolTip", "#100" },
				{ "Mesh.Name", "ET4ActionDataType::Mesh" },
				{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackTypes.h" },
				{ "Movement.Comment", "// #54\n" },
				{ "Movement.Name", "ET4ActionDataType::Movement" },
				{ "Movement.ToolTip", "#54" },
				{ "None.Comment", "// #62 : End Data Format\n" },
				{ "None.Name", "ET4ActionDataType::None" },
				{ "None.ToolTip", "#62 : End Data Format" },
				{ "Particle.Comment", "// #108\n" },
				{ "Particle.Name", "ET4ActionDataType::Particle" },
				{ "Particle.ToolTip", "#108" },
				{ "PlayTag.Comment", "// #76\n" },
				{ "PlayTag.Name", "ET4ActionDataType::PlayTag" },
				{ "PlayTag.ToolTip", "#76" },
				{ "PostProcess.Comment", "// #101\n" },
				{ "PostProcess.Name", "ET4ActionDataType::PostProcess" },
				{ "PostProcess.ToolTip", "#101" },
				{ "Projectile.Comment", "// #152\n" },
				{ "Projectile.Name", "ET4ActionDataType::Projectile" },
				{ "Projectile.ToolTip", "#152" },
				{ "Reaction.Comment", "// #63\n" },
				{ "Reaction.Name", "ET4ActionDataType::Reaction" },
				{ "Reaction.ToolTip", "#63" },
				{ "TimeScale.Comment", "// #81\n" },
				{ "TimeScale.Name", "ET4ActionDataType::TimeScale" },
				{ "TimeScale.ToolTip", "#81" },
				{ "Void.Comment", "// #99\n" },
				{ "Void.Name", "ET4ActionDataType::Void" },
				{ "Void.ToolTip", "#99" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4ActionDataType",
				"ET4ActionDataType",
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
	static UEnum* ET4ActionBaseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4ActionBaseType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4ActionBaseType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4ActionBaseType>()
	{
		return ET4ActionBaseType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ActionBaseType(ET4ActionBaseType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4ActionBaseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4ActionBaseType_Hash() { return 3622618996U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4ActionBaseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ActionBaseType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4ActionBaseType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ActionBaseType::Command", (int64)ET4ActionBaseType::Command },
				{ "ET4ActionBaseType::Data", (int64)ET4ActionBaseType::Data },
				{ "ET4ActionBaseType::None", (int64)ET4ActionBaseType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Command.Comment", "// #62\n" },
				{ "Command.Name", "ET4ActionBaseType::Command" },
				{ "Command.ToolTip", "#62" },
				{ "Comment", "// WARN : Action \xec\xb6\x94\xea\xb0\x80 \xec\x8b\x9c\xeb\x8a\x94 \xec\x95\x84\xeb\x9e\x98 \xed\x85\x8c\xea\xb7\xb8\xeb\xa5\xbc \xec\xb0\xbe\xec\x95\x84 \xec\xb6\x94\xea\xb0\x80\xeb\x90\x9c \xec\x95\xa1\xec\x85\x98\xec\x9d\x84 \xea\xb5\xac\xed\x98\x84\xed\x95\xb4\xec\xa3\xbc\xec\x96\xb4\xec\x95\xbc \xed\x95\xa8!!\n// #T4_ADD_ACTION_TAG\n" },
				{ "Data.Name", "ET4ActionBaseType::Data" },
				{ "ModuleRelativePath", "Public/ActionPack/T4ActionPackTypes.h" },
				{ "None.Name", "ET4ActionBaseType::None" },
				{ "ToolTip", "WARN : Action \xec\xb6\x94\xea\xb0\x80 \xec\x8b\x9c\xeb\x8a\x94 \xec\x95\x84\xeb\x9e\x98 \xed\x85\x8c\xea\xb7\xb8\xeb\xa5\xbc \xec\xb0\xbe\xec\x95\x84 \xec\xb6\x94\xea\xb0\x80\xeb\x90\x9c \xec\x95\xa1\xec\x85\x98\xec\x9d\x84 \xea\xb5\xac\xed\x98\x84\xed\x95\xb4\xec\xa3\xbc\xec\x96\xb4\xec\x95\xbc \xed\x95\xa8!!\n#T4_ADD_ACTION_TAG" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4ActionBaseType",
				"ET4ActionBaseType",
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
