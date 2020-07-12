// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"

#include "T4GameDBTypes.h" // #48
#include "T4GameDataTypes.h" // #148

#include "TableRow/T4MasterTableRow.h" // #118
#include "TableRow/T4ContentTableRow.h" // #27
#include "TableRow/T4WorldTableRow.h" // #27
#include "TableRow/T4PlayerTableRow.h" // #27
#include "TableRow/T4NPCTableRow.h" // #31
#include "TableRow/T4WeaponTableRow.h" // #27, #48
#include "TableRow/T4CostumeTableRow.h" // #27, #48
#include "TableRow/T4SkillSetTableRow.h" // #50
#include "TableRow/T4SkillTableRow.h" // #25
#include "TableRow/T4EffectSetTableRow.h" // #135
#include "TableRow/T4EffectTableRow.h" // #25
#include "TableRow/T4StatTableRow.h" // #114
#include "TableRow/T4ExperienceTableRow.h" // #114

#if WITH_EDITOR
#include "UObject/StructOnScope.h" // #118 : Visual Studio Code Link
#endif

/**
  * #118
 */
class FStructOnScope;
struct T4GAMEDATA_API FT4GameDBRowBase
{
	FT4GameDBRowBase(const FName InRowName)
		: RowName(InRowName)
#if WITH_EDITOR
		, bDirtyed(false)
		, SortOrder(-1)
#endif
	{
	}
	virtual ~FT4GameDBRowBase() {}

	virtual ET4GameDBType GetType() const = 0; // #48

#if WITH_EDITOR
	// #118
	virtual TSharedPtr<FStructOnScope> GetRawDataStruct() = 0;
	virtual bool CheckValidationAll() = 0;
	virtual bool CheckValidationBy(FName InPropertyName) = 0;
	virtual bool HasError() const = 0;
	virtual bool HasParent() const = 0; // #122
	virtual bool HasFolder() const = 0; // #122
	virtual bool HasPinned() const { return true; } // #142 : bPinned 가 체크되면 편집 대상에서 제외! (ParagonMirgration)
	virtual FName GetParentRowName() const = 0; // #122
	virtual void SetParentRowName(FName InParentRowName) = 0; // #122
	virtual FName GetFolderName() const = 0; // #122
	virtual void SetFolderName(FName InFolderName) = 0; // #122
	virtual const FString& GetDescription() const = 0;
	// ~#118
#endif
	
	FName RowName;
	FGuid RowGuid;

#if WITH_EDITOR
	bool bDirtyed; // #118 : Content Editor 에서 편집이 있을 경우 true
	int32 SortOrder;
#endif
};

#if WITH_EDITOR
#define DEFINE_GAME_DATA_COMMON_METHOD()															\
	bool HasParent() const override { return (RawData.ParentRowName != NAME_None) ? true : false; } \
	bool HasFolder() const override { return (RawData.FolderName != NAME_None) ? true : false; }	\
	bool HasPinned() const override { return RawData.bPinned; }										\
	FName GetParentRowName() const { return RawData.ParentRowName; }								\
	void SetParentRowName(FName InParentRowName) { RawData.ParentRowName = InParentRowName; }		\
	FName GetFolderName() const { return RawData.FolderName; }										\
	void SetFolderName(FName InFolderName) { RawData.FolderName = InFolderName; }					\
	const FString& GetDescription() const override { return RawData.Description; }
#endif

struct T4GAMEDATA_API FT4MasterDBRow : public FT4GameDBRowBase
{
	FT4MasterDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}

	ET4GameDBType GetType() const override { return ET4GameDBType::Master; } // #118

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override { return true; }
	bool CheckValidationBy(FName InPropertyName) override { return true; }
	bool HasError() const override { return false; }

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4MasterTableRow RawData; // #27
};

struct T4GAMEDATA_API FT4ContentDBRow : public FT4GameDBRowBase // #146
{
	FT4ContentDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::Content; }

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override { return true; }
	bool CheckValidationBy(FName InPropertyName) override { return true; }
	bool HasError() const override { return false; }

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4ContentTableRow RawData;
};

struct T4GAMEDATA_API FT4WorldDBRow : public FT4GameDBRowBase
{
	FT4WorldDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::World; } // #48

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override { return true; }
	bool CheckValidationBy(FName InPropertyName) override { return true; }
	bool HasError() const override { return false; }

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4WorldTableRow RawData; // #27
};

