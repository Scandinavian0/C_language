#include <stdio.h>

void echo_eof(void) {
	int ch;
	while ((ch=getchar())!=EOF)
	{
		putchar(ch);
	}
}