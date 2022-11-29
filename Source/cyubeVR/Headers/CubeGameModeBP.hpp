#ifndef UE4SS_SDK_CubeGameModeBP_HPP
#define UE4SS_SDK_CubeGameModeBP_HPP

class ACubeGameModeBP_C : public ACubeGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float AvgFPS;
    TArray<float> FPS;

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CubeGameModeBP(int32 EntryPoint);
};

#endif
