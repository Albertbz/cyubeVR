#ifndef UE4SS_SDK_CustomBlockPreviewWidgetRenderPreview_HPP
#define UE4SS_SDK_CustomBlockPreviewWidgetRenderPreview_HPP

class UCustomBlockPreviewWidgetRenderPreview_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_AnimatedLayer;
    class UImage* Left;
    class UImage* Right;
    class UImage* Top;

    void SetType(int32 ID);
    void Construct();
    void ExecuteUbergraph_CustomBlockPreviewWidgetRenderPreview(int32 EntryPoint);
};

#endif
