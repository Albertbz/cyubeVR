#ifndef UE4SS_SDK_MetalPot_HPP
#define UE4SS_SDK_MetalPot_HPP

class AMetalPot_C : public AMeshObject
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
    void ExecuteUbergraph_MetalPot(int32 EntryPoint);
};

#endif
