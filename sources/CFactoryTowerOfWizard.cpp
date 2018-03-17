//
// Created by karen on 15.03.18.
//
#include <CFactoryTowerOfWizard.h>

CTowerOfWizard* CFactoryTowerOfWizard::create(BuildingID _buildingID) {
    switch (_buildingID) {

case BuildingID::HumanTowerOfWizard: {
    CTowerOfWizard *HumanTowerOfWizard = new CTowerOfWizard(_buildingID);
    /*       HumanTowerOfWizard->setLevel(StartLevel);
           HumanTowerOfWizard->setHealth(TowerOfWizardHealth + (HumanTowerOfWizard->getLevel() - 1) * TowerOfWizardLevelHealthK);
           HumanTowerOfWizard->setPower(TowerOfWizardPower);
           HumanTowerOfWizard->setAttackDistance(TowerOfWizardAttackDistance);
           HumanTowerOfWizard->setCoordinates(_coordinates);
    */       return HumanTowerOfWizard;
}

case BuildingID::OrcTowerOfWizard: {
    CTowerOfWizard *OrcTowerOfWizard = new CTowerOfWizard(_buildingID);
    /*       OrcTowerOfWizard->setLevel(StartLevel);
           OrcTowerOfWizard->setHealth(TowerOfWizardHealth + (OrcTowerOfWizard->getLevel() - 1) * TowerOfWizardLevelHealthK);
           OrcTowerOfWizard->setPower(TowerOfWizardPower);
           OrcTowerOfWizard->setAttackDistance(TowerOfWizardAttackDistance);
           OrcTowerOfWizard->setCoordinates(_coordinates);
     */      return OrcTowerOfWizard;
}

case BuildingID::ElfTowerOfWizard: {
    CTowerOfWizard *ElfTowerOfWizard = new CTowerOfWizard(_buildingID);
    /*        ElfTowerOfWizard->setLevel(StartLevel);
            ElfTowerOfWizard->setHealth(TowerOfWizardHealth + (ElfTowerOfWizard->getLevel() - 1) * TowerOfWizardLevelHealthK);
            ElfTowerOfWizard->setPower(TowerOfWizardPower);
            ElfTowerOfWizard->setAttackDistance(TowerOfWizardAttackDistance);
            ElfTowerOfWizard->setCoordinates(_coordinates);
    */        return ElfTowerOfWizard;
}

}
}