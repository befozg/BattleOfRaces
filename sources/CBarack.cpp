//
// Created by karen on 11.03.18.
//

#include "CBarack.h"


const int BarackLevel = 1;
const int BarackHealth = 2000;
const int BarackAttackDistance = 0;
const int BarackPower = 0;

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