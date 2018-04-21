//
// Created by dimap on 14.04.2018.
//

#ifndef BATTLEOFRACES_ICOMPONENT_H
#define BATTLEOFRACES_ICOMPONENT_H

#include "CUnit.h"

class IComponentTest {
public:
    virtual void attack(const CUnit* _target) = 0;
    virtual void move(const CPoint& _coordinates) = 0;
};

#endif //BATTLEOFRACES_ICOMPONENT_H