struct T4GAMEDATA_API FT4PlayerDBRow : public FT4GameDBRowBase
{
	FT4PlayerDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::Player; } // #48

	float GetMaxMoveSpeed(FName InStanceName) const // #140
	{
		if (InStanceName == T4Const_CombatStanceName)
		{
			return RawData.MoveSpeedData.CombatSpeed;
		}
		else if (InStanceName == T4Const_SprintStanceName)
		{
			return RawData.MoveSpeedData.SprintSpeed; // #109
		}
		return RawData.MoveSpeedData.DefaultSpeed; // AIMemory.StanceName == NAME_None || AIMemory.StanceName == T4Const_DefaultStanceName
	}

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override;
	bool CheckValidationBy(FName InPropertyName) override;
	bool HasError() const override;

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4PlayerTableRow RawData; // #27
};

struct T4GAMEDATA_API FT4NPCDBRow : public FT4GameDBRowBase
{
	FT4NPCDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::NPC; } // #48

	float GetMaxMoveSpeed(FName InStanceName) const // #140
	{
		if (InStanceName == T4Const_CombatStanceName)
		{
			return RawData.MoveSpeedData.CombatSpeed;
		}
		else if (InStanceName == T4Const_SprintStanceName)
		{
			return RawData.MoveSpeedData.SprintSpeed; // #109
		}
		return RawData.MoveSpeedData.DefaultSpeed; // AIMemory.StanceName == NAME_None || AIMemory.StanceName == T4Const_DefaultStanceName
	}

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override;
	bool CheckValidationBy(FName InPropertyName) override;
	bool HasError() const override;

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4NPCTableRow RawData; // #31
};

struct T4GAMEDATA_API FT4WeaponDBRow : public FT4GameDBRowBase
{
	FT4WeaponDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::Weapon; } // #48

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override;
	bool CheckValidationBy(FName InPropertyName) override;
	bool HasError() const override;

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4WeaponTableRow RawData; // #27, #48
};

struct T4GAMEDATA_API FT4CostumeDBRow : public FT4GameDBRowBase
{
	FT4CostumeDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::Costume; } // #48

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override { return true; }
	bool CheckValidationBy(FName InPropertyName) override { return true; }
	bool HasError() const override { return false; }

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4CostumeTableRow RawData; // #27, #48
};

struct T4GAMEDATA_API FT4SkillSetDBRow : public FT4GameDBRowBase
{
	FT4SkillSetDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::SkillSet; } // #50

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override;
	bool CheckValidationBy(FName InPropertyName) override;
	bool HasError() const override;

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4SkillSetTableRow RawData; // #27
};

struct T4GAMEDATA_API FT4SkillDBRow : public FT4GameDBRowBase
{
	FT4SkillDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::Skill; } // #48

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override;
	bool CheckValidationBy(FName InPropertyName) override;
	bool HasError() const override;

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4SkillTableRow RawData; // #27
};

// #135
struct T4GAMEDATA_API FT4EffectSetDBRow : public FT4GameDBRowBase
{
	FT4EffectSetDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::EffectSet; }

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override;
	bool CheckValidationBy(FName InPropertyName) override;
	bool HasError() const override;

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4EffectSetTableRow RawData;
};

struct T4GAMEDATA_API FT4EffectDBRow : public FT4GameDBRowBase
{
	FT4EffectDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::Effect; } // #48

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override;
	bool CheckValidationBy(FName InPropertyName) override;
	bool HasError() const override;

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4EffectTableRow RawData; // #27
};

#if (!TECH4_CLIENT_ONLY_USED || WITH_SERVER_CODE) // #149 : 클라이언트에서 서버 로직을 돌리기 위한 처리 (T4GameDataMinimal.h)

struct T4GAMEDATA_API FT4StatDBRow : public FT4GameDBRowBase // #114
{
	FT4StatDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::Stat; } // #48

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override { return true; }
	bool CheckValidationBy(FName InPropertyName) override { return true; }
	bool HasError() const override { return false; }

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4StatTableRow RawData; // #27
};

