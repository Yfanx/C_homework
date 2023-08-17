#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[100], b[100];
	int i,n;
	printf("请输入电文：\n");
	gets(a);
	printf("你的电文为:%s\n", a);
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			b[i] = 155 - a[i];
		else if (a[i] >= 'a' && a[i] <= 'z')
			b[i] = 219 - a[i];
		else
			b[i] = a[i];
		i++;
		
	}
	printf("\n你的原文是：" );
	for (n = 0; n <i; n++)
		putchar(b[n]);
	printf("\n");

	return 0;
}