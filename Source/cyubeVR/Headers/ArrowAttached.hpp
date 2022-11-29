#ifndef UE4SS_SDK_ArrowAttached_HPP
#define UE4SS_SDK_ArrowAttached_HPP

class AArrowAttached_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* B_D_6;
    class UChildActorComponent* B_D_8;
    class UStaticMeshComponent* HB_Arrow2;
    float DecalScale;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ArrowAttached(int32 EntryPoint);
};

#endif
