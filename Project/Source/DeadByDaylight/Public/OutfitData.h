#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ItemUIData.h"
#include "ItemAvailability.h"
#include "OutfitData.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FOutfitData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ID;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemUIData UIData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemAvailability Availability;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FName> OutfitItems;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText CollectionName;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText CollectionDescription;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString InclusionVersion;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsAvailableInAtlantaBuild;
    
    FOutfitData();
};

