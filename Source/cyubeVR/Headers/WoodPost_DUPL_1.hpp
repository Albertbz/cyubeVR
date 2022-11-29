#ifndef UE4SS_SDK_WoodPost_DUPL_1_HPP
#define UE4SS_SDK_WoodPost_DUPL_1_HPP

class AWoodPost_C : public AMeshObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* BoundingBoxWalk;
    class UStaticMeshComponent* Chair_old;
    class USceneComponent* Scene;
    class UBoxComponent* ManualBoundingBox;
    class UDragComponent_C* DragComponent;

    void SetWalkCollisionScale();
    void UserConstructionScript();
    void SetIsPreview(bool IsPreview);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_WoodPost(int32 EntryPoint);
};

#endif
