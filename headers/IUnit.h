//
// Created by karen on 10.03.18.
//

#ifndef BATTLEOFRACES_IUNIT_H
#define BATTLEOFRACES_IUNIT_H

class CPoint {
public:
    CPoint();
    CPoint(int _x, int _y);
    ~CPoint() = default;

    int X;
    int Y;
};

class IUnit {
public:
    IUnit() = default;
    ~IUnit() = default;

    virtual void attack(const CPoint _coordinates) = 0;

    int getHealth();
    int getPower();
    int getAttackDistance();
    int getLevel();
    CPoint getCoordinates();

    void setHealth(int _health);
    void setPower(int _power);
    void setAttackDistance(int _attackDistance);
    void setLevel(int _level);
    void setCoordinates(CPoint _coordinates);

protected:
    int Health;
    int Power;
    int AttackDistance;
    CPoint Coordinates;
    int Level;
};

#endif //BATTLEOFRACES_IUNIT_H
