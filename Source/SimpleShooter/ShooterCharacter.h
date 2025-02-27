// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

class AGun;

UCLASS()
class SIMPLESHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	UFUNCTION(BlueprintPure)
	float GetHealthPercent() const;

	UFUNCTION(BlueprintPure)
	AGun* GetCurrentGun() const;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintPure)
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
	UFUNCTION(BlueprintCallable)
	void Shoot();

	UFUNCTION()
	void SwitchWeapon(int WeaponIndex);

	UFUNCTION(BlueprintCallable)
	void Reload();

	DECLARE_DELEGATE_OneParam(WeaponSwitchHandler, int32);

private:
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void LookUpRate(float AxisValue);
	void LookRightRate(float AxisValue);


	UPROPERTY(EditAnywhere)
	float RotationRate = 10;

	UPROPERTY(EditDefaultsOnly)
	float MaxHealth = 100;

	UPROPERTY(VisibleAnywhere)
	float Health = 100;

	//UPROPERTY(EditDefaultsOnly)
	//TSubclassOf<AGun> GunClass;


	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<AGun>> GunClasses;

	UPROPERTY(VisibleAnywhere)
	TArray<AGun*> Guns;

	UPROPERTY(EditDefaultsOnly)
	AGun* CurrentGun;

	/*
	*  TODO:
	-- Advanced AI --
	-- Main Menu --
	-- Multiple Levels --
	*/

};
