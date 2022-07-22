#include <stdio.h>
#define PI 3.14159


void pizza_code(void) {
	float area, circum, radius;
	printf("What is the radius of your pizza?\n");
	scanf_s("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("your basic pizza parameters are as fllows:\n");
	printf("circumference=%1.2f,area=%1.2f\n", circum, area);
}