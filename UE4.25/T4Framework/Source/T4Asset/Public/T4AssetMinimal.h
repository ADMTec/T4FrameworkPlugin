// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * WARN : 전역 Macro 헤더. 테스트용 define 사용후에는 반드시 제거되어야 함!!
 */

 // #149 : 해당 옵션이 켜지면 클라이언트에서 T4Framework 의 Single Play 용 서버 코드를 제거한다.
#define TECH4_CLIENT_ONLY_USED 0

// #68 : T4Framework 리플레이 시스템 사용 여부
#define TECH4_REPLAY_SYSTEM_USED !UE_BUILD_SHIPPING


// Test 용
#define USES_ASYNC_MOVE_ISSUE_52 1 // #52 : MyPC 의 선이동 활성! 약간의 위치 오차가 있다.