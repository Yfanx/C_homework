#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a(char);
	int longest(char[]);
	int i;
	char line[100];
	printf("输入一个字符串:\n");
	gets(line);
	printf("最长的字符串为:");
	for (i = longest(line); a(line[i]); i++)
		printf("%c", line[i]);
	printf("\n");
	return 0;
}
int a(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))return(1);
	else
		return(0);
}
int longest(char string[])
{
	int len = 0, i, length = 0, flag = 1, place = 0, point;
	for (i = 0; i <= strlen(string); i++)
		if (a(string[i]))
			if (flag)
			{
				point = i;
				flag = 0;
			}
			else
				len++;

		else
		{
			flag = 1;
			if (len >= length)
			{
				length = len;
				place = point;
				len = 0;
			}
		}
	return(place);
}