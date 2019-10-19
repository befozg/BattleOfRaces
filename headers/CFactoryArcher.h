//
// Created by dmitry on 15.03.18.
//

#ifndef BATTLEOFRACES_CFACTORYARCHER_H
#define BATTLEOFRACES_CFACTORYARCHER_H

#include "CFactoryWarrior.h"
#include "CArcher.h"

class CFactoryArcher : public CFactoryWarrior {
public:
    CFactoryArcher() = default;
    ~CFactoryArcher() = default;

    static CArcher* create(WarriorID _warriorID);

private:

};

#endif //BATTLEOFRACES_CFACTORYARCHER_H
