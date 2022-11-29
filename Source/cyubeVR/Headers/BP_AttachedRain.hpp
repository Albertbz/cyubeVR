#ifndef UE4SS_SDK_BP_AttachedRain_HPP
#define UE4SS_SDK_BP_AttachedRain_HPP

class ABP_AttachedRain_C : public AAttachedRain
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    class UParticleSystemComponent* PS_Rain;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UAudioComponent*> RainAudioComponentsBP;
    float AudioDistanceBP;
    int32 RowsY_BP;
    int32 RowsX_BP;
    float TimeTillDestroy;
    bool Cinematic;
    bool Inactive;

    void DestroyAudioComponents();
    void FadeMatBack(class AWeatherManagerBP_C* WeatherManager);
    void UpdateAudioLocationsBP();
    void GetOffsetBP(int32 Indice, float& Offse);
    void InitAudioComponents();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void FadeOutAndDestroy();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Initialize();
    void PopulateCollectionParameters();
    void ExecuteUbergraph_BP_AttachedRain(int32 EntryPoint);
};

#endif
