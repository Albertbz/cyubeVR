#ifndef UE4SS_SDK_BowAnimBlueprint_HPP
#define UE4SS_SDK_BowAnimBlueprint_HPP

class UBowAnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_Root AnimGraphNode_Root;
    float StringLocation;
    bool Active;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_BowAnimBlueprint_AnimGraphNode_ModifyBone_462680774593EE224395FF871E3C4DC8();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_BowAnimBlueprint(int32 EntryPoint);
};

#endif
