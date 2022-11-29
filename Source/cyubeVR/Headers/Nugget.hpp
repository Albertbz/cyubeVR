#ifndef UE4SS_SDK_Nugget_HPP
#define UE4SS_SDK_Nugget_HPP

class ANugget_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* NuggetMesh;
    float Timeline_0_1_BFD5E63A4BD0D46F8D24B39400AA8676;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_BFD5E63A4BD0D46F8D24B39400AA8676;
    class UTimelineComponent* Timeline_0;
    EBlockTypeBP Type;
    bool IsFree;
    TEnumAsByte<hand> CurrentSelectedHand;
    FVector OriginalScale;

    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* Component, bool& Correct);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void SetSelected(bool Selected, TEnumAsByte<hand> hand);
    void SetType(EBlockTypeBP Type);
    void Randomize();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SetObjectRotation(class AVRHandFingersBP_C* hand, float Percent);
    void AddToBucket();
    void BndEvt__NuggetMesh_K2Node_ComponentBoundEvent_14_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__NuggetMesh_K2Node_ComponentBoundEvent_20_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void ExecuteUbergraph_Nugget(int32 EntryPoint);
};

#endif
