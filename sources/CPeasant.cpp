//
// Created by dmitry on 10.03.18.
//

#include "CPeasant.h"

const int StartLevel = 1;

const int PeasantSpeed = 1;
const int PeasantHealth = 100;
const int PeasantAttackDistance = 1;
const int PeasantPower = 10;

CPeasant::CPeasant(WarriorID _warriorID) {
    switch (_warriorID) {
        case HumanPeasant: {
            Health = PeasantHealth;
            Power = PeasantPower;
            Speed = PeasantSpeed;
            Level = StartLevel;
            AttackDistance = PeasantAttackDistance;
            break;
        }

        case OrcPeasant: {
            Health = PeasantHealth;
            Power = PeasantPower;
            Speed = PeasantSpeed;
            Level = StartLevel;
            AttackDistance = PeasantAttackDistance;
            break;
        }

        case ElfPeasant: {
            Health = PeasantHealth;
            Power = PeasantPower;
            Speed = PeasantSpeed;
            Level = StartLevel;
            AttackDistance = PeasantAttackDistance;
            break;
        }
    }
}

void CPeasant::harvestWood() {
    // за один ход добавляем один "лес" в переменную Wood

}

void CPeasant::harvestMine() {
    // за один ход добавляем одно "золото" в переменную Gold

}

void CPeasant::build() {
    // ...
}