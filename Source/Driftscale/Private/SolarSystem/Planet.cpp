// Fill out your copyright notice in the Description page of Project Settings.


#include "SolarSystem/Planet.h"

// Sets default values
APlanet::APlanet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called every frame
void APlanet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ActorToOrbit.IsValid())
	{
		OrbitAngle += DeltaTime * OrbitSpeed;
		
		const FVector OrbitCenter = ActorToOrbit->GetActorLocation();

		FVector NewLocation;
		NewLocation.X = OrbitCenter.X + FMath::Cos(OrbitAngle) * OrbitRadius;
		NewLocation.Y = OrbitCenter.Y + FMath::Sin(OrbitAngle) * OrbitRadius;
		NewLocation.Z = OrbitCenter.Z;
		
		SetActorLocation(NewLocation);
	}

}

void APlanet::BeginPlay()
{
	Super::BeginPlay();

	OrbitSpeed = 2.0f * PI / OrbitTime;	
}

