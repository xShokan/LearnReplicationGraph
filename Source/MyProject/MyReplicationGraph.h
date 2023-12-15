// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicReplicationGraph.h"
#include "MyReplicationGraph.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMyReplicationGraph : public UBasicReplicationGraph
{
	GENERATED_BODY()
	
	virtual void InitGlobalActorClassSettings();
	virtual void InitGlobalGraphNodes();
	virtual void InitConnectionGraphNodes(UNetReplicationGraphConnection* ConnectionManager);
};
