//
// Created by dmitry on 15.03.18.
//

#include <CFactoryWizzard.h>

CWizzard* CFactoryWizzard::create(WarriorID _warriorID) {
    switch(_warriorID) {
        case HumanWizzard: {
            CWizzard *Wizzard = new CWizzard(HumanWizzard);
            return Wizzard;
        }

        case OrcWizzard: {
            CWizzard *Wizzard = new CWizzard(OrcWizzard);
            return Wizzard;
        }

        case ElfWizzard: {
            CWizzard *Wizzard = new CWizzard(ElfWizzard);
            return Wizzard;
        }
    }
}

