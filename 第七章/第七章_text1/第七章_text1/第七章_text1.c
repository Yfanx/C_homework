#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int maxy(int a, int b)
{
	int c;
	
	while (a != b)
	{
		if (a < b)
		{
			c = a;
			a = b;
			b = c;
		}
		else
			a = a - b;
	}
	return(a);
}
int minb(int a, int b)
{
	int c,d;
	d = a * b;

	while (a != b)
	{
		if (a < b)
		{
			c = a;
			a = b;
			b = c;
		}
		else
			a = a - b;
	}
	return(d/a);
}
int main()
{
	int x, y;
	printf("输入两个数：");
	scanf("%d,%d", &x, &y);
	printf("最大公约数为：%d\n", maxy(x, y));
	printf("最小公约数为：%d\n", minb(x, y));
	return 0;
}