// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModBar_C.h"
#include "UObject/NoExportTypes.h"
#include "BarSlot.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, abstract, EditInlineNew, HideCategories = ("DoNotShow"), CollapseCategories, AutoExpandCategories = ("Default"))
class MODBAR_API UBarSlot : public UObject
{
	GENERATED_BODY()
	//Delegates
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBarSlotUpdated, UBarSlot*, slot);
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FBarSlotUpdated SlotUpdated;
	UPROPERTY(BlueprintAssignable)
	FBarSlotUpdated SlotRemoved;
	UPROPERTY(BlueprintAssignable)
	FBarSlotUpdated SlotActivated;
	
	// Sets default values for this actor's properties
	UBarSlot(const FObjectInitializer& ObjectInitializer);


public:
	virtual void PostInitProperties() override;
	
	UPROPERTY(BlueprintReadOnly)
	UModbar_C* Owner;
	FTimerHandle TimerHandle;
	UPROPERTY(BlueprintReadOnly)
	FHotbarKey Keybind;

	UFUNCTION(BlueprintCallable)
	void BeginPlay();
	
	UFUNCTION(BlueprintCallable)
	void UpdateSlot();
	UFUNCTION(BlueprintCallable)
	FHotbarKey GetKeybind(bool& isValid);

	UFUNCTION(BlueprintNativeEvent)
	void ActivateSlot();
	UFUNCTION(BlueprintNativeEvent)
	void onSlotUpdate();
	UFUNCTION(BlueprintNativeEvent)
	bool isDestroyed();
	
};
