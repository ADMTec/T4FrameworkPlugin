// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class T4Engine : ModuleRules
	{
        // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/TargetFiles/

        public T4Engine(ReadOnlyTargetRules Target) : base(Target)
		{
            // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/IWYUReferenceGuide/
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
                    "NavigationSystem",
					"HeadMountedDisplay",
                    "T4Asset"
                }
            );

            if (Target.bBuildEditor == true)
            {
                PrivateDependencyModuleNames.Add("UnrealEd");
            }
        }
	}
}
