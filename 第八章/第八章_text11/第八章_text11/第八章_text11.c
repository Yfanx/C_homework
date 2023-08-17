#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	void sort(char(*p)[6]);
	int i;
	char str[10][6];
	char(*p)[6];
	printf("输入十个字符串：\n");
	for (i = 0; i < 10; i++)
		scanf("%s", p[i]);
	p = str;
	sort(p);
	printf("现在的字符串为：\n");
	for (i = 0; i < 10; i++)
		printf("%s\n", p[i]);
	return 0;
}
void sort(char(*s)[6])
{
	int i, j;
	char temp[6], * t = temp;
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9 - i; j++)
			if (strcmp(s[j],s[j+1])>0)
			{
				strcpy(t, s[j]);
				strcpy(s[j], s[j + 1]);
				strcpy(s[j + 1], t);
			}
}