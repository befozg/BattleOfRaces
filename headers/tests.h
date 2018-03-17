//
// Created by dmitry on 14.03.18.
//

#ifndef BATTLEOFRACES_TESTS_H
#define BATTLEOFRACES_TESTS_H

#include <gtest/gtest.h>
#include "CFactoryTowerOfWizard.h"
#include "CTowerOfWizard.h"
#include "CTownHall.h"
#include "CBarack.h"
#include "CFarm.h"
#include "CFactoryBuilding.h"
#include "CFactoryBarack.h"
#include "CFactoryFarm.h"
#include "CFactoryCannon.h"
#include "CCannonTower.h"
#include "CFactoryTownHall.h"

TEST(CFactoryBarack_Test, create__Test) {
    CBarack *HumanB = CFactoryBarack::create(HumanBarack);
    EXPECT_EQ(HumanB->getHealth(), 2000);

    CBarack *OrcB = CFactoryBarack::create(OrcBarack);
    EXPECT_EQ(OrcB->getHealth(), 2000);

    CBarack *ElfB = CFactoryBarack::create(ElfBarack);
    EXPECT_EQ(ElfB->getHealth(), 2000);
}

TEST(CFactoryTownHall__Test, create__Test) {
    CTownHall *HumanTH = CFactoryTownHall::create(HumanTownHall);
    EXPECT_EQ(HumanTH->getHealth(), 5000);

    CTownHall *OrcTH = CFactoryTownHall::create(OrcTownHall);
    EXPECT_EQ(OrcTH->getHealth(), 5000);

    CTownHall *ElfTH = CFactoryTownHall::create(ElfTownHall);
    EXPECT_EQ(ElfTH->getHealth(), 5000);
}

TEST(CFactoryFarm_Test, create__Test) {
    CFarm *HumanF = CFactoryFarm::create(HumanFarm);
    EXPECT_EQ(HumanF->getHealth(), 800);

    CFarm *OrcF = CFactoryFarm::create(OrcFarm);
    EXPECT_EQ(OrcF->getHealth(), 800);

    CFarm *ElfF = CFactoryFarm::create(ElfFarm);
    EXPECT_EQ(ElfF->getHealth(), 800);
}


TEST(CFactoryCannon_Test, create__Test) {
    CCanonTower *HumanC = CFactoryCannon::create(HumanCannonTower);
    EXPECT_EQ(HumanC->getHealth(), 1500);
    EXPECT_EQ(HumanC->getAttackDistance(), 10);

    CCanonTower *OrcC = CFactoryCannon::create(OrcCannonTower);
    EXPECT_EQ(OrcC->getHealth(), 1500);
    EXPECT_EQ(OrcC->getAttackDistance(), 10);

    CCanonTower *ElfC = CFactoryCannon::create(ElfCannonTower);
    EXPECT_EQ(ElfC->getHealth(), 1500);
    EXPECT_EQ(ElfC->getAttackDistance(), 10);
}

TEST(CFactoryToW_Test, create__Test) {
    CTowerOfWizard *HumanTW = CFactoryTowerOfWizard::create(HumanTowerOfWizard);
    EXPECT_EQ(HumanTW->getHealth(), 1500);
    EXPECT_EQ(HumanTW->getAttackDistance(), 10);

    CTowerOfWizard *OrcTW = CFactoryTowerOfWizard::create(OrcTowerOfWizard);
    EXPECT_EQ(OrcTW->getHealth(), 1500);
    EXPECT_EQ(OrcTW->getAttackDistance(), 10);

    CTowerOfWizard *ElfTW = CFactoryTowerOfWizard::create(ElfTowerOfWizard);
    EXPECT_EQ(ElfTW->getHealth(), 1500);
    EXPECT_EQ(ElfTW->getAttackDistance(), 10);
}



#endif //BATTLEOFRACES_TESTS_H
