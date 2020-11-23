// Fill out your copyright notice in the Description page of Project Settings.


#include "MonActeur.h"

// Sets default values
AMonActeur::AMonActeur() : vitesseDeplacement(100.0f), vitesseRotation(90.0f), estStatique(false), effetFume(false)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	/** QUESTION 3.2 **/
	// Partie III: COnstruction de l'object VisualMesh
	monMaillage = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	monMaillage->SetupAttachment(RootComponent);

	ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	if (CubeVisualAsset.Succeeded()) {
		monMaillage->SetStaticMesh(CubeVisualAsset.Object);
		monMaillage->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}


	/** QUESTION 3.3 **/
	ConstructorHelpers::FObjectFinder<UMaterial> MaterialVisualAsset(TEXT("/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse"));

	if (MaterialVisualAsset.Succeeded()) {
		monMaillage->SetMaterial(0, MaterialVisualAsset.Object);
	}

	/** QUESTION 3.8 **/
	monEffetParticule = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MovementParticles"));
	/** QUESTION 3.9 **/
	monEffetParticule->SetupAttachment(monMaillage);
	monEffetParticule->Deactivate();


	/** QUESTION 3.10 **/
	ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemVisualAsset(TEXT("/Game/StarterContent/Particles/P_Steam_Lit"));
	if (ParticleSystemVisualAsset.Succeeded()) {
		monEffetParticule->SetTemplate(ParticleSystemVisualAsset.Object);
	}

}

// Called when the game starts or when spawned
void AMonActeur::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogActor, Warning, TEXT("****** HELLO World FROM GAMAGORA !!!!"));
	UE_LOG(LogActor, Warning, TEXT("Actor name %s"), *this->GetName());

	int testEntier = 42;
	UE_LOG(LogActor, Warning, TEXT("Actor name %d"), testEntier);

	FString nom = FString::Printf(TEXT("Actor name %s"), *this->GetName());
	UE_LOG(LogActor, Warning, TEXT("Actor name %s"), *nom);

}

// Called every frame
void AMonActeur::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/** QUESTION 3.4 **/ // Deactivated to avoid flooding console
	//UE_LOG(LogActor, Warning, TEXT("Actor name %f"), DeltaTime);

	/** QUESTION 4.3 **/
	if (!estStatique) {

		/** QUESTION 3.5 **/
		FVector newLocation = GetActorLocation();
		float runningTime = GetGameTimeSinceCreation();
		float deltaHeight = FMath::Sin(runningTime + DeltaTime) - FMath::Sin(runningTime);
		newLocation.Z += deltaHeight * vitesseDeplacement; //Scale our height by a factor of 100
		SetActorLocation(newLocation);

		/** QUESTION 3.6 **/
		FRotator newRotation = GetActorRotation();
		newRotation.Yaw += vitesseRotation * DeltaTime;
		SetActorRotation(newRotation);

	}

	if (effetFume) {
		monEffetParticule->Activate();
	} else {
		monEffetParticule->Deactivate();
	}

}

bool AMonActeur::leveCube(float distance)
{
	FVector newLocation = GetActorLocation();
	newLocation.Z += distance;
	SetActorLocation(newLocation);
	
	// True if above ground ? 
	return newLocation.Z > 0;
}

