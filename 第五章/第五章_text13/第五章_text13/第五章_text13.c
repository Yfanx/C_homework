#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float x1, x2,a;
	printf("请输入整数a：");
	scanf("%f", &a);
	x1 = a / 2;
	x2 = 0.5* (x1 + a / x1);
	do
	{
		x1 = x2;
		x2 = 0.5* (x1 + a / x1);
	} while (fabs(x1 - x2) >= 1e-5);
	printf("根号a=%f\n", x2);
	return 0;

}