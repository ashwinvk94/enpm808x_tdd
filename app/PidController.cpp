// @copyright 2019 Ari Kupferberg, Zuyang Cao

#include <iostream>
#include "../include/PidController.hpp"

PidController::PidController() {
    kp = 2.0;
    ki = 0.0;
    kd = 0.0;
    previousError = 0.0;
    integralError = 0.0;
}

PidController::PidController(const double kpValue, const double kiValue, const double kdValue) {
    kp = kpValue;
    ki = kiValue;
    kd = kdValue;
    previousError = 0.0;
    integralError = 0.0;
}

double PidController::compute(const double& actualVelocity,
                              const double& desiredVelocity) {
}

void PidController::tuneKp(const double kpValue) {
    kp = kpValue;
}

void PidController::tuneKi(const double kpValue) {
    ki = kpValue;
}

void PidController::tuneKd(const double kdValue) {
    kd = kdValue;
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
