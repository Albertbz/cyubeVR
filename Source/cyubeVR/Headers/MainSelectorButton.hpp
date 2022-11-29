#ifndef UE4SS_SDK_MainSelectorButton_HPP
#define UE4SS_SDK_MainSelectorButton_HPP

class UMainSelectorButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UImage* Image_0;
    class UTextBlock* TextBlock_0;
    FMainSelectorButton_CClicked Clicked;
    void Clicked();
    FString Text;

    void PreConstruct(bool IsDesignTime);
    void MarkSelected(bool Selected);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_156_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_MainSelectorButton(int32 EntryPoint);
    void Clicked__DelegateSignature();
};

#endif
