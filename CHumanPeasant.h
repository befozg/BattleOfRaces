//
// Created by dmitry on 10.03.18.
//

#ifndef BATTLEOFRACES_CHUMANPEASANT_H
#define BATTLEOFRACES_CHUMANPEASANT_H

#include "CPeasant.h"

class CHumanPeasant : public CPeasant {
public:
    CHumanPeasant() = default;
    ~CHumanPeasant() = default;

    virtual void build();

private:

};

#endif //BATTLEOFRACES_CHUMANPEASANT_H
