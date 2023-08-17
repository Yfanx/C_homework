#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	void sort(char* []);
	int i;
	char* p[10], str[10][20];
	for (i = 0; i < 10; i++)
		p[i] = str[i];
	printf("输入十个字符串：\n");
	for (i = 0; i < 10; i++)
		scanf("%s", p[i]);
	sort(p);
	printf("现在的字符串为：\n");
	for (i = 0; i < 10; i++)
		printf("%s\n", p[i]);
	return 0;
}
void sort(char* s[])
{
	int i, j;
	char* temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if (strcmp(*(s + j), *(s + j + i)) > 0)
			{
				temp = *(s + j);
				*(s + j) = *(s + j + 1);
				*(s + j + 1) = temp;
			}
}