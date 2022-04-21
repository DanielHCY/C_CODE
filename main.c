#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char password[20] = { 0 };
	scanf("%s", &password);
	if (strcmp(password, "123456") == 0)	//strcmp--用来比较字符串的函数
	{
		printf("密码正确\n");
	}
	return 0;
}

//#include<Windows.h>
//#include<Stdlib.h>
//int main()
//{
//	char a[] = "Hello Word!";
//	char b[] = "###########";
//	int left = 0, right = strlen(a) - 1;
//	while (left <= right)
//	{
//		b[left] = a[left];
//		b[right] = a[right];
//		printf("%s", b);
//		Sleep(1000);	//休息一秒
//		system("cls");	//执行系统函数“cls”--清屏
//		left++;
//		right--;
//	}
//	printf("%s", b);
//	return 0;
//}

//int main()		//二分法查找数
//{
//	int k,a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int left = 0;	//左下标
//	int right = sz - 1;	//右下标
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", sizeof(a) / sizeof(a[0]));	//算数组个数
//	return 0;
//}

//int main()
//{
//	int i=1;
//	do
//	{
//		if (i == 5)
//			continue;		//死循环
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0;; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0,ch=0;
//	char password[20] = { 0 };
//	printf("请输入密码\n");
//	scanf("%s", &password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/S）：\n");
//	a = getchar();
//	if (a == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
