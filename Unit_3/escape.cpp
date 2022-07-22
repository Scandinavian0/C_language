#include "escape.h"
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int escape_code(void) {
	float salary;
	salary = 4000.00;
	printf("\aEnter your desired monthly salary:");
	printf(" $________\b\b\b\b\b\b\b");
	printf("\n\t$%.2f a mouth is $%.2f a year.", salary, salary*12.0);
	printf("\rGee!\n");
	return 0;
}
