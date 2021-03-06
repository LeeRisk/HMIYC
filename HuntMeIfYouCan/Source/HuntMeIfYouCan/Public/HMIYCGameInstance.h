// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "HMIYCGameInstance.generated.h"

/**
 *
 */
UCLASS()
class HUNTMEIFYOUCAN_API UHMIYCGameInstance : public UGameInstance
{
    GENERATED_BODY()
public:

    UHMIYCGameInstance( const FObjectInitializer &objectInitializer );

    UFUNCTION( BlueprintCallable, category = "OpenUI" )
    void OpenMainMenu();

    UFUNCTION( BlueprintCallable, category = "OpenUI" )
    void OpenServerList();

    UFUNCTION( BlueprintCallable, category = "OpenUI" )
    void OpenPauseMenu();

    UFUNCTION( BlueprintImplementableEvent, category = "GameEvent" )
    void WinGameBy( const class AController *& Player );

    UFUNCTION( BlueprintImplementableEvent, category = "GameEvent" )
    void GameWinnerShowed();

    class UUserWidget* CreateUIWidget( const FString& Path );

private:

    UPROPERTY()
    UUserWidget* MainMenu;
    UPROPERTY()
    UUserWidget* ServerList;
    UPROPERTY()
    UUserWidget* PauseMenu;
};
