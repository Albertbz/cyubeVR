#ifndef UE4SS_SDK_WebCommunication_HPP
#define UE4SS_SDK_WebCommunication_HPP

#include "WebCommunication_enums.hpp"

class UFileFunctionsWebCom : public UObject
{

    void writeStringToFile(EFileFunctionsWebComDirectoryType DirectoryType, FString Data, FString FilePath, bool& success);
    void writeBytesToFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, TArray<uint8> Bytes, bool& success);
    void setTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, FDateTime DateTime);
    bool setReadOnly(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, bool bNewReadOnlyValue);
    void readStringFromFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, bool& success, FString& Data);
    TArray<uint8> readBytesFromFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, bool& success);
    bool moveFile(EFileFunctionsWebComDirectoryType directoryTypeTo, FString filePathTo, EFileFunctionsWebComDirectoryType directoryTypeFrom, FString filePathFrom);
    bool isReadOnly(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);
    FDateTime getTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);
    void getMD5FromFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, bool& success, FString& MD5);
    FString getFilenameOnDisk(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);
    FDateTime getAccessTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);
    void fileToBase64String(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, bool& success, FString& base64String, FString& Filename);
    int64 fileSize(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);
    bool FileExists(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);
    bool directoryExists(EFileFunctionsWebComDirectoryType DirectoryType, FString Path);
    bool deleteFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);
    bool deleteDirectory(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);
    bool createDirectory(EFileFunctionsWebComDirectoryType DirectoryType, FString Path);
    void bytesToBase64String(TArray<uint8> Bytes, FString& base64String);
    TArray<uint8> base64StringToBytes(EFileFunctionsWebComDirectoryType DirectoryType, FString base64String, bool& success);
    void addBytesToFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, TArray<uint8> Bytes, bool& success);
};

struct FhttpRequest
{
};

class UWebCommunicationBPLibrary : public UBlueprintFunctionLibrary
{
    FWebCommunicationBPLibraryOnhttpRequestCompleteDelegate onhttpRequestCompleteDelegate;
    void httpRequestCompleteDelegate(const TArray<FString>& Data, const int32 statusCode, const TArray<uint8>& byteData, const FString requestID);
    FWebCommunicationBPLibraryOnhttpRequestCompleteGoogleInfoDelegate onhttpRequestCompleteGoogleInfoDelegate;
    void httpRequestCompleteGoogleInfoDelegate(const FString Filename, const int64 fileSizeInBytes, const int32 statusCode, const FString downloadID, const FString requestID);
    FWebCommunicationBPLibraryOnhttpFileProgressDelegate onhttpFileProgressDelegate;
    void httpFileProgressDelegate(const float Size, const int32 bytesSent, const float percentUpload, const int32 bytesReceived, const float percentDownload);
    FWebCommunicationBPLibraryOnhttpFileDownloadDelegate onhttpFileDownloadDelegate;
    void httpFileDownloadDelegate(const float Size, const float megaBytesReceived, const float percentDownload, const float megaBit, const FString requestID);
    FWebCommunicationBPLibraryOnhttpFileUploadDelegate onhttpFileUploadDelegate;
    void httpFileUploadDelegate(const float Size, const int32 bytesSent, const float percentUpload, const FString requestID);

