// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MonActeur.generated.h"

UCLASS()
class TP8UE4_API AMonActeur : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* monMaillage;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* monEffetParticule;


	/** QUESTION 4.1 & 4.2 **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ActeurFlottant")
	float vitesseDeplacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ActeurFlottant")
	float vitesseRotation;


	/** QUESTION 4.3 **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActeurFlottant")
	bool estStatique;

	/** QUESTION 4.4 **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActeurFlottant")
	bool effetFume;


	/** QUESTION 5.1 **/
	UFUNCTION(BlueprintCallable, Category="Character")
	bool leveCube(float distance);


	// Sets default values for this actor's properties
	AMonActeur();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
