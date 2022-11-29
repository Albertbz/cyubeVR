#ifndef UE4SS_SDK_ChestActorBP_HPP
#define UE4SS_SDK_ChestActorBP_HPP

class AChestActorBP_C : public AChest
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UGrabRotateComponent_C* GrabRotateComponent;
    class UDragComponent_C* DragComponent;
    class UBoxComponent* ManualBoundingBox;
    class UStaticMeshComponent* Old_Wooden_Chest_Wood000_pivot;
    class USceneComponent* Scene;
    class UChildActorComponent* ChestInternalsActor;
    class UPhysicsConstraintComponent* PhysicsConstraint;
    class UStaticMeshComponent* ChestClosingMechanismPivotFixed;
    class UStaticMeshComponent* Old_Wooden_Chest_Wood003_pivot;
    class UStaticMeshComponent* Old_Wooden_Chest_Wood002_pivot;
    class UStaticMeshComponent* Old_Wooden_Chest_Wood001_pivot;
    class UStaticMeshComponent* Old_Wooden_Chest_Steel003_pivot;
    class UStaticMeshComponent* Old_Wooden_Chest_Steel002_pivot;
    class USceneComponent* RotationPoint;
    class UStaticMeshComponent* Old_Wooden_Chest_Steel001_pivot;
    class UStaticMeshComponent* Old_Wooden_Chest_Steel000_pivot;
    float MovementRotatioNFunny_Rot_CD0BC77F4B8957E37B8B178481AED8C1;
    TEnumAsByte<ETimelineDirection::Type> MovementRotatioNFunny__Direction_CD0BC77F4B8957E37B8B178481AED8C1;
    class UTimelineComponent* MovementRotatioNFunny;
    TArray<class AVRHandFingersBP_C*> CurrentlyOverlappingHand;
    bool HandGrabbing;
    TEnumAsByte<hand> HandGrabbingSide;
    class AVRHandFingersBP_C* HandGrabbingActor;
    FVector StartingGrabLocation;
    float TopStartRotation;
    class AVRHandFingersBP_C* LockCurrentlyOverlappingHand;
    class AVRHandFingersBP_C* LockHandGrabbingActor;
    bool LockHandGrabbing;
    FVector StartingLockGrabLocation;
    float LockStartRotation;
    FRotator LocalRotator;
    FVector LockStartXVector;
    bool OverlappingAnything;
    bool IsPreview;
    bool DragOngoing;
    float RotationBefore;
    float SoundLastPlayed;
    TArray<class UAudioComponent*> SpawnedSounds;

    void SetMobilityOfAll(TEnumAsByte<EComponentMobility::Type> NewMobility);
    void IsActive(bool& Active);
    FRotator GetChestRotation();
    void UserConstructionScript();
    void MovementRotatioNFunny__FinishedFunc();
    void MovementRotatioNFunny__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void OverlappedTop(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent);
    void ReceiveBeginPlay();
    void BndEvt__Old_Wooden_Chest_Wood002_pivot_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Old_Wooden_Chest_Wood001_pivot_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Old_Wooden_Chest_Steel002_pivot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void GrabLockEnded(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingersBP_C* HandActor);
    void GrabLockStarted(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingersBP_C* HandActor);
    void OverlapTopStopped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent);
    void SetIsPreview(bool IsPreview);
    void BndEvt__Old_Wooden_Chest_Steel002_pivot_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void SetChestRotation(FRotator rot);
    void CheckBothHandGrab();
    void BndEvt__ChestClosingMechanismPivotFixed_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__ChestClosingMechanismPivotFixed_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Old_Wooden_Chest_Wood001_pivot_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void DestroyEvent();
    void GrabTopEndedd(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingersBP_C* HandActor);
    void BndEvt__Old_Wooden_Chest_Wood003_pivot_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Old_Wooden_Chest_Wood002_pivot_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Old_Wooden_Chest_Wood003_pivot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void GrabTopStarted(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingersBP_C* HandActor);
    void MaybeSpawnEasterEgg();
    void DragActivatedEvent();
    void TopWasGrabbed();
    void UpdateAngleLimitsForTop();
    void DoFunnyMovement();
    void ExecuteUbergraph_ChestActorBP(int32 EntryPoint);
};

#endif
