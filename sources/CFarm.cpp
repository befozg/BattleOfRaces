//
// Created by karen on 11.03.18.
//

#include "CFarm.h"

CFarm::CFarm(BuildingID _buildingID) {
    switch (_buildingID) {
        case HumanFarm: {
            Health = 1000;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
        case OrcFarm: {
            Health = 1000;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
        case ElfFarm: {
            Health = 1200;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
    }
}