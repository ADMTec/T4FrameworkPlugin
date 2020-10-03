// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4GameplayConstants.h"
#include "T4Engine/Public/T4EngineLayer.h"
#include "T4GameData/Public/T4GameDBTypes.h"
#include "Widgets/SCompoundWidget.h"

/**
  * #140
 */
class AT4BuiltinHUD;
class T4GAMEPLAY_API ST4BuiltinHUDWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(ST4BuiltinHUDWidget)
		: _OwnerHUD(nullptr) {}
		SLATE_ARGUMENT(TWeakObjectPtr<AT4BuiltinHUD>, OwnerHUD)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

protected:
#if WITH_EDITOR
	FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override; // #131
#endif

#if !UE_BUILD_SHIPPING
	FReply HandleOnQuickHide();

	FReply HandleOnQuickChangePrevCamera();
	FReply HandleOnQuickChangeNextCamera();

	FReply HandleOnQuickChangeCombatStance();
	FReply HandleOnQuickChangeDefaultStance();

	FReply HandleOnQuickPlayContent(uint32 InUID);
	FReply HandleOnQuickWorldTravel(uint32 InUID);
	FReply HandleOnQuickPCSpawn(uint32 InUID);
	FReply HandleOnQuickNPCSpawn(uint32 InUID);

	FReply HandleOnQuickDespawnAll();
	FReply HandleOnQuickSpawnNPC_Random();

	FReply HandleOnQuickReplayRec();
	FReply HandleOnQuickReplayRecStop();
	FReply HandleOnQuickReplayPlay();
	FReply HandleOnQuickReplayPlayStop();

	bool HandleOnQuickIsReplayRecordable() const;
	bool HandleOnQuickReplayIsRecording() const;
	bool HandleOnQuickIsReplayPlayable() const;
	bool HandleOnQuickReplayIsPlaying() const;
#endif

private:
	bool OnExecuteByUID(const FT4GameUID& InGameUID);

#if WITH_EDITOR
	bool ProcessPlayContent(ET4LayerType InLayerType, FName InQuestDBKey); // #146
	bool ProcessWorldTravel(ET4LayerType InLayerType, FName InWorldDBKey); // #146

	bool ProcessSpawnNPC(
		ET4LayerType InLayerType,
		ET4GameDBType InGameDBType,
		const TArray<FName>& InDropItemNames,
		const FVector2D& InScreenPosition
	); // #146
#endif

private:
	TWeakObjectPtr<AT4BuiltinHUD> OwnerHUDPtr;
};
