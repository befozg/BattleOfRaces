//
// Created by karen on 21.04.18.
//

#include "CArmy.h"
CArmy::CArmy(std::string &_race) {
        race = _race;
}
CWarrior* CArmy::getChild(int _number) {
    if (_number < warriors.size()) {
        return warriors[_number];
    }
}

void CArmy::move(const CPoint& _coordinates) {
    for (int i = 0; i < warriors.size(); ++i){
        warriors[i]->move(_coordinates);
    }
}

void CArmy::add(CWarrior* _warrior) {
    warriors.push_back(_warrior);
}

void CArmy::remove(CWarrior* _warrior) {
    warriors.erase(std::remove(warriors.begin(), warriors.end(), _warrior), warriors.end());
}

void CArmy::attack(CUnit* _target) {
   for (int i = 0; i < warriors.size(); ++i){
       warriors[i]->attack(_target);
   }
}