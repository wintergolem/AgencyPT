// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGun.h"

#include "Math/UnrealMathUtility.h"
#include "DrawDebugHelpers.h"

FShotVariableWeighted::FShotVariableWeighted(){}
FShotVariableWeighted::FShotVariableWeighted( float InWeight, float InDistance)
{
    Weight = InWeight;
    Distance = InDistance;
}

// Sets default values for this component's properties
ABaseGun::ABaseGun()
{
     AmmoClipCurrent = 10;
     AmmoClipSize = 10;
     AmmoTotalCanCarry = 200;
     AmmoTotalCarried = 200;

    BulletsPerSecond = 10;
    BulletsPerTriggerPull = 0; //no limit

    GunName = "NOCL 96";
    
    PrimaryActorTick.bCanEverTick = true;
    
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
    for (int i = 0; i < ShotVariableDistances.Num() && i < ShotVariableWeights.Num() ; ++i)
    {
        HipFireShotVariables.Add( FShotVariableWeighted( ShotVariableWeights[i], ShotVariableDistances[i] ));
    }
    
    HipFireShotVariables.Sort([](const FShotVariableWeighted& LHS, const FShotVariableWeighted& RHS){ return LHS.Distance > RHS.Distance;});
    
    for( int i = 0 ; i < HipFireShotVariables.Num() ; ++i)
    {
        HipFireMaxWeight += HipFireShotVariables[i].Weight;
    }
    
    CalcShotAngles();
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

bool ABaseGun::TriggerPull() //return whether or not a bullet will be fired
{
    if( !( AmmoClipCurrent > 0) )
    {
        return false;
    }
    
    if( !Camera )
    {
        UE_LOG(LogTemp, Warning, TEXT("Camera is null"));
        return false;
    }
    if( !FP_Gun )
    {
        UE_LOG(LogTemp, Warning, TEXT("FP_Gun is null"));
        return false;
    }
    
    FVector Adjustment = SetNegative( AShotAngles.Num() > 0 ? AShotAngles.Pop() : FVector::ZeroVector );
    FireBullet( Adjustment );
    return true;
}

void ABaseGun::FireBullet(FVector Adjustment )
{
     AmmoClipCurrent--;
    FHitResult OutHit;
    FVector Start = FP_Gun->GetComponentLocation();
    
    FVector ForwardVector = Camera->GetForwardVector();
    FVector End = ((ForwardVector * 1000.f) + Camera->GetComponentLocation()) + Adjustment;
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
    if( HipFireMaxWeight <= 0 || HipFireShotVariables.Num() == 0)
    {
        return;
    }
    float RN = FMath::FRandRange(0, HipFireMaxWeight);
    
    for(int J = 0 ;  J <  AmmoTotalCarried ; ++J)
    {
        for(int i = 0 ;  i <  HipFireShotVariables.Num() ; ++i)
        {
            if( RN > HipFireShotVariables[i].Weight)
            {
                RN -= HipFireShotVariables[i].Weight;
            }
            else
            {
                float minDistance = i > 0 ? HipFireShotVariables[i-1].Distance : 0;
                float maxDistance = HipFireShotVariables[i].Distance;
            
                FVector ToSave;
                ToSave.X = FMath::RandRange(minDistance, maxDistance);
                ToSave.Y = FMath::RandRange(minDistance, maxDistance);
                ToSave.Z = FMath::RandRange(minDistance, maxDistance);
                AShotAngles.Add(ToSave);
                continue;
            }
        }
    }
}
void ABaseGun::Reload()
{
    //blueprint will deal with the delay and animation
    
    int need = AmmoClipSize - AmmoClipCurrent;
    if( AmmoTotalCarried >= need)
    {
        AmmoTotalCarried -= need;
        AmmoClipCurrent = AmmoClipSize;
    }
    else
    {
        AmmoClipCurrent += AmmoTotalCarried;
        AmmoTotalCarried = 0;
    }
    
}

FVector ABaseGun::SetNegative( FVector Adjustment)
{
    if ( (int)(Adjustment.X) % 2 == 0)
    {
        Adjustment.X *= -1;
    }
    if ( (int)(Adjustment.Y) % 2 == 0)
    {
        Adjustment.Y *= -1;
    }
    if ( (int)(Adjustment.Z) % 2 == 0)
    {
        Adjustment.Z *= -1;
    }
    return Adjustment;
}
