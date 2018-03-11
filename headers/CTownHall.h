//
// Created by karen on 10.03.18.
//

#ifndef BATTLEOFRACES_CTOWNHALL_H
#define BATTLEOFRACES_CTOWNHALL_H

#include "CBuilding.h"
#include "CPeasant.h"

class CTownHall : public CBuilding {
public:
    CTownHall() = default;
    ~CTownHall() = default;

    virtual CPeasant* createPeasant() = 0;

private:

};
#endif //BATTLEOFRACES_CTOWNHALL_H
