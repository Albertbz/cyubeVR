#ifndef UE4SS_SDK_MusicManager_HPP
#define UE4SS_SDK_MusicManager_HPP

class AMusicManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UAudioComponent* CurrentPlayingTrack;
    TArray<class USoundBase*> AvailableTracksRegular;
    TArray<class USoundBase*> AvailableTracksDesert;
    class USoundBase* DefaultTrack;
    EBiome CurrentlyPlayingBiome;
    bool CurrentlyFadingBiome;
    bool Paused;

    void GetRandomTrack(class USoundBase*& Track);
    void StartNewTrack(class USoundBase* Sound);
    void NextTrack();
    void StartMusic(EBiome CurrentlyPlayingBiome);
    void StartDifferentBiome(EBiome NewBiome);
    void ReceiveBeginPlay();
    void SetMusicPaused(bool Paused);
    void ExecuteUbergraph_MusicManager(int32 EntryPoint);
};

#endif
