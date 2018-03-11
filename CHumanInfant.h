//
// Created by dmitry on 11.03.18.
//

#ifndef BATTLEOFRACES_CHUMANINFANT_H
#define BATTLEOFRACES_CHUMANINFANT_H

#include "CInfant.h"

class CHumanInfant : public CInfant {
public:
    CHumanInfant();
    CHumanInfant(CPoint _coordinates);
    ~CHumanInfant();

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


#endif //BATTLEOFRACES_CHUMANINFANT_H
