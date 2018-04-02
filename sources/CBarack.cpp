//
// Created by karen on 11.03.18.
//

#include "CBarack.h"


const int BarackLevel = 1;
const int BarackHealth = 2000;
const int BarackAttackDistance = 0;
const int BarackPower = 0;

// Пока ещё не придумали константы для каждой рассы, но они очевидно будут разные в силу разносторонности игры. Поэтому
// пока поставили всем объектам одно и то же значение

CBarack::CBarack(BuildingID _buildingID)  {
    switch (_buildingID) {
        case HumanBarack: {
            Health = BarackHealth;
            Power = BarackPower;
            Level = BarackLevel;
            AttackDistance = BarackAttackDistance;
            break;
        }
        case OrcBarack: {
            Health = BarackHealth;
            Power = BarackPower;
            Level = BarackLevel;
            AttackDistance = BarackAttackDistance;
            break;
        }
        case ElfBarack: {
            Health = BarackHealth;
            Power = BarackPower;
            Level = BarackLevel;
            AttackDistance = BarackAttackDistance;
            break;
        }
    }
}