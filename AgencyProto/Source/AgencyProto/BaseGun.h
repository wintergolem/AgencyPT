// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "Math/Vector.h"
#include "BaseGun.generated.h"

USTRUCT(BlueprintType)
struct FShotVariableWeighted
{
    GENERATED_BODY()
    FShotVariableWeighted();
    FShotVariableWeighted( float InWeight, float InDistance);
    
    UPROPERTY(BlueprintReadWrite)
    float Weight = 0;
    UPROPERTY(BlueprintReadWrite)
    float Distance = 0;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AGENCYPROTO_API ABaseGun : public AActor
{
	GENERATED_BODY()
public:
	ABaseGun();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
    virtual void Tick(float DeltaTime) override;

        
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UCameraComponent* Camera;
        
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AController* PlayerController;
        
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ACharacter* Character;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMesh* GunMesh;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USkeletalMeshComponent* FP_Gun;
        
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString GunName;
        
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamagePerBullet = 0.f;
        
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BulletsPerSecond = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BulletsPerTriggerPull = 0.f; //0 = no limit

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ReloadTimeInSeconds = 0.f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 AmmoClipSize = 0;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 AmmoClipCurrent = 0;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 AmmoTotalCarried = 0; //doesn't not include what's in the clip
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 AmmoTotalCanCarry = 0;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> ShotVariableDistances;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> ShotVariableWeights;
    
    UPROPERTY(BlueprintReadWrite)
    bool ADSActive = false;
    
    TArray<FVector> AShotAngles;
    
    void SetADS(bool IsADSActive);
    
    UFUNCTION(BlueprintCallable)
    bool TriggerPull();
    UFUNCTION(BlueprintCallable)
    void Reload();
    
    void CalcShotAngles();
    
private:
    float HipFireMaxWeight = 0;
    bool AbleToFire = true;
    float ReloadTimer = 0;
    
    TArray<FShotVariableWeighted> HipFireShotVariables;
    
    void FireBullet( FVector Adjustment);

    FVector SetNegative( FVector Adjustment);
};
