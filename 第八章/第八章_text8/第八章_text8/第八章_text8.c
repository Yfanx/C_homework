#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int e, b, c, d;

int main()
{
	void count(char*p);
	char a[80];
	e = 0; b = 0; c = 0; d = 0;
	printf("������һ���ַ�����");
	gets(a);
	count(a);
	printf("���ַ�����\nӢ���ַ��У�%d\n�ո��У�%d\n�����У�%d\n�����ַ��У�%d\n", e, c, b, d);
	return 0;
}
void count(char*p)
{
	int i;
	for (i=0; *(p+i) != '\0'; i++)
	{
		if (*(p+i) >= 'a' && *(p+i) <= 'z' || *(p+i) >= 'A' && *(p+i) <= 'Z')
			e++;
		else if (*(p+i) >= '0' && *(p + i) <= '9')
			b++;
		else if (*(p+i) == ' ')
			c++;
		else
			d++;
	}
}