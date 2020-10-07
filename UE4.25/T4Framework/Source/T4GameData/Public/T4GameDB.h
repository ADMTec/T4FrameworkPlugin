// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4GameDataMinimal.h"

#include "T4GameDBTypes.h" // #48
#include "T4GameDataTypes.h" // #148

#include "TableRow/T4QuestTableRow.h" // #27
#include "TableRow/T4WorldTableRow.h" // #27
#include "TableRow/T4PlayerTableRow.h" // #27
#include "TableRow/T4NPCTableRow.h" // #31
#include "TableRow/T4WeaponTableRow.h" // #27, #48
#include "TableRow/T4CostumeTableRow.h" // #27, #48
#include "TableRow/T4GoodsTableRow.h" // #164
#include "TableRow/T4SkillSetTableRow.h" // #50
#include "TableRow/T4SkillTableRow.h" // #25
#include "TableRow/T4EffectTableRow.h" // #25
#if (!TECH4_CLIENT_ONLY_USED || WITH_SERVER_CODE) // #149 : 클라이언트에서 서버 로직을 돌리기 위한 처리 (T4GameDataMinimal.h)
#include "TableRow/T4StatTableRow.h" // #114
#include "TableRow/T4RewardTableRow.h" // #164
#endif
#include "TableRow/T4TextTableRow.h" // #164

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
	virtual const FT4GameUID GetUID() const = 0; // #150

	virtual const FT4TableRowBase* GetTableRowBase() const = 0; // #150

	const FT4QuestTableRow* QueryQuestTableRow() const;
	const FT4WorldTableRow* QueryWorldTableRow() const;
	const FT4PlayerTableRow* QueryPlayerTableRow() const;
	const FT4NPCTableRow* QueryNPCTableRow() const;
	const FT4WeaponTableRow* QueryWeaponTableRow() const;
	const FT4CostumeTableRow* QueryCostumeTableRow() const;
	const FT4GoodsTableRow* QueryGoodsTableRow() const; // #164
	const FT4SkillSetTableRow* QuerySkillSetTableRow() const;
	const FT4SkillTableRow* QuerySkillTableRow() const;
	const FT4EffectTableRow* QueryEffectTableRow() const;
#if (!TECH4_CLIENT_ONLY_USED || WITH_SERVER_CODE) // #149 : 클라이언트에서 서버 로직을 돌리기 위한 처리 (T4GameDataMinimal.h)
	const FT4StatTableRow* QueryStatTableRow() const;
	const FT4RewardTableRow* QueryRewardTableRow() const; // #164
#endif
	const FT4TextTableRow* QueryTextTableRow() const; // #164

#if WITH_EDITOR
	ET4GameDBValidation GetResultValidation(const FT4GameDBKey& InDBKey);

	virtual const FString GetTitleString() const = 0; // #163

	// #118
	virtual TSharedPtr<FStructOnScope> GetStructOnScope() = 0;
	virtual bool CheckValidationAll() = 0;
	virtual bool CheckValidationBy(FName InPropertyName) = 0;
	virtual bool HasError() const = 0;

	virtual bool HasParent() const = 0; // #122
	virtual bool IsFolder() const = 0; // #122
	virtual bool HasPinned() const { return true; } // #142 : bPinned 가 체크되면 편집 대상에서 제외! (ParagonMirgration)
	virtual FName GetParentRowName() const = 0; // #122
	virtual void SetParentRowName(FName InParentRowName) = 0; // #122
	virtual FName GetFolderName() const = 0; // #122
	virtual void SetFolderName(FName InFolderName) = 0; // #122
	// ~#118
#endif
	
	FName RowName;
	FGuid RowGuid;

#if WITH_EDITOR
	bool bDirtyed; // #118 : Content Editor 에서 편집이 있을 경우 true
	int32 SortOrder;
#endif
};

class UDataTable;
class T4GAMEDATA_API IT4GameDBLibrary
{
public:
	virtual ~IT4GameDBLibrary() {}

	virtual bool Initialize(const FSoftObjectPath& InMasterTablePath, const FName InGameContentSelected) = 0; // #135
	virtual void Finalize() = 0; // #135

	virtual bool IsInitialized() const = 0; // #135

	virtual void Reload() = 0; // #125
	virtual bool Refresh(ET4GameDBType InGameDBType) = 0; // #125

	virtual bool Contains(const FT4GameUID& InUID) const = 0; // #150 : (WARN) GameUID 설정이 기본(0)으로 설정될 경우 검색되지 않는다!!
	virtual bool Contains(const FT4GameDBKey& InGameDBKey) const = 0;

