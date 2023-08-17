#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int max(int x, int y, int z);
	int a, b, c, e;

	scanf("%d,%d,%d", &a, &b, &c);
	e = max(a, b, c);
	printf("a,b,c中最大值=%d\n", e);
	return e;
}
int max(int x, int y, int z)
{
	int max;
	if (x > y)max = x;
	else max = y;
	if (z > max)max = z;
	return max;

}