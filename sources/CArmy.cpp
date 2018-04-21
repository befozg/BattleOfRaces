//
// Created by karen on 21.04.18.
//

#include "../headers/CArmy.h"


virtual CWarrior* CArmy::getChild(int _number) {
    if (_number < warriors.size()) {
        return warriors[_number];
    }
}

virtual void CArmy::move(CPoint& _coordinates) {
    for (int i = 0; i < warriors.size(); ++i){
        warriors[i]->move(_coordinates);
    }
}
virtual void CArmy::add(CWarrior* _warrior) {
    warriors.push_back(_warrior);
}

virtual void CArmy::remove(CWarrior* _warrior) {
    warriors.erase(std::remove(warriors.begin(), warriors.end(), _warrior), warriors.end());
}

virtual void CArmy::attack(const CUnit* _target) {
    for (int i = 0; i < warriors.size(); ++i){
        warriors[i]->attack(_target);
    }
}