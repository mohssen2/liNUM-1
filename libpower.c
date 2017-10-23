#include <stdio.h>
<<<<<<< HEAD
#include "power.h"
=======
// #include "power.h"
>>>>>>> 8bc9b4ce4baa9d3c0c70c5992f8e89c7944903e8

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

