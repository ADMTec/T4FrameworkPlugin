// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/MainFrame/Server/Services/T4ServerServiceTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ServerServiceTypes() {}
// Cross Module References
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4QuestFlowResult();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4QueState();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4ServerJobType();
// End Cross Module References
	static UEnum* ET4QuestFlowResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4QuestFlowResult, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4QuestFlowResult"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4QuestFlowResult>()
	{
		return ET4QuestFlowResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4QuestFlowResult(ET4QuestFlowResult_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4QuestFlowResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4QuestFlowResult_Hash() { return 3928809489U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4QuestFlowResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4QuestFlowResult"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4QuestFlowResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4QuestFlowResult::StopTask", (int64)ET4QuestFlowResult::StopTask },
				{ "ET4QuestFlowResult::NextTask", (int64)ET4QuestFlowResult::NextTask },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/MainFrame/Server/Services/T4ServerServiceTypes.h" },
				{ "NextTask.Comment", "// EBTNodeResult::Succeeded \xeb\xa6\xac\xed\x84\xb4, \xec\xa7\x84\xed\x96\x89\xec\x9d\x84 \xeb\xa9\x88\xec\xb6\x94\xea\xb3\xa0 \xeb\x8b\xa4\xec\x9d\x8c \xed\x8b\xb1\xec\x97\x90 \xec\xb2\x98\xec\x9d\x8c \xeb\xb6\x80\xed\x84\xb0...(\xeb\x98\x90\xeb\x8a\x94 Wait \xec\xa1\xb0\xea\xb1\xb4)\n" },
				{ "NextTask.Name", "ET4QuestFlowResult::NextTask" },
				{ "NextTask.ToolTip", "EBTNodeResult::Succeeded \xeb\xa6\xac\xed\x84\xb4, \xec\xa7\x84\xed\x96\x89\xec\x9d\x84 \xeb\xa9\x88\xec\xb6\x94\xea\xb3\xa0 \xeb\x8b\xa4\xec\x9d\x8c \xed\x8b\xb1\xec\x97\x90 \xec\xb2\x98\xec\x9d\x8c \xeb\xb6\x80\xed\x84\xb0...(\xeb\x98\x90\xeb\x8a\x94 Wait \xec\xa1\xb0\xea\xb1\xb4)" },
				{ "StopTask.Name", "ET4QuestFlowResult::StopTask" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4QuestFlowResult",
				"ET4QuestFlowResult",
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
	static UEnum* ET4QueState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4QueState, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4QueState"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4QueState>()
	{
		return ET4QueState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4QueState(ET4QueState_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4QueState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4QueState_Hash() { return 2512502952U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4QueState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4QueState"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4QueState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4QueState::None", (int64)ET4QueState::None },
				{ "ET4QueState::Ready", (int64)ET4QueState::Ready },
				{ "ET4QueState::Binding", (int64)ET4QueState::Binding },
				{ "ET4QueState::Binded", (int64)ET4QueState::Binded },
				{ "ET4QueState::Playing", (int64)ET4QueState::Playing },
				{ "ET4QueState::Stoping", (int64)ET4QueState::Stoping },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Binded.Name", "ET4QueState::Binded" },
				{ "Binding.Name", "ET4QueState::Binding" },
				{ "ModuleRelativePath", "Private/MainFrame/Server/Services/T4ServerServiceTypes.h" },
				{ "None.Name", "ET4QueState::None" },
				{ "Playing.Name", "ET4QueState::Playing" },
				{ "Ready.Name", "ET4QueState::Ready" },
				{ "Stoping.Name", "ET4QueState::Stoping" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4QueState",
				"ET4QueState",
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
	static UEnum* ET4ServerJobType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4ServerJobType, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4ServerJobType"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4ServerJobType>()
	{
		return ET4ServerJobType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ServerJobType(ET4ServerJobType_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4ServerJobType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4ServerJobType_Hash() { return 3136932356U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4ServerJobType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ServerJobType"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4ServerJobType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ServerJobType::DespawnNPC", (int64)ET4ServerJobType::DespawnNPC },
				{ "ET4ServerJobType::DieNPC", (int64)ET4ServerJobType::DieNPC },
				{ "ET4ServerJobType::Effect", (int64)ET4ServerJobType::Effect },
				{ "ET4ServerJobType::None", (int64)ET4ServerJobType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n  *\n */" },
				{ "DespawnNPC.Comment", "/**\n  *\n */" },
				{ "DespawnNPC.Name", "ET4ServerJobType::DespawnNPC" },
				{ "DieNPC.Comment", "/**\n  *\n */" },
				{ "DieNPC.Name", "ET4ServerJobType::DieNPC" },
				{ "Effect.Comment", "/**\n  *\n */" },
				{ "Effect.Name", "ET4ServerJobType::Effect" },
				{ "ModuleRelativePath", "Private/MainFrame/Server/Services/T4ServerServiceTypes.h" },
				{ "None.Comment", "/**\n  *\n */" },
				{ "None.Name", "ET4ServerJobType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4ServerJobType",
				"ET4ServerJobType",
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
