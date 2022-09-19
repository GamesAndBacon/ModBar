// Fill out your copyright notice in the Description page of Project Settings.


#include "Main/ModBar_C.h"

#include "GameFramework/GameSession.h"
#include "Kismet/GameplayStatics.h"
#include "Main/BarSlot.h"


UModbar_C::UModbar_C()
{
	PrimaryComponentTick.bCanEverTick = false;
	
}

// Called when the game starts
void UModbar_C::BeginPlay()
{
	Super::BeginPlay();
	controller =  UGameplayStatics::GetPlayerController(GetWorld(), 0);
}
//slots
void UModbar_C::GetSlot(int index, UBarSlot*& slot, bool& SlotOccupied)
{
	if(Slots.IsValidIndex(index))
	{
		if(Slots[index] != nullptr)
		{
		SlotOccupied = true;
		slot = Slots[index];
		}
		else
		{
			SlotOccupied = false;
			slot =  AddSlot(index);
		}
	}
	else
	{
		SlotOccupied = false;
		slot =  AddSlot(index);
	}
}

void UModbar_C::RemoveSlot(UBarSlot* slot)
{
	Slots.Remove(slot);
}

UBarSlot* UModbar_C::AddSlot(int index)
{
	if(SlotClass->IsValidLowLevel())
	{
		UBarSlot* newSlot = NewObject<UBarSlot>(this, SlotClass);
		if (Slots.Num() < index)
		{
			Slots.SetNum(index, false);
		}
		Slots.Insert(newSlot, index);
		return  newSlot;
	}
	return nullptr;
}

// keybinds
bool UModbar_C::SetKeybind(int index, FHotbarKey Key, bool Override)
{
	if(IsValidKeybind(Key))
	{
		// check if we need to update an old keybind
		bool oldKeyExists = DoesKeybindExist(Key);
		int oldindex;
		// if we have an old key, we set the index
		if(oldKeyExists)
		{
		oldindex = Keybinds[Key];
		}
		
		// if were going to force and override, or if there is no existing keybind
		if(Override || !oldKeyExists)
		{
			// find our index via the value, clean up any old values 
			for (const TPair<FHotbarKey, int32>& pair : Keybinds)
			{      
				if(pair.Value == index)
				{				
					Keybinds.Remove(Key);
					Keybinds.Remove(pair.Key);
					break;
				}
			}
		// add our new values
		Keybinds.Add(Key,index);
		KeybindUpdated.Broadcast(index);
			
		//push an update if needed to an old hotkey.
		if(oldKeyExists)
		{
			KeybindUpdated.Broadcast(oldindex);
		}
		return true;
		}
	}
	return false;
}

void UModbar_C::ClearKeybind(int index)
{
	for (const TPair<FHotbarKey, int32>& pair : Keybinds)
	{      
		if(pair.Value == index)
		{				
			Keybinds.Remove(pair.Key);
			KeybindUpdated.Broadcast(index);
			break;
		}
	}

}

bool UModbar_C::DoesKeybindExist(FHotbarKey Key)
{
	if(Keybinds.Contains(Key))
	{
		int* localkey = Keybinds.Find(Key);
		KeybindAlreadyExists.Broadcast(*localkey);
		return true;
	}
	else
	{
		return false;
	}
	
}

void UModbar_C::ActivateKeybind(FKey Key)
{
	LastKeyPressed = Key;
	if(KeybindsActive)
	{
		//local struct
		FHotbarKey localKey;
		localKey.key = Key;
		localKey.bAlt = controller->IsInputKeyDown(EKeys::LeftAlt);
		localKey.bCtrl = controller->IsInputKeyDown(EKeys::LeftControl);
		localKey.bShift = controller->IsInputKeyDown(EKeys::LeftShift);
		
		// find out hotkey index
		if(Keybinds.Find(localKey))
		{
			LastKeybindPressed = localKey;
			int* index = Keybinds.Find(localKey);
			// get our slot and active it
			UBarSlot* outSlot;
			bool slotOccupied;
			GetSlot(*index, outSlot, slotOccupied);
			outSlot->ActivateSlot();
			outSlot->UpdateSlot();
		}
	}
}

bool UModbar_C::IsValidKeybind_Implementation(FHotbarKey Key)
{
	return true;
}





