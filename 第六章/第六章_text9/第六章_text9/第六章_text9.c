#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 15
int main()
{
	int i,j,a[N], x,t;
	for (i = 0; i < N; i++)
	{
		printf("�����%d�����֣�", i+1);
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
	printf("\n�Ӵ�С��������飺\n");
	for (i = 0; i < N; i++)
		printf("%5d", a[i]);
	printf("\n������Ҫ���ҵ�����");
	scanf("%d", &x);
	i = 0; j = N - 1;
	while (i <= j)
	{
		if (x < a[N - 1] || x > a[0])
		{
			printf("�޴���");
			break;
		}
		t = (i + j) / 2;
		if (x > a[t])
			j = t - 1;
		else
			i = t + 1;
	}
	if (x == a[j])
		printf("����Ϊ��%dλ", j+1);
	else
		printf("�޴���");

	
	return 0;
}