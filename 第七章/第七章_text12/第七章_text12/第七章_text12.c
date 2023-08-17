#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float answer(float a, float b, float c, float d);
	float a, b, c, d;
	printf("ÇëÊäÈëa,b,c,d£º");
	scanf("%f%f%f%f", &a, &b, &c, &d);
	printf("x=%10.7f", answer(a, b, c, d));
	return 0;
}

float answer(float a, float b, float c, float d)
{
	float x1, x2, y1, y2;
	x1 = 1;
	x2 = 1;
	do {
		x1 = x2;
		y1 = a * pow(x2, 3) - b * x2 * x2 + c * x2 - d;
		y2 = 3*a * x2 * x2 - 2*b * x2 + c;
		x2 = x1 - y1 / y2;

	} while (fabs(x1 - x2) >= 1e-5);
	return(x2);
}