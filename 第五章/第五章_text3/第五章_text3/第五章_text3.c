#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, n, a,b;
	printf("�������������֣�");
	scanf("%d,%d", &m, &n);
	if (m > n)
	{
		a = m;
		m = n;
		n = a;
	}
	b = m * n;
	while (m != n)
	{
		n = n - m;
		if (m > n)
		{
			a = m;
			m = n;
			n = a;
		}
	}
	printf("��С������Ϊ��%d", n);
	printf("�������Ϊ��%d", b / n);
	return 0;

}