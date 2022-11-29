#ifndef UE4SS_SDK_AudioManagerBP_HPP
#define UE4SS_SDK_AudioManagerBP_HPP

class AAudioManagerBP_C : public AAudioManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class USoundBase* MusicTracks;
    class UAudioComponent* CurrentPlayingMusic;

    void PlayNewMusic();
    void StartMusic();
    void ExecuteUbergraph_AudioManagerBP(int32 EntryPoint);
};

#endif
