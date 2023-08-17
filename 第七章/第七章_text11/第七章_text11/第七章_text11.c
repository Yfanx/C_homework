#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	void px(char a[],int N);
	char a[80];
	int i,N;
	printf("输入一个字符串：");
	gets(a);
	N = strlen(a);
	px(a,N);
	printf("排序后为：");
	for (i = 0; i < N+1; i++)
		printf("%c", a[i]);
	return 0;
}
void px(char a[],int N)
{
	int i,j;
	char t;
	for(i=0; i<N; i++)
		for (j = 0; j < N-i; j++)
		if(a[j]>a[j+1])
		{
			t = a[j];
			a[j] = a[j + 1];
			a[j + 1] = t;

		}

}