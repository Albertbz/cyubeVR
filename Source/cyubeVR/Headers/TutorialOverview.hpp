#ifndef UE4SS_SDK_TutorialOverview_HPP
#define UE4SS_SDK_TutorialOverview_HPP

class UTutorialOverview_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OpenSidebar;
    class UBorder* Border_4;
    class UImage* Image_0;
    class UScrollBox* ScrollBox_0;
    FVector2D Size;
    TArray<class UObject*> TutorialPages;
    bool SidebarFull;
    FTimerHandle Timer;
    float SizeTarget;

    FEventReply OnMouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void InitButtons();
    void UpdatePage(int32 Index);
    void DisableSidebar();
    void EnableSidebar();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void SidebarHovered();
    void ExecuteUbergraph_TutorialOverview(int32 EntryPoint);
};

#endif
