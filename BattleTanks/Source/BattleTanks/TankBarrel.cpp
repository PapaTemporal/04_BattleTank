// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTanks.h"
#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{

	UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() called at speed %s"), DegreesPerSecond);

	// Move the barrel the right amount this frame
	// Given a max elevation speed and the frame time

}


