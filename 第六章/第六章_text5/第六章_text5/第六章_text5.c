#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 5
int main()
{
	int  i, j, a[N],x;
	for (i = 0; i < N;i++)
	{
		printf("�������%d������", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (i = 0; i < N; i++)
	{
        
		for (j = i + 1; j < N; j++)
		{
			if (a[i]< a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
			
	}
	printf("�����������Ϊ��\n");
	for (i = 0; i < N; i++)
	{
		printf("%5d", a[i]);
	}
	for (i = 0; i < N / 2; i++)
	{
		x = a[i];
		a[i] = a[N - i-1];
		a[N - i-1] = x;
	}
	printf("\n");
	printf("�����������Ϊ��\n");
	for (i = 0; i < N; i++)
	{
		printf("%5d", a[i]);
	}
	return 0;
}