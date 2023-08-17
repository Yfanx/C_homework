#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, n, a,b;
	printf("请输入两个数字：");
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
	printf("最小公倍数为：%d", n);
	printf("最大公因数为：%d", b / n);
	return 0;

}