#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double a = 100,b;
	b = a / 2;
	int n;
	for (n = 2; n <= 10; n++)
	{
		a = a + b;
		b = b/ 2;
		
	}
	printf("10次落地总共进过%f米\n", a);
	printf("第10次反弹%f米\n", b);
	return 0;
}