#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[3][80];
	int i, j, yd, yx, s, k, q;
	yd = yx = s = k = q = 0;
	for (i = 0; i < 3; i++)
	{
		printf("�������%d���ַ���\n", i + 1);
		gets(a[i]);
		for (j = 0; j < 80 && a[i][j] != '\0'; j++)
		{
			if (a[i][j] >= 'A' && a[i][j] <= 'Z')
				yd++;
			else if (a[i][j] >= 'a' && a[i][j] <= 'z')
				yx++;
			else if (a[i][j] >= '0' && a[i][j] <= '9')
				s++;
			else if (a[i][j] == ' ')
				k++;
			else
				q++;
		}
	}
	printf("��д��ĸ�У�%d��\n", yd);
	printf("Сд��ĸ�У�%d��\n", yx);
	printf("�����У�%d��\n", s);
	printf("�ո��У�%d��\n", k);
	printf("�����ַ��У�%d��\n", q);
	return 0;

}