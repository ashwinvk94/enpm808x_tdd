/**@Copyright (C) 2019 Ari Kupferberg, Zuyang Cao
 * @file        test.cpp
 * @author      Ari Kupferberg, Zuyang Cao
 * @date        09/26/2019
 * @brief       Unit test for PidController class.
 */

#include <gtest/gtest.h>
#include "../include/PidController.hpp"

/**
 * Test class default constructor
 */
TEST(PidControllerTest, testDefaultConstructor) {
  PidController testPid;
  EXPECT_EQ(0.0, testPid.getKp());
  EXPECT_EQ(0.0, testPid.getKi());
  EXPECT_EQ(0.0, testPid.getKd());
}

/**
 * Test class constructor with inputs
 */
TEST(PidControllerTest, testConstructor) {
  PidController testPid(1.1, 2.2, 3.3);
  EXPECT_EQ(1.1, testPid.getKp());
  EXPECT_EQ(2.2, testPid.getKi());
  EXPECT_EQ(3.3, testPid.getKd());
}

/**
 * Test compute method
 */
TEST(PidControllerTest, testCompute) {
  PidController testPid(1, 2, 3);
  std::cout << "output" << testPid.compute(20, 10) << std::endl;
  EXPECT_NEAR(60.0, testPid.compute(20, 10), 1.0);
}

/**
 * Test tune methods
 */
TEST(PidControllerTest, testTune) {
  PidController testPid;
  testPid.tuneKp(1.9);
  testPid.tuneKi(1.8);
  testPid.tuneKd(1.7);
  EXPECT_EQ(testPid.getKp(), 1.9);
  EXPECT_EQ(testPid.getKi(), 1.8);
  EXPECT_EQ(testPid.getKd(), 1.7);
}

