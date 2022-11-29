#ifndef UE4SS_SDK_TutorialOverview_New_HPP
#define UE4SS_SDK_TutorialOverview_New_HPP

class UTutorialOverview_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OpenSidebar;
    class UBorder* Border_0;
    class UBorder* Border_4;
    class UImage* Image_0;
    class UScrollBox* ScrollBox_0;
    class UScrollBox* ScrollBox_175;
    class UTextBlock* TextBlock_Mod;
    class UWidgetSwitcher* WidgetSwitcher_0;
    FVector2D Size;
    TArray<class UObject*> TutorialPages;
    bool SidebarFull;
    FTimerHandle Timer;
    float SizeTarget;

    void UpdatePageMod(FText InText);
    FEventReply OnMouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void InitButtons();
    void UpdatePage(int32 Index);
    void DisableSidebar();
    void EnableSidebar();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void SidebarHovered();
    void ExecuteUbergraph_TutorialOverview_New(int32 EntryPoint);
};

#endif
