//
// Created by karen on 11.03.18.
//

#ifndef BATTLEOFRACES1_CHUMANTOWNHALL_H
#define BATTLEOFRACES1_CHUMANTOWNHALL_H

#include "CTownHall.h"

class CHumanTownHall : public CTownHall {
public:
    CHumanTownHall(CPoint _coordinates);
    ~CHumanTownHall() = default;

    CPeasant* createPeasant();

private:
};
#endif //BATTLEOFRACES1_CHUMANTOWNHALL_H
