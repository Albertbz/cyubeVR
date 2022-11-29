#ifndef UE4SS_SDK_MonitorLizardAnimBP_HPP
#define UE4SS_SDK_MonitorLizardAnimBP_HPP

class UMonitorLizardAnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    float Speed;
    bool bIsMoving;
    int32 Random200;
    int32 Random50;
    int32 Random2000;
    float RandomIdleSpeed;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_0FAAD1F84DFA454F84468A8FD50DB61F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_AA628789437316A7232A6F896008D3E4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_4C4C2E0B424731351D053386DEAECD0C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_B3E349984559FBFAA89CDD82FA07BB58();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_DF4850CF483EDE2EA64D83842936D273();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_929D2AAB4D7F44EF69D4158E2D55357E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_BF4030DB46BA557134528482BF49C067();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_9D48BF144862485C4B1F4FB3F73D723F();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void UpdateIdleSpeed();
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_MonitorLizardAnimBP(int32 EntryPoint);
};

#endif
