#ifndef UE4SS_SDK_CustomBlockPreviewWidgetRenderPreviewIngame_HPP
#define UE4SS_SDK_CustomBlockPreviewWidgetRenderPreviewIngame_HPP

class UCustomBlockPreviewWidgetRenderPreviewIngame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_AnimatedLayer;
    class UImage* Left;
    class UImage* Right;
    class UImage* Top;

    void SetType(int32 ID);
    void Construct();
    void ExecuteUbergraph_CustomBlockPreviewWidgetRenderPreviewIngame(int32 EntryPoint);
};

#endif
