// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"
//#include "Engine/UserDefinedStruct.h"

#include "Engine/Datatable.h"

#include "ST_Items.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FSTItems : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 Value;

};
/*

UCLASS()
class SIDESCROLLER_API UST_Items : public UUserDefinedStruct
{
	GENERATED_BODY()

	
};
*/


