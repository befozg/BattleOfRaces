//
// Created by karen on 10.03.18.
//

#ifndef BATTLEOFRACES_FARM_H
#define BATTLEOFRACES_FARM_H

#include "CBuilding.h"
#include "CFactoryBuilding.h"

class CFarm : public CBuilding {
public:
    CFarm() = default;
    CFarm(BuildingID _buildingID);
    ~CFarm() = default;

private:
};
#endif //BATTLEOFRACES_FARM_H
