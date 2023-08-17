#include <stdio.h>
#pragma pack(2)
struct A
{
	int a;
	char b;
	short c;
};
#pragma pack()
#pragma pack(4)
struct B
{
	char b;
	int a;
	short c;
};
#pragma pack()
int main()
{
	printf("%d %d", sizeof(A), sizeof(B));
	return 0;
}