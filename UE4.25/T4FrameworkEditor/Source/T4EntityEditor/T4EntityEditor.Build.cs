// Copyright 2019-2020 TECH4 Labs. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class T4EntityEditor : ModuleRules
	{
        public T4EntityEditor(ReadOnlyTargetRules Target) : base(Target)
        {
            // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/IWYUReferenceGuide/
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
                    "ApplicationCore",
                    "AppFramework",
                    "Core",
                    "CoreUObject",
                    "RenderCore",
                    "Json",
                    "JsonUtilities",
                    "Engine",
                    "EngineSettings",
                    "Slate",
                    "SlateCore",
                    "EditorStyle",
                    "InputCore",
                    "UnrealEd",
                    "Landscape",
					"GraphEditor",
					"LevelEditor",
                    "PropertyEditor",
                    "DesktopPlatform",
                    "MainFrame",
                    "Projects",
                    "Foliage",
					"CommonMenuExtensions",
                    "AdvancedPreviewScene",
                    "NavigationSystem",
                    "MaterialUtilities",
                    "MeshDescription",
                    "SourceControl",
					"SourceControlWindows",
                    "RHI"
                }
			);

            PublicDependencyModuleNames.AddRange(
                new string[] {
                    "T4Asset",
                    "T4Engine",
                    "T4Framework",
					"T4GameData",
					"T4EditorCommon",
				}
            );
        }
	}
}
