//
// Created by dmitry on 11.03.18.
//

#ifndef BATTLEOFRACES1_CARCHER_H
#define BATTLEOFRACES1_CARCHER_H

#include "CWarrior.h"
#include "CFactoryWarrior.h"

class CArcher : public CWarrior {
public:
    CArcher() = default;
    CArcher(WarriorID _warriorID);
    ~CArcher() = default;

private:

};

#endif //BATTLEOFRACES1_CARCHER_H
