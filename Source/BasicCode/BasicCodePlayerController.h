// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/PlayerController.h"
#include "BasicCodePlayerController.generated.h"

/**
 * Management of the Player Pawn
 */
UCLASS()
class ABasicCodePlayerController : public APlayerController
{
	GENERATED_UCLASS_BODY()

public:
	virtual void BeginPlay() override;
};
