// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "T4EngineMinimal.h"
#include "Action/T4ActionKey.h" // #132
#include "T4Asset/Public/T4AssetDefinitions.h" // #62

/**
  *
 */

// Common

static const uint32 T4Const_MirroringStartActorID = 1000000; // #140

static const float T4Const_DefaultLineTraceMaxDistance = 100000.0f;

static const float T4Const_AnimLerpTranslateAimingTimeSec = 0.25f; // #113, #127

#if (!TECH4_CLIENT_ONLY_USED || WITH_SERVER_CODE) // #149 : 클라이언트에서 서버 로직을 돌리기 위한 처리 (T4EngineMinimal.h)
// DefaultEngine.ini [/Script/Engine.CollisionProfile]
#define T4COLLISION_WorldActor		ECC_GameTraceChannel1
#define T4COLLISION_WEAPON			ECC_GameTraceChannel2
#endif

#define T4_INVALID_NAVEXTENT		(FVector::ZeroVector)

// #93 : Map Zone & Environment & Time of Day
static const FName T4Const_GlobalMapZoneName = TEXT("Global"); // #93 : MapZoneConstantTable 의 GlobalZone 과 같아야 함!!

// #97 : TimeTag 를 추가할 경우 반드시 FT4WorldTimeControl::Initialize(float InStartHour) 에도 추가해줄 것!
// #97 : 만약, 20 ~ 7 시 같은 시간대를 추가한다면 void FT4WorldTimeControl::AddConstantGameTimeData 처리를 체크해볼 것!
static const FName T4Const_WorldTimeTagDayName = TEXT("Day");			// Hour : 9 ~ 18 or 7 ~ 18 or 24
static const FName T4Const_WorldTimeTagSunsetName = TEXT("Sunset");		// Hour : 18 ~ 20
static const FName T4Const_WorldTimeTagNightName = TEXT("Night");		// Hour : 20 ~ 7 or 18 ~ 7
static const FName T4Const_WorldTimeTagSunriseName = TEXT("Sunrise");	// Hour : 7 ~ 9

static const FName T4Const_WorldTimeTagFallbackName = T4Const_WorldTimeTagDayName; // #123 : Day 를 Fallback 으로 사용한다. 별도로 세팅하지 않음

// #97
static const float T4Const_WorldTimeHoursPerDay = 24.0f;

// #97 : Start Hour / End Hour / Range Hour (24 Hour)
static const FVector T4Const_WorldTimeDayInfo(9.0f, 18.0f, 9.0f);
static const FVector T4Const_WorldTimeSunsetInfo(18.0f, 20.0f, 2.0f);
static const FVector T4Const_WorldTimeNightInfo(20.0f, 7.0f, 11.0f);
static const FVector T4Const_WorldTimeSunriseInfo(7.0f, 9.0f, 2.0f);

// #132 : Action Key
static const FT4ActionKey T4Const_WorldActorRotationPrimaryKey(TEXT("T4ActionOverrideRotationPrimaryKey"), true, true); // #132
static const FT4ActionKey T4Const_WorldActorAnimSetPlayTagKey(TEXT("T4Const_WorldActorAnimSetPlayTagKey")); // #74