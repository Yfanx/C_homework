#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main(void)
{
	float x, y, a;
	for (y = 1.5; y > -1.5; y -= 0.1)
	{
		for (x = -1.5; x < 1.5; x += 0.05)
		{
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y*y<= 0.0 ? '*':' ');

		}
		system("color 0c");
		putchar('\n');
	}
	printf("����Ŷ���ҵı���");
		printf("\n\n\n");
		return 0;
}