#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum = 0, a, n,b;
	printf("ÊäÈëa, b:");
	scanf("%d,%d", &a, &n);
	b = a;
	while (n >0)
	{
		sum = sum + b;
		b = b * 10 + a;
		n--;
		
	}
	printf("Sn =%d", sum);
	return 0;
}