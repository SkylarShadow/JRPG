// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

/*
���ʵʱ���µļ�ʱ������ʱ���ڽ�ɫ�غϿ�ʼʱ��ʱ��Turn+1��,��Turn = Timer��ע��ʱ��+����ʱ�䣬���ʱ��������GE������ӦЧ��
*/ 
class FTurnAbilityTimer
{
public:
	int32 Turn = 0;
	TArray<FTimerHandle> Timers;
};

class GAMEPLAYABILITIES_API FTurnAbilityTimerManager : public FTimerManager
{
public:
	void TickTurn(class UAbilitySystemComponent* AbilitySystemComponent, int delta = 1);

	// ע���ʱ��
	void SetAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, FTimerHandle& InOutHandle, FTimerDelegate const& InDelegate, float InRate, bool bInLoop, float InFirstDelay = -1.f);

	// ����ASC�õ���Ӧ��AbilityTimer
	class FTurnAbilityTimer* GetAbilityTimer(class UAbilitySystemComponent * AbilitySystemComponent);

	//���������ӵ�timer
	void ClearAllAbilityTimer();

	// ���ָ�������ָ��timer
	void ClearAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, FTimerHandle& InHandle);
	
	// ��ȡ��ʱ����ʣ��ʱ��
	float GetAbilityTimerRemaining(UAbilitySystemComponent* AbilitySystemComponent, FTimerHandle& InHandle);

	// ��һ֡����Timer
	void SetAbilityTimerForNextTick(FTimerDelegate const& InDelegate);

protected:
	// ���Timer
	void AddAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, const FTimerHandle& Handle);

	// �Ƴ�Timer
	void RemoveAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, const FTimerHandle& Handle);


	// ÿ����ɫ�����Լ��Ļغϼ��㣬��GE�г����غ�ʱ��timer�ᱻ��ӵ�AbilityTimer�С�
	TMap<class UAbilitySystemComponent*, FTurnAbilityTimer> TurnAbilityTimers;
};
