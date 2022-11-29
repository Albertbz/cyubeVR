#ifndef UE4SS_SDK_LoadingScreenActor_HPP
#define UE4SS_SDK_LoadingScreenActor_HPP

class ALoadingScreenActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCustomStereoLayerComponent* CustomStereoLayer;
    class USceneComponent* DefaultSceneRoot;
    class UMediaPlayer* MediaPlayer;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_LoadingScreenActor(int32 EntryPoint);
};

#endif
