#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_strlen(const char* a)	//�Ż���Ĵ���
{
	assert(a != NULL);
	int count = 0;
	while (*a != '\0')
	{
		count++;
		a++;
	}
	return count;
}

int main()
{
	char a[] = "abc";
	int len = my_strlen(a);
	printf("%d", len);
	return 0;
}


//char* my_strcpy(char* dest, const char* scr)	//�Ż���ĺ���
//{
//	char* ret = dest;
//	assert(dest != NULL);	//���ԣ�����Ǽ٣��ͻᱨ��
//	assert(scr != NULL);
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char a[] = "###########";
//	char b[] = "Hello";
//	printf("%s", my_strcpy(a, b));
//	return 0;
//}


//int main()
//{
//	const int num = 10;	//const���͵ı������ɱ��ı�
//	const int* p = &num;	//*p���ɱ��ı�
//	int* const a = &num;	//a�����ɱ��ı�
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	char a[] = "Hello";
//	char b[] = "aaa";
//	strcpy(b, a);
//	printf("%s", b);
//	return 0;
//}

//int main()	//Dubug��Release�����ͬ
//{
//	int i = 0;
//	int a[5] = { 0 };
//	printf("%p\n", a);
//	printf("%p\n", &i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		a[i] = i;
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	system("pause");
//	return 0;
//}
