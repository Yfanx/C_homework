#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	void f(char str[]);
	char a[100];
	printf("ÇëÊäÈë×Ö·û´®£º\n");
	gets_s(a);
	f(a);
	printf("·´Ðò×Ö·û´®Îª£º\n%s\n", a);
	return 0;

}
void f(char str[])
{
	int i, j;
	char t;
	for (i = 0, j = strlen(str); i < (strlen(str) / 2); i++, j--)
	{
		t = str[i];
		str[i] = str[j-1];
		str[j-1] = t;
	}
}