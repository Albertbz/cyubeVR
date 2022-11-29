#ifndef UE4SS_SDK_SelectorMainButton_HPP
#define UE4SS_SDK_SelectorMainButton_HPP

class USelectorMainButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_1;
    class UBorder* SelectedBorder;
    class UTextBlock* TextBlock_19;
    FSelectorMainButton_CClicked Clicked;
    void Clicked();
    FString Text;

    void Construct();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature();
    void MarkSelected(bool Selected);
    void ExecuteUbergraph_SelectorMainButton(int32 EntryPoint);
    void Clicked__DelegateSignature();
};

#endif
