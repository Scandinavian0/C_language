#include <stdio.h>
#include <stdlib.h>

int file_eof_code(void) 
{
	int ch;
	FILE* fp;
	char fname[50];
	printf("Enter the name of the file:");
	scanf_s("%s", fname,50);
	fp = fopen(fname, "r");
	if (fp == NULL) {
		printf("Faild to open file .");
		exit(1);
	}
	while ((ch == getc(fp)) != EOF) {
		putchar(ch);
	}
	fclose(fp);
	return 0;
}
