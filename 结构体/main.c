#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

typedef struct stu
{
	char name[10];
	int age;
}stu;

void put1(stu temp)
{
	printf("%s\n", temp.name);
	printf("%d\n", temp.age);
}

void put2(stu* temp)	//����
{
	printf("%s\n", temp->name);
	printf("%d\n", temp->age);
}

int main()	//�ṹ�崫��
{
	stu stu1 = { "����",10 };
	put1(stu1);
	put2(&stu1);
	return 0;
}


//struct s
//{
//	char ch[20];
//	int address;
//};
//
//struct b
//{
//	char ch[10];
//	struct s s;
//	int num;
//};
//
//int main()	//�ṹ�����׽ṹ��
//{
//	struct b c = { "Hey",{"Hello World",111},1 };
//	printf("%s\n", c.ch);
//	printf("%s\n", c.s.ch);
//	return 0;
//}


//typedef struct stu
//{
//	char name[10];
//	short age;
//	int num;
//}stu;
//
//int main()
//{
//	struct stu stu1 = { "����",10,1 };
//	stu stu2 = { "����",20,2 };
//	return 0;
//}
