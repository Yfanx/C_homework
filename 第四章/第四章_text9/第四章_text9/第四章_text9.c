#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num, a, b, c, d, e, place;
	printf("������һ����������0~99999������");
	scanf("%d", &num);
	while (num > 99999||num<0)
	{
		printf("�������ݴ������������룺");
		scanf("%d", &num);
	}
	if (num > 9999)
		place = 5;
	else if (num > 999)
		place = 4;
	else if (num > 99)
		place = 3;
	else if (num > 9)
		place = 2;
	else
		place = 1;
	printf("λ��Ϊ��%d", place);
	printf("ÿλ����Ϊ��");
	a = (int)(num / 10000);
	b = (int)((num - a * 10000) / 1000);
	c = (int)((num - a * 10000 - b * 1000) / 100);
	d = (int)((num - a * 10000 - b * 1000 - c * 100) / 10);
	e = (int)(num - a * 10000 - b * 1000 - c * 100 - d * 10);
	switch (place)
	{
	case 5:printf("%d,%d,%d,%d,%d\n", a, b, c, d, e);
		printf("��������Ϊ��");
		printf("%d%d%d%d%d", e, d, c, b, a);
		break;
	case 4:printf("%d,%d,%d,%d\n", b, c, d, e);
		printf("��������Ϊ��");
		printf("%d%d%d%d", e, d, c, b);
		break;
	case 3:printf("%d,%d,%d\n", c, d, e);
		printf("��������Ϊ��");
		printf("%d%d%d", e, d, c);
		break;
	case 2:printf("%d,%d\n", d, e);
		printf("��������Ϊ��");
		printf("%d%d", e, d);
		break;
	case 1:printf("%d", e);
		printf("��������Ϊ��");
			printf("%d\n", e);
		break;
	}
}