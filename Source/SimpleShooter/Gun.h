// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class SIMPLESHOOTER_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

	void PullTrigger();
	void Reload();

	UFUNCTION(BlueprintPure)
	int32 GetAmmoPool();
	UFUNCTION(BlueprintPure)
	int32 GetCurrentAmmo();

	UFUNCTION(BlueprintCallable)
	void AddAmmo(int32 Amount);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere)
	USoundBase* MuzzleSound;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ImpactEffect;

	UPROPERTY(EditAnywhere)
	USoundBase* ImpactSound;

	UPROPERTY(EditAnywhere)
	float MaxRange = 1000;

	UPROPERTY(EditAnywhere)
	float Damage = 10;

	// Ammo
	UPROPERTY(EditAnywhere)
	int32 AmmoPool = 100;

	UPROPERTY(EditAnywhere)
	int32 CurrentAmmo = 25;

	UPROPERTY(EditAnywhere)
	int32 AmmoClip = 25;

	UPROPERTY(EditAnywhere)
	USoundBase* AmmoEmptySound;

	bool GunTrace(FHitResult& Hit, FVector& ShotDirection);

	AController* GetOwnerController() const;

};
