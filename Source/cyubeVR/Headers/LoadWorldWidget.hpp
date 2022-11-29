#ifndef UE4SS_SDK_LoadWorldWidget_HPP
#define UE4SS_SDK_LoadWorldWidget_HPP

class ULoadWorldWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* NotReallyDelete;
    class UBorder* ReallyDeleteOverlay;
    class UVerticalBox* WorldListVertical;
    class UButton* YesReallyDelete;
    FLoadWorldWidget_CClickedOnWorld ClickedOnWorld;
    void ClickedOnWorld(FString WorldName);
    TArray<class UWorldSelectionWidget_C*> WorldSelectionWidgets;
    class UMainMenu_C* MainMenu;
    FString DeletePending;

    void UpdateWorldList();
    void SetupLoadWorldWidget(class UMainMenu_C* MainMenu);
    void SlotWasClicked(FString WorldName);
    void BndEvt__YesReallyLeave_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__NotReallyDelete_K2Node_ComponentBoundEvent_48_OnButtonReleasedEvent__DelegateSignature();
    void DeleteClicked(FString World);
    void ExecuteUbergraph_LoadWorldWidget(int32 EntryPoint);
    void ClickedOnWorld__DelegateSignature(FString WorldName);
};

#endif
