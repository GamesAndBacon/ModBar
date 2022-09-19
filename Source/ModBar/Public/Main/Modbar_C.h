// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputCoreTypes.h"
#include "ModBar_C.generated.h"

//forward declaration
class UBarSlot;

// out struct for our hotkey and its modifiers

USTRUCT(BlueprintType)
	struct MODBAR_API FHotbarKey
	{
		GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Default")
		bool bAlt;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Default")
		bool bCtrl;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Default")
		bool bShift;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Default")
		FKey key;
		// my checking operation
		bool operator==(const FHotbarKey& RHS) const
		{
			return key == RHS.key && bAlt == RHS.bAlt &&  bCtrl == RHS.bCtrl &&  bShift == RHS.bShift; 
		}
		// the values being hashed to check against.
		friend inline uint32 GetTypeHash(const FHotbarKey& Other)
		{
			uint32 Hash = 0;

			Hash = HashCombine(Hash,HashCombine(GetTypeHash(Other.key), HashCombine(Other.bAlt, HashCombine(Other.bCtrl, GetTypeHash(Other.bShift)))));
			return Hash;
		}
	};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable, BlueprintType)


class MODBAR_API UModbar_C : public UActorComponent
{
	GENERATED_BODY()
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeybindUpdate, int, index);
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FKeybindUpdate KeybindUpdated;
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FKeybindUpdate KeybindAlreadyExists;

public:
	UPROPERTY(BlueprintReadOnly)
	APlayerController* controller;
	//slots
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Default")
	TSubclassOf<UBarSlot> SlotClass;
	UPROPERTY(BlueprintReadOnly, SaveGame)
	TArray<UBarSlot*> Slots;
	//keybinds
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Default", SaveGame)
	TMap<FHotbarKey, int32> Keybinds ;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Default")
	bool KeybindsActive = true;
	UPROPERTY(BlueprintReadOnly)
	FKey LastKeyPressed;
	UPROPERTY(BlueprintReadOnly)
	FHotbarKey LastKeybindPressed;

	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	void GetSlot(int index, UBarSlot*& slot, bool& bSlotOccupied);
	UFUNCTION()
	void RemoveSlot(UBarSlot* slot);
	UFUNCTION()
	UBarSlot* AddSlot(int index);

	UFUNCTION(BlueprintCallable)
	bool SetKeybind(int index, FHotbarKey Key, bool Override);
	UFUNCTION(BlueprintCallable)
	void ClearKeybind(int index);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool DoesKeybindExist(FHotbarKey Key);
	UFUNCTION(BlueprintCallable)
	void ActivateKeybind(FKey Key);
	UFUNCTION(BlueprintNativeEvent)
	bool IsValidKeybind(FHotbarKey Key);
	
	// Sets default values for this component's properties
	UModbar_C();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
		
};
