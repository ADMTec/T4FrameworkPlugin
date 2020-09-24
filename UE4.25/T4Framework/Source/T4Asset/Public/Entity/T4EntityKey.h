// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4AssetMinimal.h"
#include "T4EntityTypes.h"
#include "T4EntityKey.generated.h"

/**
  * #54
 */
USTRUCT()
struct FT4EntityKey
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Common)
	ET4EntityType Type;

	UPROPERTY(EditAnywhere, Category = Common)
	FName Value;

public:
	FT4EntityKey()
		: Type(ET4EntityType::None)
		, Value(NAME_None)
	{
	}

	FT4EntityKey(const FName& InName)
		: Type(ET4EntityType::None)
		, Value(InName)
	{
	}

	FT4EntityKey(const ET4EntityType InType, const TCHAR* InValue)
		: Type(InType)
		, Value(InValue)
	{
	}

	FT4EntityKey(const ET4EntityType InType, const FName& InValue)
		: Type(InType)
		, Value(InValue)
	{
	}

	FT4EntityKey(const ET4EntityType InType, const FString& InValue)
		: Type(InType)
		, Value(*InValue)
	{
	}

	FT4EntityKey(const FT4EntityKey& InEntityKey)
		: Type(InEntityKey.Type)
		, Value(InEntityKey.Value)
	{
	}

	FORCEINLINE FT4EntityKey operator=(const FT4EntityKey& InRhs)
	{
		Type = InRhs.Type;
		Value = InRhs.Value;
		return *this;
	}

	FORCEINLINE FT4EntityKey operator=(const FString& InRhs)
	{
		Value = *(InRhs);
		return *this;
	}

	FORCEINLINE bool operator==(const FT4EntityKey& InRhs) const
	{
		return (Value == InRhs.Value && Type == InRhs.Type) ? true : false;
	}

	FORCEINLINE bool operator!=(const FT4EntityKey& InRhs) const
	{
		return (Value != InRhs.Value || Type != InRhs.Type) ? true : false;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FT4EntityKey& InRhs)
	{
		return HashCombine(GetTypeHash(InRhs.Type), GetTypeHash(InRhs.Value.ToString()));
	}

	FORCEINLINE bool IsValid() const
	{
		return (ET4EntityType::None != Type && Value != NAME_None) ? true : false;
	}

	FORCEINLINE bool CheckType(const ET4EntityType InType) const
	{
		return (Type == InType) ? true : false;
	}

	FORCEINLINE FString ToNameString() const
	{
		return Value.ToString();
	}

	FORCEINLINE FString ToTypeString() const
	{
		static const TCHAR* T4Const_EntityTypeStrings[] =
		{
			TEXT("World"),
			TEXT("Actor"),
			TEXT("Prop"),
			TEXT("Item"), // #37 : Costume or Weapon
			TEXT("Costume"), // #37
			TEXT("Weapon"),
			TEXT("Goods"), // #164
			TEXT("Zone"),
			TEXT("Max"),
		};
		static_assert(UE_ARRAY_COUNT(T4Const_EntityTypeStrings) == (uint8)(ET4EntityType::None) + 1, "Entity doesn't match!");
		check(uint8(Type) < UE_ARRAY_COUNT(T4Const_EntityTypeStrings));
		return T4Const_EntityTypeStrings[uint8(Type)];
	}

	FORCEINLINE FString ToString() const
	{
		return FString::Printf(
			TEXT("EntityKey:%s=%s"),
			*(ToNameString()),
			*(ToTypeString())
		);
	}
};
