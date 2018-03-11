//
// Created by dmitry on 10.03.18.
//

#ifndef BATTLEOFRACES_CHUMANPEASANT_H
#define BATTLEOFRACES_CHUMANPEASANT_H

#include "CPeasant.h"
#include "CBuilding.h"

class CHumanPeasant : public CPeasant {
public:
    CHumanPeasant();
    CHumanPeasant(CPoint _coordinates);
    ~CHumanPeasant() = default;

    virtual void build(CPoint _coordinates); // [ADD] 1-st parameter is CBuildingFactory

    int getHealth();
    int getPower();
    int getAttackDistance();
    int getLevel();
    int getSpeed();
    CPoint getCoordinates();

    void setHealth(int _health);
    void setPower(int _power);
    void setAttackDistance(int _attackDistance);
    void setLevel(int _level);
    void setSpeed(int _speed);
    void setCoordinates(CPoint _coordinates);

private:

};

#endif //BATTLEOFRACES_CHUMANPEASANT_H
