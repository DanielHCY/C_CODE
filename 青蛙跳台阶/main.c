#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int add(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else if (n > 2)
	{
		return add(n - 2) + add(n - 1);
	}
}

int main()
{
	int n = 0, a = 0;
	scanf("%d", &n);
	a = add(n);
	printf("%d", a);
	return 0;
}
