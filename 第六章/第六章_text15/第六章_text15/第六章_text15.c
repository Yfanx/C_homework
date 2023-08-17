#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char s1[100], s2[100];
	int i=0;
	printf("ÊäÈë×Ö·û´®s2£º\n");
	gets(s2);
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	printf("×Ö·û´®s1Îª£º\n%s\n", s1);
}