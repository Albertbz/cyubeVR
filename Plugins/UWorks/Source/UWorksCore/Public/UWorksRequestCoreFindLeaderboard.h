#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "FindLeaderboardDelegateDelegate.h"
#include "FindLeaderboardMinimalDelegateDelegate.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksRequestCoreFindLeaderboard.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreFindLeaderboard : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFindLeaderboardDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFindLeaderboardMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreFindLeaderboard();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& LeaderboardName);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, bool& bLeaderboardFound);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

