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

//int main()	//整形提升
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d", c);
//	return 0;
//}


//struct student	//结构体
//{
//	char name[10];
//	int age;
//	char id[10];
//};
//
//int main()
//{
//	struct student stu1 = { "张三",20,"123456" };
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


//int main()	//逗号运算符，全算，返回最后一个值
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("c=%d\n", c);
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()	//exp1 ？ exp2 ： exp3
//{
//	int a = 1, b = 0;	//法一
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//
//	b = (a > 5 ? 3: -3);	//法二
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++c && d++; //一个为假，后面不执行
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

//int main()	//取反，对二进制（补码）进行取反
//{
//	int a = 0;
//	printf("%d", ~a);
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));	//sizeof内部不进行真实运算
//	printf("%d", s);
//	return 0;
//}

//int main()	//计算一个整数在内存中二进制1的个数（补码）
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

//int main()	//不引入第三变量交换两个数，法二
//{
//	int a = 5;
//	int b = 3;
//	printf("a = %d  b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d  b = %d", a, b);
//}

//int main()	//不引入第三变量交换两个数，法一
//{
//	int a = 5;
//	int b = 3;
//	printf("a = %d  b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d  b = %d", a, b);
//}

//int main()	//按位异或，有相同为0，相异为1（用补码算）
//{
//	int a = 5;
//	int b = 3;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()	//按位或，有1就是1，两个全为0则是0（用补码算）
//{
//	int a = 5;
//	int b = 3;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()	//按位与，有0就是0，两个全为一则是1（用补码算）
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
//	b = a << 1;	//左移右边补0
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = 0;
//	b = a >> 1;	//移动的是补码（反码加1）
//	printf("%d", b);
//	return 0;
//}
