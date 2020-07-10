// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "IDetailCustomization.h"
#include "DetailCategoryBuilder.h"
#include "Input/Reply.h"

/**
  * #123
 */
class IDetailsView;
class ST4TimeTagDropListWidget; // #90
class IT4EditorViewModel;
class FT4EnvironmentTimeTagDetails : public IDetailCustomization
{
public:
	FT4EnvironmentTimeTagDetails(IT4EditorViewModel* InViewModel);
	~FT4EnvironmentTimeTagDetails();

	void CustomizeDetails(IDetailLayoutBuilder& InBuilder);

protected:
	bool CustomizePropertyOverride(
		IDetailLayoutBuilder& InBuilder,
		IDetailCategoryBuilder& InDetailCategoryBuilder,
		TSharedRef<IPropertyHandle> InPropertyHandle
	);

private:
	IT4EditorViewModel* ViewModelRef;

	TSharedPtr<ST4TimeTagDropListWidget> TimeTagDropListWidgetPtr; // #90
};
