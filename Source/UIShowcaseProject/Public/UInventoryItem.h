// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture2D.h"
#include "UInventoryItem.generated.h"

/**
 * Class for Inventory Item
 */
 
 UCLASS(Blueprintable)
class UISHOWCASEPROJECT_API UInventoryItem : public UObject
{
	GENERATED_BODY()

 public:

 	TArray<FString> AvailableNames = {"Sword", "Shield", "Armor", "Clothing"};
 	TArray<FString> AvailableDescriptions = {"Sword... It cuts!", "Shield protects", "Armor... well... it protects as well", "Clothing does nothing."};
 	
 	UInventoryItem();
	virtual ~UInventoryItem() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
 	FString ItemName;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ItemIcon;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
 	FString ItemDescription;

 	UFUNCTION(BlueprintCallable)
 	void UseItem() const;
};
