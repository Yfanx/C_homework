#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, x, r, a[11];
	printf("�������֣�\n");
	for (i = 1; i <= 10; i++)
	{
		printf("��%d������Ϊ��", i);
		scanf("%d", &a[i]);

	}

	for (i = 1; i <= 10; i++)
	{
		x = i;
		for (j = i + 1; j <= 10; j++)
			if (a[x] > a[j]) x = j;
		r = a[i];
		a[i] = a[x];
		a[x] = r;
	}
	printf("��ʮ������С����Ϊ��\n");
	for (i = 1; i <= 10; i++)
	{
		printf("%6d", a[i]);
	}
	printf("\n");
	printf("Ҫ�������Ϊ��");
	scanf("%d", &a[0]);

	for (i = 1; i <= 10; i++)
	{
		if (a[0] > a[i])
			x = i;
	}
	if (x != i)
	{
		r = a[0];
		for (i = 1; i <= x; i++)
		{
			a[i - 1] = a[i];
		}
		a[x] = r;
	}
	printf("\n�������ֺ�����Ϊ��\n");
	for (i = 0; i <= 10; i++)
	{
		printf("%6d", a[i]);
	}
	printf("\n");
	return 0;
}