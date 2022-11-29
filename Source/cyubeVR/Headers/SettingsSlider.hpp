#ifndef UE4SS_SDK_SettingsSlider_HPP
#define UE4SS_SDK_SettingsSlider_HPP

class USettingsSlider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class USettingName_C* SettingName;
    class USlider* Slider_0;
    TEnumAsByte<SliderType> SettingsType;
    FText Text;
    float Default;
    class UMaterialInstanceDynamic* SliderMat;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Slider_0_K2Node_ComponentBoundEvent_44_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void DoMusic(float Value);
    void UpdateSliderMat(float Value);
    void DoAAStrength(float Value);
    void PreConstruct(bool IsDesignTime);
    void DoSaturation(float Saturation);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature();
    void SliderWasChanged(float Value);
    void DoDayLength(float Value);
    void DoNightLength(float Value);
    void DoHandSize(float Value);
    void DoSmoothTurnSpeed(float Value);
    void Construct();
    void DoSmoothLocoSpeed(float Value);
    void DoSharpness(float Value);
    void DoBucketAnglePitch(float Value);
    void DoBucketAngleRoll(float Value);
    void BndEvt__SettingsSlider_Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature();
    void DoResolutionOffset(float Value);
    void ExecuteUbergraph_SettingsSlider(int32 EntryPoint);
};

#endif
