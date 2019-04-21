// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "VRBPDatatypes.h"
#include "ActorComponent.h"
//#include "ArmSolver.generated.h"


class ArmSolver
{

public:

	bool calcElbowAngle;
	bool clampElbowAngle;
	bool softClampElbowAngle;
	float maxAngle, minAngle, softClampRange;
	float offsetAngle;
	float yWeight;
	float zWeightTop, zWeightBottom, zBorderY, zDistanceStart;
	float xWeight, xDistanceStart;

	ArmSolver()
	{
		calcElbowAngle = true;
		clampElbowAngle = true;
		softClampElbowAngle = true;	
		maxAngle = 175f, minAngle = 13f, softClampRange = 10f;
		offsetAngle = 135f;
		yWeight = -60f;                                                                
		zWeightTop = 260, zWeightBottom = -100, zBorderY = -.25f, zDistanceStart = .6f;
		xWeight = -50f, xDistanceStart = .1f;
	}
};