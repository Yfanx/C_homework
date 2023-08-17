#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char b[80], * p;
	int a[10], * p1, i, j,n, m,x;
	printf("输入字符串：");
	gets(b);
	p = &b[0];
	p1 = &a[0];
	m =n= j=x=0;
	for(i=0;*(p+i)!='\0';i++)
	{
		if (*(p + i) >= '0' && *(p + i) <= '9')
			j++;
		else
		{
			while (j > 0)
			{
				x = *(p + i - j) - 48;
				m = m * 10 + x;
				j--;
			}
			if (m != 0)
			{
				*(p1+n) = m;
				n++;
				m = 0;
			}
		}
	}
	while (j > 0)
	{
		x = *(p + i - j) - 48;
		m = m * 10 + x;
		j--;
	}
	if (m != 0)
	{
		*(p1+n) = m;
		n++;
	}
	printf("输出的数字有%d个\n", n);
	for (i = 0; i < n; i++)
		printf("%d\n", *(p1+i));
	return 0;
}