//
// Created by karen on 10.03.18.
//

#include "IUnit.h"

CPoint::CPoint(): X(0), Y(0) {};

CPoint::CPoint(int _x, int _y): X(_x), Y(_y) {};

int IUnit::getHealth() const{
    return Health;
}
int IUnit::getPower() const{
    return Power;
}
int IUnit::getAttackDistance() const{
    return AttackDistance;
}
CPoint IUnit::getCoordinates() const{
    return Coordinates;
}
int IUnit::getLevel() const{
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