struct T4GAMEDATA_API FT4ExperienceDBRow : public FT4GameDBRowBase // #114
{
	FT4ExperienceDBRow(const FName InRowName)
		: FT4GameDBRowBase(InRowName)
	{
	}
	ET4GameDBType GetType() const override { return ET4GameDBType::Experience; } // #48

#if WITH_EDITOR
	TSharedPtr<FStructOnScope> GetRawDataStruct() override;
	bool CheckValidationAll() override { return true; }
	bool CheckValidationBy(FName InPropertyName) override { return true; }
	bool HasError() const override { return false; }

	DEFINE_GAME_DATA_COMMON_METHOD()
#endif

	FT4ExperienceTableRow RawData; // #27
};
#endif

class UDataTable;
class T4GAMEDATA_API IT4GameDB
{
public:
	virtual ~IT4GameDB() {}

	virtual bool Initialize(const FSoftObjectPath& InMasterTablePath, const FName InGameContentSelected) = 0; // #135
	virtual void Finalize() = 0; // #135

	virtual bool IsInitialized() const = 0; // #135

	virtual void Reload() = 0; // #125
	virtual bool Refresh(ET4GameDBType InGameDBType) = 0; // #125

	virtual bool HasRow(const FT4GameDBKey& InGameDBKey) const = 0;

	virtual const FT4GameDBRowBase* GetDBRowBase(const FT4GameDBKey& InGameDBKey) const = 0;

	virtual const FT4ContentDBRow* GetContentDBRow(const FT4GameDBKey& InGameDBKey) const = 0; // #146
	virtual const FT4WorldDBRow* GetWorldDBRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4PlayerDBRow* GetPlayerDBRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4NPCDBRow* GetNPCDBRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4WeaponDBRow* GetWeaponDBRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4CostumeDBRow* GetCostumeDBRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4SkillSetDBRow* GetSkillSetDBRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4SkillDBRow* GetSkillDBRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4EffectSetDBRow* GetEffectSetDBRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4EffectDBRow* GetEffectDBRow(const FT4GameDBKey& InGameDBKey) const = 0;
#if (!TECH4_CLIENT_ONLY_USED || WITH_SERVER_CODE) // #149 : 클라이언트에서 서버 로직을 돌리기 위한 처리 (T4GameDataMinimal.h)
	virtual const FT4StatDBRow* GetStatDBRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4ExperienceDBRow* GetExperienceDBRow(const FT4GameDBKey& InGameDBKey) const = 0;
#endif

#if WITH_EDITOR
	// #118
	virtual bool Save(ET4GameDBType InGameDBType, FString& OutErrorMessage) = 0;

	virtual UDataTable* GetDataTable(ET4GameDBType InGameDBType) const = 0;

	virtual bool GetDBKeyRowNames(ET4GameDBType InGameDBType, TArray<FName>& OutGameDBKeyRowNames) const = 0;
	virtual const TArray<FT4GameDBRowBase*>& GetGameDBRows(ET4GameDBType InGameDBType, bool bInCheckValidation) = 0;
	virtual FT4GameDBRowBase* GetGameDBRow(const FT4GameDBKey& InGameDBKey) = 0;

	virtual bool DataTableAddFolder(ET4GameDBType InGameDBType, const FName InNewFolderName, const FName InRefRowName) = 0;
	virtual FT4TableRowBase* DataTableAddRow(ET4GameDBType InGameDBType, const FName InNewRowName, const FName InRefRowName) = 0;
	virtual void DataTableRemoveRow(ET4GameDBType InGameDBType, const FName InRowName) = 0;
	virtual void DataTableRenameRow(ET4GameDBType InGameDBType, const FName InOldRowName, const FName InNewRowName) = 0;
	virtual FT4TableRowBase* DataTableDuplicateRow(ET4GameDBType InGameDBType, const FName InSourceRowName, const FName InNewRowName) = 0;
	virtual void DataTableMoveRow(ET4GameDBType InGameDBType, const FName InTargetRowName, const FName InSourceRowName) = 0;
	virtual void DataTableWriteRow(const FT4GameDBKey& InGameDBKey) = 0; // GameData to RawData

	virtual void DataTableSetTreeExpansion(ET4GameDBType InGameDBType, const FName InRowName, bool bInExpand) = 0; // #122
	virtual bool DataTableIsTreeExpanded(ET4GameDBType InGameDBType, const FName InRowName) const = 0; // #122
	// ~#118
#endif
};

T4GAMEDATA_API IT4GameDB* GetGameDB();
