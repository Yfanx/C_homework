#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	void change(char* a, char* b,int m);
	char a[80], b[80];
	int n, m;
	printf("输入一字符串：");
	gets(a);
	n = strlen(a);
	printf("输入m:");
	scanf("%d", &m);
	while (n < m)
	{
		printf("重新输入m:");
		scanf("%d", &m);
	}
	change(a, b,m-1);
	printf("%s", b);
	return 0;
}
void change(char* a, char* b,int m)
{
	int n;
	for (n = 0; *(a + m + n) != '\0'; n++)
	{
		*b = *(a + m + n);
		b++;
	}
	*b = '\0';


}