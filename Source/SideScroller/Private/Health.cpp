// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"

void AHealth::FunZione() {

}

void AHealth::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	StaticMesh2->SetHiddenInGame(true);
}
