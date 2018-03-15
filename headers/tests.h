//
// Created by dmitry on 14.03.18.
//

#ifndef BATTLEOFRACES_TESTS_H
#define BATTLEOFRACES_TESTS_H

#include <gtest/gtest.h>
#include "CHumanTownHall.h"

TEST(CHumanTownHall__Test, create__Test) {
    CHumanTownHall *HumanTH = new CHumanTownHall();
    EXPECT_EQ(HumanTH->getHealth(), 10000);
}

#endif //BATTLEOFRACES_TESTS_H
