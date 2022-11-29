#ifndef UE4SS_SDK_Freecam_SaveData_HPP
#define UE4SS_SDK_Freecam_SaveData_HPP

class UFreecam_SaveData_C : public USaveGame
{
    TMap<class FString, class FIntVector> WorldHome;
    bool IsKeybindsOpen;
    bool IsCoordsOpen;

};

#endif
