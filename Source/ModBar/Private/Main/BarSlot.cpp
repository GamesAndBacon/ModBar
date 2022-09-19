// Fill out your copyright notice in the Description page of Project Settings.


#include "Main/BarSlot.h"

#include "Main/ModBar_C.h"

// Sets default values
UBarSlot::UBarSlot(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	Owner = Cast<UModbar_C>(GetOuter());
}

void UBarSlot::PostInitProperties()
{
	UObject::PostInitProperties();
	if(GetWorld())
	{
		BeginPlay();
	}
}

void UBarSlot::BeginPlay()
{
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UBarSlot::UpdateSlot, .2f, false, 0);
}

void UBarSlot::UpdateSlot()
{
	if (isDestroyed())
	{
		SlotRemoved.Broadcast(this);
		Owner->RemoveSlot(this);
	}
	else
	{
		bool keybindvalid;
		Keybind = GetKeybind(keybindvalid);
		SlotUpdated.Broadcast(this);
		onSlotUpdate();
	}
}

FHotbarKey UBarSlot::GetKeybind(bool& isValid)
{
	int myindex = -1;
	int keybindindex;
	TArray<int> values;
	TArray<FHotbarKey> keys;
	myindex = Owner->Slots.Find(this);
	if(myindex != -1)
	{
	Owner->Keybinds.GenerateValueArray(values);
	keybindindex = values.Find(myindex);
		Owner->Keybinds.GetKeys(keys);
		isValid = true;
		return keys[keybindindex];
	}
	else
	{
		FHotbarKey blankkey;
		isValid = false;
		return blankkey;
	}
}

void UBarSlot::ActivateSlot_Implementation()
{
	
}

void UBarSlot::onSlotUpdate_Implementation()
{
	
}

bool UBarSlot::isDestroyed_Implementation()
{
	return  false;
}
