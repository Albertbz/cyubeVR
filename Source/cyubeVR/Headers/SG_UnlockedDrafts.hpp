#ifndef UE4SS_SDK_SG_UnlockedDrafts_HPP
#define UE4SS_SDK_SG_UnlockedDrafts_HPP

class USG_UnlockedDrafts_C : public USaveGame
{
    TSet<EBlockTypeBP> Unlocked;

    void IsUnlocked(EBlockTypeBP Item, bool& Unlocked);
    void UnlockOne(EBlockTypeBP Type);
};

#endif
