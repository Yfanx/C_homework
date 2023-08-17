#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int *m1, *m2, *m3, *m4, *max;
int main()
{
	void find(int* p);
	int a[5][5],i,j,*p;
	printf("输入矩阵：\n");
	for (i = 0; i < 5; i++)
		scanf("%d %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
	p = m1 = m2 = m3 = m4 = max = a;
	find(p);
	printf("\n最后的矩阵为：\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%5d", *(p + 5 * i + j));
		}
		printf("\n");
	}
	return 0;
}
void find(int* p)
{
	int i, j,t;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			if (*(p + 5 * i + j) > *max)
				max = (p + 5 * i + j);
			else if (*(p + 5 * i + j) < *m1)
				m1 = (p + 5 * i + j);
		}
	if (m1 == m2)
	{
		m2++; m3++; m4++;
	}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			if ((p + 5 * i + j) == m1)
				j++;
			else if (*(p + 5 * i + j) < *m2)
				m2 = (p + 5 * i + j);
		}
	if (m3 == m2)
	{
		m3++; m4++;
	}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			if ((p + 5 * i + j) == m1|| (p + 5 * i + j) == m2)
				j++;
			else if (*(p + 5 * i + j) < *m3)
				m3 = (p + 5 * i + j);
		}
	if (m3 == m4)
		m4++;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			if ((p + 5 * i + j) == m1|| (p + 5 * i + j) == m2|| (p + 5 * i + j) == m3)
				j++;
			else if (*(p + 5 * i + j) < *m4)
				m4 = (p + 5 * i + j);
		}
	if (p != m1)
	{
		t = *p;
		*p = *m1;
		*m1 = t;
	}
	if (m2 == p)
		m2 = m1;
	else if (m3 == p)
		m3 = m1;
	else if (m4 == p)
		m4 = m1;
	else if (max == p)
		max = m1;
	if ((p+4) != m2)
	{
		t = *(p+4);
		*(p+4) = *m2;
		*m2 = t;
	}
	if (m3 == (p+4))
		m3 = m2;
	else if (m4 == (p+4))
		m4 = m2;
	else if (max == (p+4))
		max = m2;
	if ((p + 20) != m3);
	{
		t = *(p + 20);
		*(p + 20) = *m3;
		*m3 = t;
	}
	if (m4 == (p + 20))
		m4 = m3;
	else if (max == (p + 20))
		max = m3;
	if ((p + 24) != m4);
	{
		t = *(p + 24);
		*(p + 24) = *m3;
		*m3 = t;
	}
	if (max == (p + 24))
		max = m3;
	if((p+12)!=max)
	{
		t = *(p + 12);
		*(p + 12) = *max;
		*max = t;
	}
}