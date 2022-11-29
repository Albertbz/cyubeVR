#ifndef UE4SS_SDK_MainMenuPatreonWidgetActor_HPP
#define UE4SS_SDK_MainMenuPatreonWidgetActor_HPP

class AMainMenuPatreonWidgetActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVRStereoWidgetComponent* VRStereoWidget;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenuPatreonWidgetActor(int32 EntryPoint);
};

#endif
