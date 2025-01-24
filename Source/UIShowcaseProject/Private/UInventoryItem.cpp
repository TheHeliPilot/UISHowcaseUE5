// Fill out your copyright notice in the Description page of Project Settings.


#include "UInventoryItem.h"

UInventoryItem::UInventoryItem(): ItemIcon(nullptr)
{
	const int Index = FMath::RandRange(0, AvailableNames.Num() - 1);
	ItemName = AvailableNames[Index];
	ItemDescription = AvailableDescriptions[Index];
}

UInventoryItem::~UInventoryItem()
{
}

void UInventoryItem::UseItem() const
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Purple, FString::Printf(TEXT("Item used: %s"), *ItemName));
}
