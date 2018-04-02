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

class CUnit {
public:
    CUnit() = default;
    virtual ~CUnit() = default;

    virtual void attack(const CPoint &_coordinates) = 0;

    int getHealth() const;
    int getPower() const;
    int getAttackDistance() const;
    int getLevel() const;
    CPoint getCoordinates() const;

    virtual void setHealth(int _health);
    virtual void setPower(int _power);
    virtual void setAttackDistance(int _attackDistance);
    virtual void setLevel(int _level);
    virtual void setCoordinates(CPoint _coordinates);

protected:
    int Health;
    int Power;
    int AttackDistance;
    CPoint Coordinates;
    int Level;
};

#endif //BATTLEOFRACES_IUNIT_H
