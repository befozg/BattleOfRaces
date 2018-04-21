//
// Created by karen on 10.03.18.
//

#ifndef BATTLEOFRACES_IBUILDING_H
#define BATTLEOFRACES_IBUILDING_H

#include "CUnit.h"

class CBuilding : public CUnit {
public:
    CBuilding() = default;
    virtual ~CBuilding() {};

    virtual void attack(const CUnit* _target);

protected:
    int Size;
};
#endif //BATTLEOFRACES_IBUILDING_H
