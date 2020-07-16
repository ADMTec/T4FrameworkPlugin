// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameplayMinimal.h"
#include "T4Engine/Public/T4EngineLayer.h"
#include "T4GameData/Public/T4GameDBTypes.h"
#include "Widgets/SCompoundWidget.h"


/**
  * #140
 */
class AT4GameplayHUD;
class T4GAMEPLAY_API ST4GameplayOverlayWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(ST4GameplayOverlayWidget)
		: _OwnerHUD(nullptr) {}
		SLATE_ARGUMENT(TWeakObjectPtr<AT4GameplayHUD>, OwnerHUD)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

protected:
	FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override; // #131

private:
#if WITH_EDITOR
	bool ProcessPlayContent(ET4LayerType InLayerType, FName InContentDBKey); // #146
	bool ProcessWorldTravel(ET4LayerType InLayerType, FName InWorldDBKey); // #146

	bool ProcessSpawnNPC(
		ET4LayerType InLayerType,
		ET4GameDBType InGameDBType,
		const TArray<FName>& InDropItemNames,
		const FVector2D& InScreenPosition
	); // #146
#endif

private:
	TWeakObjectPtr<AT4GameplayHUD> OwnerHUDPtr;
};
