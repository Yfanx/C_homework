#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n,a[100],*p,m,i,j,k;
	printf("����n��");
	scanf("%d", &n);
	printf("��%d���ˡ�\n", n);
	p = a;
	for (m=0;m<n;m++)
		*(p+m)= m+1;
	j = i=k=0;
	while (k<n-1)
	{
		if (*(p + j) != 0)
			i++;
		if (i==3)
		{
			*(p + j ) = 0;
			k++;
			i = 0;
		}
		j++;
		if (j == n)
			j = 0;
		
	}
	while (*p == 0)p++;
		 printf("������µ��ǵ�%d��\n", *p);
	return 0;
}