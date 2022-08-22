// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/EnemyWidget.h"
#include "Enemy/Enemy.h"

float UEnemyWidget::GetEnemyHealth()
{
	

	return Enemy->GetEnemyHealth() / 100;
}
