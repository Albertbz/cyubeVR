enum class EHTTPWebComFileUpload {
    E_gd = 0,
    E_ad = 1,
    E_MAX = 2,
};

enum class EHTTPWebComFileBytesToFileActionType {
    E_OVERWRITE = 0,
    E_NOT_OVERWRITE = 1,
    E_MAX = 2,
};

enum class EHTTPWebComFileDownloadResumeType {
    E_OVERWRITE = 0,
    E_NOT_OVERWRITE = 1,
    E_RESUME = 2,
    E_MAX = 3,
};

enum class EHTTPWebComFileUploadType {
    E_fut_put = 0,
    E_fut_post = 1,
    E_fut_MAX = 2,
};

enum class EFileFunctionsWebComDirectoryType {
    E_gd = 0,
    E_ad = 1,
    E_MAX = 2,
};

enum class EHTTPWebComRequestType {
    GET = 0,
    GETLowRamDownload = 1,
    PUT = 2,
    POST = 3,
    POST_UPLOAD = 4,
    INDIVIDUAL = 5,
    EHTTPWebComRequestType_MAX = 6,
};

