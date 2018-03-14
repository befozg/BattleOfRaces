//
// Created by dmitry on 11.03.18.
//

#include "CInfant.h"

const int StartLevel = 1;

const int InfantSpeed = 1;
const int InfantAttackDistance = 1;

const int HumanInfantPower = 50;
const int HumanInfantHealth = 150;

const int OrcInfantPower = 75;
const int OrcInfantHealth = 200;

const int ElfInfantPower = 50;
const int ElfInfantHealth = 200;

CInfant::CInfant(WarriorID _warriorID) {
    switch (_warriorID) {
        case HumanInfant: {
            Health = HumanInfantHealth;
            Power = HumanInfantPower;
            Speed = InfantSpeed;
            Level = StartLevel;
            AttackDistance = InfantAttackDistance;
            break;
        }

        case OrcInfant: {
            Health = OrcInfantHealth;
            Power = OrcInfantPower;
            Speed = InfantSpeed;
            Level = StartLevel;
            AttackDistance = InfantAttackDistance;
            break;
        }

        case ElfInfant: {
            Health = ElfInfantHealth;
            Power = ElfInfantPower;
            Speed = InfantSpeed;
            Level = StartLevel;
            AttackDistance = InfantAttackDistance;
            break;
        }
    }
}