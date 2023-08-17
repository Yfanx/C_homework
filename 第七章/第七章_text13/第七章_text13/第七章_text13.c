#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float p(int, int);
	int n, x;
	printf(" ‰»În∫Õx£∫");
	scanf("%d%d", &n, &x);
	printf("%11.6f", p(n, x));
	return 0;
}

float p(int n, int x)
{
	if (n == 0)
		return(1);
	else if (n == 1)
		return(x);
	else
		return(((2 * n - 1) * x - p((n - 1), x) - (n - 1) * p((n - 2), x)) / n);
}