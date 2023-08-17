#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char *a[12]={"January","February","Martch","April","May","June","July","August","Sepetember","October","November","December"};
	int i,flag=1;
	printf("输入月份：");
	scanf("%d", &i);
	while(flag)
		if (i <= 12 && i >= 1)
		{
			printf("所以这个月的英文为：%s", *(a + i-1));
			flag = 0;
		}
		else
		{
			printf("重新输入月份：");
			scanf("%d", &i);
			flag = 1;
		}
	return 0;

	

}
