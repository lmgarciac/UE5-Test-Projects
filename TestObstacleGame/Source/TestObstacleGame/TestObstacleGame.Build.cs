// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestObstacleGame : ModuleRules
{
	public TestObstacleGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TestObstacleGame",
			"TestObstacleGame/Variant_Platforming",
			"TestObstacleGame/Variant_Platforming/Animation",
			"TestObstacleGame/Variant_Combat",
			"TestObstacleGame/Variant_Combat/AI",
			"TestObstacleGame/Variant_Combat/Animation",
			"TestObstacleGame/Variant_Combat/Gameplay",
			"TestObstacleGame/Variant_Combat/Interfaces",
			"TestObstacleGame/Variant_Combat/UI",
			"TestObstacleGame/Variant_SideScrolling",
			"TestObstacleGame/Variant_SideScrolling/AI",
			"TestObstacleGame/Variant_SideScrolling/Gameplay",
			"TestObstacleGame/Variant_SideScrolling/Interfaces",
			"TestObstacleGame/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
