//
// Created by karen on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYFARM_H
#define BATTLEOFRACES_CFACTORYFARM_H

#include "CFactoryBuilding.h"
class CFactoryFarm : public CFactoryBuilding {
public:
    CFactoryFarm() = default;
    ~CFactoryFarm() = default;

    static CFactoryFarm* create(BuildingID _buildingID);

private:

};
#endif //BATTLEOFRACES_CFACTORYFARM_H

