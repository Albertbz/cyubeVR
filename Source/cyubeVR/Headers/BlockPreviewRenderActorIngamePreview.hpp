#ifndef UE4SS_SDK_BlockPreviewRenderActorIngamePreview_HPP
#define UE4SS_SDK_BlockPreviewRenderActorIngamePreview_HPP

class ABlockPreviewRenderActorIngamePreview_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;

    void BlockPreviewRenderActorIngamePreview_AutoGenFunc(bool bSuccess);
    void DoStuff(class UTextureRenderTarget2D* TextureRenderTarget);
    void WriteToDisk();
    void Test();
    void SetBlockType(int32 ID);
    void ExecuteUbergraph_BlockPreviewRenderActorIngamePreview(int32 EntryPoint);
};

#endif
