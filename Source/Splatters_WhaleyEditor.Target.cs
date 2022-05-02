// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Splatters_WhaleyEditorTarget : TargetRules
{
	public Splatters_WhaleyEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Splatters_Whaley");
	}
}
