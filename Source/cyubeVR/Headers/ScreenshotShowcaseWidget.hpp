#ifndef UE4SS_SDK_ScreenshotShowcaseWidget_HPP
#define UE4SS_SDK_ScreenshotShowcaseWidget_HPP

class UScreenshotShowcaseWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Left;
    class UButton* Button_Right;
    class UTextBlock* CreditsName;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_136;
    class UScaleBox* ScaleBox_Image1;
    class UScaleBox* ScaleBox_Image2;
    FString PatreonNames;
    FString RemainingString;
    bool Continue;
    FString requestID;
    float InterpPosition;
    bool Moving;
    float MoveSpeed;
    TArray<class UTexture2D*> ImagesArray;
    TArray<FString> ImageNameArray;
    int32 CurrentIndex;
    int32 NewIndex;
    FTimerHandle SlideshowTimer;
    float WaitSecondsRegular;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnRequestComplete(const TArray<FString>& Data, const int32 statusCode, const TArray<uint8>& byteData, const FString requestID);
    void MoveToNewImage(int32 Index);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void DoInterp();
    void Update();
    void RunSlideshow();
    void BndEvt__ScreenshotShowcaseWidget_Button_97_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ScreenshotShowcaseWidget_Button_Right_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void NextSlideInXSeconds(float Time);
    void ExecuteUbergraph_ScreenshotShowcaseWidget(int32 EntryPoint);
};

#endif
