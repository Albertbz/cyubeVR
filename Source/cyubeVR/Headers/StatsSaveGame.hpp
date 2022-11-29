#ifndef UE4SS_SDK_StatsSaveGame_HPP
#define UE4SS_SDK_StatsSaveGame_HPP

class UStatsSaveGame_C : public USaveGame
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 BlocksPlaced;
    int32 BlocksMined;
    int32 BlocksCrafted;
    int32 BlocksMined10Min;
    int64 Validity;
    int32 PlayerId;

    void CalculateValidity(int64& Validity);
    void SetData(int32 BlocksPlaced, int32 BlocksMined, int32 BlocksCrafted, int32 BlocksMined10Min, class APlayerState* PlayerState);
    void CheckValidity(class APlayerState* PlayerState);
    void ExecuteUbergraph_StatsSaveGame(int32 EntryPoint);
};

#endif
