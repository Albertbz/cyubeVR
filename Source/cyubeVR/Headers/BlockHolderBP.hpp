#ifndef UE4SS_SDK_BlockHolderBP_HPP
#define UE4SS_SDK_BlockHolderBP_HPP

class ABlockHolderBP_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara5;
    class UNiagaraComponent* Niagara4;
    class UNiagaraComponent* Niagara3;
    class UNiagaraComponent* Niagara2;
    class UNiagaraComponent* Niagara1;
    class UNiagaraComponent* Niagara;
    class USceneComponent* Scene;
    class UNiagaraComponent* Niagara10;
    class UNiagaraComponent* Niagara9;
    class UNiagaraComponent* Niagara8;
    class UNiagaraComponent* Niagara7;
    class UStaticMeshComponent* CubeInHand;
    class UNiagaraComponent* Niagara6;
    class USkeletalMeshComponent* SkeletalMesh;
    class UChildActorComponent* CrystalSlotChildActor;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* HandBlockMaterial;
    TArray<class UMeshComponent*> Meshes;
    bool HiddenBecauseMeshObjectSelected;
    bool Active;
    TArray<class UNiagaraComponent*> ParticleSystems;
    bool IsRightHand;
    bool EverUsedCrystalInBuildTool;
    float LastCrystalHintShown;
    bool DidEverNotUseCrystal;

    void AttachCrystal(FColor CrystalColor, float CrystalChargeState, bool& Attached);
    void CanGrabCrystal(bool& CanGrab, FColor& Color, float& ChargeState);
    void ShowCrystalHintText();
    void SetCrystalProperties();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void SetHiddenBecauseMeshObjectSelected(bool Hidden);
    void UpdateVisibility();
    void SetActive(bool Active);
    void RemovedCrystal();
    void ReduceCrystalCharge(int32 BlocksPlaced, bool IsRightHandIn);
    void BndEvt__CubeInHand_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CubeInHand_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void SetLength(float Length);
    void ExecuteUbergraph_BlockHolderBP(int32 EntryPoint);
};

#endif
