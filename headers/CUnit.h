//
// Created by karen on 10.03.18.
//

#ifndef BATTLEOFRACES_IUNIT_H
#define BATTLEOFRACES_IUNIT_H

#include <string>

class CPoint {
public:
    CPoint();
    CPoint(int _x, int _y);
    ~CPoint() = default;

    int X;
    int Y;
};

class CUnit {
public:
    CUnit() = default;
    virtual ~CUnit() = default;

    int getHealth() const;
    int getPower() const;
    int getAttackDistance() const;
    int getLevel() const;
    CPoint getCoordinates() const;
    std::string getRace() const;

    virtual void setHealth(int _health);
    virtual void setPower(int _power);
    virtual void setAttackDistance(int _attackDistance);
    virtual void setLevel(int _level);
    virtual void setCoordinates(CPoint _coordinates);
    virtual void setRace(std::string &_race);

protected:
    int Health;
    int Power;
    int AttackDistance;
    CPoint Coordinates;
    int Level;
    std::string race;
};

#endif //BATTLEOFRACES_IUNIT_H
