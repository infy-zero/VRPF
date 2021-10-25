#include "gtest/gtest.h"
#include "functions.h"

TEST(AddTest,AddTestCase) {
    ASSERT_EQ(2, test::add(1,1));
}
TEST(DivideTest,DivideTestCase) {
    ASSERT_EQ(2, test::divide(7,3));
}