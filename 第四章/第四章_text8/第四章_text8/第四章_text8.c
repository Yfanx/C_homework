#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float score;
	char grade;
	printf("������ĳɼ���");
	scanf("%f", &score);
	while (score > 100 || score < 0)
	{
		printf("\n�������ݴ������������룺");
		scanf("%f", &score);

	}
	switch ((int)(score / 10))
	{
	case 9:
	case 10:grade = 'A'; break;
	case 8:grade = 'B'; break;
	case 7:grade = 'C'; break;
	case 6:grade = 'D'; break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:grade = 'E'; break;

	}
	printf("��ķ���Ϊ��%5.1f\n��ĵȼ�Ϊ��%c\n", score, grade);
	return 0;
}