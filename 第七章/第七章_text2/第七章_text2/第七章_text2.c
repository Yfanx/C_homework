#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
float x1, x2, d;
int main()
{
	void dayu(float, float);
	void dengyu(float, float);
	void xioayu();
	float a, b, c;
	printf("请输入a，b，c：");
	scanf("%f,%f,%f", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		dayu(a, b);
		printf("两个解分别为：%10.4lf%10.4lf", x1, x2);
	}
	else if (d == 0)
	{
		dengyu(a, b);
		printf("只有一个解为：%10.4lf", x1);
	}
	else
	{
		void xiaoyu();
		printf("无解\n");
	}
	return 0;

}
void dayu(float x, float y)
{
	x1 = (-y + sqrt(d)) / 2*x;
	x2 = (-y - sqrt(d)) / 2 * x;
}
void dengyu(float x, float y)
{
	x1 = -y / 2*x;
}
void xiaoyu()
{
	printf("无解\n");
}