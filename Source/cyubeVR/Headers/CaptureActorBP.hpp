#ifndef UE4SS_SDK_CaptureActorBP_HPP
#define UE4SS_SDK_CaptureActorBP_HPP

class ACaptureActorBP_C : public ACaptureActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* MoveArrow;
    class UArrowComponent* Arrow;
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    class USceneComponent* DefaultSceneRoot;
    int32 CaptureCounter;
    bool Move;
    float MoveSpeed;
    FVector OriginalLocation;
    FVector MoveAroundLocation;
    FRotator OriginalRotation;
    bool Active;
    float OriginalAngle;
    bool IsManualMovable;
    bool DevFOVEnabled;
    float DevFOVValue;
    bool SmoothMovement;
    float SmoothingSpeed;

    void UserConstructionScript();
    void SetOriginalLocation(FVector OriginalLocation, FVector MoveAroundLocation, FRotator OriginalRotation, float MoveAngle);
    void EndMove();
    void UpdateRotation();
    void SetupFPV();
    void StartMove();
    void EndCaptureBP();
    void SetMirrorTexture();
    void StartCaptureBP();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void UpdateLocation();
    void ExecuteUbergraph_CaptureActorBP(int32 EntryPoint);
};

#endif
