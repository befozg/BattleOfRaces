//
// Created by karen on 10.03.18.
//

#include "../headers/IUnit.h"

CPoint::CPoint(): X(0), Y(0) {};

CPoint::CPoint(int _x, int _y): X(_x), Y(_y) {};

IUnit::IUnit(): Health(0), Power(0), AttackDistance(0), Coordinates(0,0), Level(0) {}

int IUnit::getHealth() {
    return Health;
}
int IUnit::getPower() {
    return Power;
}
int IUnit::getAttackDistance() {
    return AttackDistance;
}
CPoint IUnit::getCoordinates() {
    return Coordinates;
}
int IUnit::getLevel() {
    return Level;
}

void IUnit::setHealth(int _health) {
    Health = _health;
}
void IUnit::setPower(int _power) {
    Power = _power;
}
void IUnit::setAttackDistance(int _attackDistance) {
    AttackDistance = _attackDistance;
}
void IUnit::setCoordinates(CPoint _coordinates) {
    Coordinates = _coordinates;
}
void IUnit::setLevel(int _level) {
    Level = _level;
}
