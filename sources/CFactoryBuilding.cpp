//
// Created by karen on 11.03.18.
//
//
// Created by dmitry on 11.03.18.
//

#include <CTownHall.h>
#include <CBuilding.h>
#include "CFactoryBuilding.h"
#include "CFarm.h"
#include "CBarack.h"
#include "CCannonTower.h"

const int StartLevel = 1;

const int TownHallSpeed = 0;
const int TownHallHealth = 5000;
const int TownAttackDistance = 0;
const int TownHallLevelHealthK = 200;
const int TownHallPower = 0;

const int FarmSpeed = 0;
const int FarmHealth = 800;
const int FarmAttackDistance = 0;
const int FarmLevelHealthK = 50;
const int FarmPower = 0;

const int BarackSpeed = 0;
const int BarackHealth = 2000;
const int BarackAttackDistance = 0;
const int BarackLevelHealthK = 200;
const int BarackPower = 0;

const int CannonSpeed = 0;
const int CannonHealth = 1500;
const int CannonAttackDistance = 10;
const int CannonLevelHealthK = 100;
const int CannonPower = 100;

const int TowerOfWizardSpeed = 0;
const int TowerOfWizardHealth = 1500;
const int TowerOfWizardAttackDistance = 10;
const int TowerOfWizardLevelHealthK = 100;
const int TowerOfWizardPower = 100;


