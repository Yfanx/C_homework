#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float r1, r2, r3, r4, r5, p, p1, p2, p3, p4, p5;
	p = 1000;
	r1 = 0.015;
	r2 = 0.021;
	r3 = 0.0275;
	r4 = 0.03;
	r5 = 0.0035;

	p1 = p * (1 + 5 * r4);
	p2 = p * (1 + 2 * r2) * (1 + 3 * r3);
	p3 = p * (1 + 3 * r3) * (1 + 2 * r2);
	p4 = p * pow(1 + r1, 5);
	p5 = p * pow(1 + r5 / 4, 4 * 5);

	printf("p1=%.2f\np2=%.2f\np3=%.2f\np4=%.2f\np5=%.2f\n", p1, p2, p3, p4, p5);
	return 0;




}