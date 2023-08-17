#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<malloc.h>
#define NUMLN 50
#define NAMELEN 50
struct Student
{
	int score;
	int age;
	char stuNum[NUMLN];
	char stuName[NAMELEN];
	struct Student* next;
};
struct StuList {
	struct Student* HEAD;
	int LENGTH;
};
struct Student* getElement(struct StuList* link, int pos)
{
	if (pos<0 || pos>link->LENGTH)
	{
		return NULL;
	}
	struct Student* p = link->HEAD;
	int i = 0;
	while (i < pos) {
		p = p->next;
		i++;
	}
	return p;
}
void initLink(struct StuList* link)
{
	link->HEAD = NULL;
	link->LENGTH = 0;
}
int insert(struct StuList* link, int pos, struct Student* stu)
{
	if (pos<0 || pos>link->LENGTH)
	{
		return -1;
	}
	if (pos == 0)
	{
		stu->next = link->HEAD;
		link->HEAD = stu;
	}
	else
	{
		struct Student* prev = getElement(link, pos - 1);
		stu->next = prev->next;
		prev->next = stu;
	}
	link->LENGTH++;
	return 1;
}
int showMenu()
{
	printf("\t|==============������һ������ѡ�����µ�һ�����===============|\n");
	printf("\t|\t1.¼��ѧ���ɼ���Ϣ��\t\t\t\t\t|\n");
	printf("\t|\t2.��ȡѧ���ɼ���Ϣ��\t\t\t\t\t|\n");
	printf("\t|\t3.����ѧ���ɼ���Ϣ��\t\t\t\t\t|\n");
	printf("\t|\t4.��ӡѧ���ɼ���Ϣ��\t\t\t\t\t|\n");
	printf("\t|\t-1.�˳�ϵͳ��\t\t\t\t\t|\n");
	printf("\t|===============================================================|\n");
	int result = 0;
	printf("���������������ţ�");
	scanf("%d", &result);
	return result;
}
void showMenuResult(int result)
{
	switch (result)
	{
	case 1:
		printf("��ѡ�������1.¼��ѧ���ɼ���Ϣ��\n");
		break;
	case 2:
		printf("��ѡ�������2.��ȡѧ���ɼ���Ϣ��\n");
		break;
	case 3:
		printf("��ѡ�������3.����ѧ���ɼ���Ϣ��\n");
		break;
	case 4:
		printf("��ѡ�������4.��ӡѧ���ɼ���Ϣ��\n");
		break;
	default:
		printf("�������������ڣ����������롣\n");
		break;
	}
}
void addStuInfo(struct StuList* link)
{
	struct Student* stu = (struct Student*)malloc(sizeof(struct Student));
	stu->next = NULL;
	printf("������ѧ����ѧ�ţ�");
	scanf("%s", &stu->stuNum);
	printf("������ѧ�������䣺");
	scanf("%d", &stu->age);
	printf("������ѧ��������: ");
	scanf("%s", &stu->stuName);
	printf("������ѧ����c���Գɼ�: ");
	scanf("%d", &stu->score);
	insert(link, 0, stu);
}
void saveStuInfo(struct StuList* link)
{
	if (link->LENGTH == 0)
	{
		printf("û��ѧ�����ɼ����ݡ�\n");
		return;
	}
	else
	{
		FILE* fp = fopen("stulnfo.txt", "w");
		if (fp == NULL)
		{
			printf("�޷����ļ�\n");
			return;
		}
		struct Student* cur = link->HEAD;
		do
		{
			fprintf(fp, "%s %d %s %d", cur->stuNum, cur->age, cur->stuName, cur->score);
			cur = cur->next;
		} while (cur != NULL);
		fclose(fp);
	}
}
void readstuInfo(struct StuList* link)
{
	FILE* fp = fopen("stulnfo.txt", "r");
	if (fp == NULL)
	{
		printf("�޷����ļ���\n");
		return;
	}
	char stuNum[NUMLN], stuName[NAMELEN];
	int score, age;
	while (fscanf(fp, "%s%d%s%d", stuNum, &age, stuName, &score) != EOF)
	{
		struct Student* stu = (struct Student*)malloc(sizeof(struct Student));
		strcpy(stu->stuNum, stuNum);
		stu->age = age;
		strcpy(stu->stuName, stuName);
		stu->score = score;
		insert(link, link->LENGTH, stu);
		stu = (struct Student*)malloc(sizeof(struct Student));
	}
	fclose(fp);
}

void showStuScores(struct StuList* link)
{
	struct Student* cur = link->HEAD;
	if (link->LENGTH == 0)
	{
		printf("û�����ݡ�\n");
		return;
	}
	else
	{
		printf("��ǰ����%dλͬѧ����λͬѧ�ĳɼ���Ϣ���£�\n", link->LENGTH);
		do
		{
			printf("ѧ�ţ�%s,���䣺%d��������%s���ɼ���%d\n", cur->stuNum, cur->age, cur->stuName, cur->score);
			cur = cur->next;
		} while (cur != NULL);
	}
}
void freeLink(struct StuList* link)
{
	if (link->LENGTH == 0)
		return;
	struct Student* p = link->HEAD->next;
	while (p)
	{
		link->HEAD->next = p->next;
		free(p);
		p = link->HEAD->next;
	}
	link->LENGTH = 0;
}
int main()
{
	int result = showMenu();
	struct StuList link;
	initLink(&link);
	while (result != -1)
	{
		showMenuResult(result);
		switch (result)
		{
		case 1:
			addStuInfo(&link);
			break;
		case 2:
			freeLink(&link);
			initLink(&link);
			readstuInfo(&link);
			break;
		case 3:
			saveStuInfo(&link);
			break;
		case 4:
			showStuScores(&link);
			break;
		}
		result = showMenu();
	}
	printf("��ѡ��������˳�ϵͳ����ӭ�´�ʹ�ã�");
	freeLink(&link);
	return 0;
}
