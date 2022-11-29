#ifndef UE4SS_SDK_LeaderboardEntry_HPP
#define UE4SS_SDK_LeaderboardEntry_HPP

class ULeaderboardEntry_C : public ULeaderboardEntryCPP
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInvalidationBox* InvalidationBox_0;
    FString GPU;
    FString CPU;
    FString User;
    FString score;
    FString Rank;

    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_LeaderboardEntry(int32 EntryPoint);
};

#endif
