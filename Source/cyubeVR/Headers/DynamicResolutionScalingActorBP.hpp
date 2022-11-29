#ifndef UE4SS_SDK_DynamicResolutionScalingActorBP_HPP
#define UE4SS_SDK_DynamicResolutionScalingActorBP_HPP

class ADynamicResolutionScalingActorBP_C : public ADynamicResolutionScalingActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<float> ResolutionLevels;
    float Limit;
    float CurrentLevel;
    float WaitFrames;
    TArray<float> LastFrames;

    void SetDynamicResEnabled(bool Enabled);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DynamicResolutionScalingActorBP(int32 EntryPoint);
};

#endif