CBuilding* CFactoryBuilding::create(BuildingID _buildingID) {
    switch (_buildingID) {
        case BuildingID::HumanTownHall: {
            CTownHall *HumanTownHall = new CTownHall;
/*            HumanTownHall->setLevel(StartLevel);
            HumanTownHall->setHealth(TownHallHealth + (HumanTownHall->getLevel() - 1) * TownHallLevelHealthK);
            HumanTownHall->setPower(TownHallPower);
            HumanTownHall->setAttackDistance(TownAttackDistance);
            HumanTownHall->setCoordinates(_coordinates);
*/            return HumanTownHall;
        }

        case BuildingID::OrcTownHall: {
            CTownHall *OrcTownHall = new CTownHall;
/*            OrcTownHall->setLevel(StartLevel);
            OrcTownHall->setHealth(TownHallHealth + (OrcTownHall->getLevel() - 1) * TownHallLevelHealthK);
            OrcTownHall->setPower(TownHallPower);
            OrcTownHall->setAttackDistance(TownAttackDistance);
            OrcTownHall->setCoordinates(_coordinates);
*/            return OrcTownHall;
        }

        case BuildingID::ElfTownHall: {
            CTownHall *ElfTownHall = new CTownHall;
/*            ElfTownHall->setLevel(StartLevel);
            ElfTownHall->setHealth(TownHallHealth + (ElfTownHall->getLevel() - 1) * TownHallLevelHealthK);
            ElfTownHall->setPower(TownHallPower);
            ElfTownHall->setAttackDistance(TownAttackDistance);
            ElfTownHall->setCoordinates(_coordinates);
*/            return ElfTownHall;
        }

        case BuildingID::HumanFarm: {
            CFarm *HumanFarm = new CFarm;
/*            HumanFarm->setLevel(StartLevel);
            HumanFarm->setHealth(FarmHealth + (HumanFarm->getLevel() - 1) * FarmLevelHealthK);
            HumanFarm->setPower(FarmPower);
            HumanFarm->setAttackDistance(FarmAttackDistance);
            HumanFarm->setCoordinates(_coordinates);
*/            return HumanFarm;
        }

        case BuildingID::OrcFarm: {
            CFarm *OrcFarm = new CFarm;
/*            OrcFarm->setLevel(StartLevel);
            OrcFarm->setHealth(FarmHealth + (OrcFarm->getLevel() - 1) * FarmLevelHealthK);
            OrcFarm->setPower(FarmPower);
            OrcFarm->setAttackDistance(FarmAttackDistance);
            OrcFarm->setCoordinates(_coordinates);
*/          return OrcFarm;
        }

        case BuildingID::ElfFarm: {
            CFarm *ElfFarm = new CFarm;
 /*           ElfFarm->setLevel(StartLevel);
            ElfFarm->setHealth(FarmHealth + (ElfFarm->getLevel() - 1) * FarmLevelHealthK);
            ElfFarm->setPower(FarmPower);
            ElfFarm->setAttackDistance(FarmAttackDistance);
            ElfFarm->setCoordinates(_coordinates);
   */         return ElfFarm;
        }

        case BuildingID::HumanBarack: {
            CBarack *HumanBarack = new CBarack;
     /*       HumanBarack->setLevel(StartLevel);
            HumanBarack->setHealth(BarackHealth + (HumanBarack->getLevel() - 1) * BarackLevelHealthK);
            HumanBarack->setPower(BarackPower);
            HumanBarack->setAttackDistance(BarackAttackDistance);
            HumanBarack->setCoordinates(_coordinates);
       */     return HumanBarack;
        }

        case BuildingID::OrcBarack: {
            CBarack *OrcBarack = new CBarack;
 /*           OrcBarack->setLevel(StartLevel);
            OrcBarack->setHealth(BarackHealth + (OrcBarack->getLevel() - 1) * BarackLevelHealthK);
            OrcBarack->setPower(BarackPower);
            OrcBarack->setAttackDistance(BarackAttackDistance);
            OrcBarack->setCoordinates(_coordinates);
  */          return OrcBarack;
        }

        case BuildingID::ElfBarack: {
            CBarack *ElfBarack = new CBarack;
   /*         ElfBarack->setLevel(StartLevel);
            ElfBarack->setHealth(BarackHealth + (ElfBarack->getLevel() - 1) * BarackLevelHealthK);
            ElfBarack->setPower(BarackPower);
            ElfBarack->setAttackDistance(BarackAttackDistance);
            ElfBarack->setCoordinates(_coordinates);
    */        return ElfBarack;
        }

        case BuildingID::HumanCannonTower: {
            CBarack *HumanCannonTower = new CBarack;
    /*        HumanCannonTower->setLevel(StartLevel);
            HumanCannonTower->setHealth(CannonHealth + (HumanCannonTower->getLevel() - 1) * CannonLevelHealthK);
            HumanCannonTower->setPower(CannonPower);
            HumanCannonTower->setAttackDistance(CannonAttackDistance);
            HumanCannonTower->setCoordinates(_coordinates);
     */       return HumanCannonTower;
        }

        case BuildingID::OrcCannonTower: {
            CBarack *OrcCannonTower = new CBarack;
     /*       OrcCannonTower->setLevel(StartLevel);
            OrcCannonTower->setHealth(CannonHealth + (OrcCannonTower->getLevel() - 1) * CannonLevelHealthK);
            OrcCannonTower->setPower(CannonPower);
            OrcCannonTower->setAttackDistance(CannonAttackDistance);
            OrcCannonTower->setCoordinates(_coordinates);
     */       return OrcCannonTower;
        }

        case BuildingID::ElfCannonTower: {
            CBarack *ElfCannonTower = new CBarack;
     /*       ElfCannonTower->setLevel(StartLevel);
            ElfCannonTower->setHealth(CannonHealth + (ElfCannonTower->getLevel() - 1) * CannonLevelHealthK);
            ElfCannonTower->setPower(CannonPower);
            ElfCannonTower->setAttackDistance(CannonAttackDistance);
            ElfCannonTower->setCoordinates(_coordinates);
     */       return ElfCannonTower;
        }

        case BuildingID::HumanTowerOfWizard: {
            CBarack *HumanTowerOfWizard = new CBarack;
     /*       HumanTowerOfWizard->setLevel(StartLevel);
            HumanTowerOfWizard->setHealth(TowerOfWizardHealth + (HumanTowerOfWizard->getLevel() - 1) * TowerOfWizardLevelHealthK);
            HumanTowerOfWizard->setPower(TowerOfWizardPower);
            HumanTowerOfWizard->setAttackDistance(TowerOfWizardAttackDistance);
            HumanTowerOfWizard->setCoordinates(_coordinates);
     */       return HumanTowerOfWizard;
        }

        case BuildingID::OrcTowerOfWizard: {
            CBarack *OrcTowerOfWizard = new CBarack;
     /*       OrcTowerOfWizard->setLevel(StartLevel);
            OrcTowerOfWizard->setHealth(TowerOfWizardHealth + (OrcTowerOfWizard->getLevel() - 1) * TowerOfWizardLevelHealthK);
            OrcTowerOfWizard->setPower(TowerOfWizardPower);
            OrcTowerOfWizard->setAttackDistance(TowerOfWizardAttackDistance);
            OrcTowerOfWizard->setCoordinates(_coordinates);
      */      return OrcTowerOfWizard;
        }

        case BuildingID::ElfTowerOfWizard: {
            CBarack *ElfTowerOfWizard = new CBarack;
    /*        ElfTowerOfWizard->setLevel(StartLevel);
            ElfTowerOfWizard->setHealth(TowerOfWizardHealth + (ElfTowerOfWizard->getLevel() - 1) * TowerOfWizardLevelHealthK);
            ElfTowerOfWizard->setPower(TowerOfWizardPower);
            ElfTowerOfWizard->setAttackDistance(TowerOfWizardAttackDistance);
            ElfTowerOfWizard->setCoordinates(_coordinates);
    */        return ElfTowerOfWizard;
        }

    }
}

