#ifndef UE4SS_SDK_PictureSelector_HPP
#define UE4SS_SDK_PictureSelector_HPP

class APictureSelector_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* ChildActorMarginSlider;
    class UChildActorComponent* ChildActorThicknessSlider;
    class USceneComponent* Root;
    class ABP_DynamicFrame_C* CurrentFrame;
    float Length;
    TArray<FLoadedPicture> LoadedPictures;
    TArray<class UStaticMeshComponent*> PlaneComponents;
    class UStaticMeshComponent* OverlappedComponent;
    class UStaticMeshComponent* ClickedComponent;
    class UStaticMeshComponent* NewAttachedComponent;
    TArray<class UMaterialInstanceDynamic*> MaterialInstances;
    int32 OverlappedIndex;
    class AVRSliderBP_C* ThicknessSlider;
    class AVRSliderBP_C* MarginSlider;

    void Update();
    void Enable(class ABP_DynamicFrame_C* CurrentEditFrame);
    void SetEnabled(bool Enabled);
    void OverlapComponent(class UStaticMeshComponent* Component);
    void ReceiveTick(float DeltaSeconds);
    void ResetOverlap();
    void Click();
    void Release();
    void AttachedComponentOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SendClickToSlider();
    void SendReleaseToSlider();
    void InitSliderProperties();
    void ReceiveBeginPlay();
    void ThicknessSliderUpdated(float Value);
    void MarginSliderUpdated(float Value);
    void ExecuteUbergraph_PictureSelector(int32 EntryPoint);
};

#endif
