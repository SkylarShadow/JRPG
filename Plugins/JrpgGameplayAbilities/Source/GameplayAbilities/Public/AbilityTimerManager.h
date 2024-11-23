// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

/*
替代实时更新的计时器，计时器在角色回合开始时计时（Turn+1）,当Turn = Timer的注册时间+持续时间，则计时器触发，GE产生对应效果
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

	// 注册计时器
	void SetAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, FTimerHandle& InOutHandle, FTimerDelegate const& InDelegate, float InRate, bool bInLoop, float InFirstDelay = -1.f);

	// 根据ASC拿到对应的AbilityTimer
	class FTurnAbilityTimer* GetAbilityTimer(class UAbilitySystemComponent * AbilitySystemComponent);

	//清空所有添加的timer
	void ClearAllAbilityTimer();

	// 清除指定对象的指定timer
	void ClearAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, FTimerHandle& InHandle);
	
	// 获取计时器的剩余时间
	float GetAbilityTimerRemaining(UAbilitySystemComponent* AbilitySystemComponent, FTimerHandle& InHandle);

	// 下一帧触发Timer
	void SetAbilityTimerForNextTick(FTimerDelegate const& InDelegate);

protected:
	// 添加Timer
	void AddAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, const FTimerHandle& Handle);

	// 移除Timer
	void RemoveAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, const FTimerHandle& Handle);


	// 每个角色会有自己的回合计算，当GE有持续回合时，timer会被添加到AbilityTimer中。
	TMap<class UAbilitySystemComponent*, FTurnAbilityTimer> TurnAbilityTimers;
};
