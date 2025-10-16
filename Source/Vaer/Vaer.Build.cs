// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Vaer : ModuleRules
{
	public Vaer(ReadOnlyTargetRules Target) : base(Target)
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
			"Vaer",
			"Vaer/Variant_Platforming",
			"Vaer/Variant_Platforming/Animation",
			"Vaer/Variant_Combat",
			"Vaer/Variant_Combat/AI",
			"Vaer/Variant_Combat/Animation",
			"Vaer/Variant_Combat/Gameplay",
			"Vaer/Variant_Combat/Interfaces",
			"Vaer/Variant_Combat/UI",
			"Vaer/Variant_SideScrolling",
			"Vaer/Variant_SideScrolling/AI",
			"Vaer/Variant_SideScrolling/Gameplay",
			"Vaer/Variant_SideScrolling/Interfaces",
			"Vaer/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
