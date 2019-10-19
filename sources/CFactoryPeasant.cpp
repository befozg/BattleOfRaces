//
// Created by dmitry on 15.03.18.
//

#include <CFactoryPeasant.h>

CPeasant* CFactoryPeasant::create(WarriorID _warriorID) {
    switch(_warriorID) {
        case HumanPeasant: {
            CPeasant *Peasant = new CPeasant(HumanPeasant);
            return Peasant;
        }

        case OrcPeasant: {
            CPeasant *Peasant = new CPeasant(OrcPeasant);
            return Peasant;
        }

        case ElfPeasant: {
            CPeasant *Peasant = new CPeasant(ElfPeasant);
            return Peasant;
        }
    }
}
