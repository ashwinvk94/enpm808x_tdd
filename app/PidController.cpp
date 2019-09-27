// @copyright 2019 Ari Kupferberg, Zuyang Cao

#include <iostream>
#include "../include/PidController.hpp"

PidController::PidController() {

}

PidController::PidController(const double& kp, const double& ki,
                             const double& kd) {

}

double PidController::compute(const double& actualVelocity,
                              const double& desiredVelocity) {
  std::cout << "complete Me" << std::endl;
return 0.0
}

void PidController::tuneKp(const double& kp) {

}

void PidController::tuneKi(const double& kp) {

}

void PidController::tuneKd(const double& kp) {

}

double PidController::getKp() {
return kp;
}

double PidController::getKi() {

}

double PidController::getKd() {

}

