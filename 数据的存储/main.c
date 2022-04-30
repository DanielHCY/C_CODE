#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()	//浮点数与整数的存储方式不同
{
	int n = 9;
	float* p = (float*)&n;
	printf("n = %d\n", n);
	printf("*p = %lf\n", *p);
	*p = 9.0;
	printf("n = %d\n", n);
	printf("*p = %lf\n", *p);
	return 0;
}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));	//strlen到'\0'停
//	return 0;
//}

//int main()	//补码进行加减
//{
//	int a = -20;
//	unsigned int b = 10;
//	printf("%d", a + b);
//	return 0;
//}

//int main()
//{
//	signed char a = 127;
//	a++;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	printf("%u", a);	//打印无符号十进制
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d b=%d c=%d", a,b,c);
//	return 0;
//}

//int main()	//判断当前机器存储字序的方式
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//int main()	//VS使用小端存储
//{
//	int a = 0x11223344;
//	return 0;
//}

//int main()	//整形与浮点型存储方式不同
//{
//	int a = 20;
//	float f = 10.0;
//	return 0;
//}
