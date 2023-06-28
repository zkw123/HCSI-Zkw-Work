// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FullBodyIK_XPBD : ModuleRules
{
	public FullBodyIK_XPBD(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
