//
// Created by karen on 11.03.18.
//

#ifndef BATTLEOFRACES1_CHUMANTOWNHALL_H
#define BATTLEOFRACES1_CHUMANTOWNHALL_H

#include "CTownHall.h"
#include "CFactoryBuilding.h"
class CHumanTownHall : public CTownHall {
public:
    CHumanTownHall();
    CHumanTownHall(CBuilding _buildingID);
    ~CHumanTownHall() = default;

    CWarrior* createPeasant(); // у тебя тут возвращал указатель на CPeasant, но моя фабрика возвращает указатель на CWarrior. Я тебе исправил "Дима"

private:
};
#endif //BATTLEOFRACES1_CHUMANTOWNHALL_H
