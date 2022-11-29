#ifndef UE4SS_SDK_TorchBP_HPP
#define UE4SS_SDK_TorchBP_HPP

class ATorchBP_C : public Atorch
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USHISMC_C* SHISMC;
    class UPointLightComponent* PointLight;
    class USphereComponent* OverlapSphere;
    class UParticleSystemComponent* P_Fire_Torch_Regular_Add_LOD;
    class UBoxComponent* Box;
    class UAudioComponent* Fire01;
    class UStaticMeshComponent* torch_mount;
    class UArrowComponent* Arrow;
    class UStaticMeshComponent* Cube;
    class UStaticMeshComponent* FireTorchFBX;
    class UParticleSystemComponent* FireRegular;
    class UParticleSystemComponent* FireAdd;
    class USceneComponent* Scene;
    float Timeline_0_1_AF8280984BD858CD0B8F8C95C0A8358C;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_AF8280984BD858CD0B8F8C95C0A8358C;
    class UTimelineComponent* Timeline_0;
    TEnumAsByte<hand> CurrentSelectedHand;
    bool IsPreviewTorch;
    bool IsFree;
    EBlockTypeBP Type;
    int32 LOD;
    bool L_BehindBack;
    class UMaterialInterface* MountMaterial;

    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* Component, bool& Correct);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void DeactivateLightOnGrab();
    void CanGrabTorch(bool& CanGrab);
    void Check Release Behind Back(class AFirstPersonCharacterVR_C* Player, EControllerHand hand, bool& Result);
    void SetStaticOnWall(bool StaticOnWall);
    void SetMobilityAll(TEnumAsByte<EComponentMobility::Type> NewMobility);
    void Change Color(EBlockTypeBP DyeType);
    void DetachFromChunkBP();
    void SetSelected(bool Selected, TEnumAsByte<hand> hand);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SetActive(bool Active);
    void SetActiveBP(bool Enabled);
    void SetActiveM (bool Enabled);
    void SetObjectRotation(class AVRHandFingersBP_C* hand, float Percent);
    void SetIsPreviewTorch();
    void BndEvt__FireTorchFBX_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void AddToBucket(bool BehindBack);
    void DetachFromChunk();
    void SetColor(FColor Color_, EBlockTypeBP Type);
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void SetLOD(int32 LOD);
    void BndEvt__FireTorchFBX_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SetTrans();
    void SetColorBP(FLinearColor NewLightColor, EBlockTypeBP Type);
    void OverlapBlockItem(class ABlockItemVR_C* Item);
    void ExecuteUbergraph_TorchBP(int32 EntryPoint);
};

#endif
