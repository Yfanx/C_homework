#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a;
	int b = 0, c = 0, d = 0, e = 0;
	printf("������һ���ַ���\n");
	while ((a = getchar()) != '\n')
	{
		if (a >= 'a' && a <= 'z' || a>='A' && a <= 'Z')
			b++;
		else if (a == ' ')
			c++;
		else if (a >= '0' && a <= '9')
			d++;
		else
			e++;

	}
	printf("���ַ�����\nӢ���ַ��У�%d\n�ո��У�%d\n�����У�%d\n�����ַ��У�%d\n", b, c, d, e);
	return 0;
}