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
	UE_LOG(LogTemp, Display, TEXT("Used %s"), *ItemName);
}
