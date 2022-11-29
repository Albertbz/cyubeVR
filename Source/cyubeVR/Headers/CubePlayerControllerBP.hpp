#ifndef UE4SS_SDK_CubePlayerControllerBP_HPP
#define UE4SS_SDK_CubePlayerControllerBP_HPP

class ACubePlayerControllerBP_C : public ACubePlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UObject* UI;
    class UAudioComponent* Music;
    class UAudioComponent* MenuMusic;
    bool PlayLeft;
    bool PlayRight;
    FTimerHandle ResetTimerLeft;
    FTimerHandle ResetTimerRight;
    int32 STAT_BlocksPlaced;
    int32 STAT_BlocksCrafted;
    FUWorksSteamLeaderboard LB_BlocksMined10Min;
    FUWorksSteamLeaderboard LB_BlocksDestroyed;
    FUWorksSteamLeaderboard LB_BlocksCrafted;
    FUWorksSteamLeaderboard LB_BlocksPlaced;
    class UStatsSaveGame_C* StatsSaveGame;
    int32 10MinuteRank;
    FString 10MinuteRecordHolder;
    FUWorksSteamLeaderboard LB_TotalPlaytime;

    void OnFailure_5C5733CE4E4067DF8BB0A28C01B2D6E4(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void OnSuccess_5C5733CE4E4067DF8BB0A28C01B2D6E4(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void OnFailure_49149CC4471B5EB91D3D59B3C3256B55(int32 LeaderboardValue);
    void OnSuccess_49149CC4471B5EB91D3D59B3C3256B55(int32 LeaderboardValue);
    void InpActEvt_Ctrl+Alt_H_K2Node_InputKeyEvent_0(FKey Key);
    void Completed_2D8E927D49A7D97BF0DEC0AB31E90290(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    void Completed_57C72F934E9EDB9CDB24DA8CC2DEDEBA(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    void Completed_73380C6C42E182537748C49E81BBD702(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    void Completed_244A50594F3781CA7FB6A6A400DF8BBA(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    void Completed_24C0E9F6459DB25E6472F5820E8BE525(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    void Completed_45DCF6154A7B8A9A1C1C9594B0EC9914(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    void Completed_9489275844335DD050AA2499B05FD6D9(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    void Completed_7C4AB7474972A1887BB437940D1B18B2(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    void Completed_7B7E5D4C42C299AA268D71B5706330DC(class USaveGame* SaveGame, bool bSuccess);
    void Completed_7C6D4B554C1928D3B562B0B4C7151542(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    void Completed_391B38BD4C1E1F03CCE57ABD450C1999(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    void Completed_649120584A40FB0A59D285B4C7B6E9BE(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    void Completed_7986B0F44EB38736A13DBC9BF4745FFF(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    void ResetLeft();
    void UnlockAchievement(FName AchievementName);
    void IncrementAchievementCounter(FName StatName);
    void ReceiveBeginPlay();
    void IncrementBlocksPlaced(int32 IncrementAmount);
    void IncrementBlocksDestroyedBP(int32 Num);
    void ReceiveTick(float DeltaSeconds);
    void IncrementBlocksCrafted(int32 Num);
    void RegularWriteToStats();
    void InitLeaderboard();
    void RegularUploadLeaderboardScores();
    void LoadStatsSaveGame();
    void RegularWriteToSaveGame();
    void FindLocalBest10Minutes();
    void ResetRight();
    void CheckRealisticHeight();
    void PlayDynamicControllerForceFeedback(bool Left, bool Right);
    void UpdateTotalPlaytimeStat();
    void ExecuteUbergraph_CubePlayerControllerBP(int32 EntryPoint);
};

#endif
