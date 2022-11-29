#ifndef UE4SS_SDK_BlockPreviewRenderActor_HPP
#define UE4SS_SDK_BlockPreviewRenderActor_HPP

class ABlockPreviewRenderActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;

    void WriteToDisk();
    void OnSaveComplete(bool NewParam);
    void SetBlockType(int32 ID);
    void Test();
    void ExecuteUbergraph_BlockPreviewRenderActor(int32 EntryPoint);
};

#endif
