#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float r, h, Cy, Sy, Sq, Vq, Vz, pi;
	pi = 3.1415;

	printf("Բ�İ뾶��Բ���ĸ��Ƿֱ��ǣ�");
	scanf("%f,%f", &r, &h);
	Cy = 2 * pi * r;
	Sy = pi * pow(r, 2);
	Sq = 4 * pi * pow(r, 2);
	Vq = 4 / 3 * pi * pow(r, 3);
	Vz = Sy * h;
	printf("Բ���ܳ��ǣ�    %4.2f\n", Cy);
	printf("Բ������ǣ�    %4.2f\n", Sy);
	printf("Բ��ı�����ǣ�%4.2f\n", Sq);
	printf("Բ�������ǣ�  %4.2f\n", Vq);
	printf("Բ��������ǣ�  %4.2f\n", Vz);

	return 0;
}