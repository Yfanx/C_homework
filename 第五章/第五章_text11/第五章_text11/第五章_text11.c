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
	printf("10������ܹ�����%f��\n", a);
	printf("��10�η���%f��\n", b);
	return 0;
}