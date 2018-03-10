//
// Created by karen on 10.03.18.
//

#include "CTownHall.h"
#include "CPeasant.h"

CPeasant* CTownHall::createPeasant() {
    CPeasant *Peasant = new CPeasant;
    return &Peasant;
}