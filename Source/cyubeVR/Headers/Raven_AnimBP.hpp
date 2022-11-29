#ifndef UE4SS_SDK_Raven_AnimBP_HPP
#define UE4SS_SDK_Raven_AnimBP_HPP

class URaven_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    float Roll;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_AnimBP_AnimGraphNode_TransitionResult_26A0641C44D29B43D587F4AAB1F7D69E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_AnimBP_AnimGraphNode_TransitionResult_A6486FED40AF7063CADD0AB581E54AF1();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Raven_AnimBP(int32 EntryPoint);
};

#endif
