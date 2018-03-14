//
// Created by karen on 11.03.18.
//

#include "CTowerOfWizard.h"


CTowerOfWizard::CTowerOfWizard(BuildingID _buildingID) {
    switch (_buildingID) {
        case HumanTowerOfWizard: {
            Health = 2000;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
        case OrcTowerOfWizard: {
            Health = 3000;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
        case ElfTowerOfWizard: {
            Health = 2500;
            Power = 0;
            Level = 1;
            AttackDistance = 0;
            break;
        }
    }
}
void CTowerOfWizard::attack(const CPoint _coordinates) {
    //когда карта будет готова, будем по координатам определять
    //оюбект и obj.Health -= this->power
}