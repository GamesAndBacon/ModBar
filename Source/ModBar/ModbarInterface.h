// Copyright © 2020 Norse Ironwolf Studios LTD. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Main/ModBar_C.h"
#include "ModbarInterface.generated.h"

//class UBaseItem;

UINTERFACE(BlueprintType)
class MODBAR_API UModbarInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class MODBAR_API IModbarInterface
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Modbar")
		UModbar_C* GetHotbar();
};
