#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	void chr(char a[], char b[]);
	char a[200], b[100];
	printf("�����һ���ַ���:");
	gets(a);
	printf("����ڶ����ַ�����");
	gets(b);
	chr(a, b);
	printf("�������ַ�������ǣ�%s\n", a);
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