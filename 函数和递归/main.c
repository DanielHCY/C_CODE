#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

double ret(int n, int k)	//����n��k�η�
{
	if (k < 0)
	{
		return 1.0 / ret(n, -k);
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * ret(n, k - 1);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	double m = 0;
	scanf("%d%d", &n, &k);
	m = ret(n, k);
	printf("%lf\n", m);
	return 0;
}


//int Fib(n)	//����쳲���������
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		c = 1;
//	}
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0, ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}


//int Fac(int n)	//��n!
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//
//int main()
//{
//	int n, ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d", ret);
//}


//int str1(char* b)	//���ַ������ȣ���һ��
//{
//	int count = 0;
//	while (*b != '\0')
//	{
//		count++;
//		b++;
//	}
//	return count;
//}
//
//int str2(char* b)	//���ַ������ȣ�������
//{
//	if (*b != '\0')
//	{
//		return 1 + str2(b + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int len1, len2;
//	char a[] = "Hello World!";
//	len1 = str1(a);
//	len2 = str2(a);
//	printf("len1 = %d\n", len1);
//	printf("len2 = %d\n", len2);
//	return 0;
//}


//void print(int a)	//���һ����
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	int num=0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//int main()	//�����ջ���
//{
//	printf("�δ���\n");
//	main();
//	return 0;
//}
