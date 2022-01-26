// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "PickUpItem.h"
#include "Engine/DataTable.h"
#include "UObject/Class.h"
#include "ST_Items.h"
#include "GenericFunction.h" //

#include "SideScrollerCharacter.generated.h"


//USTRUCT(BlueprintType)
//struct FInventoryItems
//{
//	GENERATED_BODY()
//
//		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
//		FString Name;
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
//		int32 Value;

//};




UCLASS(config=Game)
class ASideScrollerCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface


public:
	ASideScrollerCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	TArray<APickUpItem*> PickUpIventory;

	

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	class UDataTable* DTItems;


	UFUNCTION(BlueprintCallable)
	void InventorySortByName(TArray<FSTItems> InventoryValues);

	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	TArray<FSTItems> Inventory;


	// Fare una funzione per togliere vita al Personaggio

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	int32 HealthMax = 100;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	int32 HealthCurrent = 100;

	UFUNCTION(BlueprintCallable)
	void Damage(int32 Damage, UPARAM(DisplayName = "Is Dead?") bool &IsDead);


};

