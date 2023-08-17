#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define N 4
#define M 6
float b[N];
int main()
{
	void average_s(int* p);
	int average_text1(int* p);
	void find(int*p);
	void find_student(int* p);
	float m;
	int i, j,a[N][M],*p;
	for (i = 0; i < N; i++)
	{
		printf("请输入第%d个学生的学号和各科成绩：", i + 1);
		for (j = 0; j < M; j++)
		{
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	p = &a[0];
	average_s(p);
	m = average_text1(p);
	printf("    学号 class1 class2 class3 class4 class5  average\n");
	for (i = 0; i < N; i++)
	{

		for (j = 0; j < M; j++)
			printf("%7d", a[i][j]);
		printf("    %7.4f", b[i]);
		printf("\n");
	}
	printf("第一门课程的平均分为：%4.2f\n", m);
	find(p);
	printf("平均分在90分以上或者全部成绩都为85分以上的学生为：\n");
	find_student(p);
	return 0;
}
void average_s(int*p)
{
	int i, j;
	float k = 0.0;
	for (i = 0; i < N; i++)
	{
		for (j = 1; j < M; j++)
			k = k + *(p + M * i + j);
		b[i] = k / M;
		k = 0;

	}
}
int average_text1(int* p)
{
	int i;
	float m = 0.0;
	for (i = 0; i < N; i++)
		m = m + *(p + M * i + 1);
	return(m / N);

}
void find(int* p)
{
	int i, j,n,k;
	n = 0;
	k = 1;
	for (i = 0; i < N; i++)
	{
		for (j = 1; j < M; j++)
			if (*(p + M * i + j) < 60)
				n++;
		if (n > 2)
		{
			printf("第%d个不及格的人为:\n",k++);
			printf("%6d%4d%4d%4d%4d%4d%4d\n", *(p + M * i), *(p + M * i + 1), *(p + M * i + 2), *(p + M * i + 3), *(p + M * i + 4), *(p + M * i + 5), *(p + M * i + 6));
			n = 0;
		}
		n = 0;
	}
}
void find_student(int* p)
{
	int i, j,n;
	n = 0;
	for (i = 0; i < N; i++)
	{
		if (b[i] >= 90)
		{
			printf("%4d", *(p + M * i));
			continue;
	    }
		for (j = 1; j < M; j++)
			if (*(p + M * i + j) >= 85)
				n++;
		if (n == 5)
			printf("%4d", *(p + M * i));
		n = 0;
	}
}