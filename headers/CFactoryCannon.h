//
// Created by karen on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYCANNON_H
#define BATTLEOFRACES_CFACTORYCANNON_H

//
// Created by karen on 15.03.18.
//
#include "CFactoryBuilding.h"
#include "CCannonTower.h"

class CFactoryCannon : public CFactoryBuilding {
public:
    CFactoryCannon() = default;
    ~CFactoryCannon() = default;

    static CCanonTower* create(BuildingID _buildingID);

private:

};
#endif //BATTLEOFRACES_CFACTORYCANNON_H
