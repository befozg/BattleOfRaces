//
// Created by dmitry on 11.03.18.
//

#ifndef BATTLEOFRACES_CORCPEASANT_H
#define BATTLEOFRACES_CORCPEASANT_H

#include "CPeasant.h"

class COrcPeasant : public CPeasant {
public:
    COrcPeasant() = default;
    ~COrcPeasant() = default;

    virtual void build(CPoint _coordinates); // [ADD] 1-st parameter is CBuildingFactory

private:

};

#endif //BATTLEOFRACES_CORCPEASANT_H
