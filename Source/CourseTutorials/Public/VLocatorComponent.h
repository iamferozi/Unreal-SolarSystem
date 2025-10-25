// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VLocatorComponent.generated.h"


class USplineComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSETUTORIALS_API UVLocatorComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY()
	USplineComponent* OwnerSplineComponent;

public:	
	// Sets default values for this component's properties
	UVLocatorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	


		
};
