#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int e, b, c, d;

int main()
{
	void count(char*p);
	char a[80];
	e = 0; b = 0; c = 0; d = 0;
	printf("请输入一段字符串：");
	gets(a);
	count(a);
	printf("此字符串中\n英文字符有：%d\n空格有：%d\n数字有：%d\n其他字符有：%d\n", e, c, b, d);
	return 0;
}
void count(char*p)
{
	int i;
	for (i=0; *(p+i) != '\0'; i++)
	{
		if (*(p+i) >= 'a' && *(p+i) <= 'z' || *(p+i) >= 'A' && *(p+i) <= 'Z')
			e++;
		else if (*(p+i) >= '0' && *(p + i) <= '9')
			b++;
		else if (*(p+i) == ' ')
			c++;
		else
			d++;
	}
}