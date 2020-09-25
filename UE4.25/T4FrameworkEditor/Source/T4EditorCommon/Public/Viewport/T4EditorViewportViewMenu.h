// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Framework/MultiBox/MultiBoxExtender.h"
#include "Widgets/SWidget.h"
#include "SEditorViewport.h"
#include "SEditorViewportToolBarMenu.h"
#include "Styling/SlateTypes.h"

/**
  * #94 : refer SCommonEditorViewportToolBarBase.h
 */
struct FSlateBrush;
class ST4EditorViewport;
class T4EDITORCOMMON_API ST4EditorViewportViewMenu : public SEditorViewportToolbarMenu
{
public:
	SLATE_BEGIN_ARGS(ST4EditorViewportViewMenu){}
		SLATE_ARGUMENT( TSharedPtr<class FExtender>, MenuExtenders )
	SLATE_END_ARGS()

	void Construct( const FArguments& InArgs, ST4EditorViewport* InViewport, TSharedRef<class SViewportToolBar> InParentToolBar );

private:
	FText GetViewMenuLabel() const;
	const FSlateBrush* GetViewMenuLabelIcon() const;

protected:
	void BindCommands();

	virtual TSharedRef<SWidget> GenerateViewMenuContent() const;
	ST4EditorViewport* ViewportRef;

private:
	TSharedPtr<class FExtender> MenuExtenders;
};
