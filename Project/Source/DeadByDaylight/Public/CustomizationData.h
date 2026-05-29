#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EPlayerRole.h"
#include "ItemAvailability.h"
#include "EItemRarity.h"
#include "ItemUIData.h"
#include "CustomizationData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AssociatedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerRole AssociatedRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemUIData UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemAvailability Availability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InclusionVersion;
    
    DEADBYDAYLIGHT_API FCustomizationData();
};

