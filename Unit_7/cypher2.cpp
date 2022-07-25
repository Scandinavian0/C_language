#include <stdio.h>
#include <ctype.h>
void cypher2_code(void) {
	char ch;
	ch = getchar();
	while (ch != '\n')
	{
		if ((ch = getchar()) != '\n' ){
			putchar(ch);
		}
		else
		{
			putchar(ch + 1);
		}
	}
	putchar(ch);

}