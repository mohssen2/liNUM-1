#include <stdio.h>
// #include "power.h"

//Calculates totally power process in a circuit (in 2 ways)
float calc_power_r(float volt, float resistance)
{
	float p;
	p=volt*resistance;
	return p;
}

float calc_power_i(float volt, float current)
{
	float p;
	p=(volt*volt)/current;
	return p;
}

