//
// Created by dmitry on 15.03.18.
//

#include <CFactoryArcher.h>

CArcher* CFactoryArcher::create(WarriorID _warriorID) {
    switch(_warriorID) {
        case HumanArcher: {
            CArcher *Archer = new CArcher(HumanArcher);
            return Archer;
        }

        case OrcArcher: {
            CArcher *Archer = new CArcher(OrcArcher);
            return Archer;
        }

        case ElfArcher: {
            CArcher *Archer = new CArcher(ElfArcher);
            return Archer;
        }
    }
}