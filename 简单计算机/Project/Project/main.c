#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void menu(void)
{
	printf("*************************\n");
	printf("********  menu  *********\n");
	printf("***  1.add   2.sub  *****\n");
	printf("***  3.mul   4.div  *****\n");
	printf("***  5.xor   0.exit *****\n");
	printf("*************************\n");
}

int ADD(int x, int y)
{
	return x + y;
}

int SUB(int x, int y)
{
	return x - y;
}

int MUL(int x, int y)
{
	return x * y;
}

int DIV(int x, int y)
{
	return x / y;
}

int XOR(int x, int y)
{
	return x ^ y;
}

//int main()	//����
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*formual[6])(int, int) = { 0,ADD,SUB,MUL,DIV,XOR };
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			ret = formual[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}


void calc(int(*pr)(int, int))
{
	int x = 0;
	int y = 0;
	printf("������������������");
	scanf("%d%d", &x, &y);
	printf("%d\n", pr(x, y));
}

int main()	//��һ
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(ADD);
			break;
		case 2:
			calc(SUB);
			break;
		case 3:
			calc(MUL);
			break;
		case 4:
			calc(DIV);
			break;
		case 5:
			calc(XOR);
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
	return 0;
}
