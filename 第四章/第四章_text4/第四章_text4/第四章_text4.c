#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c,max;
	printf("������������Ϊ��");
	scanf("%d%d%d", &a, &b, &c);
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	printf("��������Ϊ��%d\n", max);
	return 0;

}