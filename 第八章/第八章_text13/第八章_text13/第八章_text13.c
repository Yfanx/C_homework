#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float integral(float(*)(float), float, float, int);
	float fsin(float);
	float fcos(float);
	float fexp(float);
	float a1, b1, a2, b2, a3, b3, c, (*p)(float);
	int n = 20;
	printf("intput a1,b1:");
	scanf("%f,%f", &a1, &b1);
	printf("intput a2,b2:");
	scanf("%f,%f", &a2, &b2);
	printf("intput a3,b3:");
	scanf("%f,%f", &a3, &b3);
	p = fsin;
	c = integral(p, a1, b1, n);
	printf("The integral of sin(x) is:%f\n", c);
	p = fcos;
	c = integral(p, a2, b2, n);
	printf("The integral of cox(x) is:%f\n", c);
	p = fexp;
	c = integral(p, a3, b3, n);
	printf("The integral of exp(x) is :%f\n", c);
	return 0;
}
float integral(float(*p)(float), float a, float b, int n)
{
	int i;
	float x, h, s;
	h = (b - a) / n;
	x = a; s = 0;
	for (i = 1; i <= n; i++)
	{
		x = x + h;
		s = s + (*p)(x) * h;
	}
	return(s);
}
float fsin(float x)
{
	return sin(x);
}
float fcos(float x)
{
	return cos(x);
}
float fexp(float x)
{
	return exp(x);
}


