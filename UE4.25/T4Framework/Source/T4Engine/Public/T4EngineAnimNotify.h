// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "T4EngineTypes.h"

/**
  * #111
 */
struct FT4AnimNotifyMessage
{
	ET4AnimNotifyType AnimNotifyType;
#if WITH_EDITOR
	FString DebugSting;
#endif
};

struct FT4AnimNotifyEquipment : public FT4AnimNotifyMessage
{
	FT4AnimNotifyEquipment()
		: EquipmentType(ET4EquipmentType::None)
		, SameStanceName(NAME_None)
		, bForced(false)
	{
		AnimNotifyType = ET4AnimNotifyType::Equipment;
		SameStanceName = NAME_None;
	}
	ET4EquipmentType EquipmentType;
	FName SameStanceName;
	bool bForced; // #111 : 로딩 완료 후 Stance 설정을 무기교체가 기다릴 수 있음으로 강제로 적용
};

struct FT4AnimNotifyFootstep : public FT4AnimNotifyMessage
{
	FT4AnimNotifyFootstep()
	{
		AnimNotifyType = ET4AnimNotifyType::Footstep;
	}
	ET4FootstepType FootstepType;
};
