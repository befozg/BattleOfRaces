#include "tests.h"
#include <iostream>
int main(int argc, char **argv) {
    CTowerOfWizard *HumanTW = CFactoryTowerOfWizard::create(HumanTowerOfWizard);
    std::cout<<HumanTW->getHealth();
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}