#ifndef UE4SS_SDK_BlockItemInventory_HPP
#define UE4SS_SDK_BlockItemInventory_HPP

class ABlockItemInventory_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Cube;
    float GetSmaller_1_8006EC2A416E127E805FAEA6E2537E14;
    TEnumAsByte<ETimelineDirection::Type> GetSmaller__Direction_8006EC2A416E127E805FAEA6E2537E14;
    class UTimelineComponent* GetSmaller;
    TEnumAsByte<Enum_BlockType> Type;
    bool Fly;
    class ACharacter* Target;
    EBlockTypeBP BlockType;
    class UMaterialInstanceDynamic* MaterialInstanceDynamic;

    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* Component, bool& Correct);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void UpdateItemType(uint8 BlockType);
    void GetSmaller__FinishedFunc();
    void GetSmaller__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void Destroy();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_330_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void SetObjectRotation(class AVRHandFingersBP_C* hand, float Percent);
    void BndEvt__Cube_K2Node_ComponentBoundEvent_281_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Grab_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void ExecuteUbergraph_BlockItemInventory(int32 EntryPoint);
};

#endif
