#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print(char* str)
{
	printf("%s\n", str);
}

void test(void(*p)(char*))	//回调函数
{
	printf("Hello\n");
	p("World");
}

int main()
{
	test(print);
	return 0;
}


//int main()
//{
//	int a[10] = { 0 };
//	int (*p)[10] = a;
//	int (*pr[4])(int, int);	//pr是一个函数指针数组
//	int (*(*ppr)[4])(int, int) = &pr;	//prr是一个数组指针指向的数组的每一个元素的类型是一个函数指针
//}


//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int (*p)(int, int) = add;	//函数指针
//	printf("%d\n", add(a, b));
//	printf("%d\n", (*p)(a, b));
//	printf("%d\n", p(a, b));
//	return 0;
//}


//void test(int(*p)[2])
//{
//	printf("%d\n", p[0][1]);
//	printf("%d\n", *(p[0]+1));
//}
//
//int main()
//{
//	int a[2][2] = { 1,2,3,4 };
//	test(a);
//	return 0;
//}


//void test(int a[])
//{
//	printf("%d\n", a[2]);
//}
//
//int main()
//{
//	int a[] = { 1,2,3 };
//	test(a);
//	return 0;
//}


//void print1(int(*p)[3], int x, int y)
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	print1(&a, 3, 3);
//	return 0;
//}


//int main()
//{
//	int a[] = { 1,2,3 };
//	int(*p)[3] = &a;
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	int(*p1)[10] = &a;
//	char* arr[5];		  //指针数组
//	char* (*p2)[5] = &arr; //数组指针
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	int b[] = { 2,3,4,5 };
//	int c[] = { 3,4,5,6 };
//	int d[] = { 4,5,6,7 };
//	int* p[] = { &a,&b,&c,&d };
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcd";
//	char* p2 = "abcd";
//	if (p1 == p2)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main()
//{
//	char* p = "abcd";
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}


//void test(int a[10])
//{
//	int sz = sizeof(a) / sizeof(a[0]);
//	printf("%d\n", sz);
//}
//
//int main()
//{
//	int a[10] = { 0 };
//	test(a);
//	return 0;
//}


//int main()	//qq群问题
//{
//	int a = 1;
//	int y = 2;
//	while (y-- != -1)
//	{
//		do
//		{
//			a = a * y;
//			a++;
//		} while (y--);
//	}
//	printf("%d %d", a, y);
//	return 0;
//}
