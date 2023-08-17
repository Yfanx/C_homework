#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int str(char* p);
	int n;
	char a[80];
	printf("输入字符串：");
	gets(a);
	n = str(a);
	printf("这个字符串长度为:%d", n);
	return 0;
}
int str(char* p)
{
	int n;
	n = 0;
	while (*p != '\0')
	{
		p++;
		n++;
	}
	return(n);
}