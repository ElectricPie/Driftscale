// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Planet.generated.h"

UCLASS()
class APlanet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlanet();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void SetActorToOrbit(AActor* Center) { ActorToOrbit = Center; }

private:
	UPROPERTY(EditAnywhere, Category="Orbit")
	float OrbitRadius = 100.0f;
	UPROPERTY(EditAnywhere, Category="Orbit")
	float OrbitSpeed = 1.0f;
	
	TWeakObjectPtr<AActor> ActorToOrbit;
	float OrbitAngle = 0.0f;
};
