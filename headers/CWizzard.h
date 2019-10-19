//
// Created by dmitry on 11.03.18.
//

#ifndef BATTLEOFRACES1_CWIZZARD_H
#define BATTLEOFRACES1_CWIZZARD_H

#include "CWarrior.h"
#include "CFactoryWarrior.h"

class CWizzard : public CWarrior {
public:
    CWizzard() = default;
    CWizzard(WarriorID _warriorID);
    ~CWizzard() = default;

    void heal(CPoint _coordinates);

private:

};

#endif //BATTLEOFRACES1_CWIZZARD_H
