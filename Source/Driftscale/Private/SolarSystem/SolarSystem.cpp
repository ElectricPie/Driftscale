// Fill out your copyright notice in the Description page of Project Settings.


#include "SolarSystem/SolarSystem.h"

#include "Planet.h"

// Sets default values
ASolarSystem::ASolarSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void ASolarSystem::BeginPlay()
{
	Super::BeginPlay();

	if (Sun == nullptr)
		return;
	
	for (const auto& Planet : Planets)
	{
		if (Planet)
		{
			Planet->SetActorToOrbit(Sun.Get());
		}
	}
}
