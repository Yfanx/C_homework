#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j;
	char a[5] = { '*','*','*','*','*' };
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%c",' ');
		for (j = 0; j < 5; j++)
		{
			printf("%c", a[j]);
			
		}
		printf("\n");
	}
	return 0;
}