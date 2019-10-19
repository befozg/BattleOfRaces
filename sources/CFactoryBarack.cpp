//
// Created by karen on 15.03.18.
//

#include "CFactoryBarack.h"


CBarack* CFactoryBarack::create(BuildingID _buildingID) {
    switch (_buildingID) {

        case BuildingID::HumanBarack: {
            CBarack *HumanBarack = new CBarack(_buildingID);
            /*       HumanBarack->setLevel(StartLevel);
                   HumanBarack->setHealth(BarackHealth + (HumanBarack->getLevel() - 1) * BarackLevelHealthK);
                   HumanBarack->setPower(BarackPower);
                   HumanBarack->setAttackDistance(BarackAttackDistance);
                   HumanBarack->setCoordinates(_coordinates);
              */     return HumanBarack;
        }

        case BuildingID::OrcBarack: {
            CBarack *OrcBarack = new CBarack(_buildingID);
            /*           OrcBarack->setLevel(StartLevel);
                       OrcBarack->setHealth(BarackHealth + (OrcBarack->getLevel() - 1) * BarackLevelHealthK);
                       OrcBarack->setPower(BarackPower);
                       OrcBarack->setAttackDistance(BarackAttackDistance);
                       OrcBarack->setCoordinates(_coordinates);
             */          return OrcBarack;
        }

        case BuildingID::ElfBarack: {
            CBarack *ElfBarack = new CBarack(_buildingID);
            /*         ElfBarack->setLevel(StartLevel);
                     ElfBarack->setHealth(BarackHealth + (ElfBarack->getLevel() - 1) * BarackLevelHealthK);
                     ElfBarack->setPower(BarackPower);
                     ElfBarack->setAttackDistance(BarackAttackDistance);
                     ElfBarack->setCoordinates(_coordinates);
             */        return ElfBarack;
        }
    }
}