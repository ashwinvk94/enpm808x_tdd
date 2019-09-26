/**Copyright (C) 2019 Ari Kupferberg, Zuyang Cao
 * @file        PidController.hpp
 * @author      Ari Kupferberg, Zuyang Cao
 * @date        09/24/2019
 * @brief       Declaration of the class using a simple PID controller.
 */

#pragma once

#include<iostream>

class PidController {
 public:
  /**
   * @brief Constructor with given values
   * @param kp - proportional gain
   * @param ki - integral gain
   * @param kd - derivative gain
   */
  PidController(const double& kp, const double& ki, const double& kd);

  /**
   * @brief Tune proportional gain.
   * @param kp - proportional gain
   */
  void tuneKp(const double& kp);

  /**
   * @brief Tune integral gain.
   * @param ki - integral gain
   */
  void tuneKi(const double& ki);

  /**
   * @brief Tune derivative gain.
   * @param kd - derivative gain
   */
  void tuneKd(const double& kd);

  /**
   * @brief Get current proportional gain.
   * @return kp - proportional gain.
   */
  double getKp();

  /**
   * @brief Get current integral gain.
   * @return ki - integral gain.
   */
  double getKi();

  /**
   * @brief Get current derivative gain.
   * @return kd - derivative gain.
   */
  double getKd();

  /**
   * @brief Get time step value.
   * @return dt - delta t or time step.
   */
  double getDt();

  /**
   * @brief Calculate and return the PID control output.
   * @param velocitySetPoint - target velocity set point
   * @param currentVelocity - current velocity
   * @return controlOutput - control output from PID
   */
  double getControlOutput(const double& velocitySetPoint,
                          const double& currentVelocity);

 private:
  /** @brief Proportional gain, integral gain and derivative gain. */
  double kp;
  double ki;
  double kd;

  /** @brief Delta t or time step, set to 0.1 second. */
  double dt = 0.1;

  /** @brief Error in previous time step, set default to zero. */
  double previousError = 0;

  /** @brief Current error. */
  double currentError;

  /** @brief Accumulated error. */
  double integralError;

  /** @brief Current output of the PID controller. */
  double controlOutput;
};
