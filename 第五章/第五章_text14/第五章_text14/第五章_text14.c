#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double x1, x2,y1,y2;
	x1 = 1.5;
	x2 = 1.5;
	do {
		x1 = x2;
		y1 = 2 * pow(x2, 3) - 4 * x2 * x2 + 3 * x2 - 6;
		y2 = 6 * x2 * x2 - 8 * x2 + 3;
		x2 = x1 - y1 / y2;

	} while (fabs(x1 - x2) >= 1e-5);
	printf("这个方程解为：%f", x2);
	return 0;

}