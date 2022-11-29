#ifndef UE4SS_SDK_WorldSlotSaveGame_HPP
#define UE4SS_SDK_WorldSlotSaveGame_HPP

class UWorldSlotSaveGame_C : public USaveGame
{
    FString LastUsed;
    bool TutorialFinished;
    bool GreetingsSeen;
    bool MainMenuMusicButton;
    bool CustomBlockAskSeen;
    bool MainMenuDarkModeButton;
    bool SavedAfterUpdate52;

    void RemoveSlot(FString Slot);
    void FirstInit();
};

#endif
