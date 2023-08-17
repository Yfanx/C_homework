#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#define N 10
int main() {
	void input(int[], char name[][8]);
	void sort(int[], char name[][8]);
	void search(int, int[], char name[][8]);
	int num[N], number, flag = 1, c;
	char name[N][8];
	input(num, name);
	sort(num, name);
	while (flag == 1) {
		printf("输入一个需要查找的数：");
		scanf("%d", &number);
		search(number, num, name);
		printf("是否继续(Y/N)?");
		getchar();
		c = getchar();
		if (c == 'N' || c == 'n')
			flag = 0;
	}
	return 0;
}
void input(int num[], char name[N][8]) {
	int i;
	for (i = 0; i < N; i++) {
		printf("输入编号:");
		scanf("%d", &num[i]);
		printf("输入名字:");
		getchar();
		gets(name[i]);
	}
}
void sort(int num[], char name[N][8]) {
	int i, j, min, templ;
	char temp2[8];
	for (i = 0; i < N - 1; i++) {
		min = i;
		for (j = i; j < N; j++)
			if (num[min] > num[j])  min = j;
		templ = num[i];
		strcpy(temp2, name[i]);
		num[i] = num[min];
		strcpy(name[i], name[min]);
		num[min] = templ;
		strcpy(name[min], temp2);
	}
	printf("result:");
	for (i = 0; i < N; i++)
		printf("%5d%10s", num[i], name[i]);
}
void search(int n, int num[], char name[N][8]) {
	int top, bott, mid, loca, sign;
	top = 0;
	bott = N - 1;
	loca = 0;
	sign = 1;
	if ((n < num[0]) || (n > num[N - 1]))
		loca = -1;
	while ((sign == 1) && (top <= bott)) {
		mid = (bott + top) / 2;
		if (n == num[mid]) {
			loca = mid;
			printf(" %d号,他的名字是%s.\n", n, name[loca]);
			sign = -1;
		}
		else if (n < num[mid])
			bott = mid - 1;
		else
			top = mid + 1;
	}
	if (sign == 1 || loca == -1)
		printf("%d 查无此人\n", n);
}