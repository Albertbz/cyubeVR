#ifndef UE4SS_SDK_OneModTag_HPP
#define UE4SS_SDK_OneModTag_HPP

class UOneModTag_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_35;
    class UButton* Button_0;
    class UTextBlock* TextBlock_35;
    FString TagName;
    bool IsSelected;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__OneModTag_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ManualClick();
    void ExecuteUbergraph_OneModTag(int32 EntryPoint);
};

#endif
