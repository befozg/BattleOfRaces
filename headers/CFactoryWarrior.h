//
// Created by dmitry on 11.03.18.
//

#ifndef BATTLEOFRACES1_CFACTORYWARRIOR_H
#define BATTLEOFRACES1_CFACTORYWARRIOR_H

#include "CWarrior.h"

enum WarriorID {
    HumanPeasant = 0,
    HumanInfant,
    HumanHorseman,
    HumanArcher,
    HumanWizzard,
    HumanCatapult,

    OrcPeasant,
    OrcInfant,
    OrcHorseman,
    OrcArcher,
    OrcWizzard,
    OrcCatapult,

    ElfPeasant,
    ElfInfant,
    ElfHorseman,
    ElfArcher,
    ElfWizzard,
    ElfCatapult
};

class CFactoryWarrior {
public:
    CFactoryWarrior() = default;
    ~CFactoryWarrior() = default;

    static CWarrior* create(WarriorID _warriorID);

private:

};

#endif //BATTLEOFRACES1_CFACTORYWARRIOR_H
