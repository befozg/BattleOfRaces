//
// Created by karen on 11.03.18.
//

#ifndef BATTLEOFRACES1_TOWEROFWIZARD_H
#define BATTLEOFRACES1_TOWEROFWIZARD_H

#include "CBuilding.h"

class CTowerOfWizard : public CBuilding
{
public:
    CTowerOfWizard() = default;
    ~CTowerOfWizard() = default;

    void attack(const CPoint _coordinates);

private:

};
#endif //BATTLEOFRACES1_TOWEROFWIZARD_H
