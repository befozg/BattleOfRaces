//
// Created by dmitry on 15.03.18.
//

#include <CFactoryInfant.h>

CInfant* CFactoryInfant::create(WarriorID _warriorID) {
    switch(_warriorID) {
        case HumanInfant: {
            CInfant *Infant = new CInfant(HumanInfant);
            return Infant;
        }

        case OrcInfant: {
            CInfant *Infant = new CInfant(OrcInfant);
            return Infant;
        }

        case ElfInfant: {
            CInfant *Infant = new CInfant(ElfInfant);
            return Infant;
        }
    }
}

