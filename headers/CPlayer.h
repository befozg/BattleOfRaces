//
// Created by dimap on 12.05.2018.
//

#ifndef BATTLEOFRACES_CPLAYER_H
#define BATTLEOFRACES_CPLAYER_H

#include <string>
#include "CTownHall.h"
#include "CFactoryTownHall.h"
#include "CArmy.h"
#include "CArcher.h"
#include "CFactoryArcher.h"
#include "CFactoryInfant.h"
#include "CFactoryPeasant.h"

class CPlayer {
public:
    CPlayer(std::string _name, std::string _race) : name(_name),
                                                    race(_race),
                                                    gold(100),
                                                    wood(100)
    {
        army = new CArmy(_race);

        if (race == "Human"){
            townHall = CFactoryTownHall::create(HumanTownHall);
            for (int i = 0; i < 10; ++i) {
                army->add(CFactoryArcher::create(HumanArcher));
                army->add(CFactoryInfant::create(HumanInfant));
                army->add(CFactoryPeasant::create(HumanPeasant));
            }
        }else{
            if (race == "Orc"){
                townHall = CFactoryTownHall::create(OrcTownHall);
                for (int i = 0; i < 10; ++i) {
                    army->add(CFactoryArcher::create(OrcArcher));
                    army->add(CFactoryInfant::create(OrcInfant));
                    army->add(CFactoryPeasant::create(OrcPeasant));
                }
            }else{
                if (race == "Elf"){
                    townHall = CFactoryTownHall::create(ElfTownHall);
                    for (int i = 0; i < 10; ++i) {
                        army->add(CFactoryArcher::create(ElfArcher));
                        army->add(CFactoryInfant::create(ElfInfant));
                        army->add(CFactoryPeasant::create(ElfPeasant));
                    }
                }
            }
        }
    }

    CPlayer() = default;


    void set_race(std::string _race){
        race = _race;
    }

    std::string get_race(){
        return race;
    }

    CTownHall* get_town_hall(){
        return townHall;
    }

    std::string name;
    std::string race;
    int gold;
    int wood;
    CTownHall* townHall;
    CArmy* army;
    std::vector<CBuilding*> buildings;
};

#endif //BATTLEOFRACES_CPLAYER_H
