#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void put(int a)
{
	int i;
	if ((i = a / 10) != 0)
		put(i);
	putchar(a % 10 + '0');
	putchar(32);

}
int main()
{
	void put(int a);
	int i;
	printf("����һ�����֣�");
	scanf("%d", &i);
	printf("ת��Ϊ�ַ���Ϊ��");
	if (i < 0)
	{
		putchar('-');
		putchar(32);
		i = -i;
	}
    put(i);
	return 0;
}