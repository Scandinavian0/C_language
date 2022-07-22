
#include <stdio.h>
void  print_int_code(void) {
	int x = 100;
	printf("dec=%d; otcal=%o; hex = %x\n", x, x, x);
	printf("dec=%d; otcal=%#o; hex = %#x\n", x, x, x);
}
