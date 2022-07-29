#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void guess_code(void) {
	int guess = 1;
	char response;
	printf("pick an integer form 1 to 100, iwill try to guess");
	printf("it .\n Respond whit  a y if my guess is right and with");
	printf("Uh... is your number %d \n", guess);
	int test;
	int test1=scanf_s ("%d", &test);
	printf("scanf:%d\n", test1);
	/*while ((response= getchar())!='y')
	{
		if (response=='n')
		{
			printf("Well then , is it %d\n", ++guess);

		}
		else
		{
			printf("error\n");
		}
		while (getchar()!='\n')
		{
			continue;
		}
	}*/
	printf("ok");
}