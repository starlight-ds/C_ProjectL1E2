/*
 * Lab_1_ex2.c
 *
 *  Created on: Jan 31, 2024
 *      Author: jsmirni
 */

#include <stdio.h>
#define PI 3.14159

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	double radius, area;

	printf("Enter the radius of the circle: ");
	scanf("%lf", &radius);

	area = PI * (radius * radius);
	printf("The area of the circle is %f.", area);

	return 0;
}

