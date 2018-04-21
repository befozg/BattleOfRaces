//
// Created by dmitry on 10.03.18.
//

#include "CWarrior.h"


virtual void CWarrior::move(const CPoint& _coordinates) {
    // нужен БФС и работа с графами для достижения точки

}

virtual void CWarrior::attack(const CUnit* _target) {
    // если враг есть в зоне поражения, то производим атаку: за один ход у врага убирается кол-во
    // HP равное значению Power

}

int CWarrior::getSpeed() {
    return Speed;
}

void CWarrior::setSpeed(int _speed) {
    Speed = _speed;
}