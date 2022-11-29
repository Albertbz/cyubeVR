#ifndef UE4SS_SDK_B_D_6_HPP
#define UE4SS_SDK_B_D_6_HPP

class AB_D_6_C : public ADecalActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Timer;
    float Max_time;
    float Speed;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_B_D_6(int32 EntryPoint);
};

#endif
