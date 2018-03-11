//
// Created by dmitry on 11.03.18.
//

#include <CInfant.h>
#include "CFactoryWarrior.h"
#include "CPeasant.h"

const int StartLevel = 1;

const int PeasantSpeed = 1;
const int PeasantHealth = 100;
const int PeasantAttackDistance = 1;
const int PeasantLevelHealthK = 20;
const int PeasantPower = 10;

const int InfantSpeed = 1;
const int InfantAttackDistance = 1;
const int InfantLevelHealthK = 50;

const int HumanInfantPower = 50;
const int HumanInfantHealth = 150;

const int OrcInfantPower = 75;
const int OrcInfantHealth = 200;

const int ElfInfantPower = 50;
const int ElfInfantHealth = 200;

CWarrior* CFactoryWarrior::create(WarriorID _warriorID, CPoint _coordinates) {
    switch (_warriorID) {
        case WarriorID::HumanPeasant: {
            CPeasant *HumanPeasant = new CPeasant;
            HumanPeasant->setLevel(StartLevel);
            HumanPeasant->setHealth(PeasantHealth + (HumanPeasant->getLevel() - 1) * PeasantLevelHealthK);
            HumanPeasant->setPower(PeasantPower);
            HumanPeasant->setSpeed(PeasantSpeed);
            HumanPeasant->setAttackDistance(PeasantAttackDistance);
            HumanPeasant->setCoordinates(_coordinates);
            return HumanPeasant;
        }

        case WarriorID::OrcPeasant: {
            CPeasant *OrcPeasant = new CPeasant;
            OrcPeasant->setLevel(StartLevel);
            OrcPeasant->setHealth(PeasantHealth + (OrcPeasant->getLevel() - 1) * PeasantLevelHealthK);
            OrcPeasant->setPower(PeasantPower);
            OrcPeasant->setSpeed(PeasantSpeed);
            OrcPeasant->setAttackDistance(PeasantAttackDistance);
            OrcPeasant->setCoordinates(_coordinates);
            return OrcPeasant;
        }

        case WarriorID::ElfPeasant: {
            CPeasant *ElfPeasant = new CPeasant;
            ElfPeasant->setLevel(StartLevel);
            ElfPeasant->setHealth(PeasantHealth + (ElfPeasant->getLevel() - 1) * PeasantLevelHealthK);
            ElfPeasant->setPower(PeasantPower);
            ElfPeasant->setSpeed(PeasantSpeed);
            ElfPeasant->setAttackDistance(PeasantAttackDistance);
            ElfPeasant->setCoordinates(_coordinates);
            return ElfPeasant;
        }

        case WarriorID::HumanInfant: {
            CInfant *HumanInfant = new CInfant;
            HumanInfant->setLevel(StartLevel);
            HumanInfant->setSpeed(InfantSpeed);
            HumanInfant->setAttackDistance(InfantAttackDistance);
            HumanInfant->setPower(HumanInfantPower);
            HumanInfant->setHealth(HumanInfantHealth + (HumanInfant->getLevel() - 1) * InfantLevelHealthK);
            HumanInfant->setCoordinates(_coordinates);
            return HumanInfant;
        }

        case WarriorID::OrcInfant: {
            CInfant *OrcInfant = new CInfant;
            OrcInfant->setLevel(StartLevel);
            OrcInfant->setSpeed(InfantSpeed);
            OrcInfant->setAttackDistance(InfantAttackDistance);
            OrcInfant->setPower(OrcInfantPower);
            OrcInfant->setHealth(OrcInfantHealth + (OrcInfant->getLevel() - 1) * InfantLevelHealthK);
            OrcInfant->setCoordinates(_coordinates);
            return OrcInfant;
        }

        case WarriorID::ElfInfant: {
            CInfant *ElfInfant = new CInfant;
            ElfInfant->setLevel(StartLevel);
            ElfInfant->setSpeed(InfantSpeed);
            ElfInfant->setAttackDistance(InfantAttackDistance);
            ElfInfant->setPower(ElfInfantPower);
            ElfInfant->setHealth(ElfInfantHealth + (ElfInfant->getLevel() - 1) * InfantLevelHealthK);
            ElfInfant->setCoordinates(_coordinates);
            return ElfInfant;
        }
    }

}
