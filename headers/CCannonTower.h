//
// Created by karen on 11.03.18.
//

#ifndef BATTLEOFRACES1_CCANNONTOWER_H
#define BATTLEOFRACES1_CCANNONTOWER_H

#include "CBuilding.h"
#include "CFactoryBuilding.h"

class CCanonTower : public CBuilding
{
public:
    CCanonTower();
    CCanonTower(BuildingID _buildingID);
    ~CCanonTower() = default;

    void attack(const CPoint _coordinates);
private:
};
#endif //BATTLEOFRACES1_CCANNONTOWER_H
