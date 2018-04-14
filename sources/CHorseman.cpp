//
// Created by dmitry on 11.03.18.
//

#include "CHorseman.h"

const int StartLevel = 1;

const int HorsemanSpeed = 2;
const int HorsemanAttackDistance = 1;
const int HorsemanHealth = 150;
const int HorsemanPower = 40;

CHorseman::CHorseman(WarriorID _warriorID) {
    switch (_warriorID) {
        case HumanHorseman: {
            Health = HorsemanHealth;
            Power = HorsemanPower;
            Speed = HorsemanSpeed;
            Level = StartLevel;
            AttackDistance = HorsemanAttackDistance;
            race = "Human";
            break;
        }

        case OrcHorseman: {
            Health = HorsemanHealth;
            Power = HorsemanPower;
            Speed = HorsemanSpeed;
            Level = StartLevel;
            AttackDistance = HorsemanAttackDistance;
            race = "Orc";
            break;
        }

        case ElfHorseman: {
            Health = HorsemanHealth;
            Power = HorsemanPower;
            Speed = HorsemanSpeed;
            Level = StartLevel;
            AttackDistance = HorsemanAttackDistance;
            race = "Elf";
            break;
        }
    }
}