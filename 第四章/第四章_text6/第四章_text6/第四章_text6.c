#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double x, y;
	printf("请输入一个数字：");
	scanf("%lf", &x);
	if (x < 1)
	{
		y = x - 1;
		printf("x=%lf\t y=x-1=%lf\n", x,y);
	}
	else if (x < 10)
	{
		y = 2 * x - 1;
		printf("x=%lf\t y=2x-1=%lf\n", x, y);
	}
	else
	{
		y = 3 * x - 11;
		printf("x=%lf\t y=3x-11=%lf\n", x, y);

	}
	return 0;

}