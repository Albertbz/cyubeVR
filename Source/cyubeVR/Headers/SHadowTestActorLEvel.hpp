#ifndef UE4SS_SDK_SHadowTestActorLEvel_HPP
#define UE4SS_SDK_SHadowTestActorLEvel_HPP

class ASHadowTestActorLEvel_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void PrintStuff();
    void ExecuteUbergraph_SHadowTestActorLEvel(int32 EntryPoint);
};

#endif
