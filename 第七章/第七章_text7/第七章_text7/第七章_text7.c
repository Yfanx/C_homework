#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	void copy(char a[], char b[]);
	char a[100], b[100];
	printf("�����ַ�����");
	gets(a);
	copy(a, b);
	printf("���ַ����е�Ԫ����ĸΪ��%s\n", b);
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