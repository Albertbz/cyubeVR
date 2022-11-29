#ifndef UE4SS_SDK_GraphicsSettingCategoryButton_HPP
#define UE4SS_SDK_GraphicsSettingCategoryButton_HPP

class UGraphicsSettingCategoryButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BorderFrame;
    class UButton* Button_0;
    class UTextBlock* TextBlock_0;
    FString Name;
    class UGraphicsSetting_New_C* ParentSetting;
    FGraphicsSettingCategoryButton_CClicked Clicked;
    void Clicked();

    void SetEnabled(bool TRUE);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_405_OnButtonPressedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_GraphicsSettingCategoryButton(int32 EntryPoint);
    void Clicked__DelegateSignature();
};

#endif
