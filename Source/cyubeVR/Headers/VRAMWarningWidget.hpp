#ifndef UE4SS_SDK_VRAMWarningWidget_HPP
#define UE4SS_SDK_VRAMWarningWidget_HPP

class UVRAMWarningWidget_C : public UUserWidget
{
    class UBorder* Border_2;
    class UImage* Image;
    class UImage* Image_73;
    class UTextBlock* TextBlock_111;
    class UTextBlock* TextBlock_Processes;

    void Update(TArray<FString>& Process);
};

#endif
