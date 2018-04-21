//
// Created by dimap on 14.04.2018.
//

#ifndef BATTLEOFRACES_ICOMPONENT_H
#define BATTLEOFRACES_ICOMPONENT_H

#include "CWarrior.h"

class IComponent {
public:
    IComponent(){};
    virtual void attack(const CUnit* _target) = 0;
    virtual void move(const CPoint& _coordinates) = 0;
    //virtual CWarrior* getChild(int _number) = 0;
    // virtual void add(CWarrior *_warrior) = 0;
    // virtual void remove(CWarrior *_warrior) = 0;
};

#endif //BATTLEOFRACES_ICOMPONENT_H
