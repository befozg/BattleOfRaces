//
// Created by karen on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYTOWEROFWIZARD_H
#define BATTLEOFRACES_CFACTORYTOWEROFWIZARD_H


#include "CFactoryBuilding.h"
#include "CTowerOfWizard.h"

class CFactoryTowerOfWizard : public CFactoryBuilding {
public:
    CFactoryTowerOfWizard() = default;
    ~CFactoryTowerOfWizard() = default;

    static CTowerOfWizard* create(BuildingID _buildingID);

private:

};

#endif //BATTLEOFRACES_CFACTORYTOWEROFWIZARD_H
