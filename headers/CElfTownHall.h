//
// Created by karen on 11.03.18.
//

#ifndef BATTLEOFRACES1_CELFTOWNHALL_H
#define BATTLEOFRACES1_CELFTOWNHALL_H


#include "CTownHall.h"

class CElfTownHall : public CTownHall {
public:
    CElfTownHall(CPoint _coordinates);
    ~CElfTownHall() = default;

    CPeasant* createPeasant();

private:
};
#endif //BATTLEOFRACES1_CELFTOWNHALL_H
