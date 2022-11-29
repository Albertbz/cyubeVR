#ifndef UE4SS_SDK_LoadingScreen_HPP
#define UE4SS_SDK_LoadingScreen_HPP

struct FLoadingScreenDescription
{
    float MinimumLoadingScreenDisplayTime;
    bool bAutoCompleteWhenLoadingCompletes;
    bool bMoviesAreSkippable;
    bool bWaitForManualStop;
    TEnumAsByte<EMoviePlaybackType> PlaybackType;
    bool bShowUIOverlay;
    FText LoadingText;
    FSlateFontInfo LoadingFont;
    TArray<FString> MoviePaths;
    TArray<FSoftObjectPath> Images;
    TEnumAsByte<EStretch::Type> ImageStretch;

};

class ULoadingScreenSettings : public UDeveloperSettings
{
    FLoadingScreenDescription StartupScreen;
    FLoadingScreenDescription DefaultScreen;
    FSlateFontInfo TipFont;
    float TipWrapAt;
    TArray<FText> Tips;

};

#endif
