// Fill out your copyright notice in the Description page of Project Settings.


#include "KKConfigBlueprintFunctionLibrary.h"

/*************************************** get *************************************/
FString UKKConfigBlueprintFunctionLibrary::KK_GetValueFromIni_String(FString FilePath, FString SectionName,
	FString KeyName)
{
	check(GConfig!=nullptr)
	FString tmp;
	GConfig->GetString(*SectionName,*KeyName,tmp,FilePath);
	return tmp;
}

int32 UKKConfigBlueprintFunctionLibrary::KK_GetValueFromIni_Int(FString FilePath, FString SectionName, FString KeyName)
{
	check(GConfig!=nullptr)
	int32 tmp;
	GConfig->GetInt(*SectionName,*KeyName,tmp,FilePath);
	return tmp;
}

float UKKConfigBlueprintFunctionLibrary::KK_GetValueFromIni_Float(FString FilePath, FString SectionName,
	FString KeyName)
{
	check(GConfig!=nullptr)
	float tmp;
	GConfig->GetFloat(*SectionName,*KeyName,tmp,FilePath);
	return tmp;
}

bool UKKConfigBlueprintFunctionLibrary::KK_GetValueFromIni_Bool(FString FilePath, FString SectionName, FString KeyName)
{
	check(GConfig!=nullptr)
	bool tmp;
	GConfig->GetBool(*SectionName,*KeyName,tmp,FilePath);
	return tmp;
}
/*************************************** other get *************************************/
TArray<FString> UKKConfigBlueprintFunctionLibrary::KK_GetValueFromIni_Array(FString FilePath, FString SectionName,
	FString KeyName)
{
	check(GConfig!=nullptr)
	TArray<FString> tmp;
	GConfig->GetArray(*SectionName,*KeyName,tmp,FilePath);
	return tmp;
}

FColor UKKConfigBlueprintFunctionLibrary::KK_GetValueFromIni_Color(FString FilePath, FString SectionName,
	FString KeyName)
{
	check(GConfig!=nullptr)
	FColor tmp;
	GConfig->GetColor(*SectionName,*KeyName,tmp,FilePath);
	return tmp;
}

FRotator UKKConfigBlueprintFunctionLibrary::KK_GetValueFromIni_Rotator(FString FilePath, FString SectionName,
	FString KeyName)
{
	check(GConfig!=nullptr)
	FRotator tmp;
	GConfig->GetRotator(*SectionName,*KeyName,tmp,FilePath);
	return tmp;
}

FVector UKKConfigBlueprintFunctionLibrary::Kk_GetValueFromIni_Vector(FString FilePath, FString SectionName,
	FString KeyName)
{
	check(GConfig!=nullptr)
	FVector tmp;
	GConfig->GetVector(*SectionName,*KeyName,tmp,FilePath);
	return tmp;
}

FVector4 UKKConfigBlueprintFunctionLibrary::Kk_GetValueFromIni_Vector4(FString FilePath, FString SectionName,
	FString KeyName)
{
	check(GConfig!=nullptr)
	FVector4 tmp;
	GConfig->GetVector4(*SectionName,*KeyName,tmp,FilePath);
	return tmp;
}

FVector2D UKKConfigBlueprintFunctionLibrary::KK_GetValueFromIni_Vector2(FString FilePath, FString SectionName,
	FString KeyName)
{
	check(GConfig!=nullptr)
	FVector2D tmp;
	GConfig->GetVector2D(*SectionName,*KeyName,tmp,FilePath);
	return tmp;
}

/*************************************** set  *************************************/
void UKKConfigBlueprintFunctionLibrary::KK_SetValueToIni_String(FString FilePath, FString SectionName, FString KeyName,
	FString Value)
{
	check(GConfig!=nullptr)
	GConfig->SetString(*SectionName,*KeyName,*Value,FilePath);
}

