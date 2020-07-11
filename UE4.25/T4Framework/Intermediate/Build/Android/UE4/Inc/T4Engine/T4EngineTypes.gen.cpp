// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/T4EngineTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EngineTypes() {}
// Cross Module References
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4EditorAction();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4MovementPathType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4FootstepType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4EquipmentType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4AnimNotifyType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ZoneType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4TargetType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4AnimInstance();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4CollisionChannel();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4MoveMode();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4CameraType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4WorldSource();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4SpawnMode();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ActorType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4WorldType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4LayerType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActorID();
// End Cross Module References
	static UEnum* ET4EditorAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4EditorAction, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4EditorAction"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4EditorAction>()
	{
		return ET4EditorAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EditorAction(ET4EditorAction_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4EditorAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4EditorAction_Hash() { return 1394477508U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4EditorAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EditorAction"), 0, Get_Z_Construct_UEnum_T4Engine_ET4EditorAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EditorAction::ReloadAttributes", (int64)ET4EditorAction::ReloadAttributes },
				{ "ET4EditorAction::ReloadAnimationSkillLayer", (int64)ET4EditorAction::ReloadAnimationSkillLayer },
				{ "ET4EditorAction::ReloadAnimationSystemLayer", (int64)ET4EditorAction::ReloadAnimationSystemLayer },
				{ "ET4EditorAction::ReloadAnimationStateLayer", (int64)ET4EditorAction::ReloadAnimationStateLayer },
				{ "ET4EditorAction::ReloadObject", (int64)ET4EditorAction::ReloadObject },
				{ "ET4EditorAction::RestoreReaction", (int64)ET4EditorAction::RestoreReaction },
				{ "ET4EditorAction::UpdateOverrideMaterials", (int64)ET4EditorAction::UpdateOverrideMaterials },
				{ "ET4EditorAction::PlayTagSet", (int64)ET4EditorAction::PlayTagSet },
				{ "ET4EditorAction::PlayTagClear", (int64)ET4EditorAction::PlayTagClear },
				{ "ET4EditorAction::None", (int64)ET4EditorAction::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "None.Comment", "// #81\n" },
				{ "None.Name", "ET4EditorAction::None" },
				{ "None.ToolTip", "#81" },
				{ "PlayTagClear.Comment", "// #81\n" },
				{ "PlayTagClear.Name", "ET4EditorAction::PlayTagClear" },
				{ "PlayTagClear.ToolTip", "#81" },
				{ "PlayTagSet.Comment", "// #80\n" },
				{ "PlayTagSet.Name", "ET4EditorAction::PlayTagSet" },
				{ "PlayTagSet.ToolTip", "#80" },
				{ "ReloadAnimationSkillLayer.Comment", "// #81\n" },
				{ "ReloadAnimationSkillLayer.Name", "ET4EditorAction::ReloadAnimationSkillLayer" },
				{ "ReloadAnimationSkillLayer.ToolTip", "#81" },
				{ "ReloadAnimationStateLayer.Comment", "// #131\n" },
				{ "ReloadAnimationStateLayer.Name", "ET4EditorAction::ReloadAnimationStateLayer" },
				{ "ReloadAnimationStateLayer.ToolTip", "#131" },
				{ "ReloadAnimationSystemLayer.Comment", "// #81\n" },
				{ "ReloadAnimationSystemLayer.Name", "ET4EditorAction::ReloadAnimationSystemLayer" },
				{ "ReloadAnimationSystemLayer.ToolTip", "#81" },
				{ "ReloadAttributes.Name", "ET4EditorAction::ReloadAttributes" },
				{ "ReloadObject.Comment", "// #131\n" },
				{ "ReloadObject.Name", "ET4EditorAction::ReloadObject" },
				{ "ReloadObject.ToolTip", "#131" },
				{ "RestoreReaction.Comment", "// #37\n" },
				{ "RestoreReaction.Name", "ET4EditorAction::RestoreReaction" },
				{ "RestoreReaction.ToolTip", "#37" },
				{ "UpdateOverrideMaterials.Comment", "// #76\n" },
				{ "UpdateOverrideMaterials.Name", "ET4EditorAction::UpdateOverrideMaterials" },
				{ "UpdateOverrideMaterials.ToolTip", "#76" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4EditorAction",
				"ET4EditorAction",
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
	static UEnum* ET4MovementPathType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4MovementPathType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4MovementPathType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4MovementPathType>()
	{
		return ET4MovementPathType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4MovementPathType(ET4MovementPathType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4MovementPathType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4MovementPathType_Hash() { return 2220434380U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4MovementPathType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4MovementPathType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4MovementPathType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4MovementPathType::Actor", (int64)ET4MovementPathType::Actor },
				{ "ET4MovementPathType::Location", (int64)ET4MovementPathType::Location },
				{ "ET4MovementPathType::Gravity", (int64)ET4MovementPathType::Gravity },
				{ "ET4MovementPathType::Infinity", (int64)ET4MovementPathType::Infinity },
				{ "ET4MovementPathType::InPlace", (int64)ET4MovementPathType::InPlace },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Actor.Name", "ET4MovementPathType::Actor" },
				{ "Comment", "// #135\n" },
				{ "Gravity.Name", "ET4MovementPathType::Gravity" },
				{ "Infinity.Comment", "// #140 : Jump, Knockdown \xeb\x93\xb1, \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 \xec\x9d\xb4\xeb\x8f\x99\n" },
				{ "Infinity.Name", "ET4MovementPathType::Infinity" },
				{ "Infinity.ToolTip", "#140 : Jump, Knockdown \xeb\x93\xb1, \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 \xec\x9d\xb4\xeb\x8f\x99" },
				{ "InPlace.Name", "ET4MovementPathType::InPlace" },
				{ "Location.Name", "ET4MovementPathType::Location" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "ToolTip", "#135" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4MovementPathType",
				"ET4MovementPathType",
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
	static UEnum* ET4FootstepType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4FootstepType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4FootstepType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4FootstepType>()
	{
		return ET4FootstepType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4FootstepType(ET4FootstepType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4FootstepType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4FootstepType_Hash() { return 1487586804U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4FootstepType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4FootstepType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4FootstepType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4FootstepType::FootLeftDown", (int64)ET4FootstepType::FootLeftDown },
				{ "ET4FootstepType::FootLeftUp", (int64)ET4FootstepType::FootLeftUp },
				{ "ET4FootstepType::FootRightDown", (int64)ET4FootstepType::FootRightDown },
				{ "ET4FootstepType::FootRightUp", (int64)ET4FootstepType::FootRightUp },
				{ "ET4FootstepType::None", (int64)ET4FootstepType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #111\n" },
				{ "FootLeftDown.Name", "ET4FootstepType::FootLeftDown" },
				{ "FootLeftUp.Name", "ET4FootstepType::FootLeftUp" },
				{ "FootRightDown.Name", "ET4FootstepType::FootRightDown" },
				{ "FootRightUp.Name", "ET4FootstepType::FootRightUp" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "None.Name", "ET4FootstepType::None" },
				{ "ToolTip", "#111" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4FootstepType",
				"ET4FootstepType",
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
	static UEnum* ET4EquipmentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4EquipmentType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4EquipmentType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4EquipmentType>()
	{
		return ET4EquipmentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EquipmentType(ET4EquipmentType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4EquipmentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4EquipmentType_Hash() { return 1309730382U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4EquipmentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EquipmentType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4EquipmentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EquipmentType::Mount", (int64)ET4EquipmentType::Mount },
				{ "ET4EquipmentType::Unmount", (int64)ET4EquipmentType::Unmount },
				{ "ET4EquipmentType::None", (int64)ET4EquipmentType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #111\n" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "Mount.Name", "ET4EquipmentType::Mount" },
				{ "None.Name", "ET4EquipmentType::None" },
				{ "ToolTip", "#111" },
				{ "Unmount.Name", "ET4EquipmentType::Unmount" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4EquipmentType",
				"ET4EquipmentType",
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
	static UEnum* ET4AnimNotifyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4AnimNotifyType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4AnimNotifyType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4AnimNotifyType>()
	{
		return ET4AnimNotifyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4AnimNotifyType(ET4AnimNotifyType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4AnimNotifyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4AnimNotifyType_Hash() { return 1870502649U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4AnimNotifyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4AnimNotifyType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4AnimNotifyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4AnimNotifyType::Equipment", (int64)ET4AnimNotifyType::Equipment },
				{ "ET4AnimNotifyType::Footstep", (int64)ET4AnimNotifyType::Footstep },
				{ "ET4AnimNotifyType::None", (int64)ET4AnimNotifyType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #111\n" },
				{ "Equipment.Name", "ET4AnimNotifyType::Equipment" },
				{ "Footstep.Name", "ET4AnimNotifyType::Footstep" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "None.Name", "ET4AnimNotifyType::None" },
				{ "ToolTip", "#111" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4AnimNotifyType",
				"ET4AnimNotifyType",
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
	static UEnum* ET4ZoneType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4ZoneType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4ZoneType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4ZoneType>()
	{
		return ET4ZoneType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ZoneType(ET4ZoneType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4ZoneType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4ZoneType_Hash() { return 4002781071U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4ZoneType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ZoneType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4ZoneType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ZoneType::Static", (int64)ET4ZoneType::Static },
				{ "ET4ZoneType::Dynamic", (int64)ET4ZoneType::Dynamic },
				{ "ET4ZoneType::Default", (int64)ET4ZoneType::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #94\n" },
				{ "Default.Name", "ET4ZoneType::Default" },
				{ "Dynamic.Name", "ET4ZoneType::Dynamic" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "Static.Name", "ET4ZoneType::Static" },
				{ "ToolTip", "#94" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4ZoneType",
				"ET4ZoneType",
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
	static UEnum* ET4TargetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4TargetType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4TargetType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4TargetType>()
	{
		return ET4TargetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4TargetType(ET4TargetType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4TargetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4TargetType_Hash() { return 34181162U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4TargetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4TargetType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4TargetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4TargetType::Location", (int64)ET4TargetType::Location },
				{ "ET4TargetType::Direction", (int64)ET4TargetType::Direction },
				{ "ET4TargetType::Actor", (int64)ET4TargetType::Actor },
				{ "ET4TargetType::Manual", (int64)ET4TargetType::Manual },
				{ "ET4TargetType::Default", (int64)ET4TargetType::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Actor.Name", "ET4TargetType::Actor" },
				{ "Default.Comment", "// #40, #44\n" },
				{ "Default.Name", "ET4TargetType::Default" },
				{ "Default.ToolTip", "#40, #44" },
				{ "Direction.Name", "ET4TargetType::Direction" },
				{ "Location.Name", "ET4TargetType::Location" },
				{ "Manual.Name", "ET4TargetType::Manual" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4TargetType",
				"ET4TargetType",
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
	static UEnum* ET4AnimInstance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4AnimInstance, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4AnimInstance"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4AnimInstance>()
	{
		return ET4AnimInstance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4AnimInstance(ET4AnimInstance_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4AnimInstance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4AnimInstance_Hash() { return 1689945295U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4AnimInstance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4AnimInstance"), 0, Get_Z_Construct_UEnum_T4Engine_ET4AnimInstance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4AnimInstance::Human_Basic", (int64)ET4AnimInstance::Human_Basic },
				{ "ET4AnimInstance::Human_Paragon", (int64)ET4AnimInstance::Human_Paragon },
				{ "ET4AnimInstance::Animal_Basic", (int64)ET4AnimInstance::Animal_Basic },
				{ "ET4AnimInstance::Item_Basic", (int64)ET4AnimInstance::Item_Basic },
				{ "ET4AnimInstance::None", (int64)ET4AnimInstance::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animal_Basic.Comment", "// #131\n" },
				{ "Animal_Basic.Name", "ET4AnimInstance::Animal_Basic" },
				{ "Animal_Basic.ToolTip", "#131" },
				{ "Human_Basic.Name", "ET4AnimInstance::Human_Basic" },
				{ "Human_Paragon.Comment", "// #38\n" },
				{ "Human_Paragon.Name", "ET4AnimInstance::Human_Paragon" },
				{ "Human_Paragon.ToolTip", "#38" },
				{ "Item_Basic.Name", "ET4AnimInstance::Item_Basic" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "None.Comment", "// #107\n" },
				{ "None.Name", "ET4AnimInstance::None" },
				{ "None.ToolTip", "#107" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4AnimInstance",
				"ET4AnimInstance",
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
	static UEnum* ET4CollisionChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4CollisionChannel, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4CollisionChannel"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4CollisionChannel>()
	{
		return ET4CollisionChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4CollisionChannel(ET4CollisionChannel_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4CollisionChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4CollisionChannel_Hash() { return 3894517103U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4CollisionChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4CollisionChannel"), 0, Get_Z_Construct_UEnum_T4Engine_ET4CollisionChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4CollisionChannel::WorldStatic", (int64)ET4CollisionChannel::WorldStatic },
				{ "ET4CollisionChannel::WorldDynamic", (int64)ET4CollisionChannel::WorldDynamic },
				{ "ET4CollisionChannel::SpawnObject", (int64)ET4CollisionChannel::SpawnObject },
				{ "ET4CollisionChannel::CollisionVisibility", (int64)ET4CollisionChannel::CollisionVisibility },
				{ "ET4CollisionChannel::Max", (int64)ET4CollisionChannel::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CollisionVisibility.Name", "ET4CollisionChannel::CollisionVisibility" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "ET4CollisionChannel::Max" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "SpawnObject.Comment", "// #112\n" },
				{ "SpawnObject.Name", "ET4CollisionChannel::SpawnObject" },
				{ "SpawnObject.ToolTip", "#112" },
				{ "WorldDynamic.Name", "ET4CollisionChannel::WorldDynamic" },
				{ "WorldStatic.Name", "ET4CollisionChannel::WorldStatic" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4CollisionChannel",
				"ET4CollisionChannel",
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
	static UEnum* ET4MoveMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4MoveMode, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4MoveMode"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4MoveMode>()
	{
		return ET4MoveMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4MoveMode(ET4MoveMode_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4MoveMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4MoveMode_Hash() { return 4241842396U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4MoveMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4MoveMode"), 0, Get_Z_Construct_UEnum_T4Engine_ET4MoveMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4MoveMode::Sync", (int64)ET4MoveMode::Sync },
				{ "ET4MoveMode::Async", (int64)ET4MoveMode::Async },
				{ "ET4MoveMode::Current", (int64)ET4MoveMode::Current },
				{ "ET4MoveMode::Count", (int64)ET4MoveMode::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Async.Name", "ET4MoveMode::Async" },
				{ "Count.Comment", "// #52\n" },
				{ "Count.Name", "ET4MoveMode::Count" },
				{ "Count.ToolTip", "#52" },
				{ "Current.Name", "ET4MoveMode::Current" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "Sync.Name", "ET4MoveMode::Sync" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4MoveMode",
				"ET4MoveMode",
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
	static UEnum* ET4CameraType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4CameraType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4CameraType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4CameraType>()
	{
		return ET4CameraType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4CameraType(ET4CameraType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4CameraType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4CameraType_Hash() { return 2608585776U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4CameraType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4CameraType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4CameraType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4CameraType::TPS", (int64)ET4CameraType::TPS },
				{ "ET4CameraType::QuarterView", (int64)ET4CameraType::QuarterView },
				{ "ET4CameraType::ShoulderView", (int64)ET4CameraType::ShoulderView },
				{ "ET4CameraType::FPS", (int64)ET4CameraType::FPS },
				{ "ET4CameraType::Free", (int64)ET4CameraType::Free },
				{ "ET4CameraType::Editor", (int64)ET4CameraType::Editor },
				{ "ET4CameraType::None", (int64)ET4CameraType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Editor.Comment", "// #133\n" },
				{ "Editor.Hidden", "" },
				{ "Editor.Name", "ET4CameraType::Editor" },
				{ "Editor.ToolTip", "#133" },
				{ "FPS.Comment", "// #40\n" },
				{ "FPS.Name", "ET4CameraType::FPS" },
				{ "FPS.ToolTip", "#40" },
				{ "Free.Comment", "// #121\n" },
				{ "Free.Name", "ET4CameraType::Free" },
				{ "Free.ToolTip", "#121" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4CameraType::None" },
				{ "QuarterView.Name", "ET4CameraType::QuarterView" },
				{ "ShoulderView.Comment", "// #139\n" },
				{ "ShoulderView.Name", "ET4CameraType::ShoulderView" },
				{ "ShoulderView.ToolTip", "#139" },
				{ "TPS.Name", "ET4CameraType::TPS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4CameraType",
				"ET4CameraType",
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
	static UEnum* ET4WorldSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4WorldSource, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4WorldSource"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4WorldSource>()
	{
		return ET4WorldSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4WorldSource(ET4WorldSource_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4WorldSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4WorldSource_Hash() { return 526696593U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4WorldSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4WorldSource"), 0, Get_Z_Construct_UEnum_T4Engine_ET4WorldSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4WorldSource::Game", (int64)ET4WorldSource::Game },
				{ "ET4WorldSource::Preview", (int64)ET4WorldSource::Preview },
				{ "ET4WorldSource::LevelEditor", (int64)ET4WorldSource::LevelEditor },
				{ "ET4WorldSource::None", (int64)ET4WorldSource::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// #87\n" },
				{ "Game.Name", "ET4WorldSource::Game" },
				{ "LevelEditor.Comment", "// Only Editor\n" },
				{ "LevelEditor.Name", "ET4WorldSource::LevelEditor" },
				{ "LevelEditor.ToolTip", "Only Editor" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "None.Name", "ET4WorldSource::None" },
				{ "Preview.Name", "ET4WorldSource::Preview" },
				{ "ToolTip", "#87" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4WorldSource",
				"ET4WorldSource",
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
	static UEnum* ET4SpawnMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4SpawnMode, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4SpawnMode"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4SpawnMode>()
	{
		return ET4SpawnMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4SpawnMode(ET4SpawnMode_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4SpawnMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4SpawnMode_Hash() { return 3702546458U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4SpawnMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4SpawnMode"), 0, Get_Z_Construct_UEnum_T4Engine_ET4SpawnMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4SpawnMode::All", (int64)ET4SpawnMode::All },
				{ "ET4SpawnMode::Client", (int64)ET4SpawnMode::Client },
				{ "ET4SpawnMode::Server", (int64)ET4SpawnMode::Server },
				{ "ET4SpawnMode::Playback", (int64)ET4SpawnMode::Playback },
				{ "ET4SpawnMode::Editor", (int64)ET4SpawnMode::Editor },
				{ "ET4SpawnMode::Max", (int64)ET4SpawnMode::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ET4SpawnMode::All" },
				{ "Client.Name", "ET4SpawnMode::Client" },
				{ "Comment", "// #54\n" },
				{ "Editor.Comment", "// #68\n" },
				{ "Editor.Name", "ET4SpawnMode::Editor" },
				{ "Editor.ToolTip", "#68" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "ET4SpawnMode::Max" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "Playback.Name", "ET4SpawnMode::Playback" },
				{ "Server.Name", "ET4SpawnMode::Server" },
				{ "ToolTip", "#54" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4SpawnMode",
				"ET4SpawnMode",
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
	static UEnum* ET4ActorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4ActorType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4ActorType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4ActorType>()
	{
		return ET4ActorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ActorType(ET4ActorType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4ActorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4ActorType_Hash() { return 2585006357U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4ActorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ActorType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4ActorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ActorType::Character", (int64)ET4ActorType::Character },
				{ "ET4ActorType::PropStatic", (int64)ET4ActorType::PropStatic },
				{ "ET4ActorType::PropSkeletal", (int64)ET4ActorType::PropSkeletal },
				{ "ET4ActorType::PropParticle", (int64)ET4ActorType::PropParticle },
				{ "ET4ActorType::ItemStatic", (int64)ET4ActorType::ItemStatic },
				{ "ET4ActorType::ItemSkeletal", (int64)ET4ActorType::ItemSkeletal },
				{ "ET4ActorType::Zone", (int64)ET4ActorType::Zone },
				{ "ET4ActorType::Projectile", (int64)ET4ActorType::Projectile },
				{ "ET4ActorType::Indicator", (int64)ET4ActorType::Indicator },
				{ "ET4ActorType::Default", (int64)ET4ActorType::Default },
				{ "ET4ActorType::Mirror", (int64)ET4ActorType::Mirror },
				{ "ET4ActorType::None", (int64)ET4ActorType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Character.Comment", "// entity base\n" },
				{ "Character.Name", "ET4ActorType::Character" },
				{ "Character.ToolTip", "entity base" },
				{ "Default.Comment", "// #117\n" },
				{ "Default.Name", "ET4ActorType::Default" },
				{ "Default.ToolTip", "#117" },
				{ "Indicator.Comment", "// #63\n" },
				{ "Indicator.Name", "ET4ActorType::Indicator" },
				{ "Indicator.ToolTip", "#63" },
				{ "ItemSkeletal.Name", "ET4ActorType::ItemSkeletal" },
				{ "ItemStatic.Name", "ET4ActorType::ItemStatic" },
				{ "Mirror.Comment", "// #54\n" },
				{ "Mirror.Name", "ET4ActorType::Mirror" },
				{ "Mirror.ToolTip", "#54" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "None.Comment", "// #140 : \xeb\x8b\xa4\xeb\xa5\xb8 Layer \xec\x9d\x98 Actor \xeb\xa5\xbc \xeb\xaf\xb8\xeb\x9f\xac\xeb\xa7\x81 \xed\x95\x9c\xeb\x8b\xa4.\n" },
				{ "None.Hidden", "" },
				{ "None.Name", "ET4ActorType::None" },
				{ "None.ToolTip", "#140 : \xeb\x8b\xa4\xeb\xa5\xb8 Layer \xec\x9d\x98 Actor \xeb\xa5\xbc \xeb\xaf\xb8\xeb\x9f\xac\xeb\xa7\x81 \xed\x95\x9c\xeb\x8b\xa4." },
				{ "Projectile.Comment", "// code base\n" },
				{ "Projectile.Name", "ET4ActorType::Projectile" },
				{ "Projectile.ToolTip", "code base" },
				{ "PropParticle.Name", "ET4ActorType::PropParticle" },
				{ "PropSkeletal.Name", "ET4ActorType::PropSkeletal" },
				{ "PropStatic.Name", "ET4ActorType::PropStatic" },
				{ "Zone.Name", "ET4ActorType::Zone" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4ActorType",
				"ET4ActorType",
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
	static UEnum* ET4WorldType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4WorldType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4WorldType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4WorldType>()
	{
		return ET4WorldType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4WorldType(ET4WorldType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4WorldType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4WorldType_Hash() { return 1779967552U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4WorldType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4WorldType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4WorldType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4WorldType::Null", (int64)ET4WorldType::Null },
				{ "ET4WorldType::Client", (int64)ET4WorldType::Client },
				{ "ET4WorldType::Server", (int64)ET4WorldType::Server },
				{ "ET4WorldType::Max", (int64)ET4WorldType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Client.Name", "ET4WorldType::Client" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "ET4WorldType::Max" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "Null.Name", "ET4WorldType::Null" },
				{ "Server.Name", "ET4WorldType::Server" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4WorldType",
				"ET4WorldType",
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
	static UEnum* ET4LayerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4LayerType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4LayerType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4LayerType>()
	{
		return ET4LayerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4LayerType(ET4LayerType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4LayerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4LayerType_Hash() { return 1151412693U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4LayerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4LayerType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4LayerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4LayerType::Server", (int64)ET4LayerType::Server },
				{ "ET4LayerType::ServerMax", (int64)ET4LayerType::ServerMax },
				{ "ET4LayerType::Client", (int64)ET4LayerType::Client },
				{ "ET4LayerType::ClientMax", (int64)ET4LayerType::ClientMax },
				{ "ET4LayerType::Preview", (int64)ET4LayerType::Preview },
				{ "ET4LayerType::PreviewMax", (int64)ET4LayerType::PreviewMax },
				{ "ET4LayerType::LevelEditor", (int64)ET4LayerType::LevelEditor },
				{ "ET4LayerType::Max", (int64)ET4LayerType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Client.Name", "ET4LayerType::Client" },
				{ "ClientMax.Name", "ET4LayerType::ClientMax" },
				{ "Comment", "// #143, #148\n" },
				{ "LevelEditor.Name", "ET4LayerType::LevelEditor" },
				{ "Max.Comment", "// #17\n" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "ET4LayerType::Max" },
				{ "Max.ToolTip", "#17" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "Preview.Name", "ET4LayerType::Preview" },
				{ "PreviewMax.Comment", "// #30\n" },
				{ "PreviewMax.Name", "ET4LayerType::PreviewMax" },
				{ "PreviewMax.ToolTip", "#30" },
				{ "Server.Name", "ET4LayerType::Server" },
				{ "ServerMax.Comment", "// #15\n" },
				{ "ServerMax.Name", "ET4LayerType::ServerMax" },
				{ "ServerMax.ToolTip", "#15" },
				{ "ToolTip", "#143, #148" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4LayerType",
				"ET4LayerType",
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
class UScriptStruct* FT4ObjectID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ObjectID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ObjectID, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ObjectID"), sizeof(FT4ObjectID), Get_Z_Construct_UScriptStruct_FT4ObjectID_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ObjectID>()
{
	return FT4ObjectID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ObjectID(FT4ObjectID::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ObjectID"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectID
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ObjectID")),new UScriptStruct::TCppStructOps<FT4ObjectID>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectID;
	struct Z_Construct_UScriptStruct_FT4ObjectID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectID_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #34, #114 : C/S GameObject\n" },
		{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
		{ "ToolTip", "#34, #114 : C/S GameObject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ObjectID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectID, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ObjectID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ObjectID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ObjectID",
		sizeof(FT4ObjectID),
		alignof(FT4ObjectID),
		Z_Construct_UScriptStruct_FT4ObjectID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ObjectID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ObjectID"), sizeof(FT4ObjectID), Get_Z_Construct_UScriptStruct_FT4ObjectID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ObjectID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ObjectID_Hash() { return 3631381196U; }
class UScriptStruct* FT4ActorID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActorID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActorID, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActorID"), sizeof(FT4ActorID), Get_Z_Construct_UScriptStruct_FT4ActorID_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActorID>()
{
	return FT4ActorID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActorID(FT4ActorID::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActorID"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActorID
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActorID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActorID")),new UScriptStruct::TCppStructOps<FT4ActorID>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActorID;
	struct Z_Construct_UScriptStruct_FT4ActorID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActorID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActorID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActorID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_SpawnMode_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_SpawnMode = { "SpawnMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActorID, SpawnMode), Z_Construct_UEnum_T4Engine_ET4SpawnMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_SpawnMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_SpawnMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_SpawnMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActorID, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActorID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_SpawnMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_SpawnMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActorID_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActorID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActorID",
		sizeof(FT4ActorID),
		alignof(FT4ActorID),
		Z_Construct_UScriptStruct_FT4ActorID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActorID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActorID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActorID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActorID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActorID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActorID"), sizeof(FT4ActorID), Get_Z_Construct_UScriptStruct_FT4ActorID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActorID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActorID_Hash() { return 2019791363U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
