//
// Created by dmitry on 14.03.18.
//

#ifndef BATTLEOFRACES_TESTS_H
#define BATTLEOFRACES_TESTS_H

#include <gtest/gtest.h>
#include "CHumanTownHall.h"

TEST(CHumanTownHall__Test, create__Test) {
    CHumanTownHall *HumanTH = new CHumanTownHall(CPoint(0, 0));
    EXPECT_EQ(HumanTH->getHealth(), 300);
}

#endif //BATTLEOFRACES_TESTS_H
