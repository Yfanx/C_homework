#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	void copy(char a[], char b[]);
	char a[100], b[100];
	printf("输入字符串：");
	gets(a);
	copy(a, b);
	printf("这字符串中的元音字母为：%s\n", b);
	return 0;

}
void copy(char a[], char b[])
{
	int i, j;
	j = 0;
	for(i=0;a[i]!='\0';i++)
		if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
		{
			b[j] = a[i];
			j++;
		}
	b[j] = '\0';
}