// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/MainFrame/Server/AIController/T4NPCAITypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4NPCAITypes() {}
// Cross Module References
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4GameAITaskState();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4GameAIState();
// End Cross Module References
	static UEnum* ET4GameAITaskState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4GameAITaskState, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4GameAITaskState"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4GameAITaskState>()
	{
		return ET4GameAITaskState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameAITaskState(ET4GameAITaskState_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4GameAITaskState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4GameAITaskState_Hash() { return 880582071U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4GameAITaskState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameAITaskState"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4GameAITaskState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameAITaskState::None", (int64)ET4GameAITaskState::None },
				{ "ET4GameAITaskState::Dead", (int64)ET4GameAITaskState::Dead },
				{ "ET4GameAITaskState::Abnormal", (int64)ET4GameAITaskState::Abnormal },
				{ "ET4GameAITaskState::FindNearestEnemy", (int64)ET4GameAITaskState::FindNearestEnemy },
				{ "ET4GameAITaskState::Approach", (int64)ET4GameAITaskState::Approach },
				{ "ET4GameAITaskState::Attack", (int64)ET4GameAITaskState::Attack },
				{ "ET4GameAITaskState::Roaming", (int64)ET4GameAITaskState::Roaming },
				{ "ET4GameAITaskState::Jump", (int64)ET4GameAITaskState::Jump },
				{ "ET4GameAITaskState::Wait", (int64)ET4GameAITaskState::Wait },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abnormal.Name", "ET4GameAITaskState::Abnormal" },
				{ "Approach.Name", "ET4GameAITaskState::Approach" },
				{ "Attack.Name", "ET4GameAITaskState::Attack" },
				{ "Comment", "// #114\n" },
				{ "Dead.Name", "ET4GameAITaskState::Dead" },
				{ "FindNearestEnemy.Comment", "// #135\n" },
				{ "FindNearestEnemy.Name", "ET4GameAITaskState::FindNearestEnemy" },
				{ "FindNearestEnemy.ToolTip", "#135" },
				{ "Jump.Name", "ET4GameAITaskState::Jump" },
				{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4NPCAITypes.h" },
				{ "None.Name", "ET4GameAITaskState::None" },
				{ "Roaming.Name", "ET4GameAITaskState::Roaming" },
				{ "ToolTip", "#114" },
				{ "Wait.Comment", "// #140\n" },
				{ "Wait.Name", "ET4GameAITaskState::Wait" },
				{ "Wait.ToolTip", "#140" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4GameAITaskState",
				"ET4GameAITaskState",
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
	static UEnum* ET4GameAIState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4GameAIState, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4GameAIState"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4GameAIState>()
	{
		return ET4GameAIState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4GameAIState(ET4GameAIState_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4GameAIState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4GameAIState_Hash() { return 1970429635U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4GameAIState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4GameAIState"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4GameAIState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4GameAIState::Ready", (int64)ET4GameAIState::Ready },
				{ "ET4GameAIState::Invisible", (int64)ET4GameAIState::Invisible },
				{ "ET4GameAIState::Active", (int64)ET4GameAIState::Active },
				{ "ET4GameAIState::Deactive", (int64)ET4GameAIState::Deactive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Name", "ET4GameAIState::Active" },
				{ "Comment", "/**\n  * #114\n */// #114\n" },
				{ "Deactive.Name", "ET4GameAIState::Deactive" },
				{ "Invisible.Name", "ET4GameAIState::Invisible" },
				{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4NPCAITypes.h" },
				{ "Ready.Name", "ET4GameAIState::Ready" },
				{ "ToolTip", "#114\n // #114" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4GameAIState",
				"ET4GameAIState",
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
