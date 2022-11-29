#ifndef UE4SS_SDK_InitMainMenu_HPP
#define UE4SS_SDK_InitMainMenu_HPP

class AInitMainMenu_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_InitMainMenu(int32 EntryPoint);
};

#endif
