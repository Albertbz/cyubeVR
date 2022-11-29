#ifndef UE4SS_SDK_SGGraphicsSettings_HPP
#define UE4SS_SDK_SGGraphicsSettings_HPP

class USGGraphicsSettings_C : public USaveGame
{
    TMap<class FString, class FString> Settings;
    int32 Version;
    float ResolutionSlider;
    float MusicVolume;
    float AA_Strength;
    float Saturation;
    float DayLength;
    float NightLength;
    float ScreenshotRes;
    float HandSize;
    float SmoothTurnSpeed;
    float SmoothLocoSpeed;
    float Sharpness;
    float BucketAnglePitch;
    float BucketAngleRoll;

    void SetEverything(TMap<class FString, class FString> Settings, float ResolutionSlider, float MusicVolume, float AA_Strength, float Saturation, float DayLength, float NightLength, float HandSize, float SmoothTurnSpeed, float SmoothLocoSpeed, float Shaprness, float BucketAnglePitch, float BucketAngleRoll);
};

#endif
