

#pragma once

#include "CoreMinimal.h"
#include "Subsystem/ModSubsystem.h"
#include "ModelerModRecipesSubsystem.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class MODELERMODRECIPES_API AModelerModRecipesSubsystem : public AModSubsystem
{
	GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category = "Save")
    static bool FileSaveStringSub(FString String, FString FileNameWithPath)
    {
        return FFileHelper::SaveStringToFile(String, *(FileNameWithPath));
    }
};