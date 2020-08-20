// Fill out your copyright notice in the Description page of Project Settings.


#include "GwangFunctionalTest.h"
// 
#include "Tests/AutomationCommon.h"
#include "Tests/AutomationEditorCommon.h"
#include "AssetSelection.h"
#include "Kismet/GameplayStatics.h"
//

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMyTest, "CustomTests.Test", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FMyTest::RunTest(const FString& Parameters)
{
	//FAutomationEditorCommonUtils::LoadMap(TEXT("/Game/Test/Test_DeathTest.Test_DeathTest"));
	//TestNotNull("World exists", GWorld.GetReference());

	//FHitResult Hit;
	//FVector ShotDirection;

	//FPointDamageEvent PointDamageEvent = FPointDamageEvent(100, Hit, ShotDirection, nullptr);
	//AController* OwnerController = PlayerCharacter->GetController();
	//PlayerCharacter->TakeDamage(100, PointDamageEvent, OwnerController, OwnerController);

	//TestTrue("Player should die", PlayerCharacter->IsDead());

	//UObject* EditorCylinderMesh = (UStaticMesh*)StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/Engine/EditorMeshes/EditorCylinder"), NULL, LOAD_None, NULL);

	//TestNull("Null is null", nullptr);
	//TestNotNull("Mesh is valid", EditorCylinderMesh);
	//TestNotNull("I can instantiate meshes!", FActorFactoryAssetProxy::AddActorForAsset(EditorCylinderMesh));

	//TestTrue("One plus one should equal to 2", 1 + 1 == 2);
	//TestEqual("One plus one should equal to 2", 1 + 1, 2);
	return true;
}