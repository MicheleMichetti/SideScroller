// Fill out your copyright notice in the Description page of Project Settings.


#include "BadWall.h"
#include "..\Public\BadWall.h"
#include <thread>

void ABadWall::Tick(float DeltaTime)
{
	
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *(ActorLocation.ToString()));
	
	StaticMeshLocation = this->StaticMesh->GetRelativeLocation();
	StaticMesh2Location = this->StaticMesh->GetRelativeLocation();

	this->StaticMesh->AddRelativeLocation(AddLocation);

	//std::thread worker1 (MoveStaticMesh(StaticMeshLocation));
	
}

void ABadWall::MoveStaticMesh(FVector StaticMeshLoc)
{
	if (StaticMeshLocation.Z <= 0.f) {
		AddLocation = AddLocation.GetAbs();
	}
	else if (StaticMeshLocation.Z >= 300.f) {
		AddLocation = FVector(0, 0, -1.f);
	}

}

void ABadWall::BeginPlay()
{
	Super::BeginPlay();
	AddLocation = FVector(0, 0, 1.f);
	

}