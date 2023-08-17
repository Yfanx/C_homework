#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int c1, c2;
	printf("读取两个字符c1,c2:");
	c1=getchar(); 
	c2=getchar();
	printf("用putchar输出为：");
	putchar(c1);
	putchar(c2);
	putchar('\n');
	printf("用printf输出为：%d %d\n", c1, c2);
	return 0;





}