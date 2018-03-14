//
// Created by karen on 11.03.18.
//

#include "CCannonTower.h"


CCanonTower::CCanonTower(BuildingID _buildingID)  {
    switch (_buildingID) {
        case HumanCannonTower: {
            Health = 3000;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
        case OrcCannonTower: {
            Health = 3000;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
        case ElfCannonTower: {
            Health = 2500;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
    }
}
void CCanonTower::attack(const CPoint _coordinates) {
    //когда карта будет готова, будем по координатам определять
    //оюбект и obj.Health -= this->power
}