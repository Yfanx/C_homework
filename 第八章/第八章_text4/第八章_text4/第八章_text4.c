#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, n,s,a[80],b[80], * p,*p1, flag = 1, c = 1;
	while (flag)
	{
		printf("����m,n(m<n):");
		scanf("%d,%d", &m, &n);
		if (m <= n)flag = 0;
	}
	for (p=a; p <( a + n ); p++)
	{
		printf("�����%d������", c++);
		scanf("%d", p);
	}
	printf("\n�⴮����Ϊ��\n");
	for (p=a; p < (a+ n); p++)
	{
		printf("%5d",*p);
	}
	s = 0;
	for (p = (a + n - m); p < (a + n); p++)
		b[s++] = *p;
	for (p = a; p < (a + n - m); p++)
		b[s++] = *p;
	printf("\nת����Ϊ��\n");
	for (s = 0; s < n; s++)
		printf("%5d", b[s]);
	return 0;
}