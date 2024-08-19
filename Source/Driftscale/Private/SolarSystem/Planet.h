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

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category="Orbit")
	float OrbitRadius = 100.0f;
	UPROPERTY(EditAnywhere, Category="Orbit", meta=(ToolTip="Time in seconds to complete one orbit around the orbit actor"))
	float OrbitTime = 40.0f;
	
	TWeakObjectPtr<AActor> ActorToOrbit;
	float OrbitAngle = 0.0f;
	float OrbitSpeed = 0.0f;
};
