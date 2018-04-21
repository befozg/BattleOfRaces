//
// Created by dmitry on 10.03.18.
//

#include "CWarrior.h"
#include "IComponentTest.h"

void CWarrior::move(const CPoint& _coordinates) {
    // нужен БФС и работа с графами для достижения точки

}

void CWarrior::attack(CUnit* _target) {
    _target->setHealth(_target->getHealth() - this->Power);
    if (_target->getHealth() <= 0){
        delete _target;
    }
}

int CWarrior::getSpeed() {
    return Speed;
}

void CWarrior::setSpeed(int _speed) {
    Speed = _speed;
}