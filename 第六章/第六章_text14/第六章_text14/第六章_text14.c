#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char s1[50], s2[50];
	int i, j;
	printf("�����һ���ַ�����\n");
	gets(s1);
	printf("����ڶ����ַ�����\n");
	gets(s2);
	i =  0;
	while((s1[i] == s2[i]) && (s1[i] != '\0')) i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		j = 0;
	else
		j = s1[i] - s2[i];
	printf("���ַ�����%d", j);
	return 0;
}