# T4FrameworkPlugin
### Efficient Real-Time 3D Development Framework for UE4

> **Update History**
- v0.9.13
  - #125 [버그수정] Action Editor, CameraWork 설정을 위한 EditWidgetMode 동작 오류 수정
  - #125 [버그수정] Entity Editor, Zone Entity 테스트를 위한 EditWidgetMode 동작 오류 수정
- v0.9.12
  - #155 [버그수정] Entity Editor, Prop Entity 에 Mesh 설정 이후 카메라 회전, 줌 동작 오류 수정 
- v0.9.11
  - #155 [기능개선] Content Editor, SpawnObject 의 PrefabID 미설정 시의 출력 모델 개선 (물음표)
  - #155 [버그수정] Content Editor, Spawn Object Tab 이동 시 첫번째 Item 자동 선택 오류 수정 
- v0.9.10
  - #148 [버그수정] Action Editor 사용 시 비정상적으로 발생하던 크래시 수정
- v0.9.9
  - #155 [버그수정] Content Editor, Edit Mode 에서 WidgetMode 변경 후 편집이 안되던 문제 수정
- v0.9.8
  - #148 [기능개선] Asset Editor 툴팁에 에디터 이름과 플러그인 버전을 함께 표시하도록 개선
  - #148 [버그수정] AnimBP 에셋이 로컬에 없을 경우 캐릭터 로딩 과정에서 발생하는 크래시 수정
- v0.9.7
  - #149 [버그수정] World Explorer, TOD 가 설정된 월드 오픈 시 발생하던 크래시 수정
- v0.9.6
  - #149 [기능개선] 레벨에디터 T4Framework 모드에서 스폰된 액터의 월드 아웃라이너 노출 제거
  - #149 [버그수정] 캐릭터 + CTRL + 마우스 좌클릭 으로 캐릭터 변경이 안되던 문제 수정
- v0.9.5
  - #149 [기능개선] 레벨에디터 T4Framework 모드에서 ContentSpawn 을 테스트 기능 추가
  - #149 [버그수정] 레벨에디터 T4Framework 모드 선택시 발생하던 크래시 수정
- v0.9.4
  - #148 [기능개선] T4Framrwork 에서 사용하는 기본 Content 배포 추가 (Content/T4Framework/*.*)
  - #154 [버그수정] 간헐적으로 NPC AI 의 Aim Casting 이 Clear 되지 않던 문제 수정
- v0.9.3
  - #154 [기능개선] Aim BlendSpace 가 없을 경우에 대한 In-Place Aiming 의 Bone Transform 처리 지원
  - #154 [버그수정] LockOn 이동 시 간헐적으로 캐릭터의 T포즈가 발생하는 문제 수정
- v0.9.2
  - #148 [기능개선] 뷰포트 QuickHotKey 지정을 T4GameplayUserSettings 에서 설정하도록 기능 개선
- v0.9.1
  - #148 [버그수정] 신규 프로젝트 설정 후 플로그인을 활성화 할 경우에 발생하는 크래시 수정
  - #148 [버그수정] 프로젝트의 UserSettings 가 에디터 개인설정에 노출되지 않던 문제 수정
