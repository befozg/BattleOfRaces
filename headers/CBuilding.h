//
// Created by karen on 10.03.18.
//

#ifndef BATTLEOFRACES_IBUILDING_H
#define BATTLEOFRACES_IBUILDING_H

#include "IUnit.h"

class CBuilding : public IUnit {
public:
    CBuilding() = default;
    virtual ~CBuilding() = default;

    virtual void attack(const CPoint _coordinates) ;

protected:
    int Size;
};
#endif //BATTLEOFRACES_IBUILDING_H
