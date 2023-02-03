// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMInimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KKConfigBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class KKCONFIG_API UKKConfigBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/*************************************** base get   *************************************/
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|Get")
	static FString KK_GetValueFromIni_String(FString FilePath,FString SectionName,FString KeyName);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|Get")
	static int32 KK_GetValueFromIni_Int(FString FilePath,FString SectionName,FString KeyName);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|Get")
	static float KK_GetValueFromIni_Float(FString FilePath,FString SectionName,FString KeyName);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|Get")
	static bool KK_GetValueFromIni_Bool(FString FilePath,FString SectionName,FString KeyName);

	/*************************************** other get *************************************/
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|AdvGet")
	static TArray<FString> KK_GetValueFromIni_Array(FString FilePath,FString SectionName,FString KeyName);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|AdvGet")
	static FColor KK_GetValueFromIni_Color(FString FilePath,FString SectionName,FString KeyName);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|AdvGet")
	static FRotator KK_GetValueFromIni_Rotator(FString FilePath,FString SectionName,FString KeyName);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|AdvGet")
	static FVector Kk_GetValueFromIni_Vector(FString FilePath,FString SectionName,FString KeyName);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|AdvGet")
	static FVector4 Kk_GetValueFromIni_Vector4(FString FilePath,FString SectionName,FString KeyName);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|AdvGet")
	static FVector2D KK_GetValueFromIni_Vector2(FString FilePath,FString SectionName,FString KeyName);
	
	/*************************************** base set *************************************/
	UFUNCTION(BlueprintCallable,Category="KKConfig|Set")
	static void KK_SetValueToIni_String(FString FilePath,FString SectionName,FString KeyName,FString Value);
	UFUNCTION(BlueprintCallable,Category="KKConfig|Set")
	static void KK_SetValueToIni_Int(FString FilePath,FString SectionName,FString KeyName,int32 Value);
	UFUNCTION(BlueprintCallable,Category="KKConfig|Set")
	static void KK_SetValueToIni_Float(FString FilePath,FString SectionName,FString KeyName,float Value);
	UFUNCTION(BlueprintCallable,Category="KKConfig|Set")
	static void KK_SetValueToIni_Bool(FString FilePath,FString SectionName,FString KeyName,bool Value);

	/*************************************** other set *************************************/
	UFUNCTION(BlueprintCallable,Category="KKConfig|AdvSet")
	static void KK_SetValueToIni_Array(FString FilePath,FString SectionName,FString KeyName,UPARAM(ref) const TArray<FString> & Value);
	UFUNCTION(BlueprintCallable,Category="KKConfig|AdvSet")
	static void KK_SetValueToIni_Color(FString FilePath,FString SectionName,FString KeyName,FColor Value );
	UFUNCTION(BlueprintCallable,Category="KKConfig|AdvSet")
	static void KK_SetValueToIni_Rotator(FString FilePath,FString SectionName,FString KeyName,FRotator Value );
	UFUNCTION(BlueprintCallable,Category="KKConfig|AdvSet")
	static void KK_SetValueToIni_Vector(FString FilePath,FString SectionName,FString KeyName,FVector Value );
	UFUNCTION(BlueprintCallable,Category="KKConfig|AdvSet")
	static void KK_SetValueToIni_Vector4(FString FilePath,FString SectionName,FString KeyName,FVector4 Value );
	UFUNCTION(BlueprintCallable,Category="KKConfig|AdvSet")
	static void KK_SetValueToIni_Vector2(FString FilePath,FString SectionName,FString KeyName,FVector2D Value );
	
	/*************************************** update *************************************/
	UFUNCTION(BlueprintCallable,Category="KKConfig|Update")
	static void KK_UpdateConfigFile(FString FilePath);

	/*************************************** other  *************************************/
	UFUNCTION(BlueprintCallable,Category="KKConfig|Other")
	static void KK_ClearSectionValue(FString FilePath,FString SectionName);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|Other")
	static bool KK_DoesSectionExist(FString FilePath,FString SectionName);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|Other")
	static TArray<FString> KK_GetConfigFileNameList();
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|Other")
	static TArray<FString> KK_GetSectionNameList(FString FilePath);
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="KKConfig|Other")
	static FString KK_GetGameUserSettingsDir();
	
};
