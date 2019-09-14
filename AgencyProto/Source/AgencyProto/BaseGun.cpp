// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGun.h"

// Sets default values for this component's properties
UBaseGun::UBaseGun()
{
    //AmmoBag = new AmmoBag();
    AmmoBag.AmmoClipCurrent = 10;
    AmmoBag.AmmoClipSize = 10;
    AmmoBag.AmmoTotalCanCarry = 200;
    AmmoBag.AmmoTotalCarried = 200;

    bulletsPerSecond = 10;
    bulletsPerTriggerPull = 0; //no limit

    GunName = "NOCL 96";
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBaseGun::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBaseGun::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
