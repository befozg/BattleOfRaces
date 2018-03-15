//
// Created by karen on 15.03.18.
//

#include "CFactoryCannon.h"


CCanonTower* CFactoryCannon::create(BuildingID _buildingID) {
    switch (_buildingID) {

        case BuildingID::HumanCannonTower: {
            CCanonTower *HumanCannonTower = new CCanonTower(_buildingID);
            /*       HumanBarack->setLevel(StartLevel);
                   HumanBarack->setHealth(BarackHealth + (HumanBarack->getLevel() - 1) * BarackLevelHealthK);
                   HumanBarack->setPower(BarackPower);
                   HumanBarack->setAttackDistance(BarackAttackDistance);
                   HumanBarack->setCoordinates(_coordinates);
              */     return HumanCannonTower;
        }

        case BuildingID::OrcCannonTower: {
            CCanonTower *OrcCannonTower = new CCanonTower(_buildingID);
            /*           OrcBarack->setLevel(StartLevel);
                       OrcBarack->setHealth(BarackHealth + (OrcBarack->getLevel() - 1) * BarackLevelHealthK);
                       OrcBarack->setPower(BarackPower);
                       OrcBarack->setAttackDistance(BarackAttackDistance);
                       OrcBarack->setCoordinates(_coordinates);
             */          return OrcCannonTower;
        }

        case BuildingID::ElfCannonTower: {
            CCanonTower *ElfCannonTower = new CCanonTower(_buildingID);
            /*         ElfBarack->setLevel(StartLevel);
                     ElfBarack->setHealth(BarackHealth + (ElfBarack->getLevel() - 1) * BarackLevelHealthK);
                     ElfBarack->setPower(BarackPower);
                     ElfBarack->setAttackDistance(BarackAttackDistance);
                     ElfBarack->setCoordinates(_coordinates);
             */        return ElfCannonTower;
        }
    }
}
