// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "St_Items.h"
#include "CoreMinimal.h"

/**
 * 
 */
class SIDESCROLLER_API GenericFunction
{
public:
	GenericFunction();
	~GenericFunction();

public:
	UFUNCTION (BlueprintCallable)
		TArray<FSTItems> SortItems(TArray<FSTItems> Items);
	
	
};
