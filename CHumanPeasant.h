//
// Created by dmitry on 10.03.18.
//

#ifndef BATTLEOFRACES_CHUMANPEASANT_H
#define BATTLEOFRACES_CHUMANPEASANT_H

#include "CPeasant.h"
#include "CBuilding.h"

class CHumanPeasant : public CPeasant {
public:
    CHumanPeasant() = default;
    ~CHumanPeasant() = default;

    virtual void build(CPoint _coordinates); // [ADD] 1-st parameter is CBuildingFactory

private:

};

#endif //BATTLEOFRACES_CHUMANPEASANT_H