	virtual const FT4GameDBKey GetKeyByUID(const FT4GameUID& InUID) const = 0; // #150 : (WARN) GameUID 설정이 기본(0)으로 설정될 경우 검색되지 않는다!!
	virtual const FT4GameDBRowBase* GetRowBase(const FT4GameUID& InUID) const = 0; // #150 : (WARN) GameUID 설정이 기본(0)으로 설정될 경우 검색되지 않는다!!
	virtual const FT4GameDBRowBase* GetRowBase(const FT4GameDBKey& InGameDBKey) const = 0;

	virtual const FT4QuestTableRow* GetQuestTableRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4WorldTableRow* GetWorldTableRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4PlayerTableRow* GetPlayerTableRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4NPCTableRow* GetNPCTableRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4WeaponTableRow* GetWeaponTableRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4CostumeTableRow* GetCostumeTableRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4GoodsTableRow* GetGoodsTableRow(const FT4GameDBKey& InGameDBKey) const = 0; // #164
	virtual const FT4SkillSetTableRow* GetSkillSetTableRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4SkillTableRow* GetSkillTableRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4EffectTableRow* GetEffectTableRow(const FT4GameDBKey& InGameDBKey) const = 0;
#if (!TECH4_CLIENT_ONLY_USED || WITH_SERVER_CODE) // #149 : 클라이언트에서 서버 로직을 돌리기 위한 처리 (T4GameDataMinimal.h)
	virtual const FT4StatTableRow* GetStatTableRow(const FT4GameDBKey& InGameDBKey) const = 0;
	virtual const FT4RewardTableRow* GetRewardTableRow(const FT4GameDBKey& InGameDBKey) const = 0; // #164
#endif
	virtual const FT4TextTableRow* GetTextTableRow(const FT4GameDBKey& InGameDBKey) const = 0; // #164

	virtual FName ToQuestDBKeyName(const ET4QuestDBNameType& InDBNameType) const = 0; // #164

	virtual bool GetGameDBKeyNames(ET4GameDBType InGameDBType, TArray<FName>& OutDBKeyNames) const = 0;

#if WITH_EDITOR
	virtual FName GetTypeName(ET4GameDBType InGameDBType) const = 0; // #164

	virtual bool GetKeyNamesInFolder(ET4GameDBType InGameDBType, FName InFolderName, TArray<FName>& OutDBKeyNames) = 0; // #164

	// #118
	virtual UDataTable* GetDataTable(ET4GameDBType InGameDBType) const = 0;

	virtual const TArray<FT4GameDBRowBase*>& GetRowBases(ET4GameDBType InGameDBType, bool bInCheckValidation) = 0;
	virtual FT4GameDBRowBase* GetRowBase(const FT4GameDBKey& InGameDBKey) = 0;
	virtual FT4WeaponTableRow* GetWeaponTableRow(const FT4GameDBKey& InGameDBKey) = 0; // #154 : StanceSkillSet Add 를 위한 처리. const 외에는 인터페이스가 없다.

	virtual bool SourceDataSave(ET4GameDBType InGameDBType, FString& OutErrorMessage) = 0;

	virtual bool SourceDataAddFolder(ET4GameDBType InGameDBType, const FName InNewFolderName, const FName InRefRowName) = 0;
	virtual FT4TableRowBase* SourceDataAddTableRow(ET4GameDBType InGameDBType, const FName InNewRowName, const FName InRefRowName) = 0;
	virtual void SourceDataRemoveTableRow(ET4GameDBType InGameDBType, const FName InRowName) = 0;
	virtual void SourceDataRenameTableRow(ET4GameDBType InGameDBType, const FName InOldRowName, const FName InNewRowName) = 0;
	virtual FT4TableRowBase* SourceDataDuplicateTableRow(ET4GameDBType InGameDBType, const FName InSourceRowName, const FName InNewRowName) = 0;
	virtual void SourceDataMoveTableRow(ET4GameDBType InGameDBType, const FName InTargetRowName, const FName InSourceRowName) = 0;
	virtual void SourceDataRefreshTableRow(const FT4GameDBKey& InGameDBKey) = 0; // GameData to RawData

	virtual void EditorSetTreeExpansion(ET4GameDBType InGameDBType, const FName InRowName, bool bInExpand) = 0; // #122
	virtual bool EditorIsTreeExpanded(ET4GameDBType InGameDBType, const FName InRowName) const = 0; // #122
	// ~#118
#endif
};

T4GAMEDATA_API IT4GameDBLibrary* GetGameDBLibrary();
