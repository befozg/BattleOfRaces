//
// Created by dmitry on 11.03.18.
//

#ifndef BATTLEOFRACES1_CFACTORYWARRIOR_H
#define BATTLEOFRACES1_CFACTORYWARRIOR_H

#include "CWarrior.h"

enum WarriorID {
    HumanPeasant,
    HumanInfant,
    HumanHorseman,
    HumanArcher,
    HumanHealer,
    HumanCatapult,

    OrcPeasant,
    OrcInfant,
    OrcHorseman,
    OrcArcher,
    OrcHealer,
    OrcCatapult,

    ElfPeasant,
    ElfInfant,
    ElfHorseman,
    ElfArcher,
    ElfHealer,
    ElfCatapult
};

class CFactoryWarrior {
public:
    CFactoryWarrior() = default;
    ~CFactoryWarrior() = default;

    static CWarrior* create(WarriorID _warriorID, CPoint _coordinates);

private:

};

#endif //BATTLEOFRACES1_CFACTORYWARRIOR_H
