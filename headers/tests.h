//
// Created by dmitry on 14.03.18.
//

#ifndef BATTLEOFRACES_TESTS_H
#define BATTLEOFRACES_TESTS_H

#include <gtest/gtest.h>
#include "CTownHall.h"

TEST(CHumanTownHall__Test, create__Test) {
    CTownHall *HumanTH = new CTownHall(HumanTownHall);
    EXPECT_EQ(HumanTH->getHealth(), 10000);
}

TEST(CBarack__Test, create__Test) {
    // method is empty
    EXPECT_EQ(1, 1);
}

#endif //BATTLEOFRACES_TESTS_H
