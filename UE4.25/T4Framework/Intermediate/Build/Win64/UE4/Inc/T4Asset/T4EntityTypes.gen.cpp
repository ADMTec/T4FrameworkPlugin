// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Asset/Public/Entity/T4EntityTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EntityTypes() {}
// Cross Module References
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityEditorViewportItemSpawn();
	UPackage* Z_Construct_UPackage__Script_T4Asset();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityZoneBrushType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityZoneType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityReactionType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityCharacterModularType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityCharacterMeshType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityMeshType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityBoundType();
	T4ASSET_API UEnum* Z_Construct_UEnum_T4Asset_ET4EntityType();
// End Cross Module References
	static UEnum* ET4EntityEditorViewportItemSpawn_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4EntityEditorViewportItemSpawn, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4EntityEditorViewportItemSpawn"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4EntityEditorViewportItemSpawn>()
	{
		return ET4EntityEditorViewportItemSpawn_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityEditorViewportItemSpawn(ET4EntityEditorViewportItemSpawn_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4EntityEditorViewportItemSpawn"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4EntityEditorViewportItemSpawn_Hash() { return 3350034123U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4EntityEditorViewportItemSpawn()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityEditorViewportItemSpawn"), 0, Get_Z_Construct_UEnum_T4Asset_ET4EntityEditorViewportItemSpawn_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityEditorViewportItemSpawn::DropMesh", (int64)ET4EntityEditorViewportItemSpawn::DropMesh },
				{ "ET4EntityEditorViewportItemSpawn::EquipOrExchange", (int64)ET4EntityEditorViewportItemSpawn::EquipOrExchange },
				{ "ET4EntityEditorViewportItemSpawn::None", (int64)ET4EntityEditorViewportItemSpawn::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #107\n" },
				{ "DropMesh.Name", "ET4EntityEditorViewportItemSpawn::DropMesh" },
				{ "EquipOrExchange.DisplayName", "Item Mesh" },
				{ "EquipOrExchange.Name", "ET4EntityEditorViewportItemSpawn::EquipOrExchange" },
				{ "ModuleRelativePath", "Public/Entity/T4EntityTypes.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4EntityEditorViewportItemSpawn::None" },
				{ "ToolTip", "#107" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4EntityEditorViewportItemSpawn",
				"ET4EntityEditorViewportItemSpawn",
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
	static UEnum* ET4EntityZoneBrushType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4EntityZoneBrushType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4EntityZoneBrushType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4EntityZoneBrushType>()
	{
		return ET4EntityZoneBrushType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityZoneBrushType(ET4EntityZoneBrushType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4EntityZoneBrushType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4EntityZoneBrushType_Hash() { return 4242475999U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4EntityZoneBrushType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityZoneBrushType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4EntityZoneBrushType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityZoneBrushType::Cylinder", (int64)ET4EntityZoneBrushType::Cylinder },
				{ "ET4EntityZoneBrushType::Cube", (int64)ET4EntityZoneBrushType::Cube },
				{ "ET4EntityZoneBrushType::None", (int64)ET4EntityZoneBrushType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #94\n" },
				{ "Cube.Name", "ET4EntityZoneBrushType::Cube" },
				{ "Cylinder.Name", "ET4EntityZoneBrushType::Cylinder" },
				{ "ModuleRelativePath", "Public/Entity/T4EntityTypes.h" },
				{ "None.Comment", "// todo\n" },
				{ "None.Name", "ET4EntityZoneBrushType::None" },
				{ "None.ToolTip", "todo" },
				{ "ToolTip", "#94" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4EntityZoneBrushType",
				"ET4EntityZoneBrushType",
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
	static UEnum* ET4EntityZoneType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4EntityZoneType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4EntityZoneType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4EntityZoneType>()
	{
		return ET4EntityZoneType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityZoneType(ET4EntityZoneType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4EntityZoneType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4EntityZoneType_Hash() { return 886037590U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4EntityZoneType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityZoneType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4EntityZoneType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityZoneType::Static", (int64)ET4EntityZoneType::Static },
				{ "ET4EntityZoneType::Dynamic", (int64)ET4EntityZoneType::Dynamic },
				{ "ET4EntityZoneType::Default", (int64)ET4EntityZoneType::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #94, #147\n" },
				{ "Default.Name", "ET4EntityZoneType::Default" },
				{ "Dynamic.Name", "ET4EntityZoneType::Dynamic" },
				{ "ModuleRelativePath", "Public/Entity/T4EntityTypes.h" },
				{ "Static.Name", "ET4EntityZoneType::Static" },
				{ "ToolTip", "#94, #147" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4EntityZoneType",
				"ET4EntityZoneType",
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
	static UEnum* ET4EntityReactionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4EntityReactionType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4EntityReactionType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4EntityReactionType>()
	{
		return ET4EntityReactionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityReactionType(ET4EntityReactionType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4EntityReactionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4EntityReactionType_Hash() { return 1866851109U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4EntityReactionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityReactionType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4EntityReactionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityReactionType::Hit", (int64)ET4EntityReactionType::Hit },
				{ "ET4EntityReactionType::Knockback", (int64)ET4EntityReactionType::Knockback },
				{ "ET4EntityReactionType::Airborne", (int64)ET4EntityReactionType::Airborne },
				{ "ET4EntityReactionType::Stun", (int64)ET4EntityReactionType::Stun },
				{ "ET4EntityReactionType::Die", (int64)ET4EntityReactionType::Die },
				{ "ET4EntityReactionType::Resurrect", (int64)ET4EntityReactionType::Resurrect },
				{ "ET4EntityReactionType::None", (int64)ET4EntityReactionType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Airborne.Comment", "// #135 : CrowdControl \xec\x97\x90\xec\x84\x9c \xec\x84\xb8\xeb\xb6\x80 Type \xec\x9c\xbc\xeb\xa1\x9c \xeb\xb6\x84\xeb\xa6\xac\n" },
				{ "Airborne.Name", "ET4EntityReactionType::Airborne" },
				{ "Airborne.ToolTip", "#135 : CrowdControl \xec\x97\x90\xec\x84\x9c \xec\x84\xb8\xeb\xb6\x80 Type \xec\x9c\xbc\xeb\xa1\x9c \xeb\xb6\x84\xeb\xa6\xac" },
				{ "Comment", "// #76\n" },
				{ "Die.Comment", "// #135 : CrowdControl \xec\x97\x90\xec\x84\x9c \xec\x84\xb8\xeb\xb6\x80 Type \xec\x9c\xbc\xeb\xa1\x9c \xeb\xb6\x84\xeb\xa6\xac\n" },
				{ "Die.Name", "ET4EntityReactionType::Die" },
				{ "Die.ToolTip", "#135 : CrowdControl \xec\x97\x90\xec\x84\x9c \xec\x84\xb8\xeb\xb6\x80 Type \xec\x9c\xbc\xeb\xa1\x9c \xeb\xb6\x84\xeb\xa6\xac" },
				{ "Hit.Name", "ET4EntityReactionType::Hit" },
				{ "Knockback.Name", "ET4EntityReactionType::Knockback" },
				{ "ModuleRelativePath", "Public/Entity/T4EntityTypes.h" },
				{ "None.Name", "ET4EntityReactionType::None" },
				{ "Resurrect.Name", "ET4EntityReactionType::Resurrect" },
				{ "Stun.Comment", "// #135 : CrowdControl \xec\x97\x90\xec\x84\x9c \xec\x84\xb8\xeb\xb6\x80 Type \xec\x9c\xbc\xeb\xa1\x9c \xeb\xb6\x84\xeb\xa6\xac\n" },
				{ "Stun.Name", "ET4EntityReactionType::Stun" },
				{ "Stun.ToolTip", "#135 : CrowdControl \xec\x97\x90\xec\x84\x9c \xec\x84\xb8\xeb\xb6\x80 Type \xec\x9c\xbc\xeb\xa1\x9c \xeb\xb6\x84\xeb\xa6\xac" },
				{ "ToolTip", "#76" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4EntityReactionType",
				"ET4EntityReactionType",
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
	static UEnum* ET4EntityCharacterModularType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4EntityCharacterModularType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4EntityCharacterModularType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4EntityCharacterModularType>()
	{
		return ET4EntityCharacterModularType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityCharacterModularType(ET4EntityCharacterModularType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4EntityCharacterModularType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4EntityCharacterModularType_Hash() { return 3676282763U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4EntityCharacterModularType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityCharacterModularType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4EntityCharacterModularType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityCharacterModularType::MasterPose", (int64)ET4EntityCharacterModularType::MasterPose },
				{ "ET4EntityCharacterModularType::None", (int64)ET4EntityCharacterModularType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #72\n" },
				{ "MasterPose.DisplayName", "MasterPose : Physics(X), Morph Target(O)" },
				{ "MasterPose.Name", "ET4EntityCharacterModularType::MasterPose" },
				{ "ModuleRelativePath", "Public/Entity/T4EntityTypes.h" },
				{ "None.Comment", "//\x09MeshMerge UMETA(DisplayName = \"MeshMerge : Physics(O), Morph Target(X)\"),\n" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4EntityCharacterModularType::None" },
				{ "None.ToolTip", "MeshMerge UMETA(DisplayName = \"MeshMerge : Physics(O), Morph Target(X)\")," },
				{ "ToolTip", "#72" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4EntityCharacterModularType",
				"ET4EntityCharacterModularType",
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
	static UEnum* ET4EntityCharacterMeshType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4EntityCharacterMeshType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4EntityCharacterMeshType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4EntityCharacterMeshType>()
	{
		return ET4EntityCharacterMeshType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityCharacterMeshType(ET4EntityCharacterMeshType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4EntityCharacterMeshType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4EntityCharacterMeshType_Hash() { return 708790749U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4EntityCharacterMeshType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityCharacterMeshType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4EntityCharacterMeshType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityCharacterMeshType::FullBody", (int64)ET4EntityCharacterMeshType::FullBody },
				{ "ET4EntityCharacterMeshType::Composite", (int64)ET4EntityCharacterMeshType::Composite },
				{ "ET4EntityCharacterMeshType::None", (int64)ET4EntityCharacterMeshType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Composite.Name", "ET4EntityCharacterMeshType::Composite" },
				{ "FullBody.Name", "ET4EntityCharacterMeshType::FullBody" },
				{ "ModuleRelativePath", "Public/Entity/T4EntityTypes.h" },
				{ "None.Comment", "// TODO : #37\n" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4EntityCharacterMeshType::None" },
				{ "None.ToolTip", "TODO : #37" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4EntityCharacterMeshType",
				"ET4EntityCharacterMeshType",
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
	static UEnum* ET4EntityMeshType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4EntityMeshType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4EntityMeshType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4EntityMeshType>()
	{
		return ET4EntityMeshType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityMeshType(ET4EntityMeshType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4EntityMeshType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4EntityMeshType_Hash() { return 3287601200U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4EntityMeshType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityMeshType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4EntityMeshType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityMeshType::StaticMesh", (int64)ET4EntityMeshType::StaticMesh },
				{ "ET4EntityMeshType::SkeletalMesh", (int64)ET4EntityMeshType::SkeletalMesh },
				{ "ET4EntityMeshType::ParticleSystem", (int64)ET4EntityMeshType::ParticleSystem },
				{ "ET4EntityMeshType::None", (int64)ET4EntityMeshType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Entity/T4EntityTypes.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4EntityMeshType::None" },
				{ "ParticleSystem.Name", "ET4EntityMeshType::ParticleSystem" },
				{ "SkeletalMesh.Name", "ET4EntityMeshType::SkeletalMesh" },
				{ "StaticMesh.Name", "ET4EntityMeshType::StaticMesh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4EntityMeshType",
				"ET4EntityMeshType",
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
	static UEnum* ET4EntityBoundType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4EntityBoundType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4EntityBoundType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4EntityBoundType>()
	{
		return ET4EntityBoundType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityBoundType(ET4EntityBoundType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4EntityBoundType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4EntityBoundType_Hash() { return 2902270086U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4EntityBoundType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityBoundType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4EntityBoundType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityBoundType::Box", (int64)ET4EntityBoundType::Box },
				{ "ET4EntityBoundType::Sphere", (int64)ET4EntityBoundType::Sphere },
				{ "ET4EntityBoundType::Cylinder", (int64)ET4EntityBoundType::Cylinder },
				{ "ET4EntityBoundType::Capsule", (int64)ET4EntityBoundType::Capsule },
				{ "ET4EntityBoundType::None", (int64)ET4EntityBoundType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Box.Name", "ET4EntityBoundType::Box" },
				{ "Capsule.Name", "ET4EntityBoundType::Capsule" },
				{ "Comment", "// #126\n" },
				{ "Cylinder.Name", "ET4EntityBoundType::Cylinder" },
				{ "ModuleRelativePath", "Public/Entity/T4EntityTypes.h" },
				{ "None.Comment", "//Cone,\n" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4EntityBoundType::None" },
				{ "None.ToolTip", "Cone," },
				{ "Sphere.Name", "ET4EntityBoundType::Sphere" },
				{ "ToolTip", "#126" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4EntityBoundType",
				"ET4EntityBoundType",
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
	static UEnum* ET4EntityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Asset_ET4EntityType, Z_Construct_UPackage__Script_T4Asset(), TEXT("ET4EntityType"));
		}
		return Singleton;
	}
	template<> T4ASSET_API UEnum* StaticEnum<ET4EntityType>()
	{
		return ET4EntityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityType(ET4EntityType_StaticEnum, TEXT("/Script/T4Asset"), TEXT("ET4EntityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Asset_ET4EntityType_Hash() { return 1365172976U; }
	UEnum* Z_Construct_UEnum_T4Asset_ET4EntityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Asset();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityType"), 0, Get_Z_Construct_UEnum_T4Asset_ET4EntityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityType::Map", (int64)ET4EntityType::Map },
				{ "ET4EntityType::Character", (int64)ET4EntityType::Character },
				{ "ET4EntityType::Prop", (int64)ET4EntityType::Prop },
				{ "ET4EntityType::Item", (int64)ET4EntityType::Item },
				{ "ET4EntityType::Costume", (int64)ET4EntityType::Costume },
				{ "ET4EntityType::Weapon", (int64)ET4EntityType::Weapon },
				{ "ET4EntityType::Goods", (int64)ET4EntityType::Goods },
				{ "ET4EntityType::Zone", (int64)ET4EntityType::Zone },
				{ "ET4EntityType::None", (int64)ET4EntityType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Character.Name", "ET4EntityType::Character" },
				{ "Comment", "/**\n  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/\n */// WARN : #35 : Entity Type \xec\x9d\x84 \xec\xb6\x94\xea\xb0\x80\xed\x95\x9c\xeb\x8b\xa4\xeb\xa9\xb4 \xec\x95\x84\xeb\x9e\x98 \xed\x85\x8c\xea\xb7\xb8\xeb\xa1\x9c \xea\xb2\x80\xec\x83\x89\xed\x95\xb4\xec\x84\x9c \xeb\xaa\xa8\xeb\x91\x90 \xec\xb6\x94\xea\xb0\x80\xed\x95\xb4\xec\xa4\x84 \xea\xb2\x83!\n// #T4_ADD_ENTITY_TAG\n" },
				{ "Costume.Comment", "// #37 : Costume or Weapon\n" },
				{ "Costume.Name", "ET4EntityType::Costume" },
				{ "Costume.ToolTip", "#37 : Costume or Weapon" },
				{ "Goods.Comment", "// #37\n" },
				{ "Goods.Name", "ET4EntityType::Goods" },
				{ "Goods.ToolTip", "#37" },
				{ "Item.Name", "ET4EntityType::Item" },
				{ "Map.Name", "ET4EntityType::Map" },
				{ "ModuleRelativePath", "Public/Entity/T4EntityTypes.h" },
				{ "None.Comment", "// #94\n" },
				{ "None.Name", "ET4EntityType::None" },
				{ "None.ToolTip", "#94" },
				{ "Prop.Comment", "// #71 : Actor => Character\n" },
				{ "Prop.Name", "ET4EntityType::Prop" },
				{ "Prop.ToolTip", "#71 : Actor => Character" },
				{ "ToolTip", "http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/\n // WARN : #35 : Entity Type \xec\x9d\x84 \xec\xb6\x94\xea\xb0\x80\xed\x95\x9c\xeb\x8b\xa4\xeb\xa9\xb4 \xec\x95\x84\xeb\x9e\x98 \xed\x85\x8c\xea\xb7\xb8\xeb\xa1\x9c \xea\xb2\x80\xec\x83\x89\xed\x95\xb4\xec\x84\x9c \xeb\xaa\xa8\xeb\x91\x90 \xec\xb6\x94\xea\xb0\x80\xed\x95\xb4\xec\xa4\x84 \xea\xb2\x83!\n// #T4_ADD_ENTITY_TAG" },
				{ "Weapon.Comment", "// #37\n" },
				{ "Weapon.Name", "ET4EntityType::Weapon" },
				{ "Weapon.ToolTip", "#37" },
				{ "Zone.Comment", "// #164\n" },
				{ "Zone.Name", "ET4EntityType::Zone" },
				{ "Zone.ToolTip", "#164" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Asset,
				nullptr,
				"ET4EntityType",
				"ET4EntityType",
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
