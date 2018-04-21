//
// Created by dimap on 14.04.2018.
//

#ifndef BATTLEOFRACES_CARMY_H
#define BATTLEOFRACES_CARMY_H

#include "IComponentTest.h"
#include <vector>
#include <string>
#include <algorithm>
#include "CWarrior.h"

class CArmy : public IComponentTest {
public:
    virtual CWarrior* getChild(int _number);
    virtual void attack(const CUnit* _target) = 0;
    virtual void move(CPoint& _coordinates) = 0;
    virtual void add(CWarrior* _warrior);
    virtual void remove(CWarrior* _warrior);
private:
    std::vector<CWarrior*> warriors;
    std::string race;
};

#endif //BATTLEOFRACES_CARMY_H
