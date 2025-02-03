// Fill out your copyright notice in the Description page of Project Settings.


#include "TestGameMode.h"
#include "TestCharacter.h"
#include "TestPlayerController.h"
#include "ExamCharacter.h"

ATestGameMode::ATestGameMode()
{
	DefaultPawnClass = AExamCharacter::StaticClass();
	PlayerControllerClass = ATestPlayerController::StaticClass();
}
