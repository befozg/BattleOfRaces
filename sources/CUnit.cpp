//
// Created by karen on 10.03.18.
//

#include "CUnit.h"

CPoint::CPoint(): X(0), Y(0) {};

CPoint::CPoint(int _x, int _y): X(_x), Y(_y) {};

int CUnit::getHealth() const{
    return Health;
}
int CUnit::getPower() const{
    return Power;
}
int CUnit::getAttackDistance() const{
    return AttackDistance;
}
CPoint CUnit::getCoordinates() const{
    return Coordinates;
}
int CUnit::getLevel() const{
    return Level;
}

std::string CUnit::getRace() const {
    return race;
}

void CUnit::setHealth(int _health) {
    Health = _health;
}
void CUnit::setPower(int _power) {
    Power = _power;
}
void CUnit::setAttackDistance(int _attackDistance) {
    AttackDistance = _attackDistance;
}
void CUnit::setCoordinates(CPoint _coordinates) {
    Coordinates = _coordinates;
}
void CUnit::setLevel(int _level) {
    Level = _level;
}

void CUnit::setRace(std::string &_race) {
    race = _race;
}
