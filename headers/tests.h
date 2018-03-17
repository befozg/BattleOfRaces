//
// Created by dmitry on 14.03.18.
//

#ifndef BATTLEOFRACES_TESTS_H
#define BATTLEOFRACES_TESTS_H

#include <gtest/gtest.h>
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
}

TEST(CPeasant__Test, harvestWood__Test) {
    CPeasant *Peasant = CFactoryPeasant::create(HumanPeasant);
    Peasant->harvestWood();
    EXPECT_EQ(1, 1); // заготовка на будущее
}

TEST(CPeasant__Test, harvestMine__Test) {
    CPeasant *Peasant = CFactoryPeasant::create(HumanPeasant);
    Peasant->harvestMine();
    EXPECT_EQ(1, 1); // заготовка на будущее
}

TEST(CPeasant__Test, build__Test) {
    CPeasant *Peasant = CFactoryPeasant::create(HumanPeasant);
    Peasant->build();
    EXPECT_EQ(1, 1); // заготовка на будущее
}

TEST(CWarrior__Test, move__Test) {
    CWarrior *Warrior = CFactoryInfant::create(HumanInfant);
    Warrior->move(CPoint(0, 0));
    EXPECT_EQ(1, 1); // заготовка на будущее
}

TEST(CWarrior__Test, attack__Test) {
    CWarrior *Warrior = CFactoryInfant::create(HumanInfant);
    Warrior->attack(CPoint(0, 0));
    EXPECT_EQ(1, 1); // заготовка на будущее
}

TEST(CWizzard__Test, heal__Test) {
    CWizzard *Wizzard = CFactoryWizzard::create(HumanWizzard);
    Wizzard->heal(CPoint(0, 0));
    EXPECT_EQ(1, 1); // заготовка на будущее
}

#endif //BATTLEOFRACES_TESTS_H
