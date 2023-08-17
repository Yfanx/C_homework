#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 15
int main()
{
	int i,j,a[N], x,t;
	for (i = 0; i < N; i++)
	{
		printf("输入第%d个数字：", i+1);
		scanf("%d", &a[i]);
	}
	for(i=0;i<N;i++)
		for (j = i + 1; j < N; j++)
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	printf("\n从大到小输出此数组：\n");
	for (i = 0; i < N; i++)
		printf("%5d", a[i]);
	printf("\n请输入要查找的数：");
	scanf("%d", &x);
	i = 0; j = N - 1;
	while (i <= j)
	{
		if (x < a[N - 1] || x > a[0])
		{
			printf("无此数");
			break;
		}
		t = (i + j) / 2;
		if (x > a[t])
			j = t - 1;
		else
			i = t + 1;
	}
	if (x == a[j])
		printf("此数为第%d位", j+1);
	else
		printf("无此数");

	
	return 0;
}