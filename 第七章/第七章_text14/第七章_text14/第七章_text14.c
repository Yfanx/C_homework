#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define N 10
#define M 5
int a[N][M],e[N][M], s = 0, y = 0;
float b[N] = { 0.0 }, c[M] = { 0.0 };
int main()
{
	void average_s(void);
	void average_c(void);
	void max(void);
	float pfc(void);
	int i, j;
	for (i = 0; i < N; i++)
	{
		printf("请输入第%d个学生的各科成绩：",i+1);
		for (j = 0; j < M; j++)
		{
			scanf("%d", &a[i][j]);
			e[i][j] = a[i][j];
		}
		printf("\n");
	}
	

	average_s();
	average_c();
	max();
	float d;
	d = pfc();
	printf("学号     class1  class2  class3  class4  class5    average\n");
	for (i = 0; i < N; i++)
	{
		
		for (j = 0; j < M; j++)
			printf("%7d",a[i][j]);
		printf("    %7.4f",b[i]);
		printf("\n");
	}
	for (j = 0; j < M; j++)
		printf("%7.2f", c[j]);
	printf("\n最高分数是%d同学的class%d", s+1, y+1);
	printf("\n平均分方差为:%8.5f", d);
	return 0;

}
void average_s(void)
{
	int i, j;
	float k = 0.0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			k = k + a[i][j];
		b[i] = k / M;
		k = 0;

	}
}
void average_c(void)
{
	int i, j, k;
	k = 0.0;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			k = k + a[j][i];
		c[i] = k / N;
		k = 0;
	
	}
}
void max(void)
{
	int i, j, max,t;
	max = e[0][0];
	
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			if (e[i][j] > max)
			{
				t = max;
				max = e[i][j];
				e[i][j] = t;
				s = i;
				t = j;
			}
	
	}
}
float pfc(void)
{
	int i;
	float sum1, sum2;
	sum1 = 0.0;
	sum2 = 0.0;
	for (i = 0; i < N; i++)
	{
		sum1 += b[i] * b[i];
		sum2 += b[i];
	}
	return(sum1 / N - (sum2 / N) * (sum2 / N));
}