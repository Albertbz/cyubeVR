#ifndef UE4SS_SDK_ArrowProjectile_HPP
#define UE4SS_SDK_ArrowProjectile_HPP

class AArrowProjectile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_Sparks;
    class UStaticMeshComponent* HB_Arrow2;
    class UProjectileMovementComponent* ProjectileMovement;
    float InitialSpeed;

    void UserConstructionScript();
    void BndEvt__HB_Arrow2_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_ArrowProjectile(int32 EntryPoint);
};

#endif
