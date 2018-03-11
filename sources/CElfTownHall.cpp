//
// Created by karen on 11.03.18.
//

#include "../headers/CElfTownHall.h"
#include "../headers/CElfPeasant.h"

CElfTownHall::CElfTownHall(CPoint _coordinates) {
    Coordinates = _coordinates;
    Health = 300;
    Power = 0;
    Level = 1;
    AttackDistance = 0;
}

CPeasant* CElfTownHall::createPeasant() {
    CElfPeasant* Peasant = new CElfPeasant[];
    return Peasant;
}