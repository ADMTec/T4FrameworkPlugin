// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Asset/Public/T4AssetDefines.h"

/**
  * WARN : 전역 Macro 헤더. 테스트용 define 은 사용후 반드시 제거되어야 함!!
 */

 // #68 : T4Framework 리플레이 시스템 사용 여부
#define TECH4_ENGINE_REPLAY_SYSTEM_USED !UE_BUILD_SHIPPING

// #153 : HeadMountedDisplay 지원 여부 (언리얼은 기본이지만, T4 에서의 코드는 옵션 처리 하겠음)
#ifndef TECH4_ENGINE_HMD_USED
#define TECH4_ENGINE_HMD_USED 1
#endif

// Test 용
#ifndef USES_ASYNC_MOVE_ISSUE_52
#define USES_ASYNC_MOVE_ISSUE_52 1 // #52 : MyPC 의 선이동 활성! 약간의 위치 오차가 있다.
#endif