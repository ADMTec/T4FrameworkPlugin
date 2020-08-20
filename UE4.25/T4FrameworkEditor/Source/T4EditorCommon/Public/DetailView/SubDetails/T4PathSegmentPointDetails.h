// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "IDetailCustomization.h"
#include "DetailCategoryBuilder.h"
#include "Input/Reply.h"

/**
  * #155
 */
class IDetailsView;
class IT4EditorViewModel;
class FT4PathSegmentPointDetails : public IDetailCustomization
{
public:
	FT4PathSegmentPointDetails(IT4EditorViewModel* InViewModel);
	~FT4PathSegmentPointDetails();

	void CustomizeDetails(IDetailLayoutBuilder& InBuilder);

protected:
	bool CustomizePropertyOverride(
		IDetailLayoutBuilder& InBuilder,
		IDetailCategoryBuilder& InDetailCategoryBuilder,
		TSharedRef<IPropertyHandle> InPropertyHandle
	);

private:
	IT4EditorViewModel* ViewModelRef;
};