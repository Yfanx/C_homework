#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float r, h, Cy, Sy, Sq, Vq, Vz, pi;
	pi = 3.1415;

	printf("圆的半径和圆柱的高是分别是：");
	scanf("%f,%f", &r, &h);
	Cy = 2 * pi * r;
	Sy = pi * pow(r, 2);
	Sq = 4 * pi * pow(r, 2);
	Vq = 4 / 3 * pi * pow(r, 3);
	Vz = Sy * h;
	printf("圆的周长是：    %4.2f\n", Cy);
	printf("圆的面积是：    %4.2f\n", Sy);
	printf("圆球的表面积是：%4.2f\n", Sq);
	printf("圆球的体积是：  %4.2f\n", Vq);
	printf("圆柱的体积是：  %4.2f\n", Vz);

	return 0;
}