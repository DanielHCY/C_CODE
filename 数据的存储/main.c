#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()	//�������������Ĵ洢��ʽ��ͬ
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
//	printf("%d", strlen(a));	//strlen��'\0'ͣ
//	return 0;
//}

//int main()	//������мӼ�
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
//	printf("%u", a);	//��ӡ�޷���ʮ����
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

//int main()	//�жϵ�ǰ�����洢����ķ�ʽ
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}

//int main()	//VSʹ��С�˴洢
//{
//	int a = 0x11223344;
//	return 0;
//}

//int main()	//�����븡���ʹ洢��ʽ��ͬ
//{
//	int a = 20;
//	float f = 10.0;
//	return 0;
//}
