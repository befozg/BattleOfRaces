//
// Created by dmitry on 11.03.18.
//

#include "CWizzard.h"

const int StartLevel = 1;

const int WizzardSpeed = 1;
const int WizzardAttackDistance = 1;
const int WizzardHealth = 100;
const int WizzardPower = 10;

void CWizzard::heal(CPoint _coordinates) {
    // heal the object by coords

}

CWizzard::CWizzard(WarriorID _warriorID) {
    switch (_warriorID) {
        case HumanWizzard: {
            Health = WizzardHealth;
            Power = WizzardPower;
            Speed = WizzardSpeed;
            Level = StartLevel;
            AttackDistance = WizzardAttackDistance;
            break;
        }

        case OrcWizzard: {
            Health = WizzardHealth;
            Power = WizzardPower;
            Speed = WizzardSpeed;
            Level = StartLevel;
            AttackDistance = WizzardAttackDistance;
            break;
        }

        case ElfWizzard: {
            Health = WizzardHealth;
            Power = WizzardPower;
            Speed = WizzardSpeed;
            Level = StartLevel;
            AttackDistance = WizzardAttackDistance;
            break;
        }
    }
}