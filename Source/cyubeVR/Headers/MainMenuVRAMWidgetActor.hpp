#ifndef UE4SS_SDK_MainMenuVRAMWidgetActor_HPP
#define UE4SS_SDK_MainMenuVRAMWidgetActor_HPP

class AMainMenuVRAMWidgetActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVRStereoWidgetComponent* VRStereoWidget;
    class USceneComponent* DefaultSceneRoot;
    int32 NumVRAM;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_MainMenuVRAMWidgetActor(int32 EntryPoint);
};

#endif
