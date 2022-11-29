#ifndef UE4SS_SDK_ChairBP_HPP
#define UE4SS_SDK_ChairBP_HPP

class AChairBP_C : public AMeshObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Chair_old;
    class USceneComponent* Scene;
    class UBoxComponent* ManualBoundingBox;
    class UDragComponent_C* DragComponent;

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void SetIsPreview(bool IsPreview);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ChairBP(int32 EntryPoint);
};

#endif
