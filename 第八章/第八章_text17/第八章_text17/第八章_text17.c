#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int strcmp(char* p1, char* p2);
	int m;
	char a[80], b[80], * p1, * p2;
	printf("�����һ���ַ�����");
	gets(a);
	printf("����ڶ����ַ�����");
	gets(b);
	p1 = &a[0];
	p2 = &b[0];
	m=strcmp(p1, p2);
	printf("\n���ַ�����%d", m);
	return 0;
}
int strcmp(char* p1, char* p2) 
{
	int i;
	i = 0;
	while (*(p1 + i) == *(p2 + i))
	{
		i++;
		if (*(p1 + i + 1) == *(p2 + i + 1) && *(p2 + i + 1) == '\0')
			return 0;
	}
	return(*(p1 + i) - *(p2 + i));
}