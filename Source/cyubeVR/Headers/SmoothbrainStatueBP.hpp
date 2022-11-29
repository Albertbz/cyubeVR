#ifndef UE4SS_SDK_SmoothbrainStatueBP_HPP
#define UE4SS_SDK_SmoothbrainStatueBP_HPP

class ASmoothbrainStatueBP_C : public ASmoothbrainStatue
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* CrystalSlotChildActor;
    class UStaticMeshComponent* SmoothbrainStatue;
    class USceneComponent* Scene;
    class UBoxComponent* ManualBoundingBox;
    class UDragComponent_C* DragComponent;

    void AttachCrystal(FColor CrystalColor, float CrystalChargeState, bool& Attached);
    void CanGrabCrystal(bool& CanGrab, FColor& Color, float& ChargeState);
    void UserConstructionScript();
    void SetIsPreview(bool IsPreview);
    void ReceiveBeginPlay();
    void RemovedCrystal();
    void UpdateVisuals();
    void ExecuteUbergraph_SmoothbrainStatueBP(int32 EntryPoint);
};

#endif
