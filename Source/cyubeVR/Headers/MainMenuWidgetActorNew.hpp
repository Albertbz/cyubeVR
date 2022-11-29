#ifndef UE4SS_SDK_MainMenuWidgetActorNew_HPP
#define UE4SS_SDK_MainMenuWidgetActorNew_HPP

class AMainMenuWidgetActorNew_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* NewsWIdget;
    class UVRStereoWidgetComponent* NewsWidgetNew;
    class UVRStereoWidgetComponent* VRStereoWidget;
    class UWidgetComponent* NameWidget;
    class USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenuWidgetActorNew(int32 EntryPoint);
};

#endif
