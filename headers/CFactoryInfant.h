//
// Created by dmitry on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYINFANT_H
#define BATTLEOFRACES_CFACTORYINFANT_H

#include "CFactoryWarrior.h"
#include "CInfant.h"

class CFactoryInfant : public CFactoryWarrior {
public:
    CFactoryInfant() = default;
    ~CFactoryInfant() = default;

    static CInfant* create(WarriorID _warriorID);

private:

};


#endif //BATTLEOFRACES_CFACTORYINFANT_H
