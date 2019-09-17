// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/BoxComponent.h"
#include "HackableConsole.generated.h"


UCLASS()
class AGENCYPROTO_API AHackableConsole : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	AHackableConsole();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    UPROPERTY(EditAnywhere)
    float TotalHackTime = 12.f; //in seconds?
    float CurrentHackTime = 0.f;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float HackTimePercentage = 0.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString InteractText = "Press T to start Hacking";
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool HackStarted = false;   //hack has been started
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool HackActive = false;    //a player is range to continue hack progress
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool HackCompleted = false;

private:
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* HackStartTriggerVolume;
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* HackAreaTriggerVolume;
    
    UFUNCTION()
    void OnOverlapBeginHackStart(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    UFUNCTION()
    void OnOverlapBeginHackArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    UFUNCTION()
    void OnOverlapEndHackArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    UFUNCTION()
    void OnOverlapEndHackStart(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};
