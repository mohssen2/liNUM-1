#include <stdio.h>
#include "power.h"
// #include "mt.h"

int main(void)
{
	float volt,resistance,sum;
	printf("Ange volt: ");
	scanf("%f", &volt);
	printf("Ange resistans: ");
	scanf("%f", &resistance);
	sum=calc_power_r(volt, resistance);
	printf("Power är: %f\n", sum);
	return 0;
}

