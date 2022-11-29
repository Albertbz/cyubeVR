#ifndef UE4SS_SDK_CloudManager_HPP
#define UE4SS_SDK_CloudManager_HPP

class ACloudManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float CurrentDensity;
    float DensityTarget;
    class AUltra_Dynamic_Sky_BP_Child2_C* SkyRef;
    float MinDensity;
    float MaxDensity;
    float NewDensityTime;
    float InterpSpeed;
    float AuroraTargetIntensity;
    float CurrentAuroraIntensity;
    float MinAuroraIntensity;
    float MaxAuroraIntensity;
    float AuroraInterpSpeed;

    void SetOneCloudLayer(bool One Cloud Layer);
    void UpdateDensityTarget();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_CloudManager(int32 EntryPoint);
};

#endif
