#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[20][20];
	int i, j, ok, n, m;

	for (i = 0; i < 20; i++)                   
	{
		for (j = 0; j < 20; j++)
			a[i][j] = 0;
	}

	ok = 0;                                  
	while (ok == 0)
	{
		printf("输入15以内的奇数：\n");
		scanf("%d", &n);
		if (n % 2 != 0 && n > 0 && n < 15)
			ok = 1;
		else
			ok = 0;
	}

	i = 0;
	j = n / 2;
	a[i][j] = 1;
	for (m = 2; m <= n * n; m++)                  
	{

		if ((i == 0) && (j != n - 1))           
		{
			i = n - 1;
			j = j + 1;
			if (a[i][j] == 0)                 
				a[i][j] = m;
			else
			{
				i = 1;
				j = j - 1;
				a[i][j] = m;
			}
		}

		else if ((i != 0) && (j == n - 1))     
		{
			i = i - 1;
			j = 0;
			if (a[i][j] == 0)                
				a[i][j] = m;
			else
			{
				i = i + 1;
				j = n - 1;
				a[i][j] = m;
			}
		}

		else if ((i == 0) && (j == n - 1))       
		{
			i = n - 1;
			j = 0;
			if (a[i][j] == 0)                 
				a[i][j] = m;
			else
			{
				i = 1;
				j = n - 1;
				a[i][j] = m;
			}
		}

		else                                 
		{
			i = i - 1;
			j = j + 1;
			if (a[i][j] == 0)                
				a[i][j] = m;
			else
			{
				i = i + 2;
				j = j - 1;
				a[i][j] = m;
			}
		}
	}

	printf("%d阶魔方阵:\n", n);
	for (i = 0; i < n; i++)                      
	{
		for (j = 0; j < n; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}
