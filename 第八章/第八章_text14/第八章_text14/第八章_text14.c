#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	void change(int*,int);
	int i,n, a[80],*p;
	printf("����n:");
	scanf("%d", &n);
	printf("����%d������\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	p = a;
	change(p,n);
	printf("��%d�������к�Ϊ��\n",n);
	for (i = 0; i < n; i++)
		printf("%5d", a[i]);
	return 0;
}
void change(int*p,int n)
{
	int i, j, * p1, * p2;
	for (i = 0; i < n / 2; i++)
	{
		p1 = p + i;
		p2 = p +(n-1-i);
		j = *p1;
		*p1 = *p2;
		*p2 = j;
	}

}