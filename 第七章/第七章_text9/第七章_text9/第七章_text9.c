#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int e, b, c, d;

int main()
{
	void count(char a[]);
	char a[80];
	e = 0; b = 0; c = 0; d = 0;
	printf("������һ���ַ�����");
	gets(a);
	count(a);
	printf("���ַ�����\nӢ���ַ��У�%d\n�ո��У�%d\n�����У�%d\n�����ַ��У�%d\n", e, c, b, d);
	return 0;
}
void count(char a[])
{
	int i;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
			e++;
		else if (a[i] >= '0' && a[i] <= '9')
			b++;
		else if (a[i] == ' ')
			c++;
		else
			d++;
	}
}