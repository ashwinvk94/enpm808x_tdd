/**@Copyright (C) 2019 Ari Kupferberg, Zuyang Cao
 * @file        test.cpp
 * @author      Ari Kupferberg, Zuyang Cao
 * @date        09/26/2019
 * @brief       Unit test for PidController class.
 */

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../include/highLevelPID.h"
#include "../include/PidController.hpp"

// Mock PID Class
 class MockPID : public PidController {
   public:
       MockPID() : PidController(2, 2, 0) {
           }

               MOCK_METHOD1(compute, double (double feedback,double desired));
               };

               // Test for Mock PID class
               TEST(pidMockTest, pid) {
                   MockPID mockPid;
                       highLevelPID mypid(mockPid);
			double b=20,a=10;
                           EXPECT_CALL(mockPid, compute(b,a))
                                 .Times(1);
                                     ASSERT_EQ(mypid.compute(20,10), 60.0);
}

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

