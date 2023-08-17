#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>
#include<math.h>

#define Pi 3.14
void fStars(int r, double start)
{
	double delta = 2 * Pi / 5;
	POINT points[5];
	for (int i = 0; i < 5; i++)
	{
		points[i].x = cos(start + i * delta * 2) * r;
		points[i].y = sin(start + i * delta * 2) * r;
	}
	solidpolygon(points, 5);
}

int main(void)
{
	int width = 800;
	int height = width / 3 * 2;
	int grid = width / 2 / 15;

	initgraph(width, height);
	setbkcolor(RED);
	cleardevice();

	setaspectratio(1, -1);
	setfillcolor(YELLOW);
	setpolyfillmode(WINDING);

	setorigin(grid * 5, grid * 5);
	fStars(grid * 3, Pi / 2);

	setorigin(grid * 10, grid * 2);
	double start = atan(3.0 / 5.0) + Pi;
	fStars(grid, start);

	setorigin(grid * 12, grid * 4);
	start = atan(1.0 / 7.0) + Pi;
	fStars(grid, start);

	setorigin(grid * 12, grid * 7);
	start = atan(2.0 / 7.0) + Pi;
	fStars(grid, start);

	setorigin(grid * 10, grid * 9);
	start = atan(4.0 / 5.0) + Pi;
	fStars(grid, start);

	getchar();

	closegraph();

	return 0;
}
