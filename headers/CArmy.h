//
// Created by dimap on 14.04.2018.
//

#ifndef BATTLEOFRACES_CARMY_H
#define BATTLEOFRACES_CARMY_H

#include "IComponentTest.h"
#include <vector>
#include <string>
#include "CWarrior.h"

class CArmy : public CUnit, IComponentTest {
public:
    CArmy(std::string &_race);
    ~CArmy() = default;

    virtual CWarrior* getChild(int _number);
    virtual void attack(CUnit* _target);
    virtual void move(const CPoint& _coordinates);
    virtual void add(CWarrior* _warrior);
    virtual void remove(CWarrior* _warrior);

private:
    std::vector<CWarrior*> warriors;
    std::string race;
};

#endif //BATTLEOFRACES_CARMY_H
