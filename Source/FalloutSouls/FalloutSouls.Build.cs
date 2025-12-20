// FalloutSouls.Build.cs
using UnrealBuildTool;
using System.IO;

public class FalloutSouls : ModuleRules
{
	public FalloutSouls(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		// Include paths for the Converted folder
		PublicIncludePaths.AddRange(new string[] {
			Path.Combine(ModuleDirectory, "Converted"),
			Path.Combine(ModuleDirectory, "Converted", "Enums"),
			Path.Combine(ModuleDirectory, "Converted", "Structs"),
			Path.Combine(ModuleDirectory, "Converted", "Interfaces"),
			Path.Combine(ModuleDirectory, "Converted", "DataAssets"),
			Path.Combine(ModuleDirectory, "Converted", "Components"),
			Path.Combine(ModuleDirectory, "Converted", "Classes"),
			Path.Combine(ModuleDirectory, "Converted", "Animation"),
			Path.Combine(ModuleDirectory, "Converted", "AI"),
			Path.Combine(ModuleDirectory, "Converted", "CameraShakes"),
			Path.Combine(ModuleDirectory, "Converted", "Libraries")
		});

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"UMG",
			"Slate",
			"SlateCore",
			"GameplayTags",
			"GameplayTasks",
			"AIModule",
			"NavigationSystem",
			"Niagara",
			"GeometryCollectionEngine",
			"ChaosSolverEngine",
			"PhysicsCore",
			"EngineCameras",
			"StructUtils",
			"LevelSequence",
			"MovieScene",
			"FieldSystemEngine"
		});

		// Editor-only modules (Blutility for Editor Utility Widgets)
		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(new string[] {
				"Blutility",
				"UnrealEd",
				"UMGEditor"
			});
		}
	}
}
