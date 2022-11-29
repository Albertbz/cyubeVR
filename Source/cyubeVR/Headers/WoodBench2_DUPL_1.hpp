#ifndef UE4SS_SDK_WoodBench2_DUPL_1_HPP
#define UE4SS_SDK_WoodBench2_DUPL_1_HPP

class AWoodBench2_C : public AMeshObject
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
    void ExecuteUbergraph_WoodBench2(int32 EntryPoint);
};

#endif
