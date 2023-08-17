#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a;
	int b = 0, c = 0, d = 0, e = 0;
	printf("请输入一段字符：\n");
	while ((a = getchar()) != '\n')
	{
		if (a >= 'a' && a <= 'z' || a>='A' && a <= 'Z')
			b++;
		else if (a == ' ')
			c++;
		else if (a >= '0' && a <= '9')
			d++;
		else
			e++;

	}
	printf("此字符串中\n英文字符有：%d\n空格有：%d\n数字有：%d\n其他字符有：%d\n", b, c, d, e);
	return 0;
}