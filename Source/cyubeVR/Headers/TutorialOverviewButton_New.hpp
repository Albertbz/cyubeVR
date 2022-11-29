#ifndef UE4SS_SDK_TutorialOverviewButton_New_HPP
#define UE4SS_SDK_TutorialOverviewButton_New_HPP

class UTutorialOverviewButton_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_2;
    class UTextBlock* TextBlock_0;
    int32 Index;
    class UTutorialOverview_New_C* Parent;
    bool Mod;
    FString Mod Text;
    FText In Text;

    void Init(class UTutorialOverview_New_C* Parent, int32 Index, FText InText, bool Mod, FString ModText);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Button_2_K2Node_ComponentBoundEvent_63_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_TutorialOverviewButton_New(int32 EntryPoint);
};

#endif
