#ifndef UE4SS_SDK_WallMountBP_HPP
#define UE4SS_SDK_WallMountBP_HPP

class AWallMountBP_C : public AMeshObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* Arrow;
    class UBoxComponent* OverlapBounding;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* Cube;
    class USceneComponent* DefaultSceneRoot;
    class AToolBP_C* CurrentActiveTool;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void AttachTool(class AToolBP_C* Tool);
    void ExecuteUbergraph_WallMountBP(int32 EntryPoint);
};

#endif
