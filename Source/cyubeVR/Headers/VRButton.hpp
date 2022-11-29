#ifndef UE4SS_SDK_VRButton_HPP
#define UE4SS_SDK_VRButton_HPP

class AVRButton_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Cylinder;
    class USceneComponent* DefaultSceneRoot;
    FVRButton_CPressed Pressed;
    void Pressed();

    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ButtonPressed();
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_18_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_VRButton(int32 EntryPoint);
    void Pressed__DelegateSignature();
};

#endif
