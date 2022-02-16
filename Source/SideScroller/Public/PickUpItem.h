// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"


#include "ST_Items.h"
#include "PickUpItem.generated.h"

UCLASS()
class SIDESCROLLER_API APickUpItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUpItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	FSTItems Values;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mesh")
	USceneComponent* SceneRoot;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Mesh")
	UStaticMeshComponent* StaticMesh2;

	UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
	class UCapsuleComponent* TriggerCapsule;
	
	UFUNCTION()
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	virtual void FunZione();

//	UPROPERTY()
//	//SideScrollerCharacter* MyCharacter = AshooterController * SHC = Cast <SideSCrollerCharacter>()
//
//	UPROPERTY()
//	//AActor* Xaaa = Cast<AActor*>(Xaaa->UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
//
//	UPROPERTY()
//	//AActor* Char = UGameplayStatics::GetPlayerCharacter(GetWorld(),0);
//
	
	
	

};


