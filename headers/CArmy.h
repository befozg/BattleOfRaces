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
    CArmy() = default;
    ~CArmy() = default;
     CWarrior* getChild(int _number);
     void attack(CUnit* _target);
     void move(const CPoint& _coordinates);
     void add(CWarrior* _warrior);
     void remove(CWarrior* _warrior);
private:
    std::vector<CWarrior*> warriors;
    std::string race;
};

#endif //BATTLEOFRACES_CARMY_H
