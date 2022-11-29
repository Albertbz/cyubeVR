#ifndef UE4SS_SDK_ModBlockCategory_HPP
#define UE4SS_SDK_ModBlockCategory_HPP

class UModBlockCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* MadeButtonWide;
    class UButton* Button_38;
    class UUniformGridPanel* GripPanelMod;
    class USizeBox* SizeBox_65;
    class UTextBlock* TextBlock_84;
    FString CategoryNameIn;
    bool PlayOpen;
    bool PlayClose;
    FTimerHandle MakeInvisibleTimer;
    FTimerHandle MakeVisibleTimer;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__ModBlockCategory_Button_38_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void MakeInvisible();
    void EndMakeVisible();
    void UpdateVIsibilityOfChilds();
    void MakeAllChildsVisible();
    void ExecuteUbergraph_ModBlockCategory(int32 EntryPoint);
};

#endif
