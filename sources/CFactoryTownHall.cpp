//
// Created by karen on 15.03.18.
//
#include "CFactoryTownHall.h"
#include "CTownHall.h"

CTownHall* CFactoryTownHall::create(BuildingID _buildingID) {
    switch (_buildingID) {
        case BuildingID::HumanTownHall: {
            CTownHall *HumanTownHall = new CTownHall(_buildingID);
/*            HumanTownHall->setLevel(StartLevel);
            HumanTownHall->setHealth(TownHallHealth + (HumanTownHall->getLevel() - 1) * TownHallLevelHealthK);
            HumanTownHall->setPower(TownHallPower);
            HumanTownHall->setAttackDistance(TownAttackDistance);
            HumanTownHall->setCoordinates(_coordinates);
*/            return HumanTownHall;
        }

        case BuildingID::OrcTownHall: {
            CTownHall *OrcTownHall = new CTownHall(_buildingID);
/*            OrcTownHall->setLevel(StartLevel);
            OrcTownHall->setHealth(TownHallHealth + (OrcTownHall->getLevel() - 1) * TownHallLevelHealthK);
            OrcTownHall->setPower(TownHallPower);
            OrcTownHall->setAttackDistance(TownAttackDistance);
            OrcTownHall->setCoordinates(_coordinates);
*/            return OrcTownHall;
        }

        case BuildingID::ElfTownHall: {
            CTownHall *ElfTownHall = new CTownHall(_buildingID);
/*            ElfTownHall->setLevel(StartLevel);
            ElfTownHall->setHealth(TownHallHealth + (ElfTownHall->getLevel() - 1) * TownHallLevelHealthK);
            ElfTownHall->setPower(TownHallPower);
            ElfTownHall->setAttackDistance(TownAttackDistance);
            ElfTownHall->setCoordinates(_coordinates);
*/            return ElfTownHall;
        }
    }
}