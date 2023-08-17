#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	void change(int  *p1, int * p2);
	int a, b, c;
	int * p1, * p2, * p3;
	printf("输入三个整数：");
	scanf("%d,%d,%d", &a, &b, &c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	if (a > b) change(p1, p2);
	if (a > c) change(p1, p3);
	if (b > c) change(p2, p3);
	printf("这三个数从小到大为%d,%d,%d", *p1,*p2,*p3);
	return 0;
}
void change(int * p1, int * p2)
{
	int p;
	p = *p1; *p1 = *p2; *p2 = p;
}