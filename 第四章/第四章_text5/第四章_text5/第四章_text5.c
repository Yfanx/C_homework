#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int m = 1000, a, b;
	printf("����һ��������");
	scanf("%d", &a);
	while (a > m)
	{
		printf("��������1000�����������룺");
		scanf("%d", &a);
		b = sqrt(a);
	}
	printf("������ƽ����Ϊ��%d\n", b);
	return 0;



}