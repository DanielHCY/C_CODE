#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char ch=0;
	while ((ch = getchar()) != EOF)	//EOF��ctrl+z
	{
		putchar(ch);
	}
	return 0;
}
