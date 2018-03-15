//
// Created by karen on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYTOWNHALL_H
#define BATTLEOFRACES_CFACTORYTOWNHALL_H

#include "CFactoryBuilding.h"
#include "CTownHall.h"
class CFactoryTownHall : public CFactoryBuilding {
public:
    CFactoryTownHall() = default;
    ~CFactoryTownHall() = default;

    static CTownHall* create(BuildingID _buildingID);

private:

};
#endif //BATTLEOFRACES_CFACTORYTOWNHALL_H
