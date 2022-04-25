#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a[] = { 1,2,3,4 };
	printf("%p\n", a);
	printf("%p\n", a+1);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[0]+1);
	printf("%p\n", &a);	//代表整个数组的地址
	printf("%p\n", &a+1);
}


//void sort(int a[], int sz)	//冒泡法排序
//{
//	int temp;
//	int i, j;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j + 1];
//				a[j + 1] = a[j];
//				a[j] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int a[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz, i;
//	sz = sizeof(a) / sizeof(a[0]);
//	sort(a, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char a[2][6] = { "hello","world" };
//	printf("%s\n", a[0]);
//	printf("%s\n", a[1]);
//	return 0;
//}

//int main()
//{
//	char a1[] = "abc";
//	char a2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(a1));
//	printf("%d\n", sizeof(a2));
//	printf("%d\n", strlen(a1));
//	printf("%d\n", strlen(a2));	//无\0，是随机数
//	return 0;
//}
