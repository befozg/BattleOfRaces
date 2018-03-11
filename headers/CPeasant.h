//
// Created by dmitry on 10.03.18.
//

#ifndef BATTLEOFRACES_CPEASANT_H
#define BATTLEOFRACES_CPEASANT_H

#include "CWarrior.h"

class CPeasant : public CWarrior {
public:
    CPeasant() = default;
    ~CPeasant() = default;

    void harvestWood();
    void harvestMine();
    virtual void build();

private:

};

#endif //BATTLEOFRACES_CPEASANT_H
