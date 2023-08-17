#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[100], b[50];
	int i, j;
	printf("输入第一段字符：\n");
	gets(a);
	printf("输入第二段字符：\n");
	gets(b);
	i = 0; j = 0;
	while (a[i] != '\0')
		i++;
	while (b[j] != '\0')
		a[i++] = b[j++];
	a[i] = '\0';
	printf("输出字符串为：\n");
	
	for(i=0;a[i]!='\0';i++)
		putchar(a[i]);
	
	return 0;

}