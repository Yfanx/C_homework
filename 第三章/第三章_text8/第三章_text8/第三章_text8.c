#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int c1, c2;
	printf("��ȡ�����ַ�c1,c2:");
	c1=getchar(); 
	c2=getchar();
	printf("��putchar���Ϊ��");
	putchar(c1);
	putchar(c2);
	putchar('\n');
	printf("��printf���Ϊ��%d %d\n", c1, c2);
	return 0;





}