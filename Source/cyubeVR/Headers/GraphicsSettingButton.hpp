#ifndef UE4SS_SDK_GraphicsSettingButton_HPP
#define UE4SS_SDK_GraphicsSettingButton_HPP

class UGraphicsSettingButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BorderFrame;
    class UButton* Button_0;
    class UTextBlock* TextBlock_0;
    FString Name;
    class UGraphicsSetting_New_C* ParentSetting;

    void Init(FString Name, class UGraphicsSetting_New_C* ParentSetting);
    void SetEnabled(bool TRUE);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_405_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_GraphicsSettingButton(int32 EntryPoint);
};

#endif
