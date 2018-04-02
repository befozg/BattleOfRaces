//
// Created by dmitry on 10.03.18.
//

#ifndef BATTLEOFRACES_IWARRIOR_H
#define BATTLEOFRACES_IWARRIOR_H

#include "CUnit.h"

class CWarrior : public CUnit {
public:
    CWarrior() = default;
    ~CWarrior() {};

    void move(const CPoint _coordinates);
    virtual void attack(const CPoint &_coordinates);

    int getSpeed();
    void setSpeed(int _speed);

protected:
    int Speed;
};

#endif //BATTLEOFRACES_IWARRIOR_H
