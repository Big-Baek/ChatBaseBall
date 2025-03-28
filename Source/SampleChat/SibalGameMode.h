#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SibalGameMode.generated.h"


USTRUCT(BlueprintType)
struct FStrikeBallResult
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 Strike;

    UPROPERTY(BlueprintReadOnly)
    int32 Ball;

    UPROPERTY(BlueprintReadOnly)
    FString Master_Num;
};


UCLASS()
class SAMPLECHAT_API ASibalGameMode : public AGameMode
{
	GENERATED_BODY()
public:


	UFUNCTION(BlueprintCallable)
    FStrikeBallResult HandleMessageFromClient
    (const FString& Message, const FString& Master_Num); // 메시지 처리 함수
    UFUNCTION(BlueprintCallable)
    FString make_Rand();
private:


};
