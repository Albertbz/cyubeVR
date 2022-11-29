#ifndef UE4SS_SDK_BenchmarkEndWidget_HPP
#define UE4SS_SDK_BenchmarkEndWidget_HPP

class UBenchmarkEndWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FlyIn;
    class UBackgroundBlur* BackgroundBlur_0;
    class UBenchmarkLeaderboards_C* BenchmarkLeaderboards;
    class UButton* Button_4;
    class UButton* Button_5;
    class UButton* Button_7;
    class UButton* Button_BackToMenu;
    class UButton* Button_OpenSteamOverlayBuyDLC;
    class UButton* Button_SwitchView;
    class UCircularThrobber* CircularThrobber_100;
    class UHardwareInfoWidget_C* HardwareInfoWidget;
    class UHorizontalBox* HorizontalBox_Leaderboards;
    class UHorizontalBox* HorizontalBox_Results;
    class UHorizontalBox* HorizontalBox_UpperButtons;
    class UImage* Image_67;
    class UImage* Image_68;
    class URetainerBox* RetainerBox_Result;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TextBlock_3;
    class UTextBlock* TextBlock_14;
    class UTextBlock* TextBlock_15;
    class UTextBlock* TextBlock_01PLOW;
    class UTextBlock* TextBlock_1PLOW;
    class UTextBlock* TextBlock_ButtonSwitchText;
    class UTextBlock* TextBlock_InaccurateResults;
    class UTextBlock* TextBlock_LeaderboardAmount;
    class UTextBlock* TextBlock_ResultsComparison;
    class UTextBlock* TextBlock_UNUSUALRESULTS;
    class UVerticalBox* VerticalBox_BuyDLC;
    class UWidgetSwitcher* WidgetSwitcher_ComparedResults;
    class UMediaPlayer* BackgroundMediaPlayer;
    float BlurTarget;
    class UMaterialInstanceDynamic* ExportMaterial;
    float FPS;
    float Low1FPS;
    float Low03FPS;
    bool LeaderboardsVisible;
    FUWorksSteamLeaderboard LeaderboardRef;
    FString CurrentHeadsetName;
    FString CurrentGPUName;
    class UBenchmarkEndSaveGame_C* SaveGameToUse;
    int32 ResY;
    int32 ResX;
    FString ButtomBottomText;

    void UpdateSaveGame(bool ShowName);
    void CreateOrLoadSaveGame();
    FEventReply OnMouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Completed_AD0C9DC547E773BFF043D5B8BC491CA8(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    void Completed_A7FD7B124C8EE1151D933BB6F08ED76A(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    void Completed_59C05B9C4562DC85F0768DAAA2CB548E(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    void Completed_4C08EA6C44D476C0DF2A84BD7093E745(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    void SubmitScore();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void MakeLeaderboardVisible();
    void FindLeaderboardAndMaybeSubmit(bool Submit);
    void FillHeadsetAndGPUName();
    void ResubmitExistingScore(bool ShowName);
    void BndEvt__BenchmarkLeaderboards_K2Node_ComponentBoundEvent_2_ChangeOwnNameVisible__DelegateSignature(bool NameVisible);
    void BndEvt__BenchmarkLeaderboards_K2Node_ComponentBoundEvent_1_DeleteOwnEntry__DelegateSignature();
    void BndEvt__Button_OpenSteamOverlayBuyDLC_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void CompletedLeaderboardNode();
    void GotResultsToCompare(int32 EntryAmount);
    void Construct();
    void ExportResultImage();
    void CreateExportMaterial();
    void BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_6_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_5_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_7_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void Start_DLC_Check();
    void ExecuteUbergraph_BenchmarkEndWidget(int32 EntryPoint);
};

#endif
