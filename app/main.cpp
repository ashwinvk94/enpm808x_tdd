/**Copyright (C) 2019 Ari Kupferberg, Zuyang Cao
 * @file        main.cpp
 * @author      Ari Kupferberg, Zuyang Cao
 * @date        09/24/2019
 * @brief       Main file for a simple PID controller.
 */

#include <iostream>
#include <PidController.hpp>
#include <highLevelPID.h>

int main() {
    PidController pid(1, 2, 3);
    highLevelPID highlevelpid(pid);
    double a=10;
    double b=20;
    std::cout << "Compute value: " << highlevelpid.compute(b, a) << std::endl;
    return 0;
}
