// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #60
 */
#define DEFINE_DETAIL_GET_STRUCT_PROPERTY_MACRO(cls, prop)								\
	InBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(##cls, ##prop), ##cls##::StaticStruct());

#define DEFINE_DETAIL_HIDE_STRUCT_PROPERTY_MACRO(cls, prop)								\
	TSharedRef<IPropertyHandle> ##prop##Handle = DEFINE_DETAIL_GET_STRUCT_PROPERTY_MACRO(cls, prop); \
	InBuilder.HideProperty(##prop##Handle);

#define DEFINE_DETAIL_ADD_CATEGORY_STRUCT_PROPERTY_MACRO(cls, prop)						\
	DEFINE_DETAIL_HIDE_STRUCT_PROPERTY_MACRO(cls, prop);								\
	DetailCategoryBuilder.AddProperty(##prop##Handle);

#define DEFINE_DETAIL_GET_CLASS_PROPERTY_MACRO(cls, prop)								\
	InBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(##cls, ##prop), ##cls##::StaticClass());

#define DEFINE_DETAIL_HIDE_CLASS_PROPERTY_MACRO(cls, prop)								\
	TSharedRef<IPropertyHandle> ##prop##Handle = DEFINE_DETAIL_GET_CLASS_PROPERTY_MACRO(cls, prop); \
	InBuilder.HideProperty(##prop##Handle);

#define DEFINE_DETAIL_HIDE_CLASS_PROPERTY_HANDLE_MACRO(cls, prop)						\
	prop##HandlePtr = DEFINE_DETAIL_GET_CLASS_PROPERTY_MACRO(cls, prop);				\
	InBuilder.HideProperty(##prop##HandlePtr);

#define DEFINE_DETAIL_GET_CHILD_ROPERTY_MACRO(parent, prop)								\
	parent->GetChildHandle(TEXT("" #prop ""), false);

#define DEFINE_DETAIL_ADD_CATEGORY_CHILD_PROPERTY_MACRO(parent, prop)					\
	TSharedPtr<IPropertyHandle> ##prop##Handle = parent->GetChildHandle(TEXT("" #prop ""), false);	\
	if (##prop##Handle.IsValid())														\
	{																					\
		DetailCategoryBuilder.AddProperty(##prop##Handle);								\
	}

 // #85
#define DEFINE_DETAIL_ADD_GROUP_PROPERTY_HANDLE_MACRO(group, prop)						\
	group##.AddPropertyRow(##prop##Handle);

// #76
#define DEFINE_DETAIL_HEADER_GROUP_CHILD_PROPERTY_MACRO(group, parent, prop)			\
	TSharedPtr<IPropertyHandle> ##prop##Handle = parent->GetChildHandle(TEXT("" #prop ""), false);	\
	if (##prop##Handle.IsValid())														\
	{																					\
		##group##.HeaderProperty(##prop##Handle.ToSharedRef());							\
	}

#define DEFINE_DETAIL_ADD_GROUP_CHILD_PROPERTY_MACRO(group, parent, prop)				\
	TSharedPtr<IPropertyHandle> ##prop##Handle = parent->GetChildHandle(TEXT("" #prop ""), false);	\
	if (##prop##Handle.IsValid())														\
	{																					\
		##group##.AddPropertyRow(##prop##Handle.ToSharedRef());							\
	}

#define DEFINE_DETAIL_GET_HANDLE_PTR_CHILD_PROPERTY_MACRO(parent, prop)					\
	{																					\
		##prop##HandlePtr = parent->GetChildHandle(TEXT("" #prop ""), false);			\
	}