void UKKConfigBlueprintFunctionLibrary::KK_SetValueToIni_Int(FString FilePath, FString SectionName, FString KeyName,
	int32 Value)
{
	check(GConfig!=nullptr)
	GConfig->SetInt(*SectionName,*KeyName,Value,FilePath);
}

void UKKConfigBlueprintFunctionLibrary::KK_SetValueToIni_Float(FString FilePath, FString SectionName, FString KeyName,
	float Value)
{
	check(GConfig!=nullptr)
	GConfig->SetFloat(*SectionName,*KeyName,Value,FilePath);
}

void UKKConfigBlueprintFunctionLibrary::KK_SetValueToIni_Bool(FString FilePath, FString SectionName, FString KeyName,
	bool Value)
{
	check(GConfig!=nullptr)
	GConfig->SetBool(*SectionName,*KeyName,Value,FilePath);
}
/*************************************** othre set *************************************/
void UKKConfigBlueprintFunctionLibrary::KK_SetValueToIni_Array(FString FilePath, FString SectionName, FString KeyName,
	const TArray<FString>& Value)
{
	check(GConfig!=nullptr)
	GConfig->SetArray(*SectionName,*KeyName,Value,FilePath);
}

void UKKConfigBlueprintFunctionLibrary::KK_SetValueToIni_Color(FString FilePath, FString SectionName, FString KeyName,
	FColor Value)
{
	check(GConfig!=nullptr)
	GConfig->SetColor(*SectionName,*KeyName,Value,FilePath);
}

void UKKConfigBlueprintFunctionLibrary::KK_SetValueToIni_Rotator(FString FilePath, FString SectionName, FString KeyName,
	FRotator Value)
{
	check(GConfig!=nullptr)
	GConfig->SetRotator(*SectionName,*KeyName,Value,FilePath);
}

void UKKConfigBlueprintFunctionLibrary::KK_SetValueToIni_Vector(FString FilePath, FString SectionName, FString KeyName,
	FVector Value)
{
	check(GConfig!=nullptr)
	GConfig->SetVector(*SectionName,*KeyName,Value,FilePath);
}

void UKKConfigBlueprintFunctionLibrary::KK_SetValueToIni_Vector4(FString FilePath, FString SectionName, FString KeyName,
	FVector4 Value)
{
	check(GConfig!=nullptr)
	GConfig->SetVector4(*SectionName,*KeyName,Value,FilePath);
}

void UKKConfigBlueprintFunctionLibrary::KK_SetValueToIni_Vector2(FString FilePath, FString SectionName, FString KeyName,
	FVector2D Value)
{
	check(GConfig!=nullptr)
	GConfig->SetVector2D(*SectionName,*KeyName,Value,FilePath);
}

// ******************************************** update **********************************************************
void UKKConfigBlueprintFunctionLibrary::KK_UpdateConfigFile(FString FilePath)
{
	check(GConfig!=nullptr)
	GConfig->Flush(true,FilePath);
}

/*************************************** otehr *************************************/
void UKKConfigBlueprintFunctionLibrary::KK_ClearSectionValue(FString FilePath, FString SectionName)
{
	GConfig->EmptySection(*SectionName,FilePath);
}

bool UKKConfigBlueprintFunctionLibrary::KK_DoesSectionExist(FString FilePath, FString SectionName)
{
	return GConfig->DoesSectionExist(*SectionName,FilePath);
}

TArray<FString> UKKConfigBlueprintFunctionLibrary::KK_GetConfigFileNameList()
{
	TArray<FString> tmp;
	GConfig->GetConfigFilenames(tmp);
	return tmp;
}

TArray<FString> UKKConfigBlueprintFunctionLibrary::KK_GetSectionNameList(FString FilePath)
{
	TArray<FString> tmp;
	GConfig->GetSectionNames(FilePath,tmp);
	return tmp;
}

FString UKKConfigBlueprintFunctionLibrary::KK_GetGameUserSettingsDir()
{
	return GConfig->GetGameUserSettingsDir();
}