    FString urlEncodePure(FString urlParameter);
    FString urlEncode(FString urlParameter);
    int32 megabyteToByte(int32 mb);
    class UWebCommunicationBPLibrary* httpRequestPOST(FString URL, const TArray<FString> POSTData, FString optionalRequestID, FString& requestID);
    class UWebCommunicationBPLibrary* httpRequestIndividual(FString URL, TMap<class FString, class FString> Header, FString verb, FString Content, FString requestID);
    class UWebCommunicationBPLibrary* httpRequestGET(FString URL, FString optionalRequestID, FString& requestID);
    void httpRequestFileUpload(FString URL, EHTTPWebComFileUpload DirectoryType, FString ID, FString FilePath, EHTTPWebComFileUploadType uploadType, FString optionalRequestID, FString& requestID);
    void httpRequestCompleteGoogleInfoDelegate__DelegateSignature(const FString Filename, const int64 fileSizeInBytes, const int32 statusCode, const FString downloadID, const FString requestID);
    void httpRequestCompleteGoogleInfoDelegate(const FString Filename, const int64 fileSizeInBytes, const int32 statusCode, const FString downloadID, const FString requestID);
    void httpRequestCompleteDelegate__DelegateSignature(const TArray<FString>& Data, const int32 statusCode, const TArray<uint8>& byteData, const FString requestID);
    void httpRequestCompleteDelegate(const TArray<FString>& Data, const int32 statusCode, const TArray<uint8>& byteData, const FString requestID);
    void httpFileUploadDelegate__DelegateSignature(const float Size, const int32 bytesSent, const float percentUpload, const FString requestID);
    void httpFileUploadDelegate(const float Size, const int32 bytesSent, const float percentUpload, const FString requestID);
    void httpFileProgressDelegate__DelegateSignature(const float Size, const int32 bytesSent, const float percentUpload, const int32 bytesReceived, const float percentDownload);
    void httpFileProgressDelegate(const float Size, const int32 bytesSent, const float percentUpload, const int32 bytesReceived, const float percentDownload);
    void httpFileDownloadDelegate__DelegateSignature(const float Size, const float megaBytesReceived, const float percentDownload, const float megaBit, const FString requestID);
    void httpFileDownloadDelegate(const float Size, const float megaBytesReceived, const float percentDownload, const float megaBit, const FString requestID);
    class UWebCommunicationBPLibrary* getWebCommunicationTarget();
    class UWebCommunicationBPLibrary* getTarget();
    void executeHttpRequests(TArray<FhttpRequest> httpRequests, class UWebCommunicationBPLibrary*& WebCommunicationTarget);
    TArray<FString> createPOSTData(FString ID, FString Value);
    void CreateHttpRequestPOST(TArray<FhttpRequest> otherHttpRequests, FString URL, TMap<class FString, class FString> POSTData, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    void CreateHttpRequestIndividual(TArray<FhttpRequest> otherHttpRequests, FString URL, TMap<class FString, class FString> Header, FString verb, FString Content, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID, bool addContentLengthHeader);
    void CreateHttpRequestGoogleDriveFileInfo(TArray<FhttpRequest> otherHttpRequests, FString downloadID, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    void CreateHttpRequestGoogleDrive(TArray<FhttpRequest> otherHttpRequests, FString downloadID, FString optionalRequestID, int64 optionalFileSizeInByte, TArray<FhttpRequest>& httpRequests, FString& requestID);
    void CreateHttpRequestGETLowRamDownload(TArray<FhttpRequest>& httpRequests, FString& requestID, TArray<FhttpRequest> otherHttpRequests, FString URL, EHTTPWebComFileDownloadResumeType ActionIfFileExists, EHTTPWebComFileUpload DirectoryType, FString filePathWithFileName, int32 FileSizeStepsInBytes, FString optionalRequestID);
    void CreateHttpRequestGETDownload(TArray<FhttpRequest>& httpRequests, FString& requestID, TArray<FhttpRequest> otherHttpRequests, FString URL, EHTTPWebComFileDownloadResumeType ActionIfFileExists, EHTTPWebComFileUpload DirectoryType, FString filePathWithFileName, FString optionalRequestID);
    void CreateHttpRequestGET(TArray<FhttpRequest> otherHttpRequests, FString URL, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    void CreateHttpRequestFileUploadPUT(TArray<FhttpRequest> otherHttpRequests, FString URL, EHTTPWebComFileUpload DirectoryType, FString FilePath, FString fileID, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    void CreateHttpRequestFileUploadPOST(TArray<FhttpRequest> otherHttpRequests, FString URL, EHTTPWebComFileUpload DirectoryType, FString FilePath, FString fileID, TMap<class FString, class FString> POSTData, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    void CreateHttpRequestAnonfiles(TArray<FhttpRequest> otherHttpRequests, FString URL, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID);
    TArray<FString> createAndAppendPOSTData(FString ID, FString Value, TArray<FString> POSTData);
    void cancelRequest(FString requestID);
    float byteToMegabyte(int32 byte);
    void byteDataToFile(EHTTPWebComFileBytesToFileActionType fileAction, TArray<uint8> byteData, EHTTPWebComFileUpload DirectoryType, FString FilePath);
    void addHTTPRequestHeader(FString ID, FString Value, bool removeAfterHTTPRequest);
};

class UWebCommunicationRequestCompleteObject : public UObject
{
};

#endif
