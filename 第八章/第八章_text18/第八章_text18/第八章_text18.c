#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char *a[12]={"January","February","Martch","April","May","June","July","August","Sepetember","October","November","December"};
	int i,flag=1;
	printf("�����·ݣ�");
	scanf("%d", &i);
	while(flag)
		if (i <= 12 && i >= 1)
		{
			printf("��������µ�Ӣ��Ϊ��%s", *(a + i-1));
			flag = 0;
		}
		else
		{
			printf("���������·ݣ�");
			scanf("%d", &i);
			flag = 1;
		}
	return 0;

	

}
