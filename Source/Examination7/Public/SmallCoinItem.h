
#pragma once

#include "CoreMinimal.h"
#include "CoinItem.h"
#include "SmallCoinItem.generated.h"

UCLASS()
class EXAMINATION7_API ASmallCoinItem : public ACoinItem
{
	GENERATED_BODY()
	
public:
	ASmallCoinItem();

	virtual void ActivateItem(AActor* Activator) override;
};
