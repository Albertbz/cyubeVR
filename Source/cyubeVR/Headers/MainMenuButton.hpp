#ifndef UE4SS_SDK_MainMenuButton_HPP
#define UE4SS_SDK_MainMenuButton_HPP

class UMainMenuButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* ButtonContinue;
    class UTextBlock* TextBlock_0;
    FText Text;
    FMainMenuButton_CPressed Pressed;
    void Pressed();

    void Construct();
    void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_MainMenuButton(int32 EntryPoint);
    void Pressed__DelegateSignature();
};

#endif
