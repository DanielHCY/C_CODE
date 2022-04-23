#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()	//printf返回值为打印字符串的个数
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}

//int main()	//memset函数
//{
//	char a[20] = "Hello World";
//	memset(a, '*', 5);
//	printf("%s\n", a);
//	return 0;
//}

//int main()	//strcpy函数
//{
//	char a[10] = "你好！", b[10] = "何春阳";
//	strcpy(a, b);
//	printf("%s\n", a);
//	return 0;
//}
