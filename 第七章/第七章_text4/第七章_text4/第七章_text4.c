#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 3
int a[N][N];
int main()
{
	void zh(int a[][3]);
	int i, j;
	printf("���������飺\n");
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &a[i][j]);
	printf("\n�������Ϊ��\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	zh(a);
	printf("\n���������û���Ϊ��\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	return 0;
}

void zh(int a[ ][3])
{
	int i, j, n;
	for(i=0;i<N;i++)
		for (j = i + 1; j < N; j++)
		{
			n = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = n;
		}

}