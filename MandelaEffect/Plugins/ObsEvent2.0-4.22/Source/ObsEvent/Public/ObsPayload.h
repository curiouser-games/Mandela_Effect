// Copyright Alexandru pasotee Oprea 2018-2019. All Rights Reserved.

#pragma once

#include "Internationalization/Text.h"
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"
#include "ObsPayload.generated.h"


/**
 * Event holding all the listeners and delegating the call to them.
 */

class IObsInterfaceListener;
class AActor;

UCLASS(BlueprintType, hidecategories = (Object), ClassGroup = Events, Category = "Events", Blueprintable)
class OBSEVENT_API UObsPayload : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Events")
	AActor* Instigator;

};