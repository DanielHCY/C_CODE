#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()		//goto语句
//{
//	printf("你好！\n");
//	goto again;
//	printf("Hello Word!");
//again:
//	printf("你好\n");
//}

//int main()	//9*9乘法表
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<math.h>
//int main()		//求100~200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j==0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()		//辗转相除法球最大公约数
//{
//	int m, n, r, t;
//	scanf("%d%d", &m, &n);
//	if (n > m)
//	{
//		t = n;
//		n = m;
//		m = t;
//	}
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}
