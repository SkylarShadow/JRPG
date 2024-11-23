// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityTimerManager.h"

void FTurnAbilityTimerManager::TickTurn(UAbilitySystemComponent* AbilitySystemComponent, int delta)
{
	if (AbilitySystemComponent == nullptr)
	{
		return;
	}

	for (auto i = 0; i < delta; i++)
	{
		auto TurnAbilityTimer = GetAbilityTimer(AbilitySystemComponent);
		++TurnAbilityTimer->Turn;

		TArray<FTimerHandle> RemoveHandles;

		auto Terms = TurnAbilityTimer->Timers;

		for (auto Term : Terms) 
		{
			auto Timer = FindTimer(Term);
			if (Timer == nullptr)
			{
				continue;
			}

			bool bExpire = Timer->ExpireTime <= TurnAbilityTimer->Turn;

			if (bExpire == true)
			{
				Timer->TimerDelegate.Execute();

				if (Timer->bLoop == true)
				{
					Timer->ExpireTime = TurnAbilityTimer->Turn + Timer->Rate;
				}
				else 
				{
					RemoveHandles.Add(Timer->Handle);
				}
			}
		}
		for (auto Handle : RemoveHandles)
		{
			RemoveAbilityTimer(AbilitySystemComponent, Handle);
			ClearTimer(Handle);
		}
	}
}

void FTurnAbilityTimerManager::SetAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, FTimerHandle& InOutHandle, FTimerDelegate const& InDelegate, float InRate, bool bInLoop, float InFirstDelay)
{

	if (AbilitySystemComponent == nullptr)
	{
		return;
	}

	auto Timer = FindTimer(InOutHandle);

	if (InRate > 0.0f)
	{
		if (Timer == nullptr)
		{
			InOutHandle = SetTimerForNextTick(InDelegate);  // 下一帧触发回调，用法和SetTimer相同
			Timer = FindTimer(InOutHandle);

			AddAbilityTimer(AbilitySystemComponent, InOutHandle);
		}

		auto TurnAbilityTimer = GetAbilityTimer(AbilitySystemComponent);

		const float FirstDelay = (InFirstDelay >= 0.f) ? InFirstDelay : InRate;

		Timer->Rate = InRate;
		Timer->bLoop = bInLoop;
		Timer->ExpireTime = TurnAbilityTimer->Turn + FirstDelay;
		
	}
	else {
		if (Timer != nullptr)
		{
			RemoveAbilityTimer(AbilitySystemComponent,InOutHandle);
			ClearTimer(InOutHandle);
		}
	}
}

FTurnAbilityTimer* FTurnAbilityTimerManager::GetAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent)
{
	if (AbilitySystemComponent == nullptr)
	{
		return nullptr;
	}

	auto& TurnAbilityTimer = TurnAbilityTimers.FindOrAdd(AbilitySystemComponent);

	return &TurnAbilityTimer;
}

// 清空所有添加的Timer
void FTurnAbilityTimerManager::ClearAllAbilityTimer()
{
	for (auto Timer : TurnAbilityTimers)
	{
		for (auto Handle : Timer.Value.Timers)
		{
			ClearTimer(Handle);
		}
	}

	TurnAbilityTimers.Empty();
}

void FTurnAbilityTimerManager::ClearAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, FTimerHandle& InHandle)
{
	RemoveAbilityTimer(AbilitySystemComponent,InHandle);
	ClearTimer(InHandle);
}

float FTurnAbilityTimerManager::GetAbilityTimerRemaining(UAbilitySystemComponent* AbilitySystemComponent, FTimerHandle& InHandle)
{
	auto TurnAbilityTimer = GetAbilityTimer(AbilitySystemComponent);

	// 如果没找到
	if (TurnAbilityTimer->Timers.Find(InHandle) == INDEX_NONE)
	{
		return 0;
	}

	auto Timer = FindTimer(InHandle);
	if (Timer == nullptr)
	{
		return 0;
	}

	float RemainTime = Timer->ExpireTime - TurnAbilityTimer->Turn;

	return RemainTime;
}

void FTurnAbilityTimerManager::SetAbilityTimerForNextTick(FTimerDelegate const& InDelegate)
{
	InDelegate.ExecuteIfBound();
}


// 添加timer
void FTurnAbilityTimerManager::AddAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, const FTimerHandle& Handle)
{
	if (AbilitySystemComponent == nullptr)
	{
		return;
	}

	auto TurnAbilityTimer = GetAbilityTimer(AbilitySystemComponent);
	TurnAbilityTimer->Timers.Add(Handle);
}

// 移除timer
void FTurnAbilityTimerManager::RemoveAbilityTimer(UAbilitySystemComponent* AbilitySystemComponent, const FTimerHandle& Handle)
{
	if (AbilitySystemComponent == nullptr)
	{
		return;
	}

	auto TurnAbilityTimer = GetAbilityTimer(AbilitySystemComponent);
	TurnAbilityTimer->Timers.Remove(Handle);
}



