//
// Created by dmitry on 11.03.18.
//

#ifndef BATTLEOFRACES_CINFANT_H
#define BATTLEOFRACES_CINFANT_H

#include "CWarrior.h"
#include "CFactoryWarrior.h"

class CInfant : public CWarrior {
public:
    CInfant() = default;
    CInfant(WarriorID _warriorID);
    ~CInfant() = default;

private:

};

#endif //BATTLEOFRACES_CINFANT_H
