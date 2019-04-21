// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VRGripScriptBase.h"
#include "GripScripts/GS_Default.h"
#include "GS_MeleeTools.generated.h"

class UGripMotionControllerComponent;

// A grip script that adds useful melee functions and capabilities
// Just adding it to the grippable object provides the features without removing standard
// Grip features.
UCLASS(NotBlueprintable, ClassGroup = (VRExpansionPlugin))
class VREXPANSIONPLUGIN_API UGS_MeleeTools : public UGS_Default
{
	GENERATED_BODY()
public:

	// Hit event data
	// Hit bone / if skeletal mesh
	// Attachment data and normal of allowed penetration removal

	UGS_MeleeTools(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	{}

	virtual void OnGrip_Implementation(UGripMotionControllerComponent * GrippingController, const FBPActorGripInformation & GripInformation) override
	{
		//GetOwner and get if a prim comp, if so then bind to its overlap / hit event if we aren't custom tracing it
	}
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent * Controller, USceneComponent * SecondaryGripComponent, const FBPActorGripInformation & GripInformation) override
	{}
	virtual bool GetWorldTransform_Implementation(UGripMotionControllerComponent * GrippingController, float DeltaTime, FTransform & WorldTransform, const FTransform &ParentTransform, FBPActorGripInformation &Grip, AActor * actor, UPrimitiveComponent * root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport) override
	{
		return true;
	}
};

