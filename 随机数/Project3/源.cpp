#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int n = 0;
	srand((unsigned)time(NULL));
	n = rand()%33+1;
	printf("%d\n", n);
	return 0;
}
