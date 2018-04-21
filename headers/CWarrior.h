//
// Created by dmitry on 10.03.18.
//

#ifndef BATTLEOFRACES_IWARRIOR_H
#define BATTLEOFRACES_IWARRIOR_H

#include "CUnit.h"
#include "IComponent.h"

class CWarrior: public IComponent, public CUnit {
public:
    CWarrior() = default;
    ~CWarrior() {};

    virtual void move(const CPoint& _coordinates);
    virtual void attack(const CUnit* _target);

    int getSpeed();
    void setSpeed(int _speed);

protected:
    int Speed;
};

#endif //BATTLEOFRACES_IWARRIOR_H
