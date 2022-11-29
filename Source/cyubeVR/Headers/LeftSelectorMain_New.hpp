#ifndef UE4SS_SDK_LeftSelectorMain_New_HPP
#define UE4SS_SDK_LeftSelectorMain_New_HPP

class ULeftSelectorMain_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOutButtons;
    class UBorder* Border_Buttons;
    class UCraftingList_New_C* CraftingList_New;
    class UImage* Image_0;
    class UInGameSelector_New_C* InGameSelector_New;
    class UMainSelectorButton_C* MainSelectorButton0;
    class UMainSelectorButton_C* MainSelectorButton1;
    class UMainSelectorButton_C* MainSelectorButton2;
    class UMainSelectorButton_C* MainSelectorButton3;
    class USettingsUI_New_C* SettingsUI_New;
    class UTextBlock* TextAtTop;
    class UTextBlock* TextBlock_VersionNumber;
    class UTutorialOverview_New_C* TutorialOverview_New;
    class UWidgetSwitcher* WidgetSwitcher_0;
    TArray<class USelectorMainButton_C*> MainButtons;
    TArray<class UMainSelectorButton_C*> MainButtonsNew;
    FVector2D Size;

    void SetTextToBlockName(EBlockTypeBP Type);
    void SetDescribeText(FText InText, FLinearColor Specified Color);
    void SetCraftingOverviewTextToBlockName(EBlockTypeBP Type);
    void SetCraftingOverviewDescription(FText InText, FLinearColor Specified Color);
    void GetCraftingOverviewDescription(FText& CurrentText);
    void SetTutorialTabEnabled(bool Enabled);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_83_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_41_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_98_OnButtonHoverEvent__DelegateSignature();
    void InitButton();
    void InventoryEnabled();
    void InventoryDisabled();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__MainSelectorButton0_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
    void BndEvt__MainSelectorButton1_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature();
    void BndEvt__MainSelectorButton2_K2Node_ComponentBoundEvent_69_Clicked__DelegateSignature();
    void PlayFadeOutButtons(TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode);
    void BndEvt__MainSelectorButton3_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature();
    void ExecuteUbergraph_LeftSelectorMain_New(int32 EntryPoint);
};

#endif
