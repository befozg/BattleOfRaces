//
// Created by dmitry on 11.03.18.
//

#ifndef BATTLEOFRACES_CELFPEASANT_H
#define BATTLEOFRACES_CELFPEASANT_H

#include "CPeasant.h"

class CElfPeasant : public CPeasant {
public:
    CElfPeasant();
    CElfPeasant(CPoint _coordinates);
    ~CElfPeasant() = default;

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

#endif //BATTLEOFRACES_CELFPEASANT_H
