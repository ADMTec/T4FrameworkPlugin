// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Classes/NPC/T4BuiltinNPCAITypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BuiltinNPCAITypes() {}
// Cross Module References
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4BuiltinAITaskState();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4BuiltinAIState();
// End Cross Module References
	static UEnum* ET4BuiltinAITaskState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4BuiltinAITaskState, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4BuiltinAITaskState"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4BuiltinAITaskState>()
	{
		return ET4BuiltinAITaskState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4BuiltinAITaskState(ET4BuiltinAITaskState_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4BuiltinAITaskState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4BuiltinAITaskState_Hash() { return 2903091639U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4BuiltinAITaskState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4BuiltinAITaskState"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4BuiltinAITaskState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4BuiltinAITaskState::None", (int64)ET4BuiltinAITaskState::None },
				{ "ET4BuiltinAITaskState::Dead", (int64)ET4BuiltinAITaskState::Dead },
				{ "ET4BuiltinAITaskState::Entering", (int64)ET4BuiltinAITaskState::Entering },
				{ "ET4BuiltinAITaskState::AbnormalStatus", (int64)ET4BuiltinAITaskState::AbnormalStatus },
				{ "ET4BuiltinAITaskState::FindNearestEnemy", (int64)ET4BuiltinAITaskState::FindNearestEnemy },
				{ "ET4BuiltinAITaskState::Approaching", (int64)ET4BuiltinAITaskState::Approaching },
				{ "ET4BuiltinAITaskState::Attacking", (int64)ET4BuiltinAITaskState::Attacking },
				{ "ET4BuiltinAITaskState::Roaming", (int64)ET4BuiltinAITaskState::Roaming },
				{ "ET4BuiltinAITaskState::Jumping", (int64)ET4BuiltinAITaskState::Jumping },
				{ "ET4BuiltinAITaskState::Waiting", (int64)ET4BuiltinAITaskState::Waiting },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbnormalStatus.Name", "ET4BuiltinAITaskState::AbnormalStatus" },
				{ "Approaching.Name", "ET4BuiltinAITaskState::Approaching" },
				{ "Attacking.Name", "ET4BuiltinAITaskState::Attacking" },
				{ "Comment", "// #114\n" },
				{ "Dead.Name", "ET4BuiltinAITaskState::Dead" },
				{ "Entering.Name", "ET4BuiltinAITaskState::Entering" },
				{ "FindNearestEnemy.Comment", "// #135\n" },
				{ "FindNearestEnemy.Name", "ET4BuiltinAITaskState::FindNearestEnemy" },
				{ "FindNearestEnemy.ToolTip", "#135" },
				{ "Jumping.Name", "ET4BuiltinAITaskState::Jumping" },
				{ "ModuleRelativePath", "Private/Classes/NPC/T4BuiltinNPCAITypes.h" },
				{ "None.Name", "ET4BuiltinAITaskState::None" },
				{ "Roaming.Name", "ET4BuiltinAITaskState::Roaming" },
				{ "ToolTip", "#114" },
				{ "Waiting.Comment", "// #140\n" },
				{ "Waiting.Name", "ET4BuiltinAITaskState::Waiting" },
				{ "Waiting.ToolTip", "#140" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4BuiltinAITaskState",
				"ET4BuiltinAITaskState",
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
	static UEnum* ET4BuiltinAIState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4BuiltinAIState, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4BuiltinAIState"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4BuiltinAIState>()
	{
		return ET4BuiltinAIState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4BuiltinAIState(ET4BuiltinAIState_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4BuiltinAIState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4BuiltinAIState_Hash() { return 794931528U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4BuiltinAIState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4BuiltinAIState"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4BuiltinAIState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4BuiltinAIState::Ready", (int64)ET4BuiltinAIState::Ready },
				{ "ET4BuiltinAIState::Invisible", (int64)ET4BuiltinAIState::Invisible },
				{ "ET4BuiltinAIState::Active", (int64)ET4BuiltinAIState::Active },
				{ "ET4BuiltinAIState::Deactive", (int64)ET4BuiltinAIState::Deactive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Name", "ET4BuiltinAIState::Active" },
				{ "Comment", "/**\n  * #114\n */// #114\n" },
				{ "Deactive.Name", "ET4BuiltinAIState::Deactive" },
				{ "Invisible.Name", "ET4BuiltinAIState::Invisible" },
				{ "ModuleRelativePath", "Private/Classes/NPC/T4BuiltinNPCAITypes.h" },
				{ "Ready.Name", "ET4BuiltinAIState::Ready" },
				{ "ToolTip", "#114\n // #114" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4BuiltinAIState",
				"ET4BuiltinAIState",
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
