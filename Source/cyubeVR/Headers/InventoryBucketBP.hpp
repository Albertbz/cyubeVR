#ifndef UE4SS_SDK_InventoryBucketBP_HPP
#define UE4SS_SDK_InventoryBucketBP_HPP

class AInventoryBucketBP_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* WidgetSpawnLocNotEnoughFreeSpace;
    class USceneComponent* Scene;
    class USceneComponent* Scene1;
    class UChildActorComponent* CrystalSlotChildActor;
    class UStaticMeshComponent* ConeSuckDefault;
    class UStaticMeshComponent* ConeBlow;
    class UCapsuleComponent* CrystalHolderCollisionCapsule;
    class UStaticMeshComponent* CrystalMesh;
    class UParticleSystemComponent* SuckParticle1;
    class UVectorFieldComponent* VectorField;
    class UAudioComponent* BucketSound;
    class UParticleSystemComponent* P_LevelExit_Ice;
    class UParticleSystemComponent* SuckParticle;
    class UArrowComponent* SucLoc;
    class UStaticMeshComponent* Cone;
    class UArrowComponent* Arrow;
    class UStaticMeshComponent* BucketMesh;
    class UBoxComponent* Box1;
    class UBoxComponent* Box;
    class UWidgetComponent* Widget;
    class UArrowComponent* WidgetSpawnLoc;
    class UCapsuleComponent* Capsule;
    class UParticleSystemComponent* ParticleSystem;
    bool BucketActive;
    TEnumAsByte<hand> WidgetSetFromHand;
    bool BucketReceiveActive;
    TSet<AActor*> IgnoreToSphere;
    TEnumAsByte<hand> CurrentSelectedHand;
    class UMaterialInstanceDynamic* VeinMat;
    int32 BucketMode;
    float BucketSuckStrength;
    bool MainParticleActive;
    bool EverUsedCrystalInBucket;
    float LastCrystalHintShown;
    float LastCrystalEmptyHintShown;

    void CanGrabCrystal(bool& CanGrab, FColor& Color, float& ChargeState);
    void AttachCrystal(FColor CrystalColor, float CrystalChargeState, bool& Attached);
    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* Component, bool& Correct);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ShowCrystalEmptyHintText();
    void ShowCrystalHintText();
    void AttachCrystalInternal(FColor CrystalColor, float CrystalChargeState, bool& Attach);
    void SetCrystalProperties();
    void SetWidgetLook(bool Active, EBlockTypeBP Type, TEnumAsByte<hand> FromHand, int32 Amount, int32 UniqueId);
    void SpawnWidget(int32 Amount, EBlockTypeBP Type, int32 UniqueId);
    void UserConstructionScript();
    void OverlapCapsule(class AActor* OtherActor);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void AddForceToComponent(class UPrimitiveComponent* InputPin, bool SpecialType);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SetBucketActive(bool Active);
    void ReceiveBeginPlay();
    void SetObjectRotation(class AVRHandFingersBP_C* hand, float Percent);
    void BndEvt__CrystalHolderCollisionCapsule_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__CrystalHolderCollisionCapsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void InitializeBucketMat();
    void ReduceCrystalCharge();
    void RemovedCrystal();
    void ShowNotEnoughFreeSpace(bool BehindBack);
    void ExecuteUbergraph_InventoryBucketBP(int32 EntryPoint);
};

#endif
