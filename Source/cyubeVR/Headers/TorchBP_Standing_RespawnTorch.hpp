#ifndef UE4SS_SDK_TorchBP_Standing_RespawnTorch_HPP
#define UE4SS_SDK_TorchBP_Standing_RespawnTorch_HPP

class ATorchBP_Standing_RespawnTorch_C : public ATorchBP_Standing_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* am_vectorFieldDemo07;
    class UParticleSystemComponent* am_vectorFieldDemo06;
    class UParticleSystemComponent* P_CrystalChargeParticle;
    bool IsActiveRespawnTorch;

    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void CanGrabTorch(bool& CanGrab);
    void ReceiveTick(float DeltaSeconds);
    void SetActiveM (bool Enabled);
    void OverlapBlockItem(class ABlockItemVR_C* Item);
    void CheckIsActiveRespawnTorch();
    void ExecuteUbergraph_TorchBP_Standing_RespawnTorch(int32 EntryPoint);
};

#endif
