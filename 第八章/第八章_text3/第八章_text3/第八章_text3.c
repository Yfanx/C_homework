#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 10
void input(int* a)
{
	int n;
	for (n = 0; n < N; n++)
	{
		printf("输入第%d个数:", n + 1);
		scanf("%d", &a[n]);
	}
	printf("这十个数为：");
	for (n = 0; n < N; n++)
	{
		printf("%5d",a[n]);
	}
	printf("\n");
}
void change(int* a)
{
	int *max, *min,n;
	max = min = a;
	for (n = a; n < a+N-1; n++)
	{
		if (*a < *min) min = a;
		else if (*a > *max) max = a;
	}
	n = *min; *min = a[0]; a[0] = n;
	if (min == max)max = min;
	n = *max; *max = a[N - 1]; a[N - 1] = n;
}
void output(int* a)
{
	int n;
	printf(" 排序后为：");
	for (n = 0; n < N; n++)
		printf("%5d", a[n]);
}
int main()
{
	int a[N];
	input(a);
	change(a);
	output(a);
	return 0;
}