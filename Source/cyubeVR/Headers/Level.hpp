#ifndef UE4SS_SDK_Level_HPP
#define UE4SS_SDK_Level_HPP

class ALevel_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ADirectionalLight* LightSource_ExecuteUbergraph_Level_RefProperty;

    void InpActEvt_R_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Level(int32 EntryPoint);
};

#endif
