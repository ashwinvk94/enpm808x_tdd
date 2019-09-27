/**Copyright (C) 2019 Ari Kupferberg, Zuyang Cao
 * @file        main.cpp
 * @author      Ari Kupferberg, Zuyang Cao
 * @date        09/24/2019
 * @brief       Main file for a simple PID controller.
 */

#include <iostream>
#include <PidController.hpp>

int main() {
    PidController pid(1, 2, 3);
    std::cout << "Kp value: " << pid.getKp() << std::endl;
    std::cout << "Ki value: " << pid.getKi() << std::endl;
    std::cout << "Kd value: " << pid.getKd() << std::endl;
    std::cout << "Compute value: " << pid.compute(20, 10) << std::endl;
    return 0;
}
