/* Copyright (C) 2019 Ari Kupferberg, Zuyang Cao
 * @file        PidController.hpp
 * @author      Ari Kupferberg, Zuyang Cao
 * @date        09/24/2019
 * @brief       Declaration of the class using a simple PID controller.
 */

#pragma once

#include<iostream>

class PidController{
  private:
    /* @brief Proportional gain, integral gain and derivative gain. */
    double kp;
    double ki;
    double kd;

    /* @brief Delta t or time step. */
    double dt;

    /* @brief Error in previous time step. */
    double previousError;

    /* @brief Current error. */
    double currentError;

    /* @brief Accumulated error. */
    double integralError;

    /* @brief Current output of the PID controller. */
    double controlOutput;
};
