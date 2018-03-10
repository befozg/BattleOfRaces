//
// Created by karen on 10.03.18.
//

#include "IUnit.h"

CPoint::CPoint(): X(0), Y(0) {};

CPoint::CPoint(int _x, int _y): X(_x), Y(_y) {};

IUnit::IUnit(): Health(0), Power(0), AttackDistance(0), Coordinates(0,0), Level(0) {}

