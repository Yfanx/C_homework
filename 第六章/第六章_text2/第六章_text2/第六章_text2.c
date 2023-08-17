#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, x,r, a[11];
	printf("输入数字：\n");
	for (i = 1; i <= 10; i++)
	{
		printf("第%d个数字为：", i);
		scanf("%d", &a[i]);

	}
	printf("这十个数字分别为：\n");
	for (i = 1; i <= 10; i++)
	{
		printf("%6d", a[i]);
	}
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		x = i;
		for (j = i + 1; j <= 10; j++)
			if (a[x] > a[j]) x = j;
			r = a[i];
			a[i] = a[x];
			a[x] = r;
	}
		printf("这十个数从小到大为：\n");
		for (i = 1; i <= 10; i++)
		{
			printf("%6d", a[i]);
		}
		return 0;
}