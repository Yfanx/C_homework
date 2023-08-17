#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    void change(int* p);
    int a[3][3], * p, i;
    printf("输入数组:\n");
    for (i = 0; i < 3; i++)
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    p = &a[0][0];
    change(p);
    printf("翻转后数组为:\n");
    for (i = 0; i < 3; i++)
        printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
    return 0;
}
void change(int* p)
{
    int i, j, t;
    for (i = 0; i < 3; i++)
        for (j = i; j < 3; j = j++)
        {
            t = *(p + 3 * i + j);
            *(p + 3 * i + j) = *(p + 3 * j + i);
            *(p + 3 * j + i) = t;
        }
}