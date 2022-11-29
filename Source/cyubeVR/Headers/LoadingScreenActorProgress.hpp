#ifndef UE4SS_SDK_LoadingScreenActorProgress_HPP
#define UE4SS_SDK_LoadingScreenActorProgress_HPP

class ALoadingScreenActorProgress_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVRStereoWidgetComponent* VRStereoWidget;
    class USceneComponent* DefaultSceneRoot;
    class UMediaPlayer* MediaPlayer;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_LoadingScreenActorProgress(int32 EntryPoint);
};

#endif
