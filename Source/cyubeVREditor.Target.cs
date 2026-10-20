using UnrealBuildTool;
using System.Collections.Generic;

public class cyubeVREditorTarget : TargetRules
{
    public cyubeVREditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V7;
        bOverrideBuildEnvironment = true;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
        ExtraModuleNames.Add("cyubeVR");
    }
}