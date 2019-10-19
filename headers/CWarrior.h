//
// Created by dmitry on 10.03.18.
//

#ifndef BATTLEOFRACES_IWARRIOR_H
#define BATTLEOFRACES_IWARRIOR_H

#include "CUnit.h"
#include "IComponentTest.h"

class CWarrior: public CUnit, public IComponentTest {
public:
    CWarrior() = default;
    ~CWarrior() {};

    virtual void move(const CPoint& _coordinates);
    virtual void attack(CUnit* _target);

    int getSpeed();
    void setSpeed(int _speed);

protected:
    int Speed;
};

#endif //BATTLEOFRACES_IWARRIOR_H
