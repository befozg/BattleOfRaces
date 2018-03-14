//
// Created by dmitry on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYHORSEMAN_H
#define BATTLEOFRACES_CFACTORYHORSEMAN_H

#include "CFactoryWarrior.h"
#include "CHorseman.h"

class CFactoryHorseman : public CFactoryWarrior {
public:
    CFactoryHorseman() = default;
    ~CFactoryHorseman() = default;

    static CHorseman* create(WarriorID _warriorID);

private:

};

#endif //BATTLEOFRACES_CFACTORYHORSEMAN_H
