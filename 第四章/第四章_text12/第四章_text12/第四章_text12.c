#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int h = 10;
	double x1 = 2, y1 = 2, x2 = -2, y2 = 2, x3 = -2, y3 = -2, x4 = 2, y4 = -2, x5,y5,d1, d2, d3, d4;
	printf("请输入这个点的坐标：");
	scanf("%lf,%lf", &x5, &y5);
	d1 = sqrt(pow((x5 - x1), 2) + pow((y5 - y1), 2));
	d2 = sqrt(pow((x5 - x2), 2) + pow((y5 - y2), 2));
	d3 = sqrt(pow((x5 - x3), 2) + pow((y5 - y3), 2));
	d4 = sqrt(pow((x5 - x4), 2) + pow((y5 - y4), 2));
	if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1) h = 0;
	printf("此建筑的建筑高度为：%d", h);
	return 0;

}