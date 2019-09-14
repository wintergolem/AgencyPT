// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseGun.generated.h"

USTRUCT(BlueprintType)
struct FAmmoBagStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int32 AmmoClipSize = 0;
	UPROPERTY(BlueprintReadWrite)
	int32 AmmoClipCurrent = 0;
	UPROPERTY(BlueprintReadWrite)
	int32 AmmoTotalCarried = 0;
	UPROPERTY(BlueprintReadWrite)
	int32 AmmoTotalCanCarry = 0;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AGENCYPROTO_API UBaseGun : public UActorComponent
{
	GENERATED_BODY()
public:
	UBaseGun();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadWrite)
	FString GunName;
	//link to asset?
	UPROPERTY(BlueprintReadWrite)
	float bulletsPerSecond = 0.f;

	UPROPERTY(BlueprintReadWrite)
	float bulletsPerTriggerPull = 0.f; //0 = no limit

	UPROPERTY(BlueprintReadWrite)
	float reloadTimeInSeconds = 0.f;
	
	UPROPERTY(BlueprintReadWrite)
	FAmmoBagStruct AmmoBag;

};
