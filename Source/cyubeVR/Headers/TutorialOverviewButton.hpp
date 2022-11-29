#ifndef UE4SS_SDK_TutorialOverviewButton_HPP
#define UE4SS_SDK_TutorialOverviewButton_HPP

class UTutorialOverviewButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_2;
    class UTextBlock* TextBlock_0;
    int32 Index;
    class UTutorialOverview_C* Parent;

    void Init(class UTutorialOverview_C* Parent, int32 Index, FText InText);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Button_2_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_TutorialOverviewButton(int32 EntryPoint);
};

#endif
