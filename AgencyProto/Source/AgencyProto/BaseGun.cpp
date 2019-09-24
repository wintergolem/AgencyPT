// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGun.h"

#include "Math/UnrealMathUtility.h"
#include "DrawDebugHelpers.h"


// Sets default values for this component's properties
ABaseGun::ABaseGun()
{
    AmmoBag.AmmoClipCurrent = 10;
    AmmoBag.AmmoClipSize = 10;
    AmmoBag.AmmoTotalCanCarry = 200;
    AmmoBag.AmmoTotalCarried = 200;

    BulletsPerSecond = 10;
    BulletsPerTriggerPull = 0; //no limit

    GunName = "NOCL 96";
    
    PrimaryActorTick.bCanEverTick = true;
    
    HipFireShotVariables.Sort([](const FShotVariableWeighted& LHS, const FShotVariableWeighted& RHS){ return LHS.Angle > RHS.Angle;});
    ADSShotVariables.Sort([](const FShotVariableWeighted& LHS, const FShotVariableWeighted& RHS){ return LHS.Angle > RHS.Angle;});
    
    for( int i = 0 ; i < HipFireShotVariables.Num() ; ++i)
    {
        HipFireMaxWeight += HipFireShotVariables[i].Weight;
    }
    for( int i = 0 ; i < ADSShotVariables.Num() ; ++i)
    {
        ADSMaxWeight += ADSShotVariables[i].Weight;
    }
    
}

// Called when the game starts
void ABaseGun::BeginPlay()
{
	Super::BeginPlay();

	// ...
    if( FP_Gun && GunMesh)
    {
        FP_Gun->SetSkeletalMesh(GunMesh);
    }
	
}


// Called every frame
void ABaseGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ...
}



void ABaseGun::SetADS(bool IsADSActive)
{
    
}

void ABaseGun::TriggerPull()
{
    if( AmmoBag.AmmoClipCurrent <= 0)
    {
        return;
    }
    
    if( !Camera )
    {
        UE_LOG(LogTemp, Warning, TEXT("Camera is null"));
        return;
    }
    if( !FP_Gun )
    {
        UE_LOG(LogTemp, Warning, TEXT("FP_Gun is null"));
        return;
    }
    
    FHitResult OutHit;
    FVector Start = FP_Gun->GetComponentLocation();
    
    FVector ForwardVector = Camera->GetForwardVector();
    FVector End = ((ForwardVector * 1000.f) + Camera->GetComponentLocation());
    FCollisionQueryParams CollisionParams;
    
    DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 1 , 0 , 1);
    
    if(GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, CollisionParams))
    {
        if(OutHit.bBlockingHit)
        {
            if( ACharacter* chara = Cast<ACharacter>(OutHit.Actor))
            {
                if( AController* controller = chara->GetController())
                {
                    TSubclassOf<UDamageType> const ValidDamageTypeClass = TSubclassOf<UDamageType>(UDamageType::StaticClass());
                    FDamageEvent DamageEvent(ValidDamageTypeClass);
                    
                    controller->TakeDamage(DamagePerBullet, DamageEvent, PlayerController , Character);
                }
            }
        }
    }
}

void ABaseGun::CalcShotAngles()
{
    float RN = FMath::FRandRange(0, HipFireMaxWeight);
    
    for(int i = 0 ;  i < AmmoBag.AmmoClipSize ; ++i)
    {
        if( RN != HipFireShotVariables[i].Weight)
        {
            RN -= HipFireShotVariables[i].Weight;
        }
        else
        {
            AShotAngles.Add(FMath::RandRange(HipFireShotVariables[i-1].Angle, HipFireShotVariables[i].Angle));
        }
    }
}
