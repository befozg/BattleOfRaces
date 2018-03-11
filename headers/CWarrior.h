//
// Created by dmitry on 10.03.18.
//

#ifndef BATTLEOFRACES_IWARRIOR_H
#define BATTLEOFRACES_IWARRIOR_H

#include "IUnit.h"

class CWarrior : public IUnit {
public:
    CWarrior() = default;
    ~CWarrior() = default;

    void move(const CPoint _coordinates);
    virtual void attack(const CPoint _coordinates);

    int getSpeed();
    void setSpeed(int _speed);

protected:
    int Speed;
};

#endif //BATTLEOFRACES_IWARRIOR_H
