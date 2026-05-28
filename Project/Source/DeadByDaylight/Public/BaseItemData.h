#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EInventoryItemType.h"
#include "ItemUIData.h"
#include "BaseItemData.generated.h"

class UDBDPrimaryDataAsset;
class AActor;

USTRUCT(BlueprintType)
struct FBaseItemData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInventoryItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemUIData UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText GenericDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> ItemBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UDBDPrimaryDataAsset> AssetData;
    
    DEADBYDAYLIGHT_API FBaseItemData();
};

