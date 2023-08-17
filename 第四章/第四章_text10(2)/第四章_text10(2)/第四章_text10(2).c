#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int t;
	double  i, a, b, c, d, e, I;
	printf("当月利润为：");
	scanf("%lf", &i);
	a = 100000 * 0.1;
	b = a + 100000 * 0.075;
	c = b + 200000 * 0.05;
	d = c + 200000 * 0.03;
	e = d + 400000 * 0.015;
	t = (int)(i / 100000);
	if( t > 10) t = 10;
	switch (t)
	{
	case 0:I = i * 0.1; break;
	case 1:I = a + (i - 100000) * 0.075; break;
	case 2:
	case 3:I = b + (i - 200000) * 0.05; break;
	case 4:
	case 5:I = c + (i - 400000) * 0.03; break;
	case 6:
	case 7:
	case 8:
	case 9:I = d + (i - 600000) * 0.015; break;
	case 10:I = e + (i - 1000000) * 0.01; break;
	}
	printf("奖金是：%10.2lf", I);
	return 0;
}