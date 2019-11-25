#ifndef INCLUDE_HIGHLEVELPID_H_
#define INCLUDE_HIGHLEVELPID_H_

/* Copyright 2019 Ashwin Varghese Kuruttukulam
 * @file highLevelPID.h
 * @author Ashwin Varghese Kuruttukulam
 */

#include <iostream>
#include <PidController.hpp>

class highLevelPID {
 private:
  PidController & pid;    

 public:
  /**
   * @brief  constructor for MyPID class.
   */
  highLevelPID(PidController & pidInstance) : pid(pidInstance) {};

  /**
   * @brief  This function calculates the pid output using @feedback and setpoint.
   * Error is setpoint-@feedback.
   * @param  one parameter which is the feedback value.
   * @return type double.
   */
  double compute(double feedback,double desired);
};
#endif  // INCLUDE_HIGHLEVELPID_H_
