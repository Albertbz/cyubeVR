#ifndef UE4SS_SDK_BucketWidgetComponent_HPP
#define UE4SS_SDK_BucketWidgetComponent_HPP

class UBucketWidgetComponent_C : public UWidgetComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector StartLocation;
    FVector CenterLocation;
    FVector EndLocation;
    bool ToCenter;
    float Alpha;
    class UCurveFloat* Curve;

    void ReceiveTick(float DeltaSeconds);
    void Setup(FVector WorldLoc);
    void ExecuteUbergraph_BucketWidgetComponent(int32 EntryPoint);
};

#endif
