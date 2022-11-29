#ifndef UE4SS_SDK_HUD_HPP
#define UE4SS_SDK_HUD_HPP

class UHUD_C : public UUserWidget
{
    class UTextBlock* txtDilation;
    class UTextBlock* txtHome;
    class UTextBlock* txtKeybinds;
    class UTextBlock* txtLevel;
    class UTextBlock* txtLocation;
    class UTextBlock* txtMovementSpeed;
    class UTextBlock* txtRotation;
    class UTextBlock* txtRotationSpeed;
    class UTextBlock* txtTime;
    class UVerticalBox* vBoxCoords;

};

#endif
