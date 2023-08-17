#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d,i;
	i = 0;
	printf("水仙花数有：\n");
	for (a = 1; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				d = a * 100 + b * 10 + c;
				if (d == pow(a, 3) + pow(b, 3) + pow(c, 3))
				{
					printf("%5d", d);
					i++;
				}
				if (i == 5)
				{
					printf("\n");
					i = 0;
				}
			}
		}
	}
	printf("\n");
	return 0;

}