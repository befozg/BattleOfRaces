//
// Created by karen on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYBARACK_H
#define BATTLEOFRACES_CFACTORYBARACK_H

//
// Created by karen on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYTOWNHALL_H
#define BATTLEOFRACES_CFACTORYTOWNHALL_H

#include "CFactoryBuilding.h"

class CFactoryBarack : public CFactoryBuilding {
public:
    CFactoryBarack() = default;
    ~CFactoryBarack() = default;

    static CFactoryBarack* create(BuildingID _buildingID);

private:

};
#endif //BATTLEOFRACES_CFACTORYTOWNHALL_H

#endif //BATTLEOFRACES_CFACTORYBARACK_H
