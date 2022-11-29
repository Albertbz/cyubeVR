#ifndef UE4SS_SDK_VRSliderBP_HPP
#define UE4SS_SDK_VRSliderBP_HPP

class AVRSliderBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Cylinder;
    class USceneComponent* DefaultSceneRoot;
    bool DragStarted;
    bool CurrentlyOverlapping;
    FVRSliderBP_CSliderUpdated SliderUpdated;
    void SliderUpdated(float Value);
    float LastGoodValue;
    bool OverlapType;
    bool OverlappingHand;
    class USceneComponent* OverlappingHandLoc;
    float CurrentValue;
    bool IsRightHandSlider;
    FTimerHandle StartRealOverlapTimer;

    void ResetOverlap();
    void ReceiveTick(float DeltaSeconds);
    void Click();
    void UpdateSliderLocation(FVector WorldLocation);
    void SetValue(float NewValue);
    void SubmitGoodValue(float GoodValue);
    void ConfigureForHandOverlap(class AVRHandFingersBP_C* HandActor, bool IsRightHand);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Release();
    void EndOverlap();
    void TraceHitThis(class USceneComponent* Component, FVector WorldLocation);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void StartRealOverlap();
    void ExecuteUbergraph_VRSliderBP(int32 EntryPoint);
    void SliderUpdated__DelegateSignature(float Value);
};

#endif
