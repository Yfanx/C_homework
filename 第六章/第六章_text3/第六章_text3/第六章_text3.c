#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i,j,n, a[3][3];
	for(i=0;i<3;i++)
		for (j = 0; j < 3; j++)
		{
			printf("�����%d�е�%d�е�����Ϊ��", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	printf("\n");
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
				printf("%5d", a[i][j]);
				if (j == 2)
				{
					printf("\n");
				}
		}
	printf("\n");
	n = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			if (i % 2 == 0&&j%2==0||i%2!=0&&j%2!=0)
			{
				n = n + a[i][j];
			}
		}
	printf("��3*3�����б�Խ������Ϊ%d\n", n);

	return 0;
}