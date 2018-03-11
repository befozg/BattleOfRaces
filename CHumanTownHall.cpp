//
// Created by karen on 11.03.18.
//

#include "CHumanTownHall.h"
#include "CHumanPeasant.h"

CHumanTownHall::CHumanTownHall(CPoint _coordinates) {
    Coordinates = _coordinates;
    Health = 300;
    Power = 0;
    Level = 1;
    AttackDistance = 0;
}

CPeasant* CHumanTownHall::createPeasant() {
    CHumanPeasant* Peasant = new CHumanPeasant[];
    return Peasant;
}