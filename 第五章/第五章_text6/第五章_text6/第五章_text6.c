#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double  sum=0,a=1;
	int n, i;
	printf(" ‰»În£¨±Ì æ1!+2!+°≠°≠+n!:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a = a * i;
		sum = sum + a;

	}
	printf("1!+2!+°≠°≠+n!=%25.18e\n", sum);
	return 0;


}