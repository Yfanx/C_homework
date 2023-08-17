#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int m = 1000, a, b;
	printf("输入一个整数：");
	scanf("%d", &a);
	while (a > m)
	{
		printf("此数大于1000，请重新输入：");
		scanf("%d", &a);
		b = sqrt(a);
	}
	printf("此数的平方根为：%d\n", b);
	return 0;



}