#ifndef UE4SS_SDK_ChunkManagerBP_HPP
#define UE4SS_SDK_ChunkManagerBP_HPP

class AChunkManagerBP_C : public AChunkManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    float BiomeTransitionTimeline_NewTrack_0_225DF62E40B9F962D883E1864F070B0F;
    TEnumAsByte<ETimelineDirection::Type> BiomeTransitionTimeline__Direction_225DF62E40B9F962D883E1864F070B0F;
    class UTimelineComponent* BiomeTransitionTimeline;
    class AInventoryBP_C* InventoryBP;
    TMap<class FString, class FString> GraphicSettings;
    TMap<class FString, class FString> GraphicSettingsHighPreset;
    class AUltra_Dynamic_Sky_BP_Child2_C* SkyRef;
    class ADirectionalLight* LightRef;
    class ACloudManager_C* CloudManager;
    class AMusicManager_C* MusicManager;
    class APostProcessManager_C* PostProcessManager;
    class USGGraphicsSettings_C* GraphicsSGObject;
    TMap<class FString, class FString> GraphicsSettingsDefault;
    TMap<class FString, class FString> GraphicsSettingsToUse;
    TMap<class EBlockTypeBP, class UParticleSystem*> TorchParticleReguar;
    TMap<class EBlockTypeBP, class UParticleSystem*> TorchParticleAdd;
    TMap<class EBlockTypeBP, class UParticleSystem*> TorchParticleLOD;
    float ResolutionOffset;
    float MusicVolume;
    EBiome BiomeTransitionFrom;
    EBiome BiomeTransitionTo;
    float BiomeCurrentTransitionValue;
    bool AstronautDeer;
    float AA_Strength;
    class AWeatherManagerBP_C* WeatherManagerBP;
    float Saturation;
    float DayLength;
    float NightLength;
    float ScreenshotMultiplier;
    float HandSize;
    float SmoothTurnSpeed;
    float SmoothLocoSpeed;
    bool DistanceFieldShadowsEnabled;
    bool ViewDistanceOver50;
    bool ToolHitItemSmoke;
    float Sharpness;
    float BucketAnglePitch;
    float BucketAngleRoll;

    bool MovePlayerToStartLocation(FVector Location);
    void GetNewBlockItemBP(EBlockTypeBP BlockType, int32 UniqueId, const FTransform& NewTransform, int32 Amount, bool DoFadeScale, FColor CrystalColor, float ChargeState, bool ActivatePhysics, class ABlockItemVR_C*& BlockItem);
    void StartBiomeTransition(EBiome From, EBiome To);
    void ResetGraphicsSettingsAfterScreenshot();
    void SetupGraphicsSettingsForScreenshot();
    void ApplyGraphicsSliders();
    class ADraftUnlockingPaper* SpawnDraftUnlocker(FVector Location, EBlockTypeBP Type);
    void LoadGraphicsFromDisk();
    void SaveGraphicsToDisk();
    void ApplyGraphicsSettingInWorld(FString Name, FString Option);
    void ApplyGraphicSettingsOnWidgets(class USettingsUI_New_C* SettingsWidget, bool UpdateExpert);
    void InitGraphicSettings();
    void SetGraphicsSetting(FString Name, FString Option, class USettingsUI_New_C* SettingsWidget);
    void BiomeTransitionTimeline__FinishedFunc();
    void BiomeTransitionTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void UpdateSkyEvent(float NewTimeOfDay);
    void RunBiomeTransition();
    void SetDevRecordingMode();
    void CheckTimeChange();
    void InitChargeColor();
    void HaveUnlockedAllRecipes();
    void SpawnHintText(const FVector& LocalLocation, FString Text, const float& Duration, const FVector& SizeMultiplier, const float& SizeMultiplierVertical, const float& FontSizeMultiplier, const FUID& UID);
    void SpawnNewBlockItem(EBlockTypeBP Type, int32 UniqueId, FTransform Transform, int32 Amount, bool bDoFadeScale, FColor CrystalColor, float CrystalChargeState, bool bActivatePhysics);
    void SpawnBPModActor(const FTransform& Transform, FString ModName, FString ActorName);
    void MakeDistanceFieldShadowSettingInvisible();
    void ExecuteUbergraph_ChunkManagerBP(int32 EntryPoint);
};

#endif
