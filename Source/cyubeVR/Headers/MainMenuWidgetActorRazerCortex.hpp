#ifndef UE4SS_SDK_MainMenuWidgetActorRazerCortex_HPP
#define UE4SS_SDK_MainMenuWidgetActorRazerCortex_HPP

class AMainMenuWidgetActorRazerCortex_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVRStereoWidgetComponent* VRStereoWidget;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenuWidgetActorRazerCortex(int32 EntryPoint);
};

#endif
