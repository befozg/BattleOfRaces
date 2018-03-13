//
// Created by dmitry on 11.03.18.
//

#include <CInfant.h>
#include <CWizzard.h>
#include <CCatapult.h>
#include "CFactoryWarrior.h"
#include "CPeasant.h"
#include "CArcher.h"
#include "CHorseman.h"

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

const int ArcherSpeed = 1;
const int ArcherAttackDistance = 3;
const int ArcherLevelHealthK = 20;
const int ArcherHealth = 100;
const int ArcherPower = 30;

const int HorsemanSpeed = 2;
const int HorsemanAttackDistance = 1;
const int HorsemanLevelHealthK = 30;
const int HorsemanHealth = 150;
const int HorsemanPower = 40;

const int WizzardSpeed = 1;
const int WizzardAttackDistance = 1;
const int WizzardLevelHealthK = 20;
const int WizzardHealth = 100;
const int WizzardPower = 10;

const int CatapultSpeed = 2;
const int CatapultAttackDistance = 2;
const int CatapultLevelHealthK = 40;
const int CatapultHealth = 300;
const int CatapultPower = 150;

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

        case WarriorID::HumanArcher: {
            CArcher *HumanArcher = new CArcher;
            HumanArcher->setLevel(StartLevel);
            HumanArcher->setSpeed(ArcherSpeed);
            HumanArcher->setAttackDistance(ArcherAttackDistance);
            HumanArcher->setHealth(ArcherHealth + (HumanArcher->getLevel() - 1) * ArcherLevelHealthK);
            HumanArcher->setPower(ArcherPower);
            HumanArcher->setCoordinates(_coordinates);
            return HumanArcher;
        }

        case WarriorID::OrcArcher: {
            CArcher *OrcArcher = new CArcher;
            OrcArcher->setLevel(StartLevel);
            OrcArcher->setSpeed(ArcherSpeed);
            OrcArcher->setAttackDistance(ArcherAttackDistance);
            OrcArcher->setHealth(ArcherHealth + (OrcArcher->getLevel() - 1) * ArcherLevelHealthK);
            OrcArcher->setPower(ArcherPower);
            OrcArcher->setCoordinates(_coordinates);
            return OrcArcher;
        }

        case WarriorID::ElfArcher: {
            CArcher *ElfArcher = new CArcher;
            ElfArcher->setLevel(StartLevel);
            ElfArcher->setSpeed(ArcherSpeed);
            ElfArcher->setAttackDistance(ArcherAttackDistance);
            ElfArcher->setHealth(ArcherHealth + (ElfArcher->getLevel() - 1) * ArcherLevelHealthK);
            ElfArcher->setPower(ArcherPower);
            ElfArcher->setCoordinates(_coordinates);
            return ElfArcher;
        }

        case WarriorID::HumanHorseman: {
            CHorseman *HumanHorseman = new CHorseman;
            HumanHorseman->setLevel(StartLevel);
            HumanHorseman->setSpeed(HorsemanSpeed);
            HumanHorseman->setAttackDistance(HorsemanAttackDistance);
            HumanHorseman->setHealth(HorsemanHealth + (HumanHorseman->getLevel() - 1) * HorsemanLevelHealthK);
            HumanHorseman->setPower(HorsemanPower);
            HumanHorseman->setCoordinates(_coordinates);
            return HumanHorseman;
        }

        case WarriorID::OrcHorseman: {
            CHorseman *OrcHorseman = new CHorseman;
            OrcHorseman->setLevel(StartLevel);
            OrcHorseman->setSpeed(HorsemanSpeed);
            OrcHorseman->setAttackDistance(HorsemanAttackDistance);
            OrcHorseman->setHealth(HorsemanHealth + (OrcHorseman->getLevel() - 1) * HorsemanLevelHealthK);
            OrcHorseman->setPower(HorsemanPower);
            OrcHorseman->setCoordinates(_coordinates);
            return OrcHorseman;
        }

        case WarriorID::ElfHorseman: {
            CHorseman *ElfHorseman = new CHorseman;
            ElfHorseman->setLevel(StartLevel);
            ElfHorseman->setSpeed(HorsemanSpeed);
            ElfHorseman->setAttackDistance(HorsemanAttackDistance);
            ElfHorseman->setHealth(HorsemanHealth + (ElfHorseman->getLevel() - 1) * HorsemanLevelHealthK);
            ElfHorseman->setPower(HorsemanPower);
            ElfHorseman->setCoordinates(_coordinates);
            return ElfHorseman;
        }

        case WarriorID::HumanWizzard: {
            CWizzard *HumanWizzard = new CWizzard;
            HumanWizzard->setLevel(StartLevel);
            HumanWizzard->setSpeed(WizzardSpeed);
            HumanWizzard->setAttackDistance(WizzardAttackDistance);
            HumanWizzard->setHealth(WizzardHealth + (HumanWizzard->getLevel() - 1) * WizzardLevelHealthK);
            HumanWizzard->setPower(WizzardPower);
            HumanWizzard->setCoordinates(_coordinates);
            return HumanWizzard;
        }

        case WarriorID::OrcWizzard: {
            CWizzard *OrcWizzard = new CWizzard;
            OrcWizzard->setLevel(StartLevel);
            OrcWizzard->setSpeed(WizzardSpeed);
            OrcWizzard->setAttackDistance(WizzardAttackDistance);
            OrcWizzard->setHealth(WizzardHealth + (OrcWizzard->getLevel() - 1) * WizzardLevelHealthK);
            OrcWizzard->setPower(WizzardPower);
            OrcWizzard->setCoordinates(_coordinates);
            return OrcWizzard;
        }

        case WarriorID::ElfWizzard: {
            CWizzard *ElfWizzard = new CWizzard;
            ElfWizzard->setLevel(StartLevel);
            ElfWizzard->setSpeed(WizzardSpeed);
            ElfWizzard->setAttackDistance(WizzardAttackDistance);
            ElfWizzard->setHealth(WizzardHealth + (ElfWizzard->getLevel() - 1) * WizzardLevelHealthK);
            ElfWizzard->setPower(WizzardPower);
            ElfWizzard->setCoordinates(_coordinates);
            return ElfWizzard;
        }

        case WarriorID::HumanCatapult: {
            CCatapult *HumanCatapult = new CCatapult;
            HumanCatapult->setLevel(StartLevel);
            HumanCatapult->setSpeed(CatapultSpeed);
            HumanCatapult->setAttackDistance(CatapultAttackDistance);
            HumanCatapult->setHealth(CatapultHealth + (HumanCatapult->getLevel() - 1) * CatapultLevelHealthK);
            HumanCatapult->setPower(CatapultPower);
            HumanCatapult->setCoordinates(_coordinates);
            return HumanCatapult;
        }

        case WarriorID::OrcCatapult: {
            CCatapult *OrcCatapult = new CCatapult;
            OrcCatapult->setLevel(StartLevel);
            OrcCatapult->setSpeed(CatapultSpeed);
            OrcCatapult->setAttackDistance(CatapultAttackDistance);
            OrcCatapult->setHealth(CatapultHealth + (OrcCatapult->getLevel() - 1) * CatapultLevelHealthK);
            OrcCatapult->setPower(CatapultPower);
            OrcCatapult->setCoordinates(_coordinates);
            return OrcCatapult;
        }

        case WarriorID::ElfCatapult: {
            CCatapult *ElfCatapult = new CCatapult;
            ElfCatapult->setLevel(StartLevel);
            ElfCatapult->setSpeed(CatapultSpeed);
            ElfCatapult->setAttackDistance(CatapultAttackDistance);
            ElfCatapult->setHealth(CatapultHealth + (ElfCatapult->getLevel() - 1) * CatapultLevelHealthK);
            ElfCatapult->setPower(CatapultPower);
            ElfCatapult->setCoordinates(_coordinates);
            return ElfCatapult;
        }
    }

}
