#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int year(int i)
{
	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		return(1);
	else
		return(0);

}
int day(int j)
{
	int s,y=0;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (s = 0; s < j-1; s++)
		y = y + a[s];
	return(y);
}
int main()
{
	int su,yun,baby,i,l;
	printf("请输入年份（x.y.z）:");
	scanf("%d.%d.%d", &su, &yun, &baby);
	i = day(yun);
	l = year(su);

	if (l)
	{
		i = i + 1;
	}
	i = i + baby;
	printf("这是该年的第%d天\n", i);
	return 0;

}