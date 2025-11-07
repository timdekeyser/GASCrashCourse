// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASCrashCourse : ModuleRules
{
	public GASCrashCourse(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput",
			"GameplayAbilities",
			"GameplayTasks",
			"GameplayTags",
		});

		PrivateDependencyModuleNames.AddRange(new string[] {  });
		
	}
}
