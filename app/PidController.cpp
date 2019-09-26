// @copyright 2019 Ari Kupferberg, Zuyang Cao

#include <iostream>
#include <PidController.hpp>

PidController::PidController(const double& kp, const double& ki, const double& kd) {

}


double PidController::compute(double& actualVelocity, double& desiredVelocity, double& previousError) {
   cout << "complete Me" << std::endl;
   return 0.0
}


void PidController::tuneKp(const double& kp) {

}


void PidController::tuneKi(const double& kp) {

}


void PidController::tuneKd(const double& kp) {

}


double PidController::getKp() {

}


double PidController::getKi() {

}


double PidController::getKd() {

}

