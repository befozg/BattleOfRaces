//
// Created by karen on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYTOWNHALL_H
#define BATTLEOFRACES_CFACTORYTOWNHALL_H

#include "CFactoryBuilding.h"

class CFactoryTownHall : public CFactoryBuilding {
public:
    CFactoryTownHall() = default;
    ~CFactoryTownHall() = default;

    static CFactoryTownHall* create(BuildingID _buildingID);

private:

};
#endif //BATTLEOFRACES_CFACTORYTOWNHALL_H
