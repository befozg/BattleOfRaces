//
// Created by karen on 10.03.18.
//
#include "CTownHall.h"

const int TownHalLevel = 1;
const int TownHallHealth = 5000;
const int TownAttackDistance = 0;
const int TownHallPower = 0;

CTownHall::CTownHall(BuildingID _buildingID)  {
    switch (_buildingID) {
        case HumanTownHall: {
            Health = TownHallHealth;
            Power = TownHallPower;
            Level = TownHalLevel;
            AttackDistance = TownAttackDistance;
            race = "Human";
            break;
        }
        case OrcTownHall: {
            Health = TownHallHealth;
            Power = TownHallPower;
            Level = TownHalLevel;
            AttackDistance = TownAttackDistance;
            race = "Orc";
            break;
        }
        case ElfTownHall: {
            Health = TownHallHealth;
            Power = TownHallPower;
            Level = TownHalLevel;
            AttackDistance = TownAttackDistance;
            race = "Elf";
            break;
        }
    }
}