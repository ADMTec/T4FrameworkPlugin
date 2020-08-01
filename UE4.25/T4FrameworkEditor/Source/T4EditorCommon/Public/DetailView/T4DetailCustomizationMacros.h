// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #60
 */
#define DETAIL_GET_STRUCT_PROPERTY(cls, prop)								\
	InBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(##cls, ##prop), ##cls##::StaticStruct());

#define DETAIL_HIDE_STRUCT_PROPERTY(cls, prop)								\
	TSharedRef<IPropertyHandle> ##prop##Handle = DETAIL_GET_STRUCT_PROPERTY(cls, prop); \
	InBuilder.HideProperty(##prop##Handle);

#define DETAIL_ADD_CATEGORY_STRUCT_PROPERTY(cls, prop)						\
	DETAIL_HIDE_STRUCT_PROPERTY(cls, prop);									\
	DetailCategoryBuilder.AddProperty(##prop##Handle);

#define DETAIL_GET_CLASS_PROPERTY(cls, prop)								\
	InBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(##cls, ##prop), ##cls##::StaticClass());

#define DETAIL_HIDE_CLASS_PROPERTY(cls, prop)								\
	TSharedRef<IPropertyHandle> ##prop##Handle = DETAIL_GET_CLASS_PROPERTY(cls, prop); \
	InBuilder.HideProperty(##prop##Handle);

#define DETAIL_HIDE_CLASS_PROPERTY_HANDLE(cls, prop)						\
	prop##HandlePtr = DETAIL_GET_CLASS_PROPERTY(cls, prop);					\
	InBuilder.HideProperty(##prop##HandlePtr);

#define DETAIL_GET_CHILD_ROPERTY(parent, prop)								\
	parent->GetChildHandle(TEXT("" #prop ""), false);

#define DETAIL_ADD_CATEGORY_CHILD_PROPERTY(parent, prop)					\
	TSharedPtr<IPropertyHandle> ##prop##Handle = parent->GetChildHandle(TEXT("" #prop ""), false);	\
	if (##prop##Handle.IsValid())											\
	{																		\
		DetailCategoryBuilder.AddProperty(##prop##Handle);					\
	}

 // #85
#define DETAIL_ADD_GROUP_PROPERTY_HANDLE(group, prop)						\
	group##.AddPropertyRow(##prop##Handle);

// #76
#define DETAIL_HEADER_GROUP_CHILD_PROPERTY(group, parent, prop)				\
	TSharedPtr<IPropertyHandle> ##prop##Handle = parent->GetChildHandle(TEXT("" #prop ""), false);	\
	if (##prop##Handle.IsValid())											\
	{																		\
		##group##.HeaderProperty(##prop##Handle.ToSharedRef());				\
	}

#define DETAIL_ADD_GROUP_CHILD_PROPERTY(group, parent, prop)				\
	TSharedPtr<IPropertyHandle> ##prop##Handle = parent->GetChildHandle(TEXT("" #prop ""), false);	\
	if (##prop##Handle.IsValid())											\
	{																		\
		##group##.AddPropertyRow(##prop##Handle.ToSharedRef());				\
	}

#define DETAIL_GET_HANDLE_PTR_CHILD_PROPERTY(parent, prop)					\
	{																		\
		##prop##HandlePtr = parent->GetChildHandle(TEXT("" #prop ""), false);			\
	}

#define DETAIL_COMPARE_PROPERTY(prop, name)	(!##prop##.Compare(TEXT(#name)))