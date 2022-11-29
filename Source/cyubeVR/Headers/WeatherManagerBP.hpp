#ifndef UE4SS_SDK_WeatherManagerBP_HPP
#define UE4SS_SDK_WeatherManagerBP_HPP

class AWeatherManagerBP_C : public AWeatherManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class AUltra_Dynamic_Sky_BP_C* Sky;
    class AChunkManager* ChunkManager;
    class ABP_AttachedRain_C* SpawnedWeatherBP;
    class AWindDirectionalSource* WindSource;
    float SnowAmount;
    float SnowAmountTarget;
    float RainAmount;
    float RainAmountTarget;
    float NotStartNextTill;
    EWeather WaitingForWeather;
    EWeatherForceSetting RainForceState;
    EWeatherForceSetting SnowForceState;
    FTimerHandle NewWeatherTimerHandle;
    EWeather WeatherToSave;
    float TimeWhenSpawnParticles;
    bool LoadedSomething;
    bool Dev_ONLYREGULAR;
    bool Benchmark;

    void GetWeatherState(FWeatherStateData& WeatherStateData);
    void LoadWeatherStateBP(float Cloud Density_target, float OverallIntensityTarget, float SaturationTarget, float LightTemperatureTarget, float SunLightWeatherMultiplierTarget, float WindStrengthTarget, float RainStrengthTarget, FLinearColor FogWeatherColorTarget, float Cloud Density, float Overall Intensity, float LightTemperature, FLinearColor FogWeatherColor, float RainStrength, float SunLightWeatherMultiplier, float WindStrength, float DelayTillParticles, float SnowAmount, float SnowAmountTarget, float RainAmount, float RainAmountTarget, EWeather Weather, float WindSpeed, float WindSpeedTarget, float TimeTillNewWeather);
    void SetForceState(EWeather Weather, EWeatherForceSetting NewForceState);
    void ForceNewWeather(EWeather NewWeather);
    void NewRandomWeather(bool Force);
    void StartSnow();
    void FadeSnowAmount();
    void StartRain();
    void FadeRainAmount();
    void ReceiveTick(float DeltaSeconds);
    void SetNewWeather(EWeather NewWeather, bool Force);
    void StartRegular();
    void SpawnedNewWeather(class ABP_AttachedRain_C* SpawnedWeatherBP);
    void ReceiveBeginPlay();
    void StartNewWeather(EWeather Weather, bool Force);
    void NewRandomWeatherEvent();
    void StartWeatherParticlesDelay(EWeather Weather, float Delay);
    void LoadWeatherState(FWeatherStateData WeatherStateData);
    void StartTimerForNewWeather();
    void ExecuteUbergraph_WeatherManagerBP(int32 EntryPoint);
};

#endif
