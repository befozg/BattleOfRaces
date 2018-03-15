//
// Created by karen on 10.03.18.
//
#include "CTownHall.h"
#include "CFactoryTownHall.h"

CTownHall::CTownHall(BuildingID _buildingID)  {
    switch (_buildingID) {
        case HumanTownHall: {
            Health = 10000;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
        case OrcTownHall: {
            Health = 10000;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
        case ElfTownHall: {
            Health = 10000;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
    }
}