//
// Created by dmitry on 10.03.18.
//

#include "../headers/CWarrior.h"

void CWarrior::move(const CPoint _coordinates) {
    // нужен БФС и работа с графами для достижения точки

}

void CWarrior::attack(const CPoint _coordinates) {
    // если враг есть в зоне поражения, то производим атаку: за один ход у врага убирается кол-во
    // HP равное значению Power

}

int CWarrior::getSpeed() {
    return Speed;
}

void CWarrior::setSpeed(int _speed) {
    Speed = _speed;
}