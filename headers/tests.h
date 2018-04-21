//
// Created by dmitry on 14.03.18.
//

#ifndef BATTLEOFRACES_TESTS_H
#define BATTLEOFRACES_TESTS_H

#include <gtest/gtest.h>
#include "CFactoryTowerOfWizard.h"
#include "CTowerOfWizard.h"
#include "CTownHall.h"
#include "CInfant.h"
#include "CFactoryInfant.h"
#include "CHorseman.h"
#include "CFactoryHorseman.h"
#include "CPeasant.h"
#include "CFactoryPeasant.h"
#include "CWizzard.h"
#include "CFactoryWizzard.h"
#include "CCatapult.h"
#include "CFactoryCatapult.h"
#include "CArcher.h"
#include "CFactoryArcher.h"
#include "CBarack.h"
#include "CFarm.h"
#include "CFactoryBuilding.h"
#include "CFactoryBarack.h"
#include "CFactoryFarm.h"
#include "CFactoryCannon.h"
#include "CCannonTower.h"
#include "CFactoryTownHall.h"
#include "CArmy.h"

TEST(CFactoryBarack_Test, create__Test) {
    CBarack *HumanB = CFactoryBarack::create(HumanBarack);
    EXPECT_EQ(HumanB->getHealth(), 2000);

    CBarack *OrcB = CFactoryBarack::create(OrcBarack);
    EXPECT_EQ(OrcB->getHealth(), 2000);

    CBarack *ElfB = CFactoryBarack::create(ElfBarack);
    EXPECT_EQ(ElfB->getHealth(), 2000);

    delete ElfB;
    delete HumanB;
    delete OrcB;
}

TEST(CFactoryTownHall__Test, create__Test) {
    CTownHall *HumanTH = CFactoryTownHall::create(HumanTownHall);
    EXPECT_EQ(HumanTH->getHealth(), 5000);

    CTownHall *OrcTH = CFactoryTownHall::create(OrcTownHall);
    EXPECT_EQ(OrcTH->getHealth(), 5000);

    CTownHall *ElfTH = CFactoryTownHall::create(ElfTownHall);
    EXPECT_EQ(ElfTH->getHealth(), 5000);
    delete ElfTH;
    delete HumanTH;
    delete OrcTH;

}

TEST(CFactoryFarm_Test, create__Test) {
    CFarm *HumanF = CFactoryFarm::create(HumanFarm);
    EXPECT_EQ(HumanF->getHealth(), 800);

    CFarm *OrcF = CFactoryFarm::create(OrcFarm);
    EXPECT_EQ(OrcF->getHealth(), 800);

    CFarm *ElfF = CFactoryFarm::create(ElfFarm);
    EXPECT_EQ(ElfF->getHealth(), 800);

    delete ElfF;
    delete HumanF;
    delete OrcF;

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

    delete ElfC;
    delete HumanC;
    delete OrcC;

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

    delete ElfTW;
    delete HumanTW;
    delete OrcTW;

}

TEST(CFactoryArcher__Test, create__Test) {
    CArcher *Archer1 = CFactoryArcher::create(HumanArcher);
    EXPECT_EQ(Archer1->getHealth(), 100);
    EXPECT_EQ(Archer1->getPower(), 30);

    CArcher *Archer2 = CFactoryArcher::create(OrcArcher);
    EXPECT_EQ(Archer2->getHealth(), 100);
    EXPECT_EQ(Archer2->getPower(), 30);

    CArcher *Archer3 = CFactoryArcher::create(ElfArcher);
    EXPECT_EQ(Archer3->getHealth(), 100);
    EXPECT_EQ(Archer3->getPower(), 30);

    delete Archer1;
    delete Archer2;
    delete Archer3;

}

TEST(CFactoryInfant__Test, create__Test) {
    CInfant *Infant1 = CFactoryInfant::create(HumanInfant);
    EXPECT_EQ(Infant1->getHealth(), 150);
    EXPECT_EQ(Infant1->getPower(), 50);

    CInfant *Infant2 = CFactoryInfant::create(OrcInfant);
    EXPECT_EQ(Infant2->getHealth(), 200);
    EXPECT_EQ(Infant2->getPower(), 75);

    CInfant *Infant3 = CFactoryInfant::create(ElfInfant);
    EXPECT_EQ(Infant3->getHealth(), 200);
    EXPECT_EQ(Infant3->getPower(), 50);

    delete Infant1;
    delete Infant2;
    delete Infant3;

}

