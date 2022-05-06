#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Swap(char* buf1, char* buf2, int width)	//��������
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

//ͨ��ð��������
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
//	qsort(a, sz, sizeof(a[0]), cmp_int);	//qsort ð��������
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
//	qsort(a, sz, sizeof(a[0]), cmp_float);	//qsort ð��������
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
//	struct STU a[3] = { {"����",20},{"����",15} ,{"����",30} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	qsort(a, sz, sizeof(a[0]), cmp_STU_age);	//qsort ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", a[i].name);	//����(a+i)->name
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
//	struct STU a[3] = { {"����",20},{"����",15} ,{"����",30} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	qsort(a, sz, sizeof(a[0]), cmp_STU_name);	//qsort ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", a[i].name);	//����(a+i)->name
//	}
//}
//
////qsort����
////��һ���������������������Ԫ�ص�ַ
////�ڶ��������������������Ԫ�ظ���
////�����������������������ÿ��Ԫ�ش�С������λ���ֽ�
////���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�����ú����ĵ�ַ��������ʹ�����Լ�д�ģ�
////            ����ָ����������������Ƚ�����Ԫ�صĵ�ַ
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
//	void* c = &a;	//void* ���͵�ָ��������������͵ĵ�ַ
//	void* d = &b;	//void* ���͵�ָ�벻�ܽ��н����ò��������ܽ���+-�����Ĳ���
//	return 0;
//}
