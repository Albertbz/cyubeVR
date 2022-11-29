#ifndef UE4SS_SDK_PatreonWidget_HPP
#define UE4SS_SDK_PatreonWidget_HPP

class UPatreonWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScrollBox* ScrollBox_92;
    FString PatreonNames;
    FString RemainingString;
    bool Continue;
    FString requestID;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update();
    void OnRequestComplete(const TArray<FString>& Data, const int32 statusCode, const TArray<uint8>& byteData, const FString requestID);
    void ExecuteUbergraph_PatreonWidget(int32 EntryPoint);
};

#endif
