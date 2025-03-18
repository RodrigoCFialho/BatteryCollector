// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "BatteryCollectorCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class USphereComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ABatteryCollectorCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	/** Collection sphere */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Pickups, meta = (AllowPrivateAccess = "true"))
	USphereComponent* CollectionSphere;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	/** Collect Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* CollectAction;



protected:
	// The starting power level of our character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
	float InitialPower;

	// Multiplier for character speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
	float SpeedFactor;

	// Speed when power level = 0
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
	float BaseSpeed;



private:
	// Current power level of our character
	UPROPERTY(VisibleAnywhere, Category = "Power")
	float CharacterPower;

public:
	ABatteryCollectorCharacter();

	// Accessor function for initial power
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetInitialPower();

	// Accessor function for current power
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetCurrentPower();

	/**
	 * Function to update the character's power
	 * @param PowerChange This is the amount to change the power by, and it can be positive or negative.
	 */
	UFUNCTION(BlueprintCallable, Category = "Power")
	void UpdatePower(float PowerChange);

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	// Called when we press a key to collect any pickups inside the CollectionSphere
	UFUNCTION(BlueprintCallable, Category = "Pikcups")
	void CollectPickups();

	UFUNCTION(BlueprintImplementableEvent, Category = "Power")
	void PowerChangeEffect();
			

protected:

	virtual void NotifyControllerChanged() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	/** Returns CollectionSphere subobject **/
	FORCEINLINE class USphereComponent* GetCollectionSphere() const { return CollectionSphere; }
};

