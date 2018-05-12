//
// Created by dimap on 12.05.2018.
//

#ifndef BATTLEOFRACES_CATTACKCOMMAND_H
#define BATTLEOFRACES_CATTACKCOMMAND_H

#include <iostream>
#include "CCommand.h"
#include "cmath"

int dist(CPoint p1, CPoint p2) {
    return (int)sqrt((p2.X - p1.X)*(p2.X - p1.X) + (p2.Y - p1.Y)*(p2.Y - p1.Y));
}

class CAttackCommand : public CCommand {
public:
    CAttackCommand(CUnit* _whom) : whom(_whom) {}

    void execute(){
            if (dist(army->getCoordinates(), whom->getCoordinates()) < 5) {
                army->attack(whom);
            }else{
                std::cout << "You cant attack. Such a long distance" << std::endl;
            }
    }

private:
    CUnit* whom;
};

#endif //BATTLEOFRACES_CATTACKCOMMAND_H
