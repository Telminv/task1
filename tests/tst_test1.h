#ifndef FUNC_TEST_H
#define FUNC_TEST_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C" {
#include "myfunc.h"
}

TEST(FuncTest, nubmer_1) {
  ASSERT_EQ(myfunc(0, 0, 9).kolvo, 0);
}

TEST(FuncTest, number_2) {
  ASSERT_EQ(myfunc(5, 5, 25).kolvo, 0);
}

TEST(FuncTest, number_3) {
  ASSERT_EQ(myfunc(0, 2, 2).kolvo, 1);
  ASSERT_NEAR(myfunc(0, 2, 2).x1, -1.00, 0.001);
}

TEST(FuncTest, number_4) {
  ASSERT_EQ(myfunc(2,8,8).kolvo, 1);
  ASSERT_NEAR(myfunc(2,8,8).x1,-2.00, 0.001);
  ASSERT_NEAR(myfunc(2,8,8).x2, 0, 0.001);
}

#endif // FUNC_TEST_H
