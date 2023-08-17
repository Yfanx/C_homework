#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double  i,a, b, c, d, e, I;
	printf("当月利润为：");
	scanf("%lf", &i);
	a = 100000 * 0.1;
	b = a + 100000 * 0.075;
	c = b + 200000 * 0.05;
	d = c + 200000 * 0.03;
	e = d + 400000 * 0.015;
	if (i < 100000)
		I = i * 0.1;
	else if (i < 200000)
		I = a + (i - 100000) * 0.075;
	else if (i < 400000)
		I = b + (i - 200000) * 0.05;
	else if (i < 600000)
		I = c + (i - 400000) * 0.03;
	else if (i < 1000000)
		I = d + (i - 600000) * 0.015;
	else
		I = e + (i - 1000000) * 0.01;
	printf("奖金是：%10.2lf", I);
	return 0;

}