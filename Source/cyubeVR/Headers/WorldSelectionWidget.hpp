#ifndef UE4SS_SDK_WorldSelectionWidget_HPP
#define UE4SS_SDK_WorldSelectionWidget_HPP

class UWorldSelectionWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UButton* Button_0;
    class UButton* Button_1;
    class UTextBlock* SlotName;
    int32 SlotIndex;
    FWorldSelectionWidget_CDeleteWorld DeleteWorld;
    void DeleteWorld(FString Name);
    FString WorldName;
    class UMainMenu_C* MainMenu;
    class ULoadWorldWidget_C* Parent;

    void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature();
    void SetupSlotWidget(FString WorldName, int32 SlotIndex, class UMainMenu_C* MainMenu, class ULoadWorldWidget_C* Parent);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_WorldSelectionWidget(int32 EntryPoint);
    void DeleteWorld__DelegateSignature(FString Name);
};

#endif
