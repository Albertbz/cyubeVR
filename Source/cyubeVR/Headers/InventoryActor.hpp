#ifndef UE4SS_SDK_InventoryActor_HPP
#define UE4SS_SDK_InventoryActor_HPP

class AInventoryActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* Amount;
    class UChildActorComponent* bLock;
    class USceneComponent* DefaultSceneRoot;
    EBlockTypeBP Type;
    float Offset;

    void UpdateType(EBlockTypeBP Type);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_InventoryActor(int32 EntryPoint);
};

#endif
