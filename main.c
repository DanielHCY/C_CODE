#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char password[20] = { 0 };
	scanf("%s", &password);
	if (strcmp(password, "123456") == 0)	//strcmp--�����Ƚ��ַ����ĺ���
	{
		printf("������ȷ\n");
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
//		Sleep(1000);	//��Ϣһ��
//		system("cls");	//ִ��ϵͳ������cls��--����
//		left++;
//		right--;
//	}
//	printf("%s", b);
//	return 0;
//}

//int main()		//���ַ�������
//{
//	int k,a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int left = 0;	//���±�
//	int right = sz - 1;	//���±�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", sizeof(a) / sizeof(a[0]));	//���������
//	return 0;
//}

//int main()
//{
//	int i=1;
//	do
//	{
//		if (i == 5)
//			continue;		//��ѭ��
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
//	printf("����������\n");
//	scanf("%s", &password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/S����\n");
//	a = getchar();
//	if (a == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
