#ifndef UE4SS_SDK_StoolBP_HPP
#define UE4SS_SDK_StoolBP_HPP

class AStoolBP_C : public AMeshObject
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
    void ExecuteUbergraph_StoolBP(int32 EntryPoint);
};

#endif
