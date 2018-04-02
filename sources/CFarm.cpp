//
// Created by karen on 11.03.18.
//

#include "CFarm.h"

const int FarmLevel = 1;
const int FarmHealth = 800;
const int FarmAttackDistance = 0;
const int FarmPower = 0;

// Пока ещё не придумали константы для каждой рассы, но они очевидно будут разные в силу разносторонности игры. Поэтому
// пока поставили всем объектам одно и то же значение

CFarm::CFarm(BuildingID _buildingID) {
    switch (_buildingID) {
        case HumanFarm: {
            Health = FarmHealth;
            Power = FarmPower;
            Level = FarmLevel;
            AttackDistance = FarmAttackDistance;
            break;
        }
        case OrcFarm: {
            Health = FarmHealth;
            Power = FarmPower;
            Level = FarmLevel;
            AttackDistance = FarmAttackDistance;
            break;
        }
        case ElfFarm: {
            Health = FarmHealth;
            Power = FarmPower;
            Level = FarmLevel;
            AttackDistance = FarmAttackDistance;
            break;
        }
    }
}