//
// Created by karen on 15.03.18.
//

#include "CFactoryFarm.h"
#include "CFarm.h"


CFarm* CFactoryFarm::create(BuildingID _buildingID) {
    switch (_buildingID) {
        case BuildingID::HumanFarm: {
            CFarm *HumanFarm = new CFarm(_buildingID);
/*            HumanFarm->setLevel(StartLevel);
            HumanFarm->setHealth(FarmHealth + (HumanFarm->getLevel() - 1) * FarmLevelHealthK);
            HumanFarm->setPower(FarmPower);
            HumanFarm->setAttackDistance(FarmAttackDistance);
            HumanFarm->setCoordinates(_coordinates);
*/            return HumanFarm;
        }

        case BuildingID::OrcFarm: {
            CFarm *OrcFarm = new CFarm(_buildingID);
/*            OrcFarm->setLevel(StartLevel);
            OrcFarm->setHealth(FarmHealth + (OrcFarm->getLevel() - 1) * FarmLevelHealthK);
            OrcFarm->setPower(FarmPower);
            OrcFarm->setAttackDistance(FarmAttackDistance);
            OrcFarm->setCoordinates(_coordinates);
*/          return OrcFarm;
        }

        case BuildingID::ElfFarm: {
            CFarm *ElfFarm = new CFarm(_buildingID);
            /*           ElfFarm->setLevel(StartLevel);
                       ElfFarm->setHealth(FarmHealth + (ElfFarm->getLevel() - 1) * FarmLevelHealthK);
                       ElfFarm->setPower(FarmPower);
                       ElfFarm->setAttackDistance(FarmAttackDistance);
                       ElfFarm->setCoordinates(_coordinates);
              */         return ElfFarm;
        }
    }
}
