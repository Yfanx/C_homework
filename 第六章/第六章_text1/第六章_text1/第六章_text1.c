#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, n, a[101];
	for (i = 1; i <= 100; i++)
		a[i] = i;
	a[1] = 0;
	for(i=2;i<=47;i++)
		for (j = i + 1; j <= 100; j++)
		{
			if (a[j] != 0 && a[i] != 0)
				if (a[j] % a[i] == 0)
					a[j] = 0;
	}
	for (i = 2, n = 0; i <= 100; i++)
	{
		if (a[i] != 0)
		{
			printf("%4d", a[i]);
			n++;
		}
		if (n == 10)
		{
			printf("\n");
			n = 0;
		}
	}
	return 0;
}