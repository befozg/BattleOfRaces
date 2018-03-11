//
// Created by dmitry on 11.03.18.
//

#include "CFactoryWarrior.h"
#include "CPeasant.h"

const int PeasantHealth = 100;
const int LevelHealthK = 20;

CWarrior* CFactoryWarrior::create(WarriorID _warriorID, CPoint _coordinates) {
    switch (_warriorID) {
        case WarriorID::HumanPeasant:
            CPeasant* HumanPeasant = new CPeasant();
            HumanPeasant->setLevel(1);
            HumanPeasant->setHealth(PeasantHealth + (HumanPeasant->getLevel() - 1) * LevelHealthK);
            HumanPeasant->setPower(10);
            HumanPeasant->setSpeed(1);
            HumanPeasant->setAttackDistance(1);
            HumanPeasant->setCoordinates(_coordinates);
            break;
    }
}
