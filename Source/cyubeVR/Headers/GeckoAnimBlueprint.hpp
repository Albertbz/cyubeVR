#ifndef UE4SS_SDK_GeckoAnimBlueprint_HPP
#define UE4SS_SDK_GeckoAnimBlueprint_HPP

class UGeckoAnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;
    FAnimNode_StateResult AnimGraphNode_StateResult_10;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_StateResult AnimGraphNode_StateResult_9;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_StateResult AnimGraphNode_StateResult_8;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_7;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    float Speed;
    bool bIsMoving;
    int32 Random200;
    int32 Random50;
    int32 Random2000;
    float RandomIdleSpeed;
    bool bIsGrabbed;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_EC7670FD42570204D39870B403217D63();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_153B34D84504C03E1C9E6AA55FBEB4B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_2FA21F104F8E7E7307D3F986DC403BD5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_A073FE644D3E86BFDC451D96BC20EA07();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_83F457B9442EE625164A58980B9AB2B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_DA6D443348A53F448D44AFBC376116FA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_BF7991B749585BAABE751786E2B9E4E0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_8FBFE953428AD887652400A12FB94FD2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_7123CFCF487FF010B4F24C8F894FAB17();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_443EB0FA4247599C7BFDF9BB31E16167();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_51EA520E43F27B760CD88DAFF613E451();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_6931A3254EFC10F6064DEEAD5B85539A();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void UpdateIdleSpeed();
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_GeckoAnimBlueprint(int32 EntryPoint);
};

#endif
