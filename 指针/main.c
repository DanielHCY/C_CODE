#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void put(int m)
{
	int i = 0;
	printf("����λ:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("ż��λ:\n");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
}

int main()
{
	int m = 0;
	scanf("%d", &m);
	put(m);
	return 0;
}


//int different(int m, int n)	//�������������ڴ��в�ͬλ�ĸ���
//{
//	int a = m ^ n;
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = different(m, n);
//	printf("count = %d\n");
//	return 0;
//}


//int count_bit_one1(unsigned int n)	//��һ������һ�������ڴ���1�ĸ���
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//
//int count_bit_one2(unsigned int n)	//����������һ�������ڴ���1�ĸ���
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_bit_one3(unsigned int n)	//����������һ�������ڴ���1�ĸ���
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one1(a);
//	printf("count = %d\n", count);
//	count = count_bit_one2(a);
//	printf("count = %d\n", count);
//	count = count_bit_one3(a);
//	printf("count = %d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = 1, b = 2, c = 3, d = 0;
//	d = ++a, ++b, ++c;
//	printf("%d ", d);
//	d = (++a, ++b, ++c);
//	printf("%d", d);
//	return 0;
//}

//int i;	//ȫ�ֱ�������������Ϊ0
//int main()
//{
//	i--;
//	if (i > sizeof(i))	//sizeof����ֵΪ�޷��ţ����з�����Ƚ�ʱ���з��Զ�ת�����޷�
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;	//���Ŵ����ڴ棨44332211��
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x", a);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	{
//		printf("%d", a);
//	}
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;	//�����ڸ��������ʹ��
//	}
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	double a = 1.226;
//	printf("%.2lf", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* d[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(d[i]));
//	}
//	return 0;
//}

//int main()	//����ָ��
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	int*** ppp = &pp;
//	***ppp = 20;
//	printf("%d\n", a);
//	printf("%d\n", *p);
//	printf("%d\n", **pp);
//	printf("%d\n", ***ppp);
//	return 0;
//}


//int my_strlen(char* p)	//ָ������ַ�������
//{
//	char* start = p;
//	char* end = p;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "Hello Word!";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d ", &a[9] - &a[0]);	//ָ�������Ԫ�ظ���
//	return 0;
//}

//int main()
//{
//	int* pa = NULL;	//��֪������ָ����ֵʱ�Ķ�����ʽ
//	int a[] = { 0 }, i;
//	char* p = a;
//	for (i = 0; i < 3; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	printf("%d", a[0]);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}
