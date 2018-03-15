//
// Created by dmitry on 11.03.18.
//

#ifndef BATTLEOFRACES1_CHORSEMAN_H
#define BATTLEOFRACES1_CHORSEMAN_H

#include "CWarrior.h"
#include "CFactoryWarrior.h"

class CHorseman : public CWarrior {
public:
    CHorseman() = default;
    CHorseman(WarriorID _warriorID);
    ~CHorseman() = default;

private:

};

#endif //BATTLEOFRACES1_CHORSEMAN_H
