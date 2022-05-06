#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Swap(char* buf1, char* buf2, int width)	//交换函数
{
	int i = 0;
	char temp = *buf1;
	for (i = 0; i < width; i++)
	{
		temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}

//通用冒泡排序函数
void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test()
{
	int i = 0;
	int a[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(a) / sizeof(a[0]);
	bubble_sort(a, sz, sizeof(a[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	test();
	return 0;
}



//struct STU
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int a[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	qsort(a, sz, sizeof(a[0]), cmp_int);	//qsort 冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return *(float*)e1 - *(float*)e2;
//}
//
//void test2()
//{
//	float a[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	qsort(a, sz, sizeof(a[0]), cmp_float);	//qsort 冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%.1lf ", a[i]);
//	}
//}
//
//int cmp_STU_age(const void* e1, const void* e2)
//{
//	return ((struct STU*)e1)->age - ((struct STU*)e2)->age;
//}
//
//void test3()
//{
//	struct STU a[3] = { {"张三",20},{"李四",15} ,{"王五",30} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	qsort(a, sz, sizeof(a[0]), cmp_STU_age);	//qsort 冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", a[i].name);	//或者(a+i)->name
//	}
//}
//
//int cmp_STU_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct STU*)e1)->name, ((struct STU*)e2)->name);
//}
//
//void test4()
//{
//	struct STU a[3] = { {"张三",20},{"李四",15} ,{"王五",30} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	qsort(a, sz, sizeof(a[0]), cmp_STU_name);	//qsort 冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", a[i].name);	//或者(a+i)->name
//	}
//}
//
////qsort函数
////第一个参数：待排序数组的首元素地址
////第二个参数：待排序数组的元素个数
////第三个参数：待排序数组的每个元素大小——单位：字节
////第四个参数：是函数指针，比较两个元素所用函数的地址（函数是使用者自己写的）
////            函数指针的两个参数：待比较两个元素的地址
//
//int main()
//{
//	test1();
//	printf("\n");
//	test2();
//	printf("\n");
//	test3();
//	printf("\n");
//	test4();
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	char b = '1';
//	void* c = &a;	//void* 类型的指针可以是任意类型的地址
//	void* d = &b;	//void* 类型的指针不能进行解引用操作、不能进行+-整数的操作
//	return 0;
//}
