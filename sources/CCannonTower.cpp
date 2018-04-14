//
// Created by karen on 11.03.18.
//

#include "CCannonTower.h"


const int CannonLevel = 1;
const int CannonHealth = 1500;
const int CannonAttackDistance = 10;
const int CannonPower = 100;

// Пока ещё не придумали константы для каждой рассы, но они очевидно будут разные в силу разносторонности игры. Поэтому
// пока поставили всем объектам одно и то же значение

CCanonTower::CCanonTower(BuildingID _buildingID)  {
    switch (_buildingID) {
        case HumanCannonTower: {
            Health = CannonHealth;
            Power = CannonPower;
            Level = CannonLevel;
            AttackDistance = CannonAttackDistance;
            race = "Human";
            break;
        }
        case OrcCannonTower: {
            Health = CannonHealth;
            Power = CannonPower;
            Level = CannonLevel;
            AttackDistance = CannonAttackDistance;
            race = "Orc";
            break;
        }
        case ElfCannonTower: {
            Health = CannonHealth;
            Power = CannonPower;
            Level = CannonLevel;
            AttackDistance = CannonAttackDistance;
            race = "Elf";
            break;
        }
    }
}
void CCanonTower::attack(const CPoint _coordinates) {
    //когда карта будет готова, будем по координатам определять
    //оюбект и obj.Health -= this->power
}