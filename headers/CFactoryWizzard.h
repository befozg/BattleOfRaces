//
// Created by dmitry on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYWIZZARD_H
#define BATTLEOFRACES_CFACTORYWIZZARD_H

#include "CFactoryWarrior.h"
#include "CWizzard.h"

class CFactoryWizzard : public CFactoryWarrior {
public:
    CFactoryWizzard() = default;
    ~CFactoryWizzard() = default;

    static CWizzard* create(WarriorID _warriorID);

private:

};

#endif //BATTLEOFRACES_CFACTORYWIZZARD_H
