#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 4
#define M 5
int main()
{
	int  a[N][M], i, j, x,r,t,flag;
	printf("输入4行5列数字\n");
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < N; i++)
	{
		x = a[i][0];
		r = 0;
		for (j = 1; j < M; j++)
		{
			if (a[i][j] > x)
			{
				x = a[i][j];
				r = j;
			}
		}
		flag = 1;
		for (t = 0; t < N; t++)
			if (a[t][r] < x)
			{
				flag = 0;
				continue;
			}
		if (flag)
		{
			printf("鞍点为：a[%d][%d]=%d\n", i, r,x);
			break;
		}
	}
			
	return 0;
	
	

}