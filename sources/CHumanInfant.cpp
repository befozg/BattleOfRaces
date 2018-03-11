//
// Created by dmitry on 11.03.18.
//

#include "../headers/CHumanInfant.h"

CHumanInfant::CHumanInfant() {
    Health = 200;
    Power = 75;
    AttackDistance = 1;
    Speed = 1;
    Level = 1;
    Coordinates = CPoint(0, 0);
}

CHumanInfant::CHumanInfant(CPoint _coordinates) {
    Health = 200;
    Power = 75;
    AttackDistance = 1;
    Speed = 1;
    Level = 1;
    Coordinates = _coordinates;
}

int CHumanInfant::getHealth() {
    return Health;
}
int CHumanInfant::getPower() {
    return Power;
}
int CHumanInfant::getAttackDistance() {
    return AttackDistance;
}
CPoint CHumanInfant::getCoordinates() {
    return Coordinates;
}
int CHumanInfant::getLevel() {
    return Level;
}
int CHumanInfant::getSpeed() {
    return Speed;
}

void CHumanInfant::setHealth(int _health) {
    Health = _health;
}
void CHumanInfant::setPower(int _power) {
    Power = _power;
}
void CHumanInfant::setAttackDistance(int _attackDistance) {
    AttackDistance = _attackDistance;
}
void CHumanInfant::setCoordinates(CPoint _coordinates) {
    Coordinates = _coordinates;
}
void CHumanInfant::setLevel(int _level) {
    Level = _level;
}
void CHumanInfant::setSpeed(int _speed) {
    Speed = _speed;
}
