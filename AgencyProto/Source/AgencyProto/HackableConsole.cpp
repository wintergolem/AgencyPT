// Fill out your copyright notice in the Description page of Project Settings.


#include "HackableConsole.h"

// Sets default values for this component's properties
AHackableConsole::AHackableConsole()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryActorTick.bCanEverTick = true;

	HackStartTriggerVolume = CreateDefaultSubobject<UBoxComponent>(FName("HackStartTriggerVolume"));
    HackAreaTriggerVolume = CreateDefaultSubobject<UBoxComponent>(FName("HackAreaTriggerVolume"));
}


// Called when the game starts
void AHackableConsole::BeginPlay()
{
	Super::BeginPlay();

	// ...
    HackStartTriggerVolume->OnComponentBeginOverlap.AddDynamic(this, &AHackableConsole::OnOverlapBeginHackStart);
    HackAreaTriggerVolume->OnComponentBeginOverlap.AddDynamic(this, &AHackableConsole::OnOverlapBeginHackArea);
}


// Called every frame
void AHackableConsole::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
	// ...
    if(HackActive && HackStarted)
    {
        CurrentHackTime += DeltaTime;
        HackTimePercentage = CurrentHackTime / TotalHackTime;
        if( CurrentHackTime >= TotalHackTime)
        {
            HackCompleted = true;
        }
    }
}

void AHackableConsole::OnOverlapBeginHackStart(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    //UE_LOG(LogTemp, Warning, TEXT("activated"));
    if( !HackStarted && OtherActor != nullptr)
    {
        //ACharacter* OtherChar = Cast<ACharacter>(OtherActor)->GetController();
        //AController* OtherControl = OtherChar->GetController();
        //AController* OtherControl = Cast<ACharacter>(OtherActor)->GetController();
    }
}

void AHackableConsole::OnOverlapBeginHackArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    //UE_LOG(LogTemp, Warning, TEXT("activated"));
    //TODO: verify character
    HackActive = true;
}

void AHackableConsole::OnOverlapEndHackArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    HackActive = false;
}

void AHackableConsole::OnOverlapEndHackStart(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    
}
