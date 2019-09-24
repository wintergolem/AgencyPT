// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMesh.h"
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

USTRUCT(BlueprintType)
struct FShotVariableWeighted
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite)
    int32 Weight = 0;
    UPROPERTY(BlueprintReadWrite)
    float Angle = 0;
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
    FAmmoBagStruct AmmoBag;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FShotVariableWeighted> HipFireShotVariables;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FShotVariableWeighted> ADSShotVariables;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool ADSActive = false;
    
    TArray<float> AShotAngles;
    
    void SetADS(bool IsADSActive);
    
    UFUNCTION(BlueprintCallable)
    void TriggerPull();
    
    void CalcShotAngles();
    
private:
    float HipFireMaxWeight = 0;
    float ADSMaxWeight = 0;
    bool AbleToFire = true;
    float ReloadTimer = 0;

};
