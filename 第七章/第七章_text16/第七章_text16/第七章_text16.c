#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int zh(char a[])
{
	int i, n;
	n = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
			n = n * 16 + a[i] - '0';
		if (a[i] >= 'A' && a[i] <= 'F')
			n = n * 16 + a[i] - 'A'+10;
		if (a[i] >= 'a' && a[i] <= 'f')
			n = n * 16 + a[i] - 'a'+10;
	}
	return(n);

}
int main()
{
	char t[15],c;
	int i, j,flag;
	flag = 1;
	j = 0;
	while (flag)
	{
		printf("输入一个十六进制数：");
		scanf("%s", &t);
		for (i = 0; t[i] != '\0'; i++)
		{
			if (t[i] >= 'A' && t[i] <= 'F' || t[i] >= 'a' && t[i] <= 'f' || t[i] >= '0' && t[i] <= '9')
				flag = 0;
			else
			{
				flag = 1;
				break;
			}
		}
	}
	j = zh(t);
	printf("这个十六进制数为：%d", j);
	return 0;

	

}