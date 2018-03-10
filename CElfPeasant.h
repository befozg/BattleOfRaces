//
// Created by dmitry on 11.03.18.
//

#ifndef BATTLEOFRACES_CELFPEASANT_H
#define BATTLEOFRACES_CELFPEASANT_H

#include "CPeasant.h"

class CElfPeasant : public CPeasant {
public:
    CElfPeasant() = default;
    ~CElfPeasant() = default;

    virtual void build(CPoint _coordinates); // [ADD] 1-st parameter is CBuildingFactory

private:

};

#endif //BATTLEOFRACES_CELFPEASANT_H
