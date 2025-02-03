// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPlayerController.h"
#include "EnhancedInputSubSystems.h"

ATestPlayerController::ATestPlayerController()
	: InputMappingContext(nullptr),
	JumpAction(nullptr),
	MoveAction(nullptr),
	LookAction(nullptr),
	SprintAction(nullptr)
{	
}

void ATestPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}