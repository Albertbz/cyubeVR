#ifndef UE4SS_SDK_NewWorldWidget_HPP
#define UE4SS_SDK_NewWorldWidget_HPP

class UNewWorldWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_1;
    class UButton* NameButton;
    class UTextBlock* NewWorldNameText;
    class UButton* SeedButton;
    class UTextBlock* SeedTextBox;
    FNewWorldWidget_CClickedOnNameTextBox ClickedOnNameTextBox;
    void ClickedOnNameTextBox();
    FNewWorldWidget_CClickedOnStart ClickedOnStart;
    void ClickedOnStart();
    FNewWorldWidget_CClickedOnSeedTextBox ClickedOnSeedTextBox;
    void ClickedOnSeedTextBox();

    void Construct();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonReleasedEvent__DelegateSignature();
    void SetupNewWorldWidget();
    void BndEvt__SeedButton_K2Node_ComponentBoundEvent_178_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_NewWorldWidget(int32 EntryPoint);
    void ClickedOnSeedTextBox__DelegateSignature();
    void ClickedOnStart__DelegateSignature();
    void ClickedOnNameTextBox__DelegateSignature();
};

#endif
