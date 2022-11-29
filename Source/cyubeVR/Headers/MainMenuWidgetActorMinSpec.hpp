#ifndef UE4SS_SDK_MainMenuWidgetActorMinSpec_HPP
#define UE4SS_SDK_MainMenuWidgetActorMinSpec_HPP

class AMainMenuWidgetActorMinSpec_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVRStereoWidgetComponent* VRStereoWidget;
    class UWidgetComponent* MenuWidget;
    class USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenuWidgetActorMinSpec(int32 EntryPoint);
};

#endif
