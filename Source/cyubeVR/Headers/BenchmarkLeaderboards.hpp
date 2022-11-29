#ifndef UE4SS_SDK_BenchmarkLeaderboards_HPP
#define UE4SS_SDK_BenchmarkLeaderboards_HPP

class UBenchmarkLeaderboards_C : public UBenchmarkLeaderboardsCPP
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* AccessingLeaderboardOverlay;
    class UBorder* Border_DeleteMyEntry;
    class UBorder* Border_FilterGPU;
    class UBorder* Border_FilterHeadset;
    class UBorder* Border_NameVisible;
    class UButton* Button_6;
    class UButton* Button_DeleteMyEntry;
    class UButton* Button_FilterGPU;
    class UButton* Button_NameVisible;
    class UCircularThrobber* CircularThrobber_100;
    class USizeBox* SizeBox_FakeContent;
    class UTextBlock* TextBlock_5;
    class UTextBlock* TextBlock_Showing;
    class UVerticalBox* VerticalBox_ScrollArea;
    FUWorksSteamLeaderboard LeaderboardToUse;
    bool HaveValidLeaderboard;
    TArray<class ULeaderboardEntry_C*> ScrollWidgets;
    bool FilterByHeadset;
    FString CurrentHeadsetName;
    FString CurrentGPUName;
    bool FilterByGPU;
    bool NameVisible;
    FBenchmarkLeaderboards_CChangeOwnNameVisible ChangeOwnNameVisible;
    void ChangeOwnNameVisible(bool NameVisible);
    FBenchmarkLeaderboards_CDeleteOwnEntry DeleteOwnEntry;
    void DeleteOwnEntry();
    FBenchmarkLeaderboards_CNowGotResultsToCompare NowGotResultsToCompare;
    void NowGotResultsToCompare(int32 EntryAmount);
    int32 ActualResultThisRun;
    int32 CurrentResX;
    int32 CurrentResY;

    class UWidget* Get_Button_NameVisible_ToolTipWidget_0();
    void Completed_541BC8514E7E211EFA47F59D8AEAD528(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    void SetValidLeaderboard(FUWorksSteamLeaderboard LeaderboardToUse, FString HeadsetName, FString CurrentGPUName, int32 CurrentResX, int32 CurrentResY);
    void PopulateLeaderboard();
    void BndEvt__ScrollBox_Entries_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void CreateFake();
    void BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void UpdateArraySetting();
    void UpdateScrollList();
    void BndEvt__Button_FilterGPU_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void SetupButtonColor();
    void Construct();
    void BndEvt__Button_NameVisible_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void InitNameVisible(bool NameVisible);
    void UpdateDeleteButtonEnabled();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void UpdateResultIndicatorText(class UTextBlock* ResultIndicatorText);
    void UpdateScrollboxFakeEntrySize(int32 Count);
    void Scrolled(float Offset);
    void ClickedFilterByHeadset();
    void ClickedFilterGPU();
    void ExecuteUbergraph_BenchmarkLeaderboards(int32 EntryPoint);
    void NowGotResultsToCompare__DelegateSignature(int32 EntryAmount);
    void DeleteOwnEntry__DelegateSignature();
    void ChangeOwnNameVisible__DelegateSignature(bool NameVisible);
};

#endif
