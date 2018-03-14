//
// Created by dmitry on 15.03.18.
//

#include <CFactoryHorseman.h>

CHorseman* CFactoryHorseman::create(WarriorID _warriorID) {
    switch(_warriorID) {
        case HumanHorseman: {
            CHorseman *Horseman = new CHorseman(HumanHorseman);
            return Horseman;
        }

        case OrcHorseman: {
            CHorseman *Horseman = new CHorseman(OrcHorseman);
            return Horseman;
        }

        case ElfHorseman: {
            CHorseman *Horseman = new CHorseman(ElfHorseman);
            return Horseman;
        }
    }
}
