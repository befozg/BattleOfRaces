//
// Created by karen on 10.03.18.
//

#ifndef BATTLEOFRACES_CTOWNHALL_H
#define BATTLEOFRACES_CTOWNHALL_H

#include "CBuilding.h"
#include "CWarrior.h"
#include "CFactoryBuilding.h"
class CTownHall : public CBuilding {
public:
    CTownHall() = default;
    CTownHall(BuildingID _buildingID);
    ~CTownHall() = default;

    CWarrior* createPeasant();

private:

};
#endif //BATTLEOFRACES_CTOWNHALL_H
