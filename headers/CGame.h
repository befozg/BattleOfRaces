//
// Created by dimap on 12.05.2018.
//

#ifndef BATTLEOFRACES_CGAME_H
#define BATTLEOFRACES_CGAME_H

#include <iostream>
#include <map>
#include <cmath>
#include "vector"
#include "CPlayer.h"
#include "CFactoryBarack.h"
#include "CAttackCommand.h"

bool operator< (const CPoint &p1, const CPoint &p2){
    if (p1.X == p2.X){
        return p1.Y < p2.Y;
    }else{
        return p1.X < p2.X;
    }
}

class CGame{
public:
    void start_game(){
        std::cout << "Welcome" << std::endl;

        std::cout << "Player1 : your name" << std::endl;
        std::string name_in;
        std::cin >> name_in;
        std::cout << "Player1 : choose your race (Human, Orc, Elf) " << std::endl;
        std::string race_in;
        std::cin >> race_in;
        player1 = CPlayer(name_in, race_in);
        player1.get_town_hall()->setCoordinates(CPoint(50, 0));
        player1.army->setCoordinates(CPoint(50, 10));

        std::cout << "Player2 : your name" << std::endl;
        std::cin >> name_in;
        std::cout << "Player2 : choose your race (Human, Orc, Elf) " << std::endl;
        std::cin >> race_in;
        player2 = CPlayer(name_in, race_in);
        player2.get_town_hall()->setCoordinates(CPoint(100, 0));
        player2.army->setCoordinates(CPoint(100, 10));

        game_map[player1.get_town_hall()->getCoordinates()] = "Player 1 TH";
        game_map[player2.get_town_hall()->getCoordinates()] = "Player 2 TH";
    }

    void turn(std::string _name){
        for (auto i : game_map){
            std::cout << i.first.X << ", " <<  i.first.Y << " " << i.second << std::endl;
        }

        CPlayer player;
        if (_name == player1.name){
            player = player1;
        }else{
            player = player2;
        }

        CPlayer oponent;
        if (player.name == player1.name){ oponent = player2; }
        else {oponent = player1; }


        std::cout << "Your turn, " << player.name << std::endl;
        std::cout << "Choose your command: (1 Build, 2 Attack, 3 Move)" << std::endl;
        int command_in;
        std::cin >> command_in;
        switch (command_in){
            case 1: {
                if (player.race == "Human") {
                    player.buildings.push_back(CFactoryBarack::create(HumanBarack));
                    game_map[player.buildings[player.buildings.size() - 1]->getCoordinates()] = "HumanBarack";
                } else {
                    if (player.race == "Orc") {
                        player.buildings.push_back(CFactoryBarack::create(OrcBarack));
                        game_map[player.buildings[player.buildings.size() - 1]->getCoordinates()] = "OrcBarack";
                    } else {
                        player.buildings.push_back(CFactoryBarack::create(ElfBarack));
                        game_map[player.buildings[player.buildings.size() - 1]->getCoordinates()] = "ElfBarack";
                    }
                }
                std::cout << "Done" << std::endl;
                break;
            }

            case 2: {
                std::cout << "Choose to attack 1 TH,  2 Army" << std::endl;
                int in;
                std::cin >> in;

                if (in == 1){
                    CAttackCommand command(oponent.get_town_hall());
                    command.set_army(player.army);
                    command.execute();
                }else{
                    CAttackCommand command(oponent.army);
                    command.set_army(player.army);
                    command.execute();
                }
                break;
            }

            case 3: {
                std::cout << "Write point to move" << std::endl;
                int x, y;
                std::cin >> x >> y;
                player.army->setCoordinates(CPoint(x, y));
                break;
            }
        }
    };

    void process(){
        start_game();

        int i = 1;
        while (player1.get_town_hall()->getHealth() > 0 &&
                player2.get_town_hall()->getHealth() > 0){
            if (i % 2 == 1){
                turn(player1.name);
            }else{
                turn(player2.name);
            }
            ++i;
        }

        if (player1.get_town_hall()->getHealth() <= 0){
            std::cout << "Congrats Player 2" << std::endl;
        }else{
            std::cout << "Congrats Player 1" << std::endl;
        }
    }

protected:
    CPlayer player1;
    CPlayer player2;
    std::map<CPoint, std::string> game_map;
};


#endif //BATTLEOFRACES_CGAME_H
