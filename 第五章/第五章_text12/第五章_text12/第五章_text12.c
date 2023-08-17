#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a=1, b;
	for (b = 1; b <= 9; b++)
		a = (a + 1) * 2;
	printf("猴子总共摘下了%d个桃子", a);
	return 0;
}