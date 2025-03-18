// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BatteryCollectorGameMode.generated.h"

UCLASS(minimalapi)
class ABatteryCollectorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABatteryCollectorGameMode();

	virtual void Tick(float DeltaTime) override;

protected:
	// The rate at which the character looses power
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", meta = (Blueprintprotected = true))
	float DecayRate;
};



