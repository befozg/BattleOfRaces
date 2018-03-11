//
// Created by dmitry on 11.03.18.
//

#include "../headers/CElfPeasant.h"

CElfPeasant::CElfPeasant() {
    Power = 10;
    AttackDistance = 1;
    Speed = 1;
    Level = 1;
    Coordinates = CPoint(0, 0);
}

CElfPeasant::CElfPeasant(CPoint _coordinates) {
    Power = 10;
    AttackDistance = 1;
    Speed = 1;
    Level = 1;
    Coordinates = _coordinates;
}

void CElfPeasant::build(CPoint _coordinates) {

}

int CElfPeasant::getHealth() {
    return Health;
}
int CElfPeasant::getPower() {
    return Power;
}
int CElfPeasant::getAttackDistance() {
    return AttackDistance;
}
CPoint CElfPeasant::getCoordinates() {
    return Coordinates;
}
int CElfPeasant::getLevel() {
    return Level;
}
int CElfPeasant::getSpeed() {
    return Speed;
}

void CElfPeasant::setHealth(int _health) {
    Health = _health;
}
void CElfPeasant::setPower(int _power) {
    Power = _power;
}
void CElfPeasant::setAttackDistance(int _attackDistance) {
    AttackDistance = _attackDistance;
}
void CElfPeasant::setCoordinates(CPoint _coordinates) {
    Coordinates = _coordinates;
}
void CElfPeasant::setLevel(int _level) {
    Level = _level;
}
void CElfPeasant::setSpeed(int _speed) {
    Speed = _speed;
}