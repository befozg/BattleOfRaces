//
// Created by karen on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYTOWNHALL_H
#define BATTLEOFRACES_CFACTORYTOWNHALL_H

#include "CFactoryBuilding.h"
#include "CBarack.h"

class CFactoryBarack : public CFactoryBuilding {
public:
    CFactoryBarack() = default;
//    ~CFactoryBarack() = default;
    ~CFactoryBarack() = default;

    static CBarack* create(BuildingID _buildingID);

private:

};
#endif //BATTLEOFRACES_CFACTORYTOWNHALL_H

