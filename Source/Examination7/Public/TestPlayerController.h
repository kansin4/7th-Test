// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TestPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class EXAMINATION7_API ATestPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATestPlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(editAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* SprintAction;

	virtual void BeginPlay() override;

		
};
