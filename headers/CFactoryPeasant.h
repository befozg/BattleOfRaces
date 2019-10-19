//
// Created by dmitry on 14.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYPEASANT_H
#define BATTLEOFRACES_CFACTORYPEASANT_H

#include "CFactoryWarrior.h"
#include "CPeasant.h"

class CFactoryPeasant : public CFactoryWarrior {
public:
    CFactoryPeasant() = default;
    ~CFactoryPeasant() = default;

    static CPeasant* create(WarriorID _warriorID);

private:

};

#endif //BATTLEOFRACES_CFACTORYPEASANT_H
