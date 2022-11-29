#ifndef UE4SS_SDK_PakLoader_HPP
#define UE4SS_SDK_PakLoader_HPP

class UAsyncPakDownloader : public UBlueprintAsyncActionBase
{
    FAsyncPakDownloaderOnSuccess OnSuccess;
    void DownloadPakDelegate(int32 HttpResponseCode, int32 ContentLength, const FString SavePath, int32 bytesReceived);
    FAsyncPakDownloaderOnFail OnFail;
    void DownloadPakDelegate(int32 HttpResponseCode, int32 ContentLength, const FString SavePath, int32 bytesReceived);
    FAsyncPakDownloaderOnProgress OnProgress;
    void DownloadPakDelegate(int32 HttpResponseCode, int32 ContentLength, const FString SavePath, int32 bytesReceived);

    class UAsyncPakDownloader* DownloadPak(FString URL, FString SavePath);
};

class UPakLoaderLibrary : public UBlueprintFunctionLibrary
{

    void UnRegisterMountPoint(FString RootPath, FString ContentPath);
    bool UnmountPakFile(FString PakFilename);
    bool TryConvertFilenameToLongPackageName(FString Filename, FString& PackageName);
    FString SHA1SUM(FString Filename);
    void RuntimeLog(FString Text);
    void RegisterMountPoint(FString RootPath, FString ContentPath);
    bool RegisterEncryptionKey(FString Guid, FString AesKey);
    FString ProjectPersistentDownloadDir();
    bool MountPakFileEasy(FString PakFilename);
    bool MountPakFile(FString PakFilename, FString MountPath);
    void LoadPakAssetRegistryFile(FString AssetRegistryFile);
    bool IsValidPakFile(FString PakFilename, int64& PakSize);
    bool IsPackagedBuild();
    FString GetShortName(FString LongName);
    FString GetProjectName();
    class UTexture2D* GetPakFileTexture2D(FString Filename);
    bool GetPakFileText(FString Filename, FString& String);
    class UStaticMesh* GetPakFileStaticMesh(FString Filename);
    class USoundBase* GetPakFileSound(FString Filename);
    class USkeletalMesh* GetPakFileSkeletalMesh(FString Filename);
    class UObject* GetPakFileObject(FString Filename);
    class UMaterialInstanceConstant* GetPakFileMaterialInstanceConstant(FString Filename);
    class UMaterial* GetPakFileMaterial(FString Filename);
    UClass* GetPakFileClass(FString Filename);
    class UAnimSequence* GetPakFileAnimSequence(FString Filename);
    TArray<FString> GetMountedPakFilenames();
    TArray<FString> GetFilesInPakDirectory(FString PakDirectory, bool bRecursively);
    TArray<FString> GetFilesInPak(FString PakFilename, bool bUAssetOnly);
    void EnableRuntimeLog(bool bEnable, FString NewLogPath);
    bool DoesPakDirectoryExist(FString PakDirectory);
};

#endif
