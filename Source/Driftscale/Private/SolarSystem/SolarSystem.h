// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SolarSystem.generated.h"

class APlanet;

UCLASS()
class ASolarSystem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASolarSystem();

protected:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Solar System")
	TObjectPtr<AActor> Sun;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Solar System")
	TArray<TObjectPtr<APlanet>> Planets;

};
