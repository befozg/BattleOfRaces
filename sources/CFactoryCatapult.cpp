//
// Created by dmitry on 15.03.18.
//

#include <CFactoryCatapult.h>

CCatapult* CFactoryCatapult::create(WarriorID _warriorID) {
    switch(_warriorID) {
        case HumanCatapult: {
            CCatapult *Catapult = new CCatapult(HumanCatapult);
            return Catapult;
        }

        case OrcCatapult: {
            CCatapult *Catapult = new CCatapult(OrcCatapult);
            return Catapult;
        }

        case ElfCatapult: {
            CCatapult *Catapult = new CCatapult(ElfCatapult);
            return Catapult;
        }
    }
}