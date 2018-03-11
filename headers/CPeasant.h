//
// Created by dmitry on 10.03.18.
//

#ifndef BATTLEOFRACES_CPEASANT_H
#define BATTLEOFRACES_CPEASANT_H

#include "CWarrior.h"

class CPeasant : public CWarrior {
public:
    CPeasant();
    ~CPeasant() = default;

    void harvestWood();
    void harvestMine();
    virtual void build() = 0;

protected:

};

#endif //BATTLEOFRACES_CPEASANT_H
