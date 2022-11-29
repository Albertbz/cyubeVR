#ifndef UE4SS_SDK_BucketAddWidget_HPP
#define UE4SS_SDK_BucketAddWidget_HPP

class UBucketAddWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Amount;
    class UCustomBlockPreviewWidget1_C* CustomBlockPreviewWidget1;
    class UImage* Texture;
    class UBorder* TopBorder;
    float Opacity;
    bool Back;
    float Alpha;
    class UCurveFloat* Curve;

    void SetupWidget(int32 Amount, EBlockTypeBP Type, int32 UniqueId);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BucketAddWidget(int32 EntryPoint);
};

#endif
