#ifndef UE4SS_SDK_CrystalSlotActor_HPP
#define UE4SS_SDK_CrystalSlotActor_HPP

class ACrystalSlotActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* CrystalMesh;
    class UCapsuleComponent* CrystalHolderCollisionCapsule;
    class USceneComponent* DefaultSceneRoot;
    TEnumAsByte<hand> CurrentSelectedHand;
    FVector CapsuleOffset;
    FVector CapsuleScale;
    FVector CurrentColor;
    bool IsRightHandSlot;
    bool IsHolderCrystal;

    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* Component, bool& Correct);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void GetRealWorldLocation(FVector& Location);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void SetParameters(const float EmissiveIntensity, const FVector Color);
    void UserConstructionScript();
    void BndEvt__CrystalHolderCollisionCapsule_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__CrystalHolderCollisionCapsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ChangedVisibility(bool Visible);
    void SetObjectRotation(class AVRHandFingersBP_C* hand, float Percent);
    void ExecuteUbergraph_CrystalSlotActor(int32 EntryPoint);
};

#endif
