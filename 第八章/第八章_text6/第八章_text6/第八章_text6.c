#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int str(char* p);
	int n;
	char a[80];
	printf("�����ַ�����");
	gets(a);
	n = str(a);
	printf("����ַ�������Ϊ:%d", n);
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