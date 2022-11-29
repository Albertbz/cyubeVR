#ifndef UE4SS_SDK_UI_FunctionLibrary_HPP
#define UE4SS_SDK_UI_FunctionLibrary_HPP

class UUI_FunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void GetCorrectTutorialCardsDependent(class UObject* __WorldContext, TArray<class UObject*>& Cards);
    void Get Texture Including Custom Blocks(EBlockTypeBP Type, const int32& UniqueId, class UObject* __WorldContext, class UTexture*& Texture);
    void GetPointerColor(class UObject* __WorldContext, FSlateColor& NewParam);
    void GetTutorialCardsNames_ViveControllers(class UObject* __WorldContext, TArray<FText>& Cards);
    void GetTutorialCardsNames_Knuckles(class UObject* __WorldContext, TArray<FText>& Cards);
    void GetCorrectTutorialCardNames(class UObject* __WorldContext, TArray<FText>& Cards);
    void GetTutorialCards_WMR(class UObject* __WorldContext, TArray<class UObject*>& Cards);
    void GetTutorialCards_Touch(class UObject* __WorldContext, TArray<class UObject*>& Cards);
    void GetTutorialCards_ViveControllers(class UObject* __WorldContext, TArray<class UObject*>& Cards);
    void GetTutorialCards_Knuckles(class UObject* __WorldContext, TArray<class UObject*>& Cards);
    void GetCorrectTutorialCardsInternal(class UObject* __WorldContext, TArray<class UObject*>& Cards);
    void GetBlockName(EBlockTypeBP Type, class UObject* __WorldContext, FText& Name);
    void PlayHoverSound(class UObject* __WorldContext);
    void GetTexture(EBlockTypeBP Type, class UObject* __WorldContext, class UTexture2D*& Texture);
};

#endif
