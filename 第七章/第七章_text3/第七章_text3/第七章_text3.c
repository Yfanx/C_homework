#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int ss(int k)
{
    int j;
    for (j = 2; j < k; j++)
    {
        if (k % j == 0)
        {
            return 0;
        }
    }
    if (k == 1)return 0;
    return 1;   
}
int main()
{
    int a, b;
    printf("����һ��������");
    scanf("%d", &a);
    if (ss(a))
        printf("�������������\n");
    else
        printf("���������������\n");
    return 0;
}