TEST(CFactoryHorseman__Test, create__Test) {
    CHorseman *Horseman1 = CFactoryHorseman::create(HumanHorseman);
    EXPECT_EQ(Horseman1->getHealth(), 150);
    EXPECT_EQ(Horseman1->getPower(), 40);

    CHorseman *Horseman2 = CFactoryHorseman::create(OrcHorseman);
    EXPECT_EQ(Horseman2->getHealth(), 150);
    EXPECT_EQ(Horseman2->getPower(), 40);

    CHorseman *Horseman3 = CFactoryHorseman::create(ElfHorseman);
    EXPECT_EQ(Horseman3->getHealth(), 150);
    EXPECT_EQ(Horseman3->getPower(), 40);

    delete Horseman1;
    delete Horseman2;
    delete Horseman3;
}

TEST(CFactoryPeasant__Test, create__Test) {
    CPeasant *Peasant1 = CFactoryPeasant::create(HumanPeasant);
    EXPECT_EQ(Peasant1->getHealth(), 100);
    EXPECT_EQ(Peasant1->getPower(), 10);

    CPeasant *Peasant2 = CFactoryPeasant::create(OrcPeasant);
    EXPECT_EQ(Peasant2->getHealth(), 100);
    EXPECT_EQ(Peasant2->getPower(), 10);

    CPeasant *Peasant3 = CFactoryPeasant::create(ElfPeasant);
    EXPECT_EQ(Peasant3->getHealth(), 100);
    EXPECT_EQ(Peasant3->getPower(), 10);

    delete Peasant1;
    delete Peasant2;
    delete Peasant3;
}

TEST(CFactoryWizzard__Test, create__Test) {
    CWizzard *Wizzard1 = CFactoryWizzard::create(HumanWizzard);
    EXPECT_EQ(Wizzard1->getHealth(), 100);
    EXPECT_EQ(Wizzard1->getPower(), 10);

    CWizzard *Wizzard2 = CFactoryWizzard::create(OrcWizzard);
    EXPECT_EQ(Wizzard2->getHealth(), 100);
    EXPECT_EQ(Wizzard2->getPower(), 10);

    CWizzard *Wizzard3 = CFactoryWizzard::create(ElfWizzard);
    EXPECT_EQ(Wizzard3->getHealth(), 100);
    EXPECT_EQ(Wizzard3->getPower(), 10);

    delete Wizzard1;
    delete Wizzard2;
    delete Wizzard3;
}

TEST(CFactoryCatapult__Test, create__Test) {
    CCatapult *Catapult1 = CFactoryCatapult::create(HumanCatapult);
    EXPECT_EQ(Catapult1->getHealth(), 300);
    EXPECT_EQ(Catapult1->getPower(), 150);

    CCatapult *Catapult2 = CFactoryCatapult::create(OrcCatapult);
    EXPECT_EQ(Catapult2->getHealth(), 300);
    EXPECT_EQ(Catapult2->getPower(), 150);

    CCatapult *Catapult3 = CFactoryCatapult::create(ElfCatapult);
    EXPECT_EQ(Catapult3->getHealth(), 300);
    EXPECT_EQ(Catapult3->getPower(), 150);


    delete Catapult1;
    delete Catapult2;
    delete Catapult3;
}

TEST(DISABLED_CPeasant__Test, harvestWood__Test) {
    CPeasant *Peasant = CFactoryPeasant::create(HumanPeasant);
    Peasant->harvestWood();
    EXPECT_EQ(1, 1); // заготовка на будущее

    delete Peasant;
}

TEST(DISABLED_CPeasant__Test, harvestMine__Test) {
    CPeasant *Peasant = CFactoryPeasant::create(HumanPeasant);
    Peasant->harvestMine();
    EXPECT_EQ(1, 1); // заготовка на будущее

    delete Peasant;
}

TEST(DISABLED_CPeasant__Test, build__Test) {
    CPeasant *Peasant = CFactoryPeasant::create(HumanPeasant);
    Peasant->build();
    EXPECT_EQ(1, 1); // заготовка на будущее

    delete Peasant;
}

TEST(DISABLED_CWarrior__Test, move__Test) {
    CWarrior *Warrior = CFactoryInfant::create(HumanInfant);
    Warrior->move(CPoint(0, 0));
    EXPECT_EQ(1, 1); // заготовка на будущее

    delete Warrior;
}

TEST(DISABLED_CWarrior__Test, attack__Test) {
    CWarrior *Warrior = CFactoryInfant::create(HumanInfant);
    //Warrior->attack(CPoint(0, 0));
    EXPECT_EQ(1, 1); // заготовка на будущее
    delete Warrior;
}

TEST(DISABLED_CWizzard__Test, heal__Test) {
    CWizzard *Wizzard = CFactoryWizzard::create(HumanWizzard);
    Wizzard->heal(CPoint(0, 0));
    EXPECT_EQ(1, 1); // заготовка на будущее

    delete Wizzard;
}

TEST(CArmy__Test, attack__Test) {
     CArmy* army = new CArmy;
    EXPECT_EQ(1,1);
}
#endif //BATTLEOFRACES_TESTS_H