//
// Created by dimap on 14.04.2018.
//

#ifndef BATTLEOFRACES_CARMY_H
#define BATTLEOFRACES_CARMY_H

#include "IComponent.h"
#include <vector>
#include <string>
#include <algorithm>

class CArmy : public IComponent {
public:
    virtual CWarrior* getChild(int _number) {
        if (_number < warriors.size()) {
            return warriors[_number];
        }
    }

    virtual void move(CPoint _coordinates) {
        for (int i = 0; i < warriors.size(); ++i){
            warriors[i]->move(_coordinates);
        }
    }
    virtual void add(CWarrior *_warrior) {
        warriors.push_back(_warrior);
    }

    virtual void remove(CWarrior *_warrior) {
        warriors.erase(std::remove(warriors.begin(), warriors.end(), _warrior), warriors.end());
    }

    virtual void attack(const CPoint _coordinates) {
        for (int i = 0; i < warriors.size(); ++i){
            warriors[i]->attack(_coordinates);
        }
    }

private:
    std::vector<CWarrior*> warriors;
    std::string race;
};

#endif //BATTLEOFRACES_CARMY_H
