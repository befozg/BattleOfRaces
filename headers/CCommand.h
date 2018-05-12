//
// Created by dimap on 12.05.2018.
//

#ifndef BATTLEOFRACES_CCOMMAND_H
#define BATTLEOFRACES_CCOMMAND_H

#include "CArmy.h"

class CCommand {
public:
    ~CCommand() {}
    void execute();
    void unexecute();
    void set_army(CArmy* _army){
        army = _army;
    }

protected:
    CArmy* army;
};

#endif //BATTLEOFRACES_CCOMMAND_H
