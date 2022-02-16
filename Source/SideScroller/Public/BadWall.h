// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "BadWall.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API ABadWall : public AEnemy
{
	GENERATED_BODY()

protected:

virtual void BeginPlay() override;

	
virtual void Tick(float DeltaTime) override;


public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Casual")
	FVector StaticMeshLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Casual")
	FVector StaticMesh2Location;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Casual")
	FVector AddLocation;
	

	void MoveStaticMesh(FVector StaticMeshLoc);
};
