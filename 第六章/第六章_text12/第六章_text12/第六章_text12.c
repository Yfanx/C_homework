#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[100], b[100];
	int i,n;
	printf("��������ģ�\n");
	gets(a);
	printf("��ĵ���Ϊ:%s\n", a);
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			b[i] = 155 - a[i];
		else if (a[i] >= 'a' && a[i] <= 'z')
			b[i] = 219 - a[i];
		else
			b[i] = a[i];
		i++;
		
	}
	printf("\n���ԭ���ǣ�" );
	for (n = 0; n <i; n++)
		putchar(b[n]);
	printf("\n");

	return 0;
}