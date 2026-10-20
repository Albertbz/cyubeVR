using UnrealBuildTool;

public class cyubeVRGameTarget : TargetRules {
	public cyubeVRGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V7;
		bOverrideBuildEnvironment = true;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
        ExtraModuleNames.AddRange(new string[] {
			"cyubeVR",
		});
	}
}
