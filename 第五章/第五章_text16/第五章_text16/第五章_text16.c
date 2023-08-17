#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x, r, t;
	for (x = 0; x <= 3; x++)
	{
		for (r = 0; r <= 2 - x; r++)
			printf(" ");
		for (t = 0; t <= 2 * x; t++)
			printf("*");
		printf("\n");
	}
	for (x = 0; x <= 2; x++)
	{
		for (r = 0; r <= x; r++)
			printf(" ");
		for (t = 0; t <= 4 - 2 * x; t++)
			printf("*");
		printf("\n");
	}
	return 0;
}