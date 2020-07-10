// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class T4Commandlet : ModuleRules
	{
		public T4Commandlet(ReadOnlyTargetRules Target) : base(Target)
		{
			// http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/IWYUReferenceGuide/
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PrivateDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"Engine",
				});

			PublicDependencyModuleNames.AddRange(
				new string[] {
					"T4Asset",
					"T4Engine",
					"T4Framework",
					"T4GameData",
					"T4Gameplay",
				}
			);

			if (Target.bBuildEditor == true)
			{
				PrivateDependencyModuleNames.Add("UnrealEd");
				PrivateDependencyModuleNames.Add("SourceControl");
			}
		}
	}
}
