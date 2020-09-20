// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Classes/AITree/T4ATTask_T4MoveToTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ATTask_T4MoveToTarget() {}
// Cross Module References
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ATTask_T4MoveToTarget_NoRegister();
	T4GAMEPLAY_API UClass* Z_Construct_UClass_UT4ATTask_T4MoveToTarget();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
// End Cross Module References
	void UT4ATTask_T4MoveToTarget::StaticRegisterNativesUT4ATTask_T4MoveToTarget()
	{
	}
	UClass* Z_Construct_UClass_UT4ATTask_T4MoveToTarget_NoRegister()
	{
		return UT4ATTask_T4MoveToTarget::StaticClass();
	}
	struct Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopOnOverlapNeedsUpdate_MetaData[];
#endif
		static void NewProp_bStopOnOverlapNeedsUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlapNeedsUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopOnOverlap_MetaData[];
#endif
		static void NewProp_bStopOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReachTestIncludesGoalRadius_MetaData[];
#endif
		static void NewProp_bReachTestIncludesGoalRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReachTestIncludesGoalRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReachTestIncludesAgentRadius_MetaData[];
#endif
		static void NewProp_bReachTestIncludesAgentRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReachTestIncludesAgentRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectGoalLocation_MetaData[];
#endif
		static void NewProp_bProjectGoalLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectGoalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrackMovingGoal_MetaData[];
#endif
		static void NewProp_bTrackMovingGoal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrackMovingGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialPath_MetaData[];
#endif
		static void NewProp_bAllowPartialPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[];
#endif
		static void NewProp_bAllowStrafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Move To task node.\n * Moves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system.\n */" },
		{ "HideCategories", "Node Task" },
		{ "IncludePath", "AITree/T4ATTask_T4MoveToTarget.h" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4MoveToTarget.h" },
		{ "ToolTip", "Move To task node.\nMoves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlapNeedsUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4MoveToTarget.h" },
	};
#endif
	void Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlapNeedsUpdate_SetBit(void* Obj)
	{
		((UT4ATTask_T4MoveToTarget*)Obj)->bStopOnOverlapNeedsUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlapNeedsUpdate = { "bStopOnOverlapNeedsUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UT4ATTask_T4MoveToTarget), &Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlapNeedsUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlapNeedsUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlapNeedsUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlap_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** DEPRECATED, please use combination of bReachTestIncludes*Radius instead */" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4MoveToTarget.h" },
		{ "ToolTip", "DEPRECATED, please use combination of bReachTestIncludes*Radius instead" },
	};
#endif
	void Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlap_SetBit(void* Obj)
	{
		((UT4ATTask_T4MoveToTarget*)Obj)->bStopOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlap = { "bStopOnOverlap", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UT4ATTask_T4MoveToTarget), &Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesGoalRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test  */" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4MoveToTarget.h" },
		{ "ToolTip", "if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test" },
	};
#endif
	void Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesGoalRadius_SetBit(void* Obj)
	{
		((UT4ATTask_T4MoveToTarget*)Obj)->bReachTestIncludesGoalRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesGoalRadius = { "bReachTestIncludesGoalRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UT4ATTask_T4MoveToTarget), &Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesGoalRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesGoalRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesGoalRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesAgentRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test  */" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4MoveToTarget.h" },
		{ "ToolTip", "if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test" },
	};
#endif
	void Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesAgentRadius_SetBit(void* Obj)
	{
		((UT4ATTask_T4MoveToTarget*)Obj)->bReachTestIncludesAgentRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesAgentRadius = { "bReachTestIncludesAgentRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UT4ATTask_T4MoveToTarget), &Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesAgentRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesAgentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesAgentRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bProjectGoalLocation_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, goal location will be projected on navigation data (navmesh) before using */" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4MoveToTarget.h" },
		{ "ToolTip", "if set, goal location will be projected on navigation data (navmesh) before using" },
	};
#endif
	void Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bProjectGoalLocation_SetBit(void* Obj)
	{
		((UT4ATTask_T4MoveToTarget*)Obj)->bProjectGoalLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bProjectGoalLocation = { "bProjectGoalLocation", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UT4ATTask_T4MoveToTarget), &Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bProjectGoalLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bProjectGoalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bProjectGoalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bTrackMovingGoal_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, path to goal actor will update itself when actor moves */" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4MoveToTarget.h" },
		{ "ToolTip", "if set, path to goal actor will update itself when actor moves" },
	};
#endif
	void Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bTrackMovingGoal_SetBit(void* Obj)
	{
		((UT4ATTask_T4MoveToTarget*)Obj)->bTrackMovingGoal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bTrackMovingGoal = { "bTrackMovingGoal", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UT4ATTask_T4MoveToTarget), &Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bTrackMovingGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bTrackMovingGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bTrackMovingGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowPartialPath_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, use incomplete path when goal can't be reached */" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4MoveToTarget.h" },
		{ "ToolTip", "if set, use incomplete path when goal can't be reached" },
	};
#endif
	void Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
	{
		((UT4ATTask_T4MoveToTarget*)Obj)->bAllowPartialPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UT4ATTask_T4MoveToTarget), &Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowPartialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowPartialPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowStrafe_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4MoveToTarget.h" },
	};
#endif
	void Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowStrafe_SetBit(void* Obj)
	{
		((UT4ATTask_T4MoveToTarget*)Obj)->bAllowStrafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowStrafe = { "bAllowStrafe", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UT4ATTask_T4MoveToTarget), &Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowStrafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowStrafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowStrafe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** \"None\" will result in default filter being used */" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4MoveToTarget.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ATTask_T4MoveToTarget, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** fixed distance added to threshold between AI and goal location in destination reach test */" },
		{ "ModuleRelativePath", "Classes/AITree/T4ATTask_T4MoveToTarget.h" },
		{ "ToolTip", "fixed distance added to threshold between AI and goal location in destination reach test" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ATTask_T4MoveToTarget, AcceptableRadius), METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_AcceptableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_AcceptableRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlapNeedsUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bStopOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesGoalRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bReachTestIncludesAgentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bProjectGoalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bTrackMovingGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowPartialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_bAllowStrafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::NewProp_AcceptableRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ATTask_T4MoveToTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::ClassParams = {
		&UT4ATTask_T4MoveToTarget::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ATTask_T4MoveToTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ATTask_T4MoveToTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ATTask_T4MoveToTarget, 2891482106);
	template<> T4GAMEPLAY_API UClass* StaticClass<UT4ATTask_T4MoveToTarget>()
	{
		return UT4ATTask_T4MoveToTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ATTask_T4MoveToTarget(Z_Construct_UClass_UT4ATTask_T4MoveToTarget, &UT4ATTask_T4MoveToTarget::StaticClass, TEXT("/Script/T4Gameplay"), TEXT("UT4ATTask_T4MoveToTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ATTask_T4MoveToTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
