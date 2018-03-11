//
// Created by dmitry on 10.03.18.
//

#include "CHumanPeasant.h"

CHumanPeasant::CHumanPeasant() {
    Power = 10;
    AttackDistance = 1;
    Speed = 1;
    Level = 1;
    Coordinates = CPoint(0, 0);
}

CHumanPeasant::CHumanPeasant(CPoint _coordinates) {
    Power = 10;
    AttackDistance = 1;
    Speed = 1;
    Level = 1;
    Coordinates = _coordinates;
}

void CHumanPeasant::build(CPoint _coordinates) {

}

int CHumanPeasant::getHealth() {
    return Health;
}
int CHumanPeasant::getPower() {
    return Power;
}
int CHumanPeasant::getAttackDistance() {
    return AttackDistance;
}
CPoint CHumanPeasant::getCoordinates() {
    return Coordinates;
}
int CHumanPeasant::getLevel() {
    return Level;
}
int CHumanPeasant::getSpeed() {
    return Speed;
}

void CHumanPeasant::setHealth(int _health) {
    Health = _health;
}
void CHumanPeasant::setPower(int _power) {
    Power = _power;
}
void CHumanPeasant::setAttackDistance(int _attackDistance) {
    AttackDistance = _attackDistance;
}
void CHumanPeasant::setCoordinates(CPoint _coordinates) {
    Coordinates = _coordinates;
}
void CHumanPeasant::setLevel(int _level) {
    Level = _level;
}
void CHumanPeasant::setSpeed(int _speed) {
    Speed = _speed;
}
