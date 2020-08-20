// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FunctionalTest.h"
#include "ShooterCharacter.h"

#include "GwangFunctionalTest.generated.h"

/**
 * 
 */

UCLASS()
class SIMPLESHOOTER_API AGwangFunctionalTest : public AFunctionalTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	AShooterCharacter* PlayerCharacter = nullptr;

};
