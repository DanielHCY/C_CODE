#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	
	return 0;
}

//int main()
//{
//	char a = 1;
//	printf("%u\n", sizeof(a));
//	printf("%u\n", sizeof(+a));
//	printf("%u\n", sizeof(!a));
//}

//int main()	//��������
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d", c);
//	return 0;
//}


//struct student	//�ṹ��
//{
//	char name[10];
//	int age;
//	char id[10];
//};
//
//int main()
//{
//	struct student stu1 = { "����",20,"123456" };
//	struct student* p = &stu1;
//	printf("%s\n", p->name);
//	printf("%d\n", p->age);
//	printf("%s\n", p->id);
//	printf("%s\n", (*p).name);
//	printf("%d\n", (*p).age);
//	printf("%s\n", (*p).id);
//	printf("%s\n", stu1.name);
//	printf("%d\n", stu1.age);
//	printf("%s\n", stu1.id);
//	return 0;
//}


//int main()	//�����������ȫ�㣬�������һ��ֵ
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("c=%d\n", c);
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()	//exp1 �� exp2 �� exp3
//{
//	int a = 1, b = 0;	//��һ
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//
//	b = (a > 5 ? 3: -3);	//����
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++c && d++; //һ��Ϊ�٣����治ִ��
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("c=%d\n", c);
//	printf("d=%d\n", d);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	printf("%d", sizeof((short)a));
//	return 0;
//}

//int main()	//ȡ�����Զ����ƣ����룩����ȡ��
//{
//	int a = 0;
//	printf("%d", ~a);
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));	//sizeof�ڲ���������ʵ����
//	printf("%d", s);
//	return 0;
//}

//int main()	//����һ���������ڴ��ж�����1�ĸ��������룩
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()	//�����������������������������
//{
//	int a = 5;
//	int b = 3;
//	printf("a = %d  b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d  b = %d", a, b);
//}

//int main()	//���������������������������һ
//{
//	int a = 5;
//	int b = 3;
//	printf("a = %d  b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d  b = %d", a, b);
//}

//int main()	//��λ�������ͬΪ0������Ϊ1���ò����㣩
//{
//	int a = 5;
//	int b = 3;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()	//��λ����1����1������ȫΪ0����0���ò����㣩
//{
//	int a = 5;
//	int b = 3;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()	//��λ�룬��0����0������ȫΪһ����1���ò����㣩
//{
//	int a = 5;
//	int b = 3;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = 0;
//	b = a << 1;	//�����ұ߲�0
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = 0;
//	b = a >> 1;	//�ƶ����ǲ��루�����1��
//	printf("%d", b);
//	return 0;
//}
