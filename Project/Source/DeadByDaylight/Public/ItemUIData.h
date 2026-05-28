#pragma once
#include "CoreMinimal.h"
#include "CustomTransformation.h"
#include "ItemUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FItemUIData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Description;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> IconFilePathList;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<TSoftObjectPtr<UTexture2D>> IconAssetList;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCustomTransformation CustomTransformation;
    
    UPROPERTY(EditAnywhere)
    uint32 PlatformsUnlicensedNameOverride;
    
    UPROPERTY(EditAnywhere)
    uint32 PlatformsUnlicensedDescriptionOverride;
    
    UPROPERTY(EditAnywhere)
    uint32 PlatformsForIconUnlicensedFilePathListOverride;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> IconUnlicensedFilePathListOverride;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool LicenseExpirationOverride;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText DisplayNameUnlicensedOverride;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText DescriptionUnlicensedOverride;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 AssociatedCharacterIndex;
    
public:
    FItemUIData();
};

