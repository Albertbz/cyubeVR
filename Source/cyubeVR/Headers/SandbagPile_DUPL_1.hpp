#ifndef UE4SS_SDK_SandbagPile_DUPL_1_HPP
#define UE4SS_SDK_SandbagPile_DUPL_1_HPP

class ASandbagPile_C : public AMeshObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Chair_old;
    class USceneComponent* Scene;
    class UBoxComponent* ManualBoundingBox;
    class UDragComponent_C* DragComponent;

    void UserConstructionScript();
    void SetIsPreview(bool IsPreview);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SandbagPile(int32 EntryPoint);
};

#endif
