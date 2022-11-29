#ifndef UE4SS_SDK_CubeGameStateBP_HPP
#define UE4SS_SDK_CubeGameStateBP_HPP

class ACubeGameStateBP_C : public ACubeGameState
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    bool CaptureActive;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_CubeGameStateBP(int32 EntryPoint);
};

#endif
