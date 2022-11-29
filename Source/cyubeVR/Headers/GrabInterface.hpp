#ifndef UE4SS_SDK_GrabInterface_HPP
#define UE4SS_SDK_GrabInterface_HPP

class IGrabInterface_C : public IInterface
{

    void SetObjectRotation(class AReceiveLightActor* bpp__Hand__pf, float bpp__Percent__pf);
    void SetGravityGloveTargetIndicatorActive(bool bpp__Active__pf, bool bpp__Left__pf, bool& bpp_____pf);
    void Release(class AVRCharacter* bpp__Player__pf, class UMotionControllerComponent* bpp__Component__pf, bool& bpp__Success__pf);
    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* bpp__Component__pf, bool& bpp__Correct__pf);
    void Grab(class AVRCharacter* bpp__Player__pf, class UBoxComponent* bpp__HandComponent__pf, class UMeshComponent* bpp__HandMesh__pf, class USphereComponent* bpp__HandOverlap__pf, class UBoxComponent* bpp__OtherHandComponent__pf, class UMeshComponent* bpp__OtherHandParentComponent__pf, hand bpp__Hand__pf, bool bpp__IsDistanceGrab__pf, bool bpp__AfterSpawn__pf, class AActor*& bpp__GrabbedActorMain__pf, class AActor*& bpp__GrabbedActorDirect__pf);
    void GetRealWorldLocation(FVector& bpp__Location__pf);
    void DeactivateTelekinesis(class UStaticMeshComponent*& bpp__Return__pf);
    void CanTelekinesis(bool bpp__LineOfSight__pf, bool& bpp__Can__pf, class AActor*& bpp__ActorToGrab__pf);
    void ActivateTelekinesis(hand bpp__Hand__pf, bool bpp__GravityGlove__pf, class UPrimitiveComponent*& bpp__SimulatingComponent__pf);
};

#endif
