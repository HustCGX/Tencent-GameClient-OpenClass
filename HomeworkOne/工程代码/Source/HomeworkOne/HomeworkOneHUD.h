// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HomeworkOneHUD.generated.h"

UCLASS()
class AHomeworkOneHUD : public AHUD
{
	GENERATED_BODY()

public:
	AHomeworkOneHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

