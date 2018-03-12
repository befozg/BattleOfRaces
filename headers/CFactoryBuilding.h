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

class CFactoryWarrior {
public:
    CFactoryWarrior() = default;
    ~CFactoryWarrior() = default;

    static CBuilding* create(BuildingID _buildingID, CPoint _coordinates);

private:

};

#endif //BATTLEOFRACES_CFACTORYBUILDING_H
