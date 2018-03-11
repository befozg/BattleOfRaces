//
// Created by dmitry on 11.03.18.
//

#include "COrcPeasant.h"

COrcPeasant::COrcPeasant() {
    Power = 10;
    AttackDistance = 1;
    Speed = 1;
    Level = 1;
    Coordinates = CPoint(0, 0);
}

COrcPeasant::COrcPeasant(CPoint _coordinates) {
    Power = 10;
    AttackDistance = 1;
    Speed = 1;
    Level = 1;
    Coordinates = _coordinates;
}

void COrcPeasant::build(CPoint _coordinates) {

}

int COrcPeasant::getHealth() {
    return Health;
}
int COrcPeasant::getPower() {
    return Power;
}
int COrcPeasant::getAttackDistance() {
    return AttackDistance;
}
CPoint COrcPeasant::getCoordinates() {
    return Coordinates;
}
int COrcPeasant::getLevel() {
    return Level;
}
int COrcPeasant::getSpeed() {
    return Speed;
}

void COrcPeasant::setHealth(int _health) {
    Health = _health;
}
void COrcPeasant::setPower(int _power) {
    Power = _power;
}
void COrcPeasant::setAttackDistance(int _attackDistance) {
    AttackDistance = _attackDistance;
}
void COrcPeasant::setCoordinates(CPoint _coordinates) {
    Coordinates = _coordinates;
}
void COrcPeasant::setLevel(int _level) {
    Level = _level;
}
void COrcPeasant::setSpeed(int _speed) {
    Speed = _speed;
}