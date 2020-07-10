// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class T4Gameplay : ModuleRules
	{
        // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/TargetFiles/

        public T4Gameplay(ReadOnlyTargetRules Target) : base(Target)
		{
            // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/IWYUReferenceGuide/
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
                    "InputCore",
					"SlateCore",
					"AIModule",
                    "NavigationSystem",
                    "GameplayTasks",
                    "T4Asset",
                    "T4Engine",
                    "T4Framework",
					"T4GameData"
				}
            );

            if (Target.bBuildEditor == true)
            {
				PrivateDependencyModuleNames.Add("Json");
				PrivateDependencyModuleNames.Add("UnrealEd");
            }
        }
	}
}
