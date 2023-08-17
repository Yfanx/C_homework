#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c,max;
	printf("输入三个整数为：");
	scanf("%d%d%d", &a, &b, &c);
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	printf("最大的整数为：%d\n", max);
	return 0;

}