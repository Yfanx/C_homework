#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char s1[100], s2[100];
	int i=0;
	printf("�����ַ���s2��\n");
	gets(s2);
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	printf("�ַ���s1Ϊ��\n%s\n", s1);
}