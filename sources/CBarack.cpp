//
// Created by karen on 11.03.18.
//

#include "CBarack.h"

CBarack::CBarack(BuildingID _buildingID)  {
    switch (_buildingID) {
        case HumanBarack: {
            Health = 2000;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
        case OrcBarack: {
            Health = 3000;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
        case ElfBarack: {
            Health = 2500;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
    }
}