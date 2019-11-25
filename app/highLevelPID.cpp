
/* Copyright 2019 Ashwin Varghese Kuruttukulam
 * @file highLevelPID.cpp
 * @author Ashwin Varghese Kuruttukulam
 */

#include<highLevelPID.h>

double highLevelPID::compute(double feedback,double desired){
	return pid.compute(feedback,desired);
}
