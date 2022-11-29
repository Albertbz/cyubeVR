#ifndef UE4SS_SDK_DeerAnimBP_HPP
#define UE4SS_SDK_DeerAnimBP_HPP

class UDeerAnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_12;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13;
    FAnimNode_StateResult AnimGraphNode_StateResult_11;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_10;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;
    FAnimNode_StateResult AnimGraphNode_StateResult_9;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;
    FAnimNode_StateResult AnimGraphNode_StateResult_8;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_7;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_StateResult AnimGraphNode_StateResult_6;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;
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
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    float Speed;
    FRotator InclineRotation;
    float TurnRateSmoothed;
    int32 RunStartIndex;
    float RunAnimationSpeed;
    bool bIsMoving;
    int32 Random;
    FVector PlayerLocation;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_TransitionResult_B165A3564BB8987CA78C6DB65012D5E1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_TransitionResult_1F84D71F439E63594D52FB9A32576A00();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_TransitionResult_858129CD41474A56C0091687DDB3867A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_TransitionResult_FF357BA3465FB5D379B9A49ED7CB4749();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_BlendSpacePlayer_41B343B745BA1268D8E1E9A13FB8DC33();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_BlendListByBool_E2507F4F4F7C2C85A7D9C0B0AFF8B6F9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_BlendSpacePlayer_31C261204D4ED7384ADA5E8804098E2E();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_DeerAnimBP(int32 EntryPoint);
};

#endif
