//
// Created by karen on 11.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYBUILDING_H
#define BATTLEOFRACES_CFACTORYBUILDING_H


#include "CBuilding.h"

enum BuildingID {
    HumanTownHall,
    HumanFarm,
    HumanBarack,
    HumanTowerOfWizard,
    HumanCannonTower,

    OrcTownHall,
    OrcFarm,
    OrcBarack,
    OrcTowerOfWizard,
    OrcCannonTower,

    ElfTownHall,
    ElfFarm,
    ElfBarack,
    ElfTowerOfWizard,
    ElfCannonTower,
};

class CFactoryBuilding {
public:
    CFactoryBuilding() = default;
    ~CFactoryBuilding() = default;

    static CBuilding* create(BuildingID _buildingID);

private:

};

#endif //BATTLEOFRACES_CFACTORYBUILDING_H
