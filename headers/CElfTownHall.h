//
// Created by karen on 11.03.18.
//

#ifndef BATTLEOFRACES1_CELFTOWNHALL_H
#define BATTLEOFRACES1_CELFTOWNHALL_H


#include "CTownHall.h"
#include "CFactoryBuilding.h"

class CElfTownHall : public CTownHall {
public:
    CElfTownHall();
    CElfTownHall(BuildingID _buildingID);
    ~CElfTownHall() = default;

    CWarrior* createPeasant();

private:
};
#endif //BATTLEOFRACES1_CELFTOWNHALL_H
