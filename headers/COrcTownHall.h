//
// Created by karen on 11.03.18.
//

#ifndef BATTLEOFRACES1_CORCTOWNHALL_H
#define BATTLEOFRACES1_CORCTOWNHALL_H

#include "CTownHall.h"

class COrcTownHall : public CTownHall {
public:
    COrcTownHall(CPoint _coordinates);
    ~COrcTownHall() = default;

    CWarrior* createPeasant();

private:
};
#endif //BATTLEOFRACES1_CORCTOWNHALL_H
