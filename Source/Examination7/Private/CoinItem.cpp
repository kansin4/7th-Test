#include "CoinItem.h"

ACoinItem::ACoinItem()
{
	PointValue = 0;
	ItemType = "DefaultCoin";
}

void ACoinItem::ActivateItem(AActor* Activator)
{
	if(Activator && Activator->ActorHasTag("Player"))
	{
		DestroyItem();
	}
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Coin Collected"));
}
