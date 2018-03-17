//
// Created by karen on 15.03.18.
//
#include "CFactoryTownHall.h"

CTownHall* CFactoryTownHall::create(BuildingID _buildingID) {
    switch (_buildingID) {
        case BuildingID::HumanTownHall: {
            CTownHall *HumanTownHall = new CTownHall(_buildingID);
            return HumanTownHall;
        }

        case BuildingID::OrcTownHall: {
            CTownHall *OrcTownHall = new CTownHall(_buildingID);
            return OrcTownHall;
        }

        case BuildingID::ElfTownHall: {
            CTownHall *ElfTownHall = new CTownHall(_buildingID);
            return ElfTownHall;
        }
    }
}