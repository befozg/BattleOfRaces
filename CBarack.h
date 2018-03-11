//
// Created by karen on 11.03.18.
//

#ifndef BATTLEOFRACES1_CBARACK_H
#define BATTLEOFRACES1_CBARACK_H

#include "CBuilding.h"
#include "CWarrior.h"

class CBarack : public CBuilding
{
public:
    CBarack() = default;
    ~CBarack() = default;

    virtual CWarrior* create() = 0;

private:

};
#endif //BATTLEOFRACES1_CBARACK_H
