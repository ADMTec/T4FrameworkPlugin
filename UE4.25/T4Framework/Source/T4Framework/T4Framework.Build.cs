// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class T4Framework : ModuleRules
	{
        // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/TargetFiles/

        public T4Framework(ReadOnlyTargetRules Target) : base(Target)
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
					"Json",
					"Sockets",
					"Http",
					"AIModule",
                    "NavigationSystem",
					"HeadMountedDisplay",
					"T4Asset",
                    "T4Engine"
                }
            );

            if (Target.bBuildEditor == true)
            {
				PrivateDependencyModuleNames.Add("Slate");
				PrivateDependencyModuleNames.Add("SlateCore");
				PrivateDependencyModuleNames.Add("EditorStyle");
				PrivateDependencyModuleNames.Add("UnrealEd");
            }
        }
	}
}
