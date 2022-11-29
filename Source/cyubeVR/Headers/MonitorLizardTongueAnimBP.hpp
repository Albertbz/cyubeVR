#ifndef UE4SS_SDK_MonitorLizardTongueAnimBP_HPP
#define UE4SS_SDK_MonitorLizardTongueAnimBP_HPP

class UMonitorLizardTongueAnimBP_C : public UAnimInstance
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
    int32 Random50;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardTongueAnimBP_AnimGraphNode_TransitionResult_E90CECD74771B26C8357B0BA27859EBB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardTongueAnimBP_AnimGraphNode_TransitionResult_9DC8084F46D527E4C7689EBBE34778CD();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_MonitorLizardTongueAnimBP(int32 EntryPoint);
};

#endif
