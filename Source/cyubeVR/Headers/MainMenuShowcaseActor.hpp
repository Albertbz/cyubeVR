#ifndef UE4SS_SDK_MainMenuShowcaseActor_HPP
#define UE4SS_SDK_MainMenuShowcaseActor_HPP

class AMainMenuShowcaseActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVRStereoWidgetComponent* VRStereoWidget;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenuShowcaseActor(int32 EntryPoint);
};

#endif
