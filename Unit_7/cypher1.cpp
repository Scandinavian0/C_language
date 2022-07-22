#include <stdio.h>
#define SPACE ' '
void cypher1_code(void) {
	char ch;
	ch = getchar();
	while (ch!='\n')
	{
		if (ch == SPACE) {
			putchar(ch);
		}
		else
		{
			putchar(ch + 1);
		}
		ch = getchar();  // 获取下一个字符
	}
	putchar(ch);

}