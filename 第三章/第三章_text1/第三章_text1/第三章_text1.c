#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float r, n, p;
	r = 0.07;
	n = 10;
	p = pow(1 + r, n);
	printf(" p=% f\n", p);
	return 0;

}