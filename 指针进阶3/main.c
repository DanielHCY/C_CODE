#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = { 'a','b','c','d' };
	printf("%d\n", strlen(a));			//���ֵ
	printf("%d\n", strlen(a + 0));		//���ֵ
	printf("%d\n", strlen(&a + 1));		//���ֵ
	printf("%d\n", strlen(a[0] + 1));	//���ֵ
	return 0;
}
