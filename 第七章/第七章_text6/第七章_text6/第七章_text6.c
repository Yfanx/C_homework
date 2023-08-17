#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	void chr(char a[], char b[]);
	char a[200], b[100];
	printf("输入第一串字符串:");
	gets(a);
	printf("输入第二串字符串：");
	gets(b);
	chr(a, b);
	printf("这两个字符串组合是：%s\n", a);
	return 0;

}
void chr(char a[], char b[])
{
	int i,t;
	t = strlen(a);
	for (i = 0; b[i] != '\0'; i++)
	a[t + i] = b[i];
	a[t + i] = '\0';
}