//
// Created by karen on 11.03.18.
//

#include "CTowerOfWizard.h"



const int TowerOfWizardLevel= 1;
const int TowerOfWizardHealth = 1500;
const int TowerOfWizardAttackDistance = 10;
const int TowerOfWizardPower = 100;

CTowerOfWizard::CTowerOfWizard(BuildingID _buildingID) {
    switch (_buildingID) {
        case HumanTowerOfWizard: {
            Health = TowerOfWizardHealth;
            Power = TowerOfWizardPower;
            Level = TowerOfWizardLevel;
            AttackDistance = TowerOfWizardAttackDistance;
            race = "Human";
            break;
        }
        case OrcTowerOfWizard: {
            Health = TowerOfWizardHealth;
            Power = TowerOfWizardPower;
            Level = TowerOfWizardLevel;
            AttackDistance = TowerOfWizardAttackDistance;
            race = "Orc";
            break;
        }
        case ElfTowerOfWizard: {
            Health = TowerOfWizardHealth;
            Power = TowerOfWizardPower;
            Level = TowerOfWizardLevel;
            AttackDistance = TowerOfWizardAttackDistance;
            race = "Elf";
            break;
        }
    }
}
void CTowerOfWizard::attack(const CPoint _coordinates) {
    //когда карта будет готова, будем по координатам определять
    //оюбект и obj.Health -= this->power
}