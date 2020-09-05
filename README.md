# T4FrameworkPlugin (v0.9.42)
### Massive Action RPG Framework for UE4

![Epic_MegaGrants_Recipient](./T4Framework_Title.png)

> **!!!** M7 마일스톤 기간(~10/08)에는 데일리로 업데이트가 발생할 수 있습니다. **!!!**

- **지원정보**
  - Supported Engine Versions
    - 4.25 (Release Version : 4.25.3)
  - Windows, Android (Oculus Quest)
- **라이선스**
  - 베타 테스트 버전(v0.9.xx)을 배포중이며 무료로 사용하실 수 있습니다. (10/08일 까지...)
  - 정식 버전 v1.0 의 경우는 Subscription license 가 필요합니다.
- **실행준비**
  - Download : [GitHub/Tech4Labs/T4FrameworkPlugin](https://github.com/Tech4Labs/T4FrameworkPlugin)
    - Tutorial : [플러그인 설치와 사용 (Install and Run)](https://tech4labs.com/Tutorials/1_InstallAndRun/)
  - Download : [GitHub/Tech4Labs/T4FrameworkExample](https://github.com/Tech4Labs/T4FrameworkExample)
    - Tutorial : [예제 설치 및 실행 (Install Example Project)](https://tech4labs.com/Tutorials/2_InstallExampleProject/)
- **업데이트**
  - **Milestone 7** (2020.07.06 ~ 2020.10.08)
    - https://tech4labs.com/T4Framework_Milestone7_Achieved/
  - **v0.9.42**
	- #158 [버그수정] Content Editor, GameDB 프리뷰에서 PC/NPC 가 장착한 Weapon 의 보조 장비가 출력되지 않던 문제 수정
    - #158 [기능개선] Action Editor, Animation Action Details 의 AnimSequence 리스트에 Item 출력 순서 변경을 위한 Move Up/Down 기능 추가
	- #158 [버그수정] Action Editor, Action Details 의 "Play" 테스트가 간헐적으로 동작하지 않던 문제 수정
	- #158 [버그수정] Action Editor, Test Player Settings 에서 WeaponDB Equip/Uneqip 이 동작하지 않던 문제 수정
    - #152 [버그수정] Action Editor, Audio Action Details 에서 "Play" 테스트 시 사운드가 출력되지 않던 문제 수정
	  - Audio Action 의 경우 뷰포트에 포커스가 있어야 소리가 출력됨
	- #152 [버그수정] 플레이어 무기 장착 해제시 발생하는 크래시 수정
  - 이전 업데이트
    - [Update History](./UpdateHistory.md)
- **참고영상**
  - **주의**
    - 본 영상은 튜토리얼 및 데모 제작을 위해 개발자가 내부 공유의 목적으로 제작한 가이드 영상입니다.
    - 화면 편집, 음성 볼륨 조정 등의 후반 작업과 스크립트 없이 리이브로 녹화된 점 감안해 주시기 바랍니다.
	- 빠른 시간 내 정식 튜토리얼을 제작해 공유하도록 하겠습니다.
	  - https://tech4labs.com/T4Framework_Tutorials/
  - **튜토리얼(초안)**
    - [#1 : T4Framework Editor 소개](https://youtu.be/r29O3YdeV7E)
	- #2 : 엔티티 에디터 (Entity Editor)
      - [#2-1 : Character Entity 의 풀 바디(Full-body) 캐릭터 설정](https://youtu.be/dGmG2QWp_wo)
      - [#2-2 : Character Entity 의 Animation 시스템](https://youtu.be/nS3N1X3Dh1o)
      - [#2-3 : Character Entity 의 Stance 및 Skill Animation 설정](https://youtu.be/XaPErl6Zypg)
      - [#2-4 : Weapon/Costume Item Entity 소개](https://youtu.be/lX8tb-azEQQ)
      - [#2-5 : Weapon Item Entity 의 Drop/Item Mesh 설정](https://youtu.be/R1mB9WCzAto)
      - [#2-6 : Weapon Item Entity 의 Animation 설정](https://youtu.be/ajs6sW0QK_s)
      - [#2-7 : Costume Item Entity 의 Drop/Item Mesh 설정](https://youtu.be/vZ4OO3M2OTY)
      - [#2-8 : Costume Item Entity 의 Override Material 설정](https://youtu.be/LRRBrXH0b8k)
	  - [#2-9 : Character Entity 의 조합형(Modular) 캐릭터  설정](https://youtu.be/JYd_X66RD2c)
	  - [#2-10 : Entity Browser 소개](https://youtu.be/-aVTZihDUHo)
	  - [#2-11 : Prop Entity 의 Mesh/Animation 설정](https://youtu.be/6uU5MU99UpU)
	  - [#2-12 : Zone Entity 의 Dynamic Environment 설정](https://youtu.be/7kspOTltztU)
	  - [#2-13 : Map Entity 의 Level Asset 설정](https://youtu.be/i1Xwh1TjN9E)
  - **콘텐츠 제작 가이드(초안)**
    - [#1 : 준비](https://youtu.be/LFErpgcwbnc)
    - [#2 : Content Editor 레이아웃](https://youtu.be/W3XC4lnz6Og)
    - [#3 : GameDB 소개](https://youtu.be/JzJgi4McRWQ)
    - [#4 : Spawn 기본](https://youtu.be/sonSG9Qsaws)
    - [#5 : Spawn 오브젝트](https://youtu.be/M1OQyaR1Ors)
    - [#6 : Spawn Waypoints](https://youtu.be/cbDLHxQRolI)
- **문의**
  - SoonBo Noh : <niceofer@hotmail.com>
  - <https://tech4labs.com>
