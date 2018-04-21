//
// Created by dimap on 14.04.2018.
//

#ifndef BATTLEOFRACES_CARMY_H
#define BATTLEOFRACES_CARMY_H

#include "IComponent.h"
#include <vector>
#include <string>
#include <algorithm>

class CArmy : public IComponent {
public:

    virtual CWarrior* getChild(int _number);
    virtual void attack(const CUnit* _target);
    virtual void add(CWarrior* _warrior);
    virtual void move(CPoint& _coordinates);
    virtual void remove(CWarrior* _warrior);
private:
    std::vector<CWarrior*> warriors;
    std::string race;
};

#endif //BATTLEOFRACES_CARMY_H
