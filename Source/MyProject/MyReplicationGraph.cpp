// Fill out your copyright notice in the Description page of Project Settings.


#include "MyReplicationGraph.h"
#include "Runtime/GameplayDebugger/Public/GameplayDebuggerCategoryReplicator.h"

void UMyReplicationGraph::InitGlobalActorClassSettings()
{
	Super::InitGlobalActorClassSettings();
}

void UMyReplicationGraph::InitGlobalGraphNodes()
{
	Super::InitGlobalGraphNodes();
}

void UMyReplicationGraph::InitConnectionGraphNodes(UNetReplicationGraphConnection* RepGraphConnection)
{
	Super::InitConnectionGraphNodes(RepGraphConnection);
}
