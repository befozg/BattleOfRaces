//
// Created by dmitry on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYCATAPULT_H
#define BATTLEOFRACES_CFACTORYCATAPULT_H

#include "CFactoryWarrior.h"
#include "CCatapult.h"

class CFactoryCatapult : public CFactoryWarrior {
public:
    CFactoryCatapult() = default;
    ~CFactoryCatapult() = default;

    static CCatapult* create(WarriorID _warriorID);

private:

};

#endif //BATTLEOFRACES_CFACTORYCATAPULT_H
