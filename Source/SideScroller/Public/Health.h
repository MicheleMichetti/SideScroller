// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickUpItem.h"
#include "Health.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API AHealth : public APickUpItem
{
	GENERATED_BODY()

		
public:		
void FunZione() override;
	
void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
};



