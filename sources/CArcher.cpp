//
// Created by dmitry on 11.03.18.
//

#include "CArcher.h"

const int StartLevel = 1;

const int ArcherSpeed = 1;
const int ArcherAttackDistance = 3;
const int ArcherHealth = 100;
const int ArcherPower = 30;

CArcher::CArcher(WarriorID _warriorID) {
    switch (_warriorID) {
        case HumanArcher: {
            Health = ArcherHealth;
            Power = ArcherPower;
            Speed = ArcherSpeed;
            Level = StartLevel;
            AttackDistance = ArcherAttackDistance;
            break;
        }

        case OrcArcher: {
            Health = ArcherHealth;
            Power = ArcherPower;
            Speed = ArcherSpeed;
            Level = StartLevel;
            AttackDistance = ArcherAttackDistance;
            break;
        }

        case ElfArcher: {
            Health = ArcherHealth;
            Power = ArcherPower;
            Speed = ArcherSpeed;
            Level = StartLevel;
            AttackDistance = ArcherAttackDistance;
            break;
        }
    }
}