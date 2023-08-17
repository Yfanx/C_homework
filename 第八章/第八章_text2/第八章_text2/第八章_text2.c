#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	void swap(char*str1, char*str2);
	char c1[20], c2[20], c3[20];
	printf("输入三个字符串：\n");
	gets(c1);
	gets(c2);
	gets(c3);
	if (strcmp(c1, c2) > 0) swap(c1, c2);
	if (strcmp(c1, c3) > 0) swap(c1, c3);
	if (strcmp(c2, c3) > 0)swap(c2, c3);
	printf("这三个字符串从小到大排序为：\n%s\n%s\n%s\n", c1, c2, c3);
	return 0;
}
void swap(char*str1, char*str2)
{
	char p[20];
	strcpy(p, str1); strcpy(str1, str2); strcpy(str2, p);
}