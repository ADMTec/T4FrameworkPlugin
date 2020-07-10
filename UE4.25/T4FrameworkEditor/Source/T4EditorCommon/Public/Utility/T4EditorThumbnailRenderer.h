// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ThumbnailRendering/TextureThumbnailRenderer.h"
#include "ThumbnailRendering/DefaultSizedThumbnailRenderer.h"
#include "T4EditorThumbnailRenderer.generated.h"

/**
  * 
 */

// WARN : #84 SaveThumbnailImage 에 새로운 포멧을 추가해주어야 저장이 된다.

class UTexture2D;

UCLASS()
class T4EDITORCOMMON_API UT4EditorThumbnailRenderer : public UTextureThumbnailRenderer
{
	GENERATED_BODY()

public:
	// UThumbnailRenderer interface.
	virtual bool CanVisualizeAsset(UObject* Object) override;
	virtual void GetThumbnailSize(UObject* Object, float Zoom, uint32& OutWidth, uint32& OutHeight) const override;
	virtual void Draw(
		UObject* Object, 
		int32 X, 
		int32 Y, 
		uint32 Width, 
		uint32 Height, 
		FRenderTarget*, 
		FCanvas* Canvas,
		bool bAdditionalViewFamily
	) override;

protected:
	virtual UTexture2D* GetThumbnailTextureFromObject(UObject* Object) const { return nullptr; }
};
