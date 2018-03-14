//
// Created by dmitry on 11.03.18.
//

#ifndef BATTLEOFRACES1_CCATAPULT_H
#define BATTLEOFRACES1_CCATAPULT_H

#include "CWarrior.h"
#include "CFactoryWarrior.h"

class CCatapult : public CWarrior {
public:
    CCatapult() = default;
    CCatapult(WarriorID _warriorID);
    ~CCatapult() = default;

    int getAttackRadius();
    void setAttackRadius(int _attackRadius);

private:
    int AttackRadius;

};

#endif //BATTLEOFRACES1_CCATAPULT_H
