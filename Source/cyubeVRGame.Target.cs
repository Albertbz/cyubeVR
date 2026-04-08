using UnrealBuildTool;

public class cyubeVRGameTarget : TargetRules {
	public cyubeVRGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
        ExtraModuleNames.AddRange(new string[] {
			"cyubeVR",
		});
	}
}
