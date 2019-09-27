/**@Copyright (C) 2019 Ari Kupferberg, Zuyang Cao
 * @file        PidController.hpp
 * @author      Ari Kupferberg, Zuyang Cao
 * @date        09/24/2019
 * @brief       Declaration of the class using a simple PID controller.
 */

#pragma once

class PidController {
 private:
  /** @brief Proportional gain, integral gain and derivative gain. */
  double kp;
  double ki;
  double kd;

  /** @brief Error in previous time cycle. */
  double previousError;

  /** @brief Total error in previous time cycles. */
  double integralError;

 public:
  /**
   * @brief Constructor without given values, expecting 0 value for every member
   */
  PidController();

  /**
   * @brief Constructor with given values
   * @param kp - proportional gain
   * @param ki - integral gain
   * @param kd - derivative gain
   */
  PidController(const double&, const double&, const double&);

  /**
   * @brief Compute function to calculate the control output
   * @param actualVelocity - The current actual velocity
   * @param desiredVelocity - The goal velocity
   * @param previousError - The previous amount of error used for integral
   * return controlValue - The controller overall gain
   */
  double compute(const double&, const double&);

  /**
   * @brief Tune proportional gain.
   * @param kp - proportional gain
   */
  void tuneKp(const double&);

  /**
   * @brief Tune integral gain.
   * @param ki - integral gain
   */
  void tuneKi(const double&);

  /**
   * @brief Tune derivative gain.
   * @param kd - derivative gain
   */
  void tuneKd(const double&);

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
};
