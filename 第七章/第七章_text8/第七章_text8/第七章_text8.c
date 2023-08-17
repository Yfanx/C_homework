#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	void jkg(char a[]);
	char a[80];
	int i;
	printf("请输入四个数字：");
	scanf("%s", &a);
	jkg(a);
	
	return 0;
}
void jkg(char a[])
{
	int i;
	
	for (i = strlen(a); i>0; i--)
	{
		a[2 * i] = a[i];
		a[2 * i-1] = ' ';
	}
	printf("输出：%s", a);
}