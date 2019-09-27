// @copyright 2019 Ari Kupferberg, Zuyang Cao

#include <iostream>
#include "../include/PidController.hpp"

PidController::PidController() {
  PidController::kp = 0;
  PidController::ki = 0;
  PidController::kd = 0;
  PidController::previousError = 0;
  PidController::integralError = 0;

}

PidController::PidController(const double &kp, const double &ki,
                             const double &kd) {
  PidController::kp = kp;
  PidController::kd = kd;
  PidController::ki = ki;
  PidController::integralError = 0;
  PidController::previousError = 0;

}

double PidController::compute(const double &actualVelocity,
                              const double &desiredVelocity) {
  double error;
  error = actualVelocity - desiredVelocity;
  PidController::integralError += error;

  double pidOut;
  pidOut = PidController::kp * error
      + PidController::ki * PidController::integralError
      + PidController::kd * (error - PidController::previousError);
  PidController::previousError = error;
  return pidOut;
}

void PidController::tuneKp(const double &kp) {
  PidController::kp = kp;

}

void PidController::tuneKi(const double &ki) {
  PidController::ki = ki;
}

void PidController::tuneKd(const double &kd) {
  PidController::kd = kd;
}

double PidController::getKp() {
  return kp;
}

double PidController::getKi() {
  return ki;

}

double PidController::getKd() {
  return kd;

}

