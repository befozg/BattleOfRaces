//
// Created by karen on 15.03.18.
//
#pragma once

#include "CFactoryBuilding.h"
#include "CTownHall.h"

class CFactoryTownHall : public CFactoryBuilding {
public:
    CFactoryTownHall() = default;
    ~CFactoryTownHall() = default;

    static CTownHall* create(BuildingID _buildingID);

private:

};