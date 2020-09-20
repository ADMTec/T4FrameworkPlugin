// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/MainFrame/Server/AIController/T4BuiltinNPCAITypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4BuiltinNPCAITypes() {}
// Cross Module References
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4BuiltinAITaskType();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4BuiltinAIStateType();
// End Cross Module References
	static UEnum* ET4BuiltinAITaskType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4BuiltinAITaskType, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4BuiltinAITaskType"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4BuiltinAITaskType>()
	{
		return ET4BuiltinAITaskType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4BuiltinAITaskType(ET4BuiltinAITaskType_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4BuiltinAITaskType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4BuiltinAITaskType_Hash() { return 1244209991U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4BuiltinAITaskType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4BuiltinAITaskType"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4BuiltinAITaskType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4BuiltinAITaskType::None", (int64)ET4BuiltinAITaskType::None },
				{ "ET4BuiltinAITaskType::Dead", (int64)ET4BuiltinAITaskType::Dead },
				{ "ET4BuiltinAITaskType::Entering", (int64)ET4BuiltinAITaskType::Entering },
				{ "ET4BuiltinAITaskType::AbnormalStatus", (int64)ET4BuiltinAITaskType::AbnormalStatus },
				{ "ET4BuiltinAITaskType::FindNearestEnemy", (int64)ET4BuiltinAITaskType::FindNearestEnemy },
				{ "ET4BuiltinAITaskType::Approaching", (int64)ET4BuiltinAITaskType::Approaching },
				{ "ET4BuiltinAITaskType::Attacking", (int64)ET4BuiltinAITaskType::Attacking },
				{ "ET4BuiltinAITaskType::Roaming", (int64)ET4BuiltinAITaskType::Roaming },
				{ "ET4BuiltinAITaskType::Jumping", (int64)ET4BuiltinAITaskType::Jumping },
				{ "ET4BuiltinAITaskType::Waiting", (int64)ET4BuiltinAITaskType::Waiting },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbnormalStatus.Name", "ET4BuiltinAITaskType::AbnormalStatus" },
				{ "Approaching.Name", "ET4BuiltinAITaskType::Approaching" },
				{ "Attacking.Name", "ET4BuiltinAITaskType::Attacking" },
				{ "Comment", "// #114\n" },
				{ "Dead.Name", "ET4BuiltinAITaskType::Dead" },
				{ "Entering.Name", "ET4BuiltinAITaskType::Entering" },
				{ "FindNearestEnemy.Comment", "// #135\n" },
				{ "FindNearestEnemy.Name", "ET4BuiltinAITaskType::FindNearestEnemy" },
				{ "FindNearestEnemy.ToolTip", "#135" },
				{ "Jumping.Name", "ET4BuiltinAITaskType::Jumping" },
				{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4BuiltinNPCAITypes.h" },
				{ "None.Name", "ET4BuiltinAITaskType::None" },
				{ "Roaming.Name", "ET4BuiltinAITaskType::Roaming" },
				{ "ToolTip", "#114" },
				{ "Waiting.Comment", "// #140\n" },
				{ "Waiting.Name", "ET4BuiltinAITaskType::Waiting" },
				{ "Waiting.ToolTip", "#140" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4BuiltinAITaskType",
				"ET4BuiltinAITaskType",
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
	static UEnum* ET4BuiltinAIStateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4BuiltinAIStateType, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4BuiltinAIStateType"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4BuiltinAIStateType>()
	{
		return ET4BuiltinAIStateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4BuiltinAIStateType(ET4BuiltinAIStateType_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4BuiltinAIStateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4BuiltinAIStateType_Hash() { return 1057024916U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4BuiltinAIStateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4BuiltinAIStateType"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4BuiltinAIStateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4BuiltinAIStateType::Ready", (int64)ET4BuiltinAIStateType::Ready },
				{ "ET4BuiltinAIStateType::Invisible", (int64)ET4BuiltinAIStateType::Invisible },
				{ "ET4BuiltinAIStateType::Active", (int64)ET4BuiltinAIStateType::Active },
				{ "ET4BuiltinAIStateType::Deactive", (int64)ET4BuiltinAIStateType::Deactive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Name", "ET4BuiltinAIStateType::Active" },
				{ "Comment", "/**\n  * #114\n */// #114\n" },
				{ "Deactive.Name", "ET4BuiltinAIStateType::Deactive" },
				{ "Invisible.Name", "ET4BuiltinAIStateType::Invisible" },
				{ "ModuleRelativePath", "Private/MainFrame/Server/AIController/T4BuiltinNPCAITypes.h" },
				{ "Ready.Name", "ET4BuiltinAIStateType::Ready" },
				{ "ToolTip", "#114\n // #114" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
				nullptr,
				"ET4BuiltinAIStateType",
				"ET4BuiltinAIStateType",
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
