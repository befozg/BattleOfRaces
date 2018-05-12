//
// Created by dmitry on 10.03.18.
//

#include "CWarrior.h"
#include "IComponentTest.h"

void CWarrior::move(const CPoint& _coordinates) {
    // нужен БФС и работа с графами для достижения точки

}

void CWarrior::attack(CUnit* _target) {
    // если враг есть в зоне поражения, то производим атаку: за один ход у врага убирается кол-во
    // HP равное значению Power
    _target->setHealth(_target->getHealth() - this->Power);
}


int CWarrior::getSpeed() {
    return Speed;
}

void CWarrior::setSpeed(int _speed) {
    Speed = _speed;
